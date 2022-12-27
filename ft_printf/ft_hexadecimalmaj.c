/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimalmaj.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:20:57 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/25 23:22:12 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimalmaj(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_hexadecimalmaj(n / 16, base);
		count += ft_hexadecimalmaj(n % 16, base);
	}
	else
		count += ft_putchar(base[n]);
	return (count);
}
