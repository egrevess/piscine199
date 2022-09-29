/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:03:02 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/28 16:26:57 by egrevess         ###   ########.fr       */
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
		if ((av[i] >= 'a' && av[i] <= 'm') || (av[i] >= 'A' && av[i] <= 'M'))
		{
			c = av[i] + 13;
			ft_putchar(c);
		}
		else if ((av[i] > 'm' && av[i] <= 'z') || (av[i] > 'M' && av[i] <= 'Z'))
		{
			c = av[i] - 13;
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
