/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 03:02:40 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/20 17:52:00 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ex08/ft_sort_int_tab.c"
#include <stdio.h>

int main()
{
	int i = 0;
	int temp = 0;
	int size = 7;
	int tab[7] = {7,6,5,4,3,2,1};
	ft_sort_int_tab(tab, size);
	while (i < 7)
	{
		temp = tab[i];
		printf("%d", temp);
		i++;
	}
}
