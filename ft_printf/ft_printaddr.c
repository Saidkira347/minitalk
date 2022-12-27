/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:26:17 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/25 23:32:32 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printaddr(unsigned long int n, char *bs)
{
	int	count;

	count = 0;
	if (n < 16)
		count += ft_putchar(bs[n]);
	if (n >= 16)
	{
		count += ft_printaddr(n / 16, bs);
		count += ft_printaddr(n % 16, bs);
	}		
	return (count);
}
