/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:40:30 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/11 11:26:35 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int nombre1, int nombre2);

void	ft_print_comb2(void)
{	
	int	nombre1;
	int	nombre2;

	nombre1 = 0;
	nombre2 = 0;
	while (nombre1 <= 99)
	{
		nombre2 = 0;
		while (nombre2 <= 99)
		{
			if (nombre1 < nombre2)
			{
				print(nombre1, nombre2);
			}
			nombre2++;
		}
		nombre1++;
	}
}

void	print(int nombre1, int nombre2)
{
	char	temp;
	char	virgule;
	char	espace;

	virgule = 44;
	espace = 32;
	temp = nombre1 / 10 + 48;
	write(1, &temp, 1);
	temp = nombre1 % 10 + 48;
	write(1, &temp, 1);
	write(1, &espace, 1);
	temp = nombre2 / 10 + 48;
	write(1, &temp, 1);
	temp = nombre2 % 10 + 48;
	write(1, &temp, 1);
	if (nombre1 < 98)
	{
		write(1, &virgule, 1);
		write(1, &espace, 1);
	}
}
