/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:46:33 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/02 18:15:31 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writepositive(int p);
void	ft_writenegative(int n);

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else if (nb > 0)
		ft_writepositive(nb);
	else
		ft_writenegative(nb);
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
