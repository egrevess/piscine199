#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	len(int nb)
{
	int result;

	result = (nb < 0);
	while (nb != 0)
	{
		nb = nb / 10;
		result++;
	}
	return (result);
}

void	ft_putnbr(int nb, char	*result, int index)
{
	if (nb == -2147483648)
		result = "-2147483648";
	else if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb/10,result,index - 1);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		nb = nb + 48;
		printf("%c at index %d\n", nb, index);
		result[index] = nb;
		printf("%s\n",result);
	}
}

char	*ft_itoa(int nb)
{
	char	*result;

	result = malloc(sizeof(result) * (len(nb) + 1));
	if (result == NULL)
		return (0);
	ft_putnbr(nb,result,len(nb) - 1);
	return (result);
}

int main(void)
{
	char *res;
	
	res = ft_itoa(-2146884);
	write(1, &res[0], 1);
	write(1, &res[1], 1);
	return (0);
}

