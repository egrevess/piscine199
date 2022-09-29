/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:06:05 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/27 13:19:34 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		range = malloc (sizeof(*range) * (max - min));
		if (!range)
			return (0);
		while (min + i < max)
		{
			range[i] = min + i;
			i++;
		}
		return (range);
	}
}
