/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:34:32 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/11 13:57:57 by lbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);
void	print_top(int x, int y);
void	print_bottom(int x, int y);
void	print_mid(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Negative or null number entered", 31);
	}
	else
	{
		print_top(x, y);
		print_mid(x, y);
		print_bottom(x, y);
	}
	ft_putchar('\n');
}

void	print_top(int x, int y)
{
	int	ctr;

	ft_putchar('A');
	ctr = 0;
	while (ctr < x -2)
	{
		ft_putchar('B');
		ctr++;
	}
	if (x -1 > 0)
	{
		ft_putchar('C');
	}
	if (y > 1)
	{
		ft_putchar('\n');
	}
}

void	print_mid(int x, int y)
{
	int	ctrh;
	int	ctrl;

	ctrh = 0;
	while (ctrh < y - 2)
	{
		ft_putchar('B');
		ctrl = 0;
		while (ctrl < x -2)
		{
			ft_putchar(' ');
			ctrl++;
		}
		if (x > 2)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		ctrh++;
	}
}

void	print_bottom(int x, int y)
{
	int	ctr;

	if (y > 1)
	{
		ft_putchar('C');
		ctr = 0;
		while (ctr < x -2)
		{
			ft_putchar('B');
			ctr++;
		}
		if (x -1 > 0)
		{
			ft_putchar('A');
		}
	}
}
