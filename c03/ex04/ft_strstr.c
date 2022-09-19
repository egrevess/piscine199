/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:51:29 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/19 10:02:41 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	res = '\0';
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			res = &str[i];
			while (to_find[j] != '\0' && str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return (res);
			}
		}
		i++;
	}
	return (res);// compile pas a cause de return '\0' de base 
}
