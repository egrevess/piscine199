/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:36:41 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/28 14:43:00 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	len(char *av)
{
	int size;

	size = 0;
	while (av[size])
		size++;
	return (size);
}

void	ft_rev_print(char *av)
{
	int	size;

	size = len(av);
	while (size >= 0)
	{
		write (1, &av[size], 1);
		size--;
	}
}

int	main(int ac , char **av)
{
	if (ac == 2)
		ft_rev_print(av[1]);
	write (1, "\n", 1);
	return (0);
}
