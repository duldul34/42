#include <stdio.h>
#include <stdlib.h>

extern int	*ft_range(int min, int max);

int	main(void)
{
	int	*ptr;
	int	i;
	int len;
	
	ptr = ft_range(40, 50);
	len = 50 - 40;
	i = 0;
	while (i < len)
	{
		printf("%d ", ptr[i]);
		i++;
	}
	free(ptr);
}
