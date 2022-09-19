/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:43:52 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/19 14:39:40 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	len(char *tab)
{
	int	count;

	count = 0;
	while (tab[count] != 0)
		count++;
	return (count + 1);
}

int ft_ultimate_range(int **range, int min, int max)
{
	char	*tab;
	int		i;

	i = 0;
	*range = tab;
	if (min >= max)
		return (NULL);
	else
	{
		tab = malloc (sizeof(tab) * (max - min));
		while (min + i < max)
		{
			tab[i] = min + i;
			i++;
		}
		return (len(tab));
	}
}
