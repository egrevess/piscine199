/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:57:06 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/19 09:33:13 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (n > count && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (n > count)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
