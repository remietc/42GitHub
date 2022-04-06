/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:56:17 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/23 17:28:29 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c);

void *ft_print_memory(void *addr, unsigned int size)
{
	char pointeur[20] = &addr;

	printf("adresse = %s\n", pointeur);
	printf("adresse = %p\n\n", addr);
//	write(1, ": ", 2);
	write(1, addr, size);
	return (addr);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
