/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_arg_0.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luserbu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 00:04:23 by luserbu           #+#    #+#             */
/*   Updated: 2022/02/26 19:07:19 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verif_arg_0(char *str)
{
	int	count;

	count = 0;
	while (count < 31)
	{
		if ((count % 2 != 0) && (str[count] != 32))
			return (0);
		if ((count % 2 == 0) && (str[count] < 49 || str[count] > 52))
			return (0);
		count++;
	}
	return (1);
}

int	verif_arg_1(char *str)
{
	if ((str[0] == '1' && str[16] == '1')
		|| (str[0] != '1') && (str[16] != '1'))
		return (1);
	else
		return (0);
}

int	verif_arg_2(char *str)
{
	if ((str[6] == '1' && str[24] == '1')
		|| (str[6] != '1') && (str[24] != '1'))
		return (1);
	else
		return (0);
}

int	verif_arg_3(char *str)
{
	if ((str[14] == '1' && str[30] == '1')
		|| (str[14] != '1') && (str[30] != '1'))
		return (1);
	else
		return (0);
}

int	verif_arg_4(char *str)
{
	if ((str[22] == '1' && str[8] == '1')
		|| (str[22] != '1') && (str[8] != '1'))
		return (1);
	else
		return (0);
}
