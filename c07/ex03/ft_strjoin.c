/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:46:29 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/28 15:29:49 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(char *word)
{
	int	count;

	count = 0;
	while (word[count] != 0)
		count++;
	return (count + 1);
}

int	len_word(char **strs, int size)
{
	int	total_size;
	int	i;

	total_size = 0;
	i = 0;
	while (i < size)
	{
		total_size = total_size + len(strs[i]);
		i++;
	}
	// printf("%d", total_size);
	return (total_size);
}

void	ft_strcat(char *dest, char *src)
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
	dest[d] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;

	i = 0;
	if (strs != NULL && **strs != '\0' && sep != NULL && size > 0)
	{	
		join = malloc(sizeof(*join) * (((size - 1) * len(sep))
					+ len_word(strs, size)));
		if (!join)
			return (0);
		else
		{
			join[0] = '\0';
			while (i < size)
			{
				ft_strcat(join, strs[i]);
				if (i++ < (size - 1))
					ft_strcat(join, sep);
			}	
		}
		return (join);
	}
	return ("");
}

int main()
{
    char *str[4];
    char *sep = " ";
	char	*res;
  	str[0] = "bonjour";
    str[1] = "charles";
    str[2] = "nath";
    str[3] = "charles";
    res = ft_strjoin(4,str,sep);
	printf("%s\n", res);
	return 0;
}

