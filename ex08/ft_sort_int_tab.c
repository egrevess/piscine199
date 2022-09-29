/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:44:46 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/24 14:27:27 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int n, int a, int *tab)
{
	int	tab_temp;

	tab_temp = tab[n];
	tab[n] = tab[a];
	tab[a] = tab_temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	n = 0;
	while (n < size - 1)
	{
		i = n + 1;
		while (i < size)
		{
			if (tab[i] < tab[n])
			{
				ft_swap(n, i, tab);
			}
			i++;
		}
		n++;
	}
}
