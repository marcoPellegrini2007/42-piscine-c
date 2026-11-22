void	ft_ultimate_div_mod(int *a, int *b)
{
	int v;
	int s;

	s = *b;
	v = *a;
	*a = v / *b;
	*b = v % s;
}
