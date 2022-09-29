/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:06:12 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/29 16:48:26 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	len(int start, int end)
{
	int size;

	size = 0;
	if (start <= end)
		size = end - start;
	else 
		size = start - end;
	return (size);
}

int *ft_rrange(int start, int end)
{
	int	*tab;
	int size;
	int i;

	size = len(start,end);
	i = 0;
	tab = malloc(sizeof(*tab) * (size + 1));
	if (!tab)
		return (0);
	if (end >= start)
	{
		while (end - i >= start)
		{
			tab[i] = end - i;
			i++;
		}
	}
	else if (end < start)
	{
		while (end + i <= start)
		{
			tab[i] = end + i;
			i++;
		}
	}
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
	return (tab);
}

int	main()
{
	ft_rrange(-1,2);
	return (0);
}
