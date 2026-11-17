#include <unistd.h>
void ft_print_comb2()
{
	int aa;
	int ab;
	int ba;
	int bb;
	char caa;
	char cab;
	char cba;
	char cbb;

	aa = 0;
	while(aa < 10)
	{
		ab = 0;
		while(ab < 10)
		{
			ba = 0;
			while(ba < 10)
			{
				bb = 0;
				while(bb < 10)
				{
					if(((aa*10)+ab) < ((ba*10)+bb))
					{
						caa = aa + 48;
						cab = ab + 48;
						cba = ba +48;
						cbb = bb + 48;
						write(1, &caa, 1);
						write(1, &cab, 1);
						write(1, " ",1);
						write(1, &cba, 1);
						write(1, &cbb, 1);
						write(1, ", ", 2);
					}
					bb++;
				}
				ba++;
			}
			ab++;
		}
		aa++;
	}
}
