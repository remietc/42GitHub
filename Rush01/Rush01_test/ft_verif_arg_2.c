/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_arg_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:57:51 by luserbu           #+#    #+#             */
/*   Updated: 2022/02/26 21:03:03 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verif_arg_num(int *ext_box)
{
	int	count;

	count = 0;
	while (count < 4)
	{
		if (((ext_box[count] + ext_box[count + 4]) >= 3)
			&& (ext_box[count] + ext_box[count + 4]) <= 5)
			count++;
		else
			return (0);
	}
	count = 8;
	while (count < 12)
	{
		if (((ext_box[count] + ext_box[count + 4]) >= 3)
			&& (ext_box[count] + ext_box[count + 4]) <= 5)
			count++;
		else
			return (0);
	}
	return (1);
}
