/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:20:05 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/28 11:37:17 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char av)
{
	write(1, &av, 1);
}

void	ft_fist_word(char *av)
{
	int	i;

	i = 0;
	while (av[i] == ' ' || av[i] == '	')
		i++;
	while (av[i] != ' ' &&  av[i] != '	' && av[i] != '\0')
	{
		ft_putstr(av[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_fist_word(av[1]);
	write (1, "\n", 1);
	return (0);
}
