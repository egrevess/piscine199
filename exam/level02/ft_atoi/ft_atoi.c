/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:49:12 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/29 10:43:48 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	ft_atoi(char *av)
{
	int	i;
	int	nb;
	int neg;
	
	i = 0;
	nb = 0;
	neg = 1;
	while(av[i] == ' ' || av[i] == '\t')
		i++;
	if (av[i] == '-' || av[i] == '+')
	{
		if (av[i] == '-')
			neg = -1 * neg;
		i++;
	}
	while(av[i] >= '0' && av[i] <= '9')
	{
		nb = av[i] + (nb * 10) - 48;
		i++;
	}
	return(nb * neg);
}

int	main(int ac, char **av)
{
	(void) ac;
	printf("ft_atoi : %d\n",ft_atoi(av[1]));
	printf("atoi : %d\n", atoi(av[1]));
	return (0);
}
