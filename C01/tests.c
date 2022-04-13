/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:31:52 by dguet             #+#    #+#             */
/*   Updated: 2022/02/28 17:08:36 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ex03/ft_div_mod.c"
#include"ex04/ft_ultimate_div_mod.c"
#include"ex05/ft_putstr.c"
#include"ex06/ft_strlen.c"
#include"ex07/ft_rev_int_tab.c"
#include"ex08/ft_sort_int_tab.c"

void	ex03(void)
{
	int div;
	int mod;
	int a;
	int b;

	a = 25;
	b = 5;
	div = 0;
	mod = 0;
	
	printf("\033[1;33m");
	printf("EX03 :\n\n");
	printf("\033[1;0m");

	ft_div_mod(a, b, &div, &mod);

	printf("a = %d\nb = %d\n\ndiv = %d\nmod = %d\n\n", a, b, div, mod);
}

void	ex04(void)
{
	int a;
	int b;

	a = 25;
	b = 5;

	printf("\033[1;33m");
	printf("EX04 :\n\n");
	printf("\033[1;0m");

	printf("Avant ft_ultimate_div_mod :\n\n");
	printf("a = %d\nb = %d\n\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("Apres ft_ultimate_div_mod :\n\n");
	printf("a = %d\nb = %d\n\n", a, b);

}

void	ex05(void)
{
	char str[19] = "This is a string !";
	
	printf("\033[1;33m");
	printf("EX05 :\n");
	printf("\033[1;0m");

	printf("\n");
	ft_putstr(str);
	printf("$\n\n");
}

void	ex06(void)
{ 
	char str[12] = "Test_string";
	int retour;

	printf("\033[1;33m");
	printf("EX06 :\n\n");
	printf("\033[1;0m");

	retour = ft_strlen(str);
	printf("str = %s\nretour = %d\n\n", str, retour);
}

void	ex07(void)
{
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};
	int i = 0;

	printf("\033[1;33m");
	printf("EX07 :\n\n");
	printf("\033[1;0m");

	printf("Avant ft_rev_int_tab :\n\n");
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n\n");

	ft_rev_int_tab(tab, 10);

	printf("Apres ft_rev_int_tab :\n\n");
	i = 0;
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n\n");
}

void	ex08(void)
{
	int i;
	int tab[10] = {5,3,8,4,12,5,8,1};
	
	printf("\033[1;33m");
	printf("EX08 :\n\n");
	printf("\033[1;0m");

	printf("Avant ft_sort_int_tab :\n\n");
	i = 0;
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n\n");

	ft_sort_int_tab(tab, 10);

	printf("Apres ft_sort_int_tab :\n\n");
	i = 0;
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n\n");

}

int main(void)
{
	int i = 0;
	while (i < 80) {printf("*"); i++;} printf("\n\n"); i = 0;
	ex03();
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	ex04();
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	ex05();
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	ex06();
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	ex07();
	while (i < 80) {printf("_"); i++;} printf("\n\n"); i = 0;
	ex08();
	while (i < 80) {printf("*"); i++;} i = 0;
}
