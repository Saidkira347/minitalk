/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:15:53 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/25 23:35:54 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		i += ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		i += ft_putnbr(va_arg(ap, int));
	else if (c == 'p')
	{
		i += ft_putstr("0x");
		i += ft_printaddr(va_arg(ap, unsigned long int), "0123456789abcdef");
	}
	else if (c == 'u')
		i += ft_putsign(va_arg(ap, unsigned int));
	else if (c == 'x')
		i += ft_hexadecimalmaj(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (c == '%')
		i += ft_putchar('%');
	else if (c == 'X')
		i += ft_hexadecimalmaj(va_arg(ap, unsigned int), "0123456789ABCDEF");
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] != '%')
			count += ft_putchar(format[i]);
		else
		{
			i++;
			count += ft_format(ap, format[i]);
		}
		i++;
	}
	va_end(ap);
	return (count);
}
