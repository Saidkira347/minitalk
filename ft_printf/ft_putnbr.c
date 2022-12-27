/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:50:30 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/25 23:45:47 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_putchar(45);
		count += ft_putchar(50);
		count += ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		count += ft_putchar(45);
		n = -n;
		count += ft_putnbr(n);
	}
	else if (n > 9)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else
		count += ft_putchar(n + 48);
	return (count);
}
