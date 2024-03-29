/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:52:38 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/15 11:15:27 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	n;

	n = 1;
	result = 0;
	if (nb > 0 && nb < 2147395601)
	{
		while (nb >= n)
		{
			if ((nb / n) == n && (nb % n) == 0)
			{
				result = n;
			}	
			n++;
		}
	}
	return (result);
}
