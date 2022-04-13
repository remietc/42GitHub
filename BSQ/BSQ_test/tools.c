#include"header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*void	simple_itoa(int nb_lines, char *nb_lines_to_a)
{
	int	nb_cpy;
	int	i;
		
	nb_cpy = nb_lines;
	while (nb_cpy > 0)
	{
		nb_cpy /= 10;
		i++;
	}
	nb_lines_to_a = malloc(sizeof(char) * i);
	i--;
	while (i >= 0)
	{
		nb_lines_to_a[i] = nb_lines % 10;
		nb_lines /= 10;
		i--;
	}
}*/
