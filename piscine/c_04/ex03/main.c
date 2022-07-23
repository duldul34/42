#include <stdio.h>

extern int	ft_atoi(char *str);

int main(void)
{
	char	str1[50] = " ---+--+1234ab567";
	char	str2[50] = "---1234";
	char	str3[50] = "a1234";
	char	str4[50] = "   1234abc";
	char	str5[50] = "1234 1234";
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	printf("%d\n", ft_atoi(str5));
}
