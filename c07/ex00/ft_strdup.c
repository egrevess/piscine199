/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:31:26 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/19 10:59:56 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *src)
{
	int	count;

	count = 0;
	while (src[count] != 0)
		count++;
	return (count + 1);
}

char *ft_strdup(char *src)
{
	char	*new_src;
	int		i;
	
	i = 0;
	new_src = malloc (sizeof(new_src) * len(src));
	if (src != NULL)
	{
		while (i < len(src))
		{
			new_src[i] = src[i];
			i++;
		}
		return (new_src);
	}
	else 
		return (NULL);
}
