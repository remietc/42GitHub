/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:26:12 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/17 23:42:11 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_and_write(int a, int b);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 100)
	{
		while (b < 100)
		{
			convert_and_write(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

void	convert_and_write(int a, int b)
{
	char	temp;

	temp = a / 10 + '0';
	write(1, &temp, 1);
	temp = a % 10 + '0';
	write(1, &temp, 1);
	write(1, " ", 1);
	temp = b / 10 + '0';
	write(1, &temp, 1);
	temp = b % 10 + '0';
	write(1, &temp, 1);
	if (a + b < 197)
	{
		write(1, ", ", 2);
	}
}
