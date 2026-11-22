void	ft_sort_int_tab(int *tab, int size)
{
	if(size < 2) return ;
	int i;
	int o;
	int v;

	i = 0;
	o = 1;
	while(i < size -1)
	{
		if(tab[i] > tab[i+1])
		{
			v = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = v;
			o = 0;
		}
		i++;
		if(i == size-1)
		{
			if(o) return ;
			o = 1;
			i = 0;
		}
	}
}
