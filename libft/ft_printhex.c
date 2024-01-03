/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:04:13 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/12/18 15:06:27 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_puthex(unsigned long int num, char c)
{
	if (num > 15)
		if (ft_puthex(num / 16, c) == -1 || ft_puthex(num % 16, c) == -1)
			return (-1);
	if (num <= 9)
	{
		num = num + '0';
		if (write(1, &num, 1) == -1)
			return (-1);
	}
	else if (num <= 15)
	{
		if (c == 'x' || c == 'p')
		{
			if (write(1, &HEX_LOWER[num], 1) == -1)
				return (-1);
		}
		else
		{
			if (write(1, &HEX_UPPER[num], 1) == -1)
				return (-1);
		}
	}
	return (0);
}

int	ft_printhex(unsigned long int num, char c)
{
	if (ft_puthex(num, c) == -1)
		return (-1);
	return (ft_count_hex(num));
}
