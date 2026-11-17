#include <unistd.h>
void ft_putnbr(int nb)
{
	long nbl = (long)nb;
	char s;
	if(nbl < 0)
	{
		write(1, "-", 1);
		nbl *= -1;
	}
	if(nbl >= 10)
	{
		ft_putnbr(nbl/10);
	}
	s= (nbl%10) + 48;
	write(1, &s, 1);
}
