/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:36:41 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/26 21:05:39 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

int	main(int argc, char *argv[])
{
	int	ext_box[16];
	int	int_box[4][4];

	if (argc == 2)
	{
		init_tab(ext_box, int_box, argv[1]);
		if (verif_all_arg(argv[1], ext_box))
		{
			resolve(ext_box, int_box);
			write_top_bottom_lines(ext_box, int_box);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

int	atoi(char c)
{
	int	i;

	i = c - 48;
	return (i);
}

void	init_tab(int *ext_box, int (*int_box)[4], char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 32)
	{
		ext_box[j] = atoi(str[i]);
		i = i + 2;
		j++;
	}
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			int_box[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
}
