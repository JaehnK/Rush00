/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghop <seonghop@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:20:30 by seonghop          #+#    #+#             */
/*   Updated: 2024/08/15 11:34:43 by jaehukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_row(char left, char right, char middle, int x);

void	rush00(int x, int y)
{
	int	row;

	row = 0;
	while (row++ < y)
	{
		if (row == 1 || row == y)
			print_row('o', 'o', '-', x);
		else
			print_row('|', '|', ' ', x);
	}
}

void	rush01(int x, int y)
{
	int	row;

	row = 0;
	while (row++ < y)
	{
		if (row == 1)
			print_row('/', '\\', '*', x);
		else if (row == y)
			print_row('\\', '/', '*', x);
		else
			print_row('|', '|', ' ', x);
	}
}

void	rush02(int x, int y)
{
	int	row;

	row = 0;
	while (row++ < y)
	{
		if (row == 1)
			print_row('A', 'A', 'B', x);
		else if (row == y)
			print_row('C', 'C', 'B', x);
		else
			print_row('B', 'B', ' ', x);
	}
}

void	rush03(int x, int y)
{
	int	row;

	row = 0;
	while (row++ < y)
	{
		if (row == 1)
			print_row('A', 'C', 'B', x);
		else if (row == y)
			print_row('A', 'C', 'B', x);
		else
			print_row('B', 'B', ' ', x);
	}
}

void	rush04(int x, int y)
{
	int	row;

	row = 0;
	while (row++ < y)
	{
		if (row == 1)
			print_row('A', 'C', 'B', x);
		else if (row == y)
			print_row('C', 'A', 'B', x);
		else
			print_row('B', 'B', ' ', x);
	}
}
