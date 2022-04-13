/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:01:25 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/03 19:45:58 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

void	test_ex00(void)
{
	int nb = 5;
	int retour = 0;

	printf("\033[1;33m");
	printf("EX00 :\n\n");
	printf("\033[1;0m");

	retour = ft_iterative_factorial(nb);

	printf("nb = %d\n", nb);
	printf("retour = %d\n\n", retour);
}

void	test_ex01(void)
{
	int nb = 5;
	int retour = 0;

	printf("\033[1;33m");
	printf("EX01 :\n\n");
	printf("\033[1;0m");

	retour = ft_recursive_factorial(nb);

	printf("nb = %d\n", nb);
	printf("retour = %d\n\n", retour);
}

void	test_ex02(void)
{
	int	nb = 5;
	int	power = 2;
	int	retour = 0;

	printf("\033[1;33m");
	printf("EX02 :\n\n");
	printf("\033[1;0m");

	retour = ft_iterative_power(nb, power);
	printf("nb = %d\npower = %d\nretour = %d\n\n", nb, power, retour);
}

void	test_ex03(void)
{
	int	nb = 5;
	int	power = 2;
	int	retour = 0;

	printf("\033[1;33m");
	printf("EX03 :\n\n");
	printf("\033[1;0m");

	retour = ft_recursive_power(nb, power);
	printf("nb = %d\npower = %d\nretour = %d\n\n", nb, power, retour);
}

void	test_ex04(void)
{
	int	index = 8;
	int	retour = 0;

	printf("\033[1;33m");
	printf("EX04 :\n\n");
	printf("\033[1;0m");

	retour = ft_fibonacci(index);
	printf("index = %d\nretour = %d\n\n", index, retour);
}

void	test_ex05(void)
{
	int	nb = 25;
	int	retour = 0;

	printf("\033[1;33m");
	printf("EX05 :\n\n");
	printf("\033[1;0m");

	retour = ft_sqrt(nb);
	printf("nb = %d\nretour = %d\n\n", nb, retour);
}

void	test_ex06(void)
{
	int	nb = 17;
	int	retour = 0;

	printf("\033[1;33m");
	printf("EX06 :\n\n");
	printf("\033[1;0m");

	retour = ft_is_prime(nb);
	printf("nb = %d\nretour = %d\n\n", nb, retour);
}

void	test_ex07(void)
{
	int	nb = 17;
	int	retour = 0;

	printf("\033[1;33m");
	printf("EX07 :\n\n");
	printf("\033[1;0m");

	retour = ft_find_next_prime(nb);
	printf("nb = %d\nretour = %d\n\n", nb, retour);
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
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	test_ex04();
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	test_ex05();
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	test_ex06();
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	test_ex07();
	while (i < 80) {printf("*"); i++;} i = 0;
}
