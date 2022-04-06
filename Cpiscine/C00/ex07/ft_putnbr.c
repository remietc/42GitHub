/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:46:33 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/20 00:30:44 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writepositive(int p);
void	ft_writenegative(int n);

void	ft_putnbr(int nb)
{
	int	d;

	d = nb;
	if (d == 0)
		write(1, "0", 1);
	else if (d > 0)
		ft_writepositive(d);
	else
		ft_writenegative(d);
}

void	ft_writepositive(int p)
{
	int		i;
	char	temp;
	char	tab[12];

	i = 0;
	while (p > 0)
	{
		tab[i] = p % 10 + '0';
		p = p / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		temp = tab[i];
		write(1, &temp, 1);
	}
}

void	ft_writenegative(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		write(1, "-", 1);
		ft_writepositive(-n);
	}
}
