/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:40:06 by hperret           #+#    #+#             */
/*   Updated: 2022/02/19 18:20:46 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top_bottom(int x)
{
	int		j;

	j = 0;
	while (j < x)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		j++;
	}
}

void	left_right(int x)
{
	int		j;

	j = 0;
	while (j < x)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		j++;
	}
}

void	rush(int x, int y)
{
	int		i;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			if (i == 0 || i == y - 1)
				top_bottom(x);
			else
				left_right(x);
			i++;
			ft_putchar('\n');
		}
	}
}
