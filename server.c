/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 03:01:44 by aalatzas          #+#    #+#             */
/*   Updated: 2024/01/29 09:47:14 by aalatzas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	train(void)
{
	write(1, "\033[93m  __  __      _               "
		"  _       _                  _       _     \033[0m\n", 84);
	write(1, "\033[93m |  \\/  |    (_)     _ _     "
		"  (_)     | |_     __ _      | |     | |__\033[0m\n", 82);
	write(1, "\033[93m | |\\/| |    | |    | ' \\   "
		"   | |     |  _|   / _` |     | |     | / /  \033[0m\n", 84);
	write(1, "\033[93m |_|__|_|   _|_|_   |_||_|    "
		"_|_|_    _\\__|   \\__,_|    _|_|_    |_\\_\\\033[0m\n", 82);
	write(1, "\033[96m_|777777| _|77777| _|77777| _|"
		"77777| _|77777| _|77777| _|77777| _|77777|\033[0m\n", 83);
	write(1, "\033[96m  -0-0-     -0-0-    -0-0-    "
		"-0-0-    -0-0-    -0-0-    -0-0-    -0-0-\033[0m\n", 82);
	write(1, "\033[93m         ___\033[0m\n", 23);
	write(1, "\033[93m        / __|     ___       _ "
		"_    __ __     ___       _ _\033[0m\n", 69);
	write(1, "\033[93m        \\__ \\    / -_)     |"
		" '_|   \\ V /    / -_)     | '_|\033[0m\n", 70);
	write(1, "\033[93m        |___/    \\___|    _|_"
		"|_    _\\_/_    \\___|    _|_|_          \033[0m\n", 79);
	write(1, "\033[96m      _|77777| _|77777| _|7777"
		"7| _|77777| _|77777| _|77777|\033[0m\n", 70);
	write(1, "\033[96m        -0-0-    -0-0-    -0-0"
		"-    -0-0-    -0-0-    -0-0-           \033[0m\n", 80);
}

static void	print_pid(void)
{
	int	i;

	i = getpid();
	ft_printf("\033[92m------------------------------"
		"------------------------------------------\033[0m\n");
	ft_printf("\033[92m|##########           \033[0m "
		"\033[91m      pid : %d   \033[0m \033[92m  \
		     ##########|\033[0m\n", i);
	ft_printf("\033[92m------------------------------"
		"------------------------------------------\033[0m\n");
}

void	signal_handler(int signum, siginfo_t *info, void *context)
{
	int			client_pid;
	char		received_bits[9];
	static int	bit_count;
	char		converted_char;

	(void)context;
	client_pid = 0;
	if (client_pid == 0)
		client_pid = info->si_pid;
	received_bits[bit_count] = '\0';
	if (signum == SIGUSR1)
		received_bits[bit_count] = '1';
	else
		received_bits[bit_count] = '0';
	bit_count++;
	if (bit_count == 8)
	{
		received_bits[bit_count] = '\0';
		converted_char = ft_bits_to_char(received_bits);
		if (converted_char == '\0')
			kill(client_pid, SIGUSR2);
		else
			write(1, &converted_char, 1);
		bit_count = 0;
	}
}

int	main(void)
{
	int					server_pid;
	struct sigaction	sa;

	ft_memset(&sa, 0, sizeof(sa));
	server_pid = getpid();
	train();
	print_pid();
	sa.sa_sigaction = signal_handler;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
