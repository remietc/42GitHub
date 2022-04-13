/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_all_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:27:34 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/27 00:38:20 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	char	temp;

	temp = c + 48;
	write(1, &temp, 1);
	write(1, " ", 1);
}

void	write_middle_lines(int *ext_box, int (*int_box)[4])
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = 0;
	j = 0;
	a = 8;
	b = 12;
	while (j < 4)
	{
		ft_putchar(ext_box[a]);
		i = 0;
		while (i < 4)
		{
			ft_putchar(int_box[j][i]);
			i++;
		}
		ft_putchar(ext_box[b]);
		write(1, " \n", 2);
		j++;
		a++;
		b++;
	}
}

void	write_top_bottom_lines(int *ext_box, int (*int_box)[4])
{
	int	i;

	i = 0;
	write(1, "  ", 2);
	while (i < 4)
	{
		ft_putchar(ext_box[i]);
		i++;
	}
	write(1, "   \n", 4);
	write_middle_lines(ext_box, int_box);
	write(1, "  ", 2);
	i = 4;
	while (i < 8)
	{
		ft_putchar(ext_box[i]);
		i++;
	}
	write(1, "   \n", 4);
}
