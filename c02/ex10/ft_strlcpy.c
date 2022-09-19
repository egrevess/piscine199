/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:46:44 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/19 09:41:29 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		while (size - 1 > i && src[count] != '\0')
		{
			dest[i] = src[count];
			if (src[count] != '\0')
				count++;
			i++;
		}
		if (src[count] != '\0')
			count++;
	}
	if (size > i)
	{
		dest[i] = '\0';
	}
	return (count);
}
