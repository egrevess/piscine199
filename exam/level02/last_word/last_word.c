/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:34:15 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/29 13:53:03 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(int start, int end, char *av)
{
	while(start <= end)
	{
		write(1, &av[start], 1);
		start++;
	}
}

int	len(char *av)
{
	int count;

	count = 0;
	while (av[count])
		count++;
	return (count);
}

void	ft_last_word(char *av)
{
	int end;
	int size;
	int start;

	end = 0;
	start = 0;
	size = len(av) - 1;
	while (size >= 0 && (av[size] == ' ' || av[size] == '\t')) 
		size--;
	end = size;
	while (size >= 0 && av[size] > 32 && av[size] < 127)
		size--;
	start = size + 1;
	ft_putstr(start, end, av);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_last_word(av[1]);
	write (1, "\n", 1);
	return (0);
}
