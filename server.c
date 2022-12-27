/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 02:17:01 by souhanat          #+#    #+#             */
/*   Updated: 2022/12/23 18:57:49 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"

int	bit;

void msg_print(int n)
{
	static	char c;
	
	if(n == SIGUSR2)
		c = (1 << bit) | c;
	bit++;
	if (bit == 8)
	{
		ft_putchar(c);
		c = 0;
		bit = 0;
	}
	return;
}

int main(void)
{
	int pid;
	
	pid = getpid();
	bit = 0;
	ft_putnbr(pid);
	ft_putchar('\n');
	signal(SIGUSR1, msg_print);
	signal(SIGUSR2, msg_print);
	while(1)
		pause();
	return 0;
}