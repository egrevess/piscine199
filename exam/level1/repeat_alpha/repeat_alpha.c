/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:10:28 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/28 14:58:29 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char av, int	a)
{
	while(a > 0)
	{
		write (1, &av, 1);
		a--;
	}
}

void	ft_reapeat(char *av)
{
	int	i;
	int a;

	i = 0;
	while (av[i])
	{
		a = 1;
		if (av[i] >= 'a' && av[i] <= 'z')
			a = av[i] - 96;
		else if (av[i] >= 'A' && av[i] <= 'Z')
			a = av[i] - 64;
		ft_putchar(av[i], a);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_reapeat(av[1]); 
	write (1, "\n", 1);
	return (0);
}
