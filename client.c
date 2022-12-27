/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 02:52:03 by souhanat          #+#    #+#             */
/*   Updated: 2022/12/23 19:11:30 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Minitalk.h"

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

void	send_b(int pid, unsigned char c)
{
	int i;
	
	i = 0;
	while (i++ != 8)
	{
		if(c & 0x01)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		c = c >> 1;
		usleep(50);
	}
}

void send_str(unsigned char *str, int pid)
{
	while (*str)
	{
		send_b(pid, *str);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		send_str((unsigned char *)av[2] , ft_atoi(av[1]));
	else
		ft_putstr("enter just two arguments");
	return (0);
}
