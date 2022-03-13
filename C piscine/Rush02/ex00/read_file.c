/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledoux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:07:20 by rledoux           #+#    #+#             */
/*   Updated: 2022/03/06 16:37:05 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_rush02.h"

void	read_numb(t_llui *tab_numb, int file, char *path)
{
	int		i;
	t_llui	temp;
	char	num[500];

	i = 0;
	file = open(path, O_RDONLY);
	read(file, num, 1);
	while (i < 38)
	{
		temp = 0;
		while (*num >= '0' && *num <= '9')
		{
			temp *= 10;
			temp += *num - '0';
			read(file, num, 1);
		}
		while (*num < '0' || *num > '9')
			read(file, num, 1);
		tab_numb[i] = temp;
		i++;
	}
	close(file);
}

void	read_word(char (*tab_word)[15], int file, char *path)
{
	int		i;
	int		j;
	char	res[500];

	i = 0;
	j = 0;
	file = open(path, O_RDONLY);
	while (i < 38)
	{
		while (*res < 'a' || *res > 'z')
			read(file, res, 1);
		while (*res >= 'a' && *res <= 'z')
		{
			tab_word[i][j] = *res;
			read(file, res, 1);
			j++;
		}
		tab_word[i][j] = '\0';
		i++;
		j = 0;
	}
	close(file);
}

void	read_file(char *argv[])
{
	int		file;
	char	*path;
	char	tab_word[41][15];
	t_llui	tab_numb[41];
	t_llui	nb;

	nb = ft_atoi(argv[1]);
	path = "./numbers.dict";
	file = open(path, O_RDONLY);
	if (file == -1)
		write(1, "Dict error\n", 11);
	else
	{
		close(file);
		read_numb(tab_numb, file, path);
		read_word(tab_word, file, path);
		decorticage(nb, tab_numb, tab_word);
	}
}
