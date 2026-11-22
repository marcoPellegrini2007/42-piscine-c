void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int p;

	i = 0;
	while(i < size)
	{
		p = tab[i];
		tab[i] = tab[size-1];
		tab[size-1] = p;
		i++;
		size--;
	}
}

