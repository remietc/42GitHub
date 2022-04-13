/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 23:14:16 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/06 11:45:38 by rledoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <unistd.h>

int	ft_verif_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2 && ft_verif_arg(argv[1]) && argv[1][0])
		read_file(argv);
	else
		write(1, "Error\n", 6);
	return (0);
}
