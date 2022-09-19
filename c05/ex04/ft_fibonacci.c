/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:28:49 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/15 09:23:23 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	f;

	if (index == 0)
	{
		f = 0;
	}
	if (index == 1)
	{
		f = 1;
	}
	if (index > 1)
	{
		f = ft_fibonacci (index - 1) + ft_fibonacci (index - 2);
	}
	return (f);
}
