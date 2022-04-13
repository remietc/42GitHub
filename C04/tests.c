/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:01:25 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/02 18:11:56 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"

void	test_ex00(void)
{
	int retour = 0;
	char str[10] = "Salut";

	printf("\033[1;33m");
	printf("EX00 :\n\n");
	printf("\033[1;0m");

	retour = ft_strlen(str);

	printf("str = %s\n", str);
	printf("retour = %d\n\n", retour);
}

void	test_ex01(void)
{
	char str[50] = "This is a string!";

	printf("\033[1;33m");
	printf("EX01 :\n");
	printf("\033[1;0m");

	printf("\n");
	ft_putstr(str);
	printf("\n\n");
}

void	test_ex02(void)
{
	printf("\033[1;33m");
	printf("EX02 :\n\n");
	printf("\033[1;0m");
	
	printf("\n");
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n\n");
}

void	test_ex03(void)
{
	char str[30] = "  ---+--+1234ab567";
	int	retour = 0;

	printf("\033[1;33m");
	printf("EX03 :\n\n");
	printf("\033[1;0m");
	
	retour = ft_atoi(str);

	printf("str = %s\nretour = %d\n\n", str, retour);
}

int	main(void)
{
	int i = 0;
	while (i < 80) {printf("*"); i++;} printf("\n\n"); i = 0;
	test_ex00();
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	test_ex01();
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	test_ex02();
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	test_ex03();
	while (i < 80) {printf("*"); i++;} i = 0;
}
