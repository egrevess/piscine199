/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:41:59 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/15 11:57:15 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	result;
	int	n;

	n = 2;
	result = nb;
	while (nb > n)
	{
		if (nb % n == 0)
		{
			nb++;
			result = nb;
			n = 2;
		}
		n++;
	}
	if (nb <= 2)
	{
		result = 2;
	}
	return (result);
}
