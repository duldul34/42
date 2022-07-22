#include <stdio.h>
#include <stdlib.h>

extern int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int	i;
	int len;
	
	len = ft_ultimate_range(&range, 30, 50);
	printf("len: %d\n", len);
	i = 0;
	while (i < len)
	{
		printf("%d ", range[i]);
		i++;
	}
}
