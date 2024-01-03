/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:52:35 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/12/18 15:05:49 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	printstuff(const char *s, va_list *ap)
{
	char	c;

	s++;
	if (*s == '%')
		return (write(1, s, 1));
	else if (*s == 'c')
	{
		c = va_arg(*ap, int);
		return (write(1, &c, 1));
	}
	else if (*s == 's')
		return (ft_printstr(va_arg(*ap, char *)));
	else if (*s == 'p')
		return (ft_printptr(va_arg(*ap, unsigned long int)));
	else if (*s == 'd' || *s == 'i')
		return (ft_printint((va_arg(*ap, int))));
	else if (*s == 'u')
		return (ft_printuint(va_arg(*ap, unsigned int)));
	else if (*s == 'x' || *s == 'X')
		return (ft_printhex(va_arg(*ap, unsigned int), *s));
	return (write(1, s, 1));
}

int	ft_printf(const	char *s, ...)
{
	va_list	ap;
	int		char_count;
	int		char_sum;
	int		i;

	i = 0;
	char_sum = 0;
	va_start(ap, s);
	while (s[i])
	{
		char_count = 0;
		if (s[i] != '%')
			char_count += write(1, &s[i], 1);
		else
			char_count += printstuff(&s[i++], &ap);
		if (char_count < 0)
		{
			va_end(ap);
			return (-1);
		}
		char_sum += char_count;
		i++;
	}
	va_end(ap);
	return (char_sum);
}
