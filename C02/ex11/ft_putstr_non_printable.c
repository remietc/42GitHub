/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:49:55 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/24 00:17:11 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hexa(char temp);

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	temp;

	i = 0;
	while (str[i])
	{
		temp = str[i];
		if (temp < 32)
			write_hexa(temp);
		else if (temp == 127)
			write(1, "\\7f", 3);
		else
			write(1, &temp, 1);
		i++;
	}
}

void	write_hexa(char temp)
{
	if (temp < 10)
	{
		temp = temp + 48;
		write(1, "\\0", 2);
		write(1, &temp, 1);
	}
	if (temp > 9 && temp < 16)
	{
		temp = temp + 87;
		write(1, "\\0", 2);
		write(1, &temp, 1);
	}
	if (temp > 15 && temp < 26)
	{
		temp = temp + 32;
		write(1, "\\1", 2);
		write(1, &temp, 1);
	}
	if (temp > 25 && temp < 32)
	{
		temp = temp + 71;
		write(1, "\\1", 2);
		write(1, &temp, 1);
	}
}
