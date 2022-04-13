/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:43:47 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/18 20:05:13 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_comb(char *comb, int n);
void recursive(char *comb, int n, int i);
void go_inside_while(char *comb, int n, int *i);

void ft_print_combn(int n)
{
	char	comb[n];
	int		i;

	i = 0;
	while (i < n)
	{
		comb[i] = '0' + i;
		i++;
	}
	i = -1;
	recursive(comb, n, i);
}

void recursive(char *comb, int n, int i)
{
	while (i < n)
	{
		i++;
		if(i < n)
		{
			go_inside_while(comb, n, &i);
		}
		else
		{
			write_comb(comb, n);
		}
	}
}

void go_inside_while(char *comb, int n, int *i)
{
	int j;

	while (comb[*i] < '9')
	{
		j = *i;
		write(1, "/", 1);
		write(1, &j, 1);
		write(1, "/", 1);
		recursive(comb, n, *i);
		comb[*i]++;
		j = *i + 1;
		while (j < n)
		{
			comb[j] = comb[j - 1] + 1;
			j++;
		}
	}
}

void write_comb(char *comb, int n)
{
	int i;
	char temp;

	i = 0;
	while (i < n)
	{
		temp = comb[i];
		write(1, &temp, 1);
		i++;
	}
	write (1, ", ", 2);
}
