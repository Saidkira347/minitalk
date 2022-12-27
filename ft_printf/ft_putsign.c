/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:10:44 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/25 15:42:47 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putsign(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_putsign(n / 10);
		count += ft_putsign(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}
