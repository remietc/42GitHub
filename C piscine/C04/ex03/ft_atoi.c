/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:16:13 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/02 14:52:01 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	compt_of_minus;
	int	retour;

	i = 0;
	compt_of_minus = 0;
	retour = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			compt_of_minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		retour *= 10;
		retour += (str[i] - '0');
		i++;
	}
	if (compt_of_minus % 2 != 0)
		retour *= -1;
	return (retour);
}
