/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:07:50 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/19 09:50:13 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
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
	return (dest);
}
