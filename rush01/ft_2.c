#include <stdio.h>

void	ft_2_2(int **tab,int col)
{
	int	i;

	i = 0;
	while ( i < 4 )
	{
		if (tab[2][i] == 4 && i != col)
		{
			tab[2][col] = 1;
			tab[1][col] = 4;
		}
		if (tab[2][i] == 1 && i != col)
		{
			tab[2][col] = 4;
			tab[1][col] = 1;
		}
		i++;
	}
}
void	ft_2_2(int **tab,int row)
{
	int	i;

	i = 0;
	while ( i < 4 )
		if (tab[i][2] == 4 && i != row)
		{
			tab[row][2] = 1;
			tab[row][1] = 4;
		}
		if (tab[i][2] == 1 && i != row)
		{
			tab[row][2] = 4;
			tab[row][1] = 1;
		}
		i++;
	}
}


