/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:46:29 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/19 16:05:13 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *word)
{
	int	count;

	count = 0;
	while (word[count] != 0)
		count++;
	return (count + 1);
}

int len_word(char **strs,int size)
{
	int	total_size;
	int i;

	total_size = 0;
	i = 0;
	while (i < size)
	{
		total_size = total_size + len(strs[i]);
		i++;
	}		
}

void	*ft_strcat(char *dest, char *src)
{
	int	s;
	int	d;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		s++;
		d++;
	}	
	//return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;

	i = 0;
	if (**strs != NULL && *sep != NULL)
	{	
		join = malloc (sizeof(join) * (((size - 1) * len(sep)) + len_word(strs)));
		if (size == 0)
		{
			join = '\0';
			return (join);//vide
		}
		else 
		{
			while (i < size)
			{
				ft_strcat(join,strs[i]);
				if (i < size)
					ft_strcat(join,sep);
			}
				
			return (join);
		}
	}
	else
		return (NULL);
}

