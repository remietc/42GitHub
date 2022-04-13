/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:39:54 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/19 18:08:01 by dguet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	top(int x);
void	bottom(int x);
void	left_right(int x);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			if (i == 0)
				top(x);
			else if (i == y - 1)
				bottom(x);
			else
				left_right(x);
			ft_putchar('\n');
			i++;
		}
	}
}

void	top(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	bottom(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('C');
		else if (i == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
}

void	left_right(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}
