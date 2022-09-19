/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:58:52 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/17 11:27:36 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{

	if (argc > 2 && argc < 1)
	{
		write (1, "error\n", 6); 
	}
	if (argc == 2)
	{
		ft_split(argv[1]);
	}
	return (0);
}

char	*ft_split(char *str) //str c'est la chaine de caractere que le terminal me renvoie.
{
	char	*colup;
	char	*coldown;
	char	*rowleft;
	char	*rowright;
	int		index;

	colup[5];
	coldown[5];
	rowleft[5];
	rowright[5];
	index = 0;
	while (str[index] != '\0')
	{
		while(index < 7)
		{
			colup[
			index = index + 2;
		}
	}

}
