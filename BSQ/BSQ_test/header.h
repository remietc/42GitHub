#ifndef HEADER_H
# define HEADER_H

///////!!!!!!!!!!!!!!!REMOVE BEFORE FINAL PUSH!!!!!!!!!!!///////////////////
#include <stdio.h>
////////////////////////////////////////////////////////////////////////////

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

//Tools

int		ft_strlen(char *str);
void	ft_putstr(char *str);
//void    simple_itoa(int nb_lines, char *nb_lines_to_a);
char	*get_file(char *path_to_file, int *error);
int		check_header_validity(int nb_lines, char *map_raw, char *symbols);
char	**format_map(char *map_raw, int argc);
int		check_map_validity(char *map_raw, int *line_len);
void	resolution(char **tab, int l, int h);
int		ignore_first_line(char *map_raw, int i);

#endif
