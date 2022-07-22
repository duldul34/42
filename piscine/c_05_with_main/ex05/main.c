#include <stdio.h>

extern int	ft_sqrt(int nb);

int main(void)
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(8));
	printf("%d\n", ft_sqrt(2054536929));
	printf("%d\n", ft_sqrt(2147483647));
}
