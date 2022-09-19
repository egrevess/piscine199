/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:06:50 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/15 09:13:47 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		result = 0;
	}
	if (power == 0)
	{
		result = 1;
	}
	while (power > 0)
	{	
		result = result * nb;
		power--;
	}
	return (result);
}
