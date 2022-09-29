/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:00:37 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/29 14:50:21 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int len(char *av)
{
	int i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

int	ft_check_av1(char *av1, int i)
{
	int index;
	int check;

	check = 0;
	index = i - 1;
	while (index >= 0)
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

int ft_check_av_all(char *av1, char *av2, int i,int size)
{
	int index;
	int check;

	check = 0;
	index = size;
	while (index >= 0)
	{
		if (av2[i] == av1[index])
		{
			check = 1;
			break;
		}
		index--;
	}
	if (check == 0)
		check = ft_check_av1(av2, i);
	return (check);
}

void	ft_union(char *av1, char *av2)
{
	int i;
	int size;

	i = 0;
	size = len(av1) - 1;
	while (av1[i])
	{
		if (i == 0)
			write (1, &av1[0], 1);
		else if (ft_check_av1(av1, i) == 0)
			write(1, &av1[i], 1);
		i++;
	}
	i = 0;
	while (av2[i])
	{
		if (ft_check_av_all(av1,av2,i,size) == 0)
			write (1, &av2[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1],av[2]);
	write (1, "\n", 1);
	return (0);
}
