#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char	*ft_strdup(char *src);

int	main(void)
{
	char	*str1;
	char	*str2;
	char	src[50] = "abcde";

	str1 = ft_strdup(src);
	printf("%s\n", str1);
	str2 = strdup(src);
	printf("%s\n", str2);

	free(str1);
	free(str2);
}
