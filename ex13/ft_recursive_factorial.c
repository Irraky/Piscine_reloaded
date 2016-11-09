int	ft_recursive_factorial(int nb)
{	
	int i;

	i = nb;
	if (i < 0)
		return(0);
	else if (i == 0)
		return(1);
	else if (i == 1)
		nb = 1;
	else
	{	
		--i;
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
