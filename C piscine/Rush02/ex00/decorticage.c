/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decorticage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:03:49 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/06 18:14:10 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

t_llui	ft_iterative_power(t_llui nb, t_llui power)
{
	t_llui	a;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= a;
		power--;
	}
	return (nb);
}

void	zero(t_llui *argv, t_llui *tab, int *cmpt)
{
	if (*argv == 0)
	{
		tab[cmpt[2]] = 0;
		cmpt[2] += 1;
	}
}

void	trois_par_trois(t_llui *numb, t_llui *argv, int *cmpt, t_llui *tab)
{
	*numb = *argv % 10;
	if (cmpt[0] == 0 && ((*argv % 100) >= 10 && (*argv % 100) <= 19))
	{
		tab[cmpt[2]] = 10 + *numb;
		cmpt[2]++;
		*argv /= 100;
		cmpt[0] += 2;
	}
	*numb = *argv % 10;
	if (cmpt[0] == 2 && *numb != 0)
	{
		tab[cmpt[2]] = 1 * ft_iterative_power(10, cmpt[0]);
		cmpt[2]++;
		tab[cmpt[2]] = *numb;
		cmpt[2]++;
	}
	if (cmpt[0] != 2 && *numb != 0)
	{
		*numb *= ft_iterative_power(10, cmpt[0]);
		tab[cmpt[2]] = *numb;
		cmpt[2]++;
	}
	*argv /= 10;
	cmpt[0]++;
}

void	decorticage(t_llui argv, t_llui *tab_numb, char (*tab_word)[15])
{
	t_llui	numb;
	t_llui	tab[100];
	int		cmpt[3];

	cmpt[0] = 0;
	cmpt[1] = 0;
	cmpt[2] = 0;
	zero(&argv, tab, cmpt);
	while (argv != 0)
	{
		while (cmpt[0] < 3)
			trois_par_trois(&numb, &argv, cmpt, tab);
		cmpt[1]++;
		if (cmpt[0] % 3 == 0 && argv != 0)
		{
			if ((argv % 1000) != 0)
			{
				tab[cmpt[2]] = 1 * ft_iterative_power(10, (cmpt[0] * cmpt[1]));
				cmpt[2]++;
			}
			cmpt[0] = 0;
		}
	}
	cmpt[2]--;
	convert(tab, cmpt[2], tab_numb, tab_word);
}
