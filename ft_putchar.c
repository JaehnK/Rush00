/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghop <seonghop@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:45:24 by seonghop          #+#    #+#             */
/*   Updated: 2023/12/03 00:11:03 by seonghop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_row(char left, char right, char middle, int x)
{
	int	n;

	n = 0;
	while (n++ < x)
	{
		if (n == 1)
			ft_putchar(left);
		else if (n == x)
			ft_putchar(right);
		else
			ft_putchar(middle);
	}
	ft_putchar('\n');
}

void	rush(int x, int y, int n)
{
	if (n == 0)
		rush00(x, y);
	else if (n == 1)
		rush01(x, y);
	else if (n == 2)
		rush02(x, y);
	else if (n == 3)
		rush03(x, y);
	else if (n == 4)
		rush04(x, y);
	else
		write(2, "rush 00: Wrong Argument\n", 25);
}
