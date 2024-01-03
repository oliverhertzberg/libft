/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:32:14 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/12/18 15:07:05 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printptr(unsigned long int num)
{
	if (write(1, "0x", 2) == -1)
		return (-1);
	if (ft_printhex(num, 'p') == -1)
		return (-1);
	return (ft_count_hex(num) + 2);
}
