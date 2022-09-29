/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:58:26 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/28 18:11:58 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_replace(char *av1, char *av2, char *av3)
{
	int	i;
	
	i = 0;
	while (av1[i])
	{
		if (av1[i] == av2[0])
			write(1, &av3[0], 1);
		else 
			write(1, &av1[i], 1);
		i++;
	}
}

int	main(int ac , char **av)
{
	if (ac == 4 && len(av[2]) == 1 && len(av[3]) == 1)
		ft_replace(av[1],av[2],av[3]);
	write (1, "\n", 1);
	return (0);
}
