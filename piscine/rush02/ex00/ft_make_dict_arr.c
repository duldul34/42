#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_lib.h"
#include "ft_split.h"
#include <stdio.h>

char *read_file(char *file_name)
{
	int fd;
	int n;
	char *result_buf;
	char *result_pos;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		return (0);
	result_buf = (char *)malloc(sizeof(char) * 1024);
	result_pos = result_buf;
	while (1)
	{
		n = read(fd, result_buf, 1);
		if (n == -1 || *result_buf == EOF || *result_buf == '\0')
			break;
		result_buf++;
	}
	return (result_pos);
}

void	make_dict_arr(char *file_name)
{
	char	*pos;
	char	*find;
	char	*num[100];
	char	*str[100];
	int		i;
	int		j;
	
	pos = read_file(file_name);
	find = ft_strchr(pos, '\n');
	i = 0;
	while (find != 0 && *find != '\0')
    {
        *find = '\0';
        split_str(num, str, pos, i);
        pos = ++find;
        i++;
        find = ft_strchr(pos, '\n');
    }
    j = 0;
    while (j < i)
    {
        // printf("%d\n", j);
        printf("j: %d, num: %s, str: %s\n", j, num[j], str[j]);
        j++;
    }
	j = 0;
	while (j < i)
    {
        free(num[j]);
        free(str[j]);
        j++;
    }
}
