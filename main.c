/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghop <seonghop@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:26:52 by seonghop          #+#    #+#             */
/*   Updated: 2024/08/15 11:36:05 by jaehukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/ioctl.h>

void	rush(int x, int y, int n);

int	ft_atoi(char *str)
{
	int			i;
	long long	result;

	i = 0;
	result = 0;
	if (str[0] == '-')
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (-2);
		if (result > 2147483647 / 10 || \
			(result == 2147483647 / 10 && (str[i] - '0') > 2147483647 % 10))
			return (-3);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int) result);
}

void	ft_error(int x, int y)
{
	if (x == 0 || y == 0)
		write(2, "rush00: Zero\n", 13);
	if (x == -1 || y == -1)
		write(2, "rush00: Minus Number\n", 14);
	if (x == -2 || y == -2)
		write(2, "rush00: Wrong Char\n", 19);
	if (x == -3 || y == -3)
		write(2, "rush00: Number Exceed\n", 22);
	return ;
}

void	ft_get_term_size(int *x, int *y)
{
	struct winsize	w;

	system("clear");
	ioctl(0, TIOCGWINSZ, &w);
	*x = w.ws_col;
	*y = w.ws_row - 1;
}

int	ft_chk_valid_arguments(int *x, int *y, int *n, char *argv[])
{
	int	cnt;

	cnt = 0;
	while (argv[cnt])
		cnt++;
	if (cnt < 2)
		ft_get_term_size(x, y);
	if (cnt >= 3)
	{
		*x = ft_atoi(argv[1]);
		*y = ft_atoi(argv[2]);
	}
	if (cnt == 4)
		*n = ft_atoi(argv[3]);
	else
		*n = 0;
	if (cnt == 2 || cnt > 4)
	{
		x = 0;
		y = 0;
		return (-1);
	}
	else
		return (0);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	n;

	if (ft_chk_valid_arguments(&x, &y, &n, argv) || x < 1 || y < 1)
	{
		ft_error(x, y);
		return (-1);
	}
	if (argc == 0)
		return (-1);
	rush(x, y, n);
	return (0);
}
