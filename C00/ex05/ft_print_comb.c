#include <unistd.h>
void	ft_print_comb()
{
	int c;
	int d;
	int u;
	char cent;
	char dec;
	char uni;


	c = 0;
	while(c < 10)
	{
		cent = c + 48;
		d = 0;
		while(d < 10)
		{
			dec = d + 48;
			u = 0;
			while(u < 10)
			{
				uni = u + 48;
				if(c < d && d < u )
				{
					write(1, &cent, 1);
					write(1, &dec, 1);
					write(1, &uni, 1);
					write(1, ", ", 2);
				}
				u++;
			}
			d++;
		}
		d = 0;
		c++;
	}
}
