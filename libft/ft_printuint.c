/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:49:48 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/12/18 15:07:37 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putunum(unsigned int num)
{
	if (num > 9)
	{
		if (ft_putunum(num / 10) == -1 || ft_putunum(num % 10) == -1)
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

int	ft_printuint(unsigned int num)
{
	if (ft_putunum(num) == -1)
		return (-1);
	return (ft_count_num(num));
}
