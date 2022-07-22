extern void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	int 	nbr = 2147483647;
	char	base[50] = "ab";

	ft_putnbr_base(nbr, base);
}
