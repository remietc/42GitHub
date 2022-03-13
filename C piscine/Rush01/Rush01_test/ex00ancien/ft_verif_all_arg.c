/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_all_arg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:26:22 by luserbu           #+#    #+#             */
/*   Updated: 2022/02/26 16:13:35 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	verif_all_arg(char *str, int *ext_box)
{
	if ((verif_arg_0(str)) && (verif_arg_1(str))
		&& (verif_arg_2(str)) && (verif_arg_3(str))
		&& (verif_arg_4(str)) && (verif_arg_5(str))
		&& (verif_arg_6(str)) && (verif_arg_7(str))
		&& (verif_arg_8(str)) && (verif_arg_num(ext_box)))
		return (1);
	else
		return (0);
}
