#include <stdio.h>

extern int	ft_is_prime(int nb);

int main(void)
{
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
}
