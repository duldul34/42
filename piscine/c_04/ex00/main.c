#include <stdio.h>

extern int	ft_strlen(char *str);

int	main(void)
{
	char str[50] = "abcdefg";

	printf("%d\n", ft_strlen(str));
}
