#include <stdio.h>

extern int	ft_atoi_base(char *str, char *base);

int main(void)
{
	char	base[50] = "0123456789";
	char	str1[50] = " ---+--+1234ab567";
	char	str2[50] = "---1234";
	char	str3[50] = "a1234";
	char	str4[50] = "   1234abc";
	char	str5[50] = "1234 1234";
	char	str6[50] = "  	\n    ---+--+1a4yab4wp";

	printf("%d\n", ft_atoi_base(str1, base));
	printf("%d\n", ft_atoi_base(str2, base));
	printf("%d\n", ft_atoi_base(str3, base));
	printf("%d\n", ft_atoi_base(str4, base));
	printf("%d\n", ft_atoi_base(str5, base));
	printf("%d\n", ft_atoi_base(str6, "0123456789abcdef"));
}
