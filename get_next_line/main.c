#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line != 0)
	{
		printf("main: %s", line);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	close(fd);
	return (0);
}
