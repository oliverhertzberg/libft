/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:01:21 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/12/18 15:06:53 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnum(int num)
{
	if (num < 0)
	{
		if (num == -2147483648)
		{
			if (write (1, "-2147483648", 11) == -1)
				return (-1);
			return (0);
		}
		num = -num;
		if (write(1, "-", 1) == -1)
			return (-1);
	}
	if (num > 9)
	{
		if (ft_putnum(num / 10) == -1 || ft_putnum(num % 10) == -1)
			return (-1);
	}
	else
	{
		num = num + '0';
		if (write(1, &num, 1) == -1)
			return (-1);
	}
	return (0);
}

int	ft_printint(int num)
{
	if (ft_putnum(num) == -1)
		return (-1);
	return (ft_count_num(num));
}
