/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:08:09 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/29 12:41:57 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_check(char *av1,int i)
{
	int index;
	int check;

	index = i - 1;
	check = 0;
	while(index >= 0)
	{
		if (av1[i] == av1[index])
		{
			check = 1;
			break;
		}
		index--;
	}
	return (check);
}


void	ft_inter(char *av1, char *av2)
{
	int i;
	int a;
	int check; 

	i = 0;
	a = 0;
	while (av1[i])
	{
		a = 0;
		check = 0;
		while (av2[a] && check == 0)
		{
			if(av1[i] == av2[a] && ft_check(av1,i) == 0)
			{
				write(1, &av1[i], 1);
				check = 1;
			}
			a++;;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1],av[2]);
	write (1, "\n", 1);
	return (0);
}
