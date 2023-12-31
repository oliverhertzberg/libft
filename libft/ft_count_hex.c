/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:44:39 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/12/18 15:04:49 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_hex(unsigned long int num)
{
	int	count;

	count = 0;
	if (num == 0)
		count++;
	while (num != 0)
	{
		num /= 16;
		count++;
	}
	return (count);
}
