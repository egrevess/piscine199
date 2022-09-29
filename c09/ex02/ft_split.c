/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:59:55 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/27 10:16:41 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_check_charset(char c, char *charset)
{
	int	index;

	index = 0;
	while (charset[index])
	{
		if (c == charset[index])
			return (1);
		index ++;
	}
	return (0);
}

int	ft_charsep(char *str, char *charset, int index, int utility)
{
	int	pre;
	int	count;

	pre = 1;
	count = 0;
	while (str[index] != '\0')
	{
		if (ft_check_charset(str[index], charset))
		{
			if (pre == 0 && utility == 2)
				return (index - 1);
			pre = 1;
		}
		else
		{
			if (pre && utility == 0)
				count ++;
			if (pre && utility == 1)
				return (index);
			pre = 0;
		}	
		index ++;
	}
	return (count * (utility == 0) + (index - 1) * (utility == 2));
}

void	ft_strcpy(char *dest, char *src, int index, int limit)
{
	int	d_index;

	d_index = 0;
	while (index <= limit)
	{
		dest[d_index] = src[index];
		d_index ++;
		index ++;
	}
	dest[d_index] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		size;
	int		w_start;
	int		w_end;

	size = ft_charsep(str, charset, 0, 0);
	tab = malloc(sizeof(*tab) * (size + 1));
	if (!tab)
		return (NULL);
	i = 0;
	w_end = -1;
	while (i < size)
	{
		w_start = ft_charsep(str, charset, w_end + 1, 1);
		w_end = ft_charsep(str, charset, w_start, 2);
		tab[i] = malloc(sizeof(*tab) * (w_end - w_start + 2));
		ft_strcpy(tab[i], str, w_start, w_end);
		i ++;
	}
	tab[i] = 0;
	return (tab);
}
