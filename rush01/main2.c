#include <stdio.h>
#include <stdlib.h>

char    sep_argv(char argv, int nb)
{
    int n;
    char*   res = (char*)malloc(4);
    int i;

    i = 0;
    n = 4;

    while (i < n)
    {
        res[i] = argv[(i * 2)  + nb];
        i++;
    }
    return (res);
}


int main(int argn, char** argv)
{
    char* col_up = sep_argv(argv[1], 0);
    char* col_down = sep_argv(argv[1], 8);
    char* row_left = sep_argv(argv[1], 16);
    char* row_right = sep_argv(argv[1], 24);
    printf(" %s \n %s \n %s \n %s \n", col_up, col_down, row_left, row_right);
}

char	**ft_col(char *col)
{
	int	index_col;
	int index_row;
	int	value;

	index_col = 0;
	index_row = 0;
	value = 1;
	while (col[index_col] < 4)
	{
		if(col[index_col] == 4)
		{
			while(index_row < 4)
			{
				tab[index_row][index_col] = value;
				value++;
				index_row++;
			}
		}
		index_col++;
	}
	return(tab)
}

char	**ft_row(char *row)
{
	int	index_col;
	int index_row;
	int	value;

	index_col = 0;
	index_row = 0;
	value = 1;
	while (row[index_row] < 4)
	{
		if(row[index_row] == 4)
		{
			while(index_col < 4)
			{
				tab[index_row][index_col] = value;
				value++;
				index_col++;
			}
		}
		index_row++;
	}
	return(tab)
}
