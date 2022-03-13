#include"header.h"

char	*get_file(char *path_to_file, int *error)
{
	int		fd;
	char	small_buf[2];
	int		size;
	int		not_eof;
	char	*map_raw;

	fd = open(path_to_file, O_RDONLY);
	if (fd == -1)
		*error = 1;
	not_eof = 1;
	size = 0;
	while (not_eof)
	{	
		not_eof = read(fd, small_buf, 1);
		size += not_eof;
	}
	close(fd);
	map_raw = malloc(size + 8);
	fd = open(path_to_file, O_RDONLY);
	read(fd, map_raw, size);
	map_raw[size] = 0;
	return (map_raw);
}
