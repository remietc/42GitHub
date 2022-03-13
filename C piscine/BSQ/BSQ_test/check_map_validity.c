#include "header.h"

int	check_nb_lines(int *nb_lines, char *map_raw)
{
	int	i;

	i = 4;
	while (map_raw[i])
	{
		if (map_raw[i] == '\n')
			*nb_lines += 1;
		i++;
	}
	if (*nb_lines == 0)
		return (1);
	return (0);
}

int	check_line_len(char *map_raw, int *line_len)
{
	int	i;
	int j;
	int	a;

	a = 0;
	i = ignore_first_line(map_raw, i);
	j = i;
	*line_len = 0;
	while (map_raw[i] != '\n' && map_raw[i] != '\0')
	{	
		i++;
	}
	*line_len = (i - j) + 1;
	if (*line_len == 0)
		a = 1;
	return (a);
}


int	check_map_symbols(char *map_raw, char *symbols)
{
	int	i;

	i = 0;
	i = ignore_first_line(map_raw, i);
	while (map_raw[i])
	{
		if (map_raw[i] != '\n' && map_raw[i] != symbols[0]
			&& map_raw[i] != symbols[1])
			return (1);
		i++;
	}
	return (0);
}

int	check_map_line_len(char *map_raw, int *line_len)
{
	int i;
	int len;

	i = 0;
	len = 0;
	i = ignore_first_line(map_raw, i);
	while (map_raw[i])
	{
		len++;
		if (map_raw[i] == '\n')
		{
			if (len != *line_len)
				return (1);
			len = 0;
		}
		i++;
	}
	return (0);
}

int	check_map_validity(char *map_raw, int *line_len)
{
	int		nb_lines;
	char	symbols[3] = {'.','o','x'};
	int		error;

	error = 0;
	error += check_nb_lines(&nb_lines, map_raw);
//	error += check_header_validity(nb_lines, map_raw, symbols);
	error += check_line_len(map_raw, line_len);
	error += check_map_line_len(map_raw, line_len);
	error += check_map_symbols(map_raw, symbols);
//	error += check_one_line_map(map_raw, nb_lines, line_length);
	if (error)
	{
		map_raw[0] = '\0';
		return (0);
	}
	else
		return (nb_lines);
}
