/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:59:26 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/28 10:55:46 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main()
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		if (i % 2 == 0)
		{
			i = i - 32;
			write (1, &i, 1);
			i = i + 32;
		}
		else
			write(1, &i, 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
