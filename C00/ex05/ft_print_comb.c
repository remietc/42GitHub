/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:37:35 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/18 19:17:14 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_abc(char a, char b, char c);

void	ft_print_comb(void)
{	
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 49;
	c = 50;
	while (a < 56)
	{
		while (b < 57)
		{
			while (c < 58)
			{
				write_abc(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

void	write_abc(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a * 100 + b * 10 + c < 6117)
	{
		write(1, ", ", 2);
	}
}
