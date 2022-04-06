/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 23:16:10 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/09 23:16:11 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

int	main(int argc, char **argv)
{
	char	**maps_raw;
	char	**maps_form;
	int		i;
	int		error;

	error = 0;
	if (argc > 1)
	{
		maps_raw = malloc(sizeof(*maps_raw) * argc - 1);
		i = 0;
		while (++i < argc)
		{	
			maps_raw[i - 1] = get_file(argv[i], &error);
		}
		i = -1;
		while (++i < argc - 1)
		{
			maps_form = format_map(maps_raw[i], argc);
		}
	}
	return (0);
}
