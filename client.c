/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 03:01:47 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/29 09:57:01 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bonus(int signum)
{
	if (signum == SIGUSR2)
	{
		ft_printf("\033[32mSignal received by server. \u2713\033[0m\n");
		exit(EXIT_SUCCESS);
	}
	else
	{
		ft_printf("\033[31mSignal lost. \u2717\033[0m\n");
		exit(EXIT_FAILURE);
	}
}

void	send_zero_bit(int server_pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		kill(server_pid, SIGUSR2);
		usleep(60);
		bit++;
	}
}

void	send_signal(char **argv, int server_pid)
{
	char	bit_string[9];
	char	a;
	int		bit;
	int		i;

	i = 0;
	while (argv[2][i] != '\0')
	{
		a = argv[2][i];
		ft_char_to_bits(a, bit_string);
		bit = 0;
		while (bit < 8)
		{
			if (bit_string[bit] == '1')
				kill(server_pid, SIGUSR1);
			else
				kill(server_pid, SIGUSR2);
			usleep(60);
			bit++;
		}
		i++;
	}
	send_zero_bit(server_pid);
}

int	main(int argc, char **argv)
{
	int					server_pid;
	struct sigaction	sa;

	server_pid = atoi(argv[1]);
	ft_memset(&sa, 0, sizeof(sa));
	sa.sa_handler = bonus;
	sigaction(SIGUSR2, &sa, NULL);
	if (argc != 3)
	{
		ft_printf("\n\033[91mError: Call the Program like this:\n");
		ft_printf("\033[92m\n");
		ft_printf("###################################\n");
		ft_printf("| \033[91m./client server_pid \"character\"\033[92m |\n");
		ft_printf("###################################\033[0m\n");
		return (0);
	}
	send_signal(argv, server_pid);
	while (1)
		pause();
	return (0);
}
