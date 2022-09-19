/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:00:23 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/15 09:02:14 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	n;
	int	factorial;

	n = 0;
	factorial = 0;
	if (nb >= 0)
	{
		factorial = 1;
		while (nb > n)
		{
			factorial = factorial * (nb - n);
			n++;
		}
	}
	return (factorial);
}
