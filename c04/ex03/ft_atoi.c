/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:47:04 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/15 08:59:34 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_negative(char str);

int	ft_atoi(char *str)
{
	int	n;
	int	neg;
	int	count;

	n = 0;
	neg = 1;
	count = 0;
	while (str[n] == '\n' || str[n] == '\t' || str[n] == '\v'
		|| str[n] == '\f' || str[n] == '\r' || str[n] == ' ')
	{
		n++;
	}
	while (str[n] == '+' || str[n] == '-')
	{
		neg = neg * ft_negative(str[n]);
		n++;
	}
	while (str[n] >= 48 && str[n] <= 57)
	{
		count *= 10;
		count = (count + str[n] - 48);
		n++;
	}
	return (count * neg);
}

int	ft_negative(char str)
{
	int	neg;

	neg = 1;
	if (str == '-')
	{
		neg = -1;
	}
	return (neg);
}
