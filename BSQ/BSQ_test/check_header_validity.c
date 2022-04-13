#include"header.h"

void	get_map_header(char *map_raw, char *map_header, int	header_size)
{
	int	j;

	j = 0;
	while (j < header_size)
	{
		map_header[j] = map_raw[j];
		j++;
	}
}

int	get_header_size(char *map_raw)
{
	int i;

	i = 0;
	while (map_raw[i] != '\n' && map_raw[i] != '\0')
		i++;
	return (i);
}

int	check_header_validity(int nb_lines, char *map_raw, char *symbols)
{
	char	*map_header;
	char	*nb_lines_to_a;
	int		len_nb_lines;
	int		header_size;
	int		i;

//	i = -1;
//	while (++i < 11)
//		nb_lines_to_a[i] = 0;
	header_size = get_header_size(map_raw);
	map_header = malloc((header_size + 1) * 8);
//	get_map_header(map_raw, map_header, header_size);
//	simple_itoa(nb_lines, nb_lines_to_a);
//	len_nb_lines = ft_strlen(nb_lines_to_a);
	len_nb_lines = 2;
	i = -1;
	if (ft_strlen(map_header) != 2 + 3)
		return (1);
	else
		while (++i < 3)
			symbols[i] = map_header[i];
	return (0);
}
