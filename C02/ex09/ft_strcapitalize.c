/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:48:56 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/23 23:44:35 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_not_alphanumeric(char temp);
int	char_is_lowcase(char temp);

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		a;
	char	temp;

	i = 0;
	a = 0;
	while (str[i])
	{
		temp = str[i];
		if (i > 0 && a == 0 && (temp > 64 && temp < 91))
			str[i] = str[i] + 32;
		if (a > 0 || i == 0)
		{
			if (char_is_lowcase(temp))
				str[i] = str[i] - 32;
			a = 0;
		}
		if (char_is_not_alphanumeric(temp))
			a++;
		i++;
	}
	return (str);
}

int	char_is_not_alphanumeric(char temp)
{
	if (temp < 48 || temp > 122)
		return (1);
	else if (temp > 57 && temp < 65)
		return (1);
	else if (temp > 90 && temp < 97)
		return (1);
	else
		return (0);
}

int	char_is_lowcase(char temp)
{
	if (temp > 96 && temp < 123)
		return (1);
	else
		return (0);
}
