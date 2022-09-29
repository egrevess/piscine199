/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:43:52 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/27 13:20:34 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc (sizeof(tab) * (max - min));
	if (!tab)
		return (-1);
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (max - min);
}
