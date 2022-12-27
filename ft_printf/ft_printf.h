/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:29:17 by souhanat          #+#    #+#             */
/*   Updated: 2022/10/25 23:44:07 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
int		ft_format(va_list ap, char c);
int		ft_printaddr(unsigned long int n, char *bs);
int		ft_hexadecimalmaj(unsigned int n, char *base);
int		ft_putsign(unsigned int n);

#endif