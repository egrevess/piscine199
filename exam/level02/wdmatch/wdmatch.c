/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:59:36 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/29 15:25:18 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *av1)
{
	int i;

	i = 0;
	while(av1[i])
	{
		write(1, &av1[i], 1);
		i++;
	}
}

int	len(char *av1)
{
	int i;

	i = 0;
	while(av1[i])
		i++;
	return (i);
}

void	ft_wdmatch(char *av1, char *av2)
{
	int a;
	int b;
	int count;
	int check;

	a = 0;
	b = 0;
	check = 0;
	count = 0;
	while (av1[a])
	{
		check = 0;
		while (av2[b] && check == 0)
		{
			if (av1[a] == av2[b])
			{
				count++;
				check = 1;
			}	
			b++;
		}
		a++;
	}
	if (count == len(av1))
		ft_putstr(av1);
}

int main(int ac,char **av)
{
	if (ac == 3)
		ft_wdmatch(av[1],av[2]);
	write (1, "\n", 1);
	return (0);
}
