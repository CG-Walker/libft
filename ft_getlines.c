# include "libft.h"

size_t nline(char *file)
{
	size_t i;

	i = 0;
	fd = open(file, O_RONLY);
	while (ret = get_next_line(fd, &line) == 1)
	{
		i++;
		free(line);
	}
	close(fd);
	return (i);
}

char **getlines(char *file)
{
	char **lines;
	char *line;
	int fd;
	int ret;
	size_t i;
	
	i = 0;
	if (!(lines = malloc(sizeof(char*) * nline(file) + 1)))
		return (NULL);
	fd = open(file, O_RONLY);
	while (ret = get_next_line(fd, &line) == 1)
	{
		lines[i++] = line;
		free(line);
	}
	lines[i] = NULL;
	return (lines);
}