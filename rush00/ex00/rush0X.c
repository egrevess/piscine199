#include <unistd.h>

void	rush(int x,int y)
{
	if(x <=  0 || y <= 0)
	{
		write(1, "impossible",10 )
	}
	putchar(x,y);
}

int	main(void)
{
	rush(5,5);
	return (0);
}

void	putchar_start(int x)
{
	int	width;

	width = x;
	while(x > 0)
	{
		if(x == width)
		{
			write(1,"/", 1);
		}
		if(x < width &&  x > 1)
		{
			write(1, "*", 1);
		}
		if(x == 1)
		{
			write(1, "\\", 1);
		}
		a--;
	}
}

void	putchar_end(int x)
{
	int	width;

	width = x;
	while(x > 0)
	{
		if(x == width)
		{
			write(1,"\\", 1);
		}
		if(x < width &&  x > 1)
		{
			write(1, "\*", 1);
		}
		if(x == 1)
		{
			write(1, "/", 1);
		}
		a--;
	}

}

void	putchar(int x,int y)
{
	int	lenght;

	lenght = y;
	while( y > 0)
	{
		if( y == lenght)
		{
			putchar_start(x);
			write(1, "\n", 1); 
		}
		if(y < lenght && y > 1) 
		{
			 putchar_mid(x);
			 write(1, "\n", 1);
		}
		if(y == 1)
		{
			putchar_end(x);
			write(1, "\n", 1);
		}
		y--;
}

void	putchar_mid(int x)
{
	int	width;

	width = x;
	while(x > 0)
	{
		if(x == width)
		{
			write(1,"\*", 1);
		}
		if(x < width &&  x > 1)
		{
			write(1, " ", 1);
		}
		if(x == 1)
		{
			write(1, "\*", 1);
		}
		a--;
	}
}
