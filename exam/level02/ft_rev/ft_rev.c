/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:51:43 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/29 11:04:26 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	len(char *av)
{
	int	count;

	count = 0;
	while(av[count])
	{
		count++;
	}
	return (count);
}

char	*ft_rev(char *av)
{
	int	i;
	int size;
	char	temp;

	size = len(av);
	i = 0;
	while (i < size / 2)
	{
		temp = av[i];
		av[i] = av[size - i - 1];
		av[size -i - 1] = temp;
		i++;
	}
	return (av);
}

int	main(int ac, char **av)
{
	(void) ac;
	printf("rev = %s\n", ft_rev(av[1]));
	return (0);
}
