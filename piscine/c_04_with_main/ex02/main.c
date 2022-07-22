#include <stdio.h>

extern void	ft_putnbr(int nb);

int main(void)
{
	int n1 = 1;
	int n2 = -1;
	int n3 = 10;
	int n4 = -15;
	int n5 = -2147483648;
	int n6 = 2147483647;

	ft_putnbr(n1);
	printf("\n");
	ft_putnbr(n2);
	printf("\n");
	ft_putnbr(n3);
	printf("\n");
	ft_putnbr(n4);
	printf("\n");
	ft_putnbr(n5);
	printf("\n");
	ft_putnbr(n6);
	printf("\n");
}
