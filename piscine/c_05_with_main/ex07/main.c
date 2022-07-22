#include <stdio.h>

extern int	ft_find_next_prime(int nb);

int main(void)
{
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(2147483600));
	printf("%d\n", ft_find_next_prime(2147483647));
}
