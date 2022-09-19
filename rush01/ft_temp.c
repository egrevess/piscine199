#include <stdio.h>

void	ft_3_(col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab[0][i] == 2 && i != col)
		{	
			tab[0][col] = 1;
			i = 0;
		}
		if (tab[0][i] == 1 && i != col)
		{
			tab[0][col] = 2;
			i = 0;
		}
		if (tab[2][i] == 4 && i != col)
		{	
			tab[3][col] = 4;
		}
		if (tab[3][i] == 4 && i != col)
		{
			tab[2][col] = 4;
		}
		i++;
	}
}
void	ft_3_row(row)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab[i][0] == 2 && i != row)
		{	
			tab[row][0] = 1;
			i = 0;
		}
		if (tab[i][0] == 1 && i != row)
		{
			tab[row][0] = 2;
			i = 0;
		}
		if (tab[i][2] == 4 && i != row)
		{	
			tab[row][3] = 4;
		}
		if (tab[i][3] == 4 && i != row)
		{
			tab[row][2] = 4;
		}
		i++;
	}
}

void	ft_3_2(col)
{
	tab[2][col] = 4;
}

void	ft_3_2(row)
{
	tab[row][2] = 4;
}







