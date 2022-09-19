/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:06:05 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/19 13:41:18 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	char	*range;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		range = malloc (sizeof(range) * (max - min));
		while (min + i < max)
		{
			range[i] = min + i;
			i++;
		}
		return (range);
	}
}
