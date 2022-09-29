/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:29:46 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/28 16:40:16 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	av)
{
	write (1, &av, 1);
}

void	ft_rot(char *av)
{
	int	i;
	char c;

	i = 0;
	c = 0;
	while (av[i])
	{
		c = 0;
		if ((av[i] >= 'a' && av[i] < 'z') || (av[i] >= 'A' && av[i] < 'Z'))
		{
			c = av[i] + 1;
			ft_putchar(c);
		}
		else if (av[i] == 'z')
		{
			c = 'a';
		 	ft_putchar(c);
		}
		else if (av[i] == 'Z')
		{
			c = 'A';
			ft_putchar(c);
		}
		else
			ft_putchar(av[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_rot(av[1]);
	write (1, "\n", 1);
	return (0);
}
