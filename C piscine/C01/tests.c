/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:31:52 by dguet             #+#    #+#             */
/*   Updated: 2022/02/20 18:35:13 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ex03/ft_div_mod.c"
#include"ex04/ft_ultimate_div_mod.c"
#include"ex05/ft_putstr.c"
#include"ex06/ft_strlen.c"
#include"ex07/ft_rev_int_tab.c"
#include"ex08/ft_sort_int_tab.c"

void	ex03(void);
void	ex04(void);
void	ex05(void);
void	ex06(void);
void	ex07(void);
void	ex08(void);

int main(void)
{
	ex03();
	ex04();
	ex05();
	ex06();
	ex07();
	ex08();
}

void	ex03(void)
{
	int div;
	int mod;
	int *p_div;
	int *p_mod;
	int a;
	int b;

	a = 12;
	b = 25;
	p_div = &div;
	p_mod = &mod;
	printf("%s", "TESTS EX03 :\n");
	printf("\033[1;33m");
	ft_div_mod(a, b, p_div, p_mod);
	printf("%d %d", div, mod );
	printf("%s", "$\n\n");
	printf("\033[1;0m");
}

void	ex04(void)
{
	int a;
	int b;
	int *p_a;
	int *p_b;

	a = 12;
	b = 3;
	p_a = &a;
	p_b = &b;
	
	printf("%s", "TESTS EX04 :\n");
	//print color yellow
	printf("\033[1;33m");
	printf("%d %d \n", a, b);	
	ft_ultimate_div_mod(p_a, p_b);
	//print color
	printf("\033[1;32m");
	printf("%d %d \n", a, b);
	//print color normal
	printf("\033[1;0m");
	printf("%s", "$\n");
}

void	ex05(void)
{
	char string05[19] = "This is a string !";
	
	printf("%s", "TESTS EX05 :\n");
	ft_putstr(string05);
	printf("%s", "$\n\n");
}

void	ex06(void)
{ 
	char string06[12] = "Test string";
	int result06;
	
	printf("%s", "TESTS EX06 :\n");
	result06 = ft_strlen(string06);
	printf("%d %s", result06, "$\n\n");
}

void	ex07(void)
{
	int tab07[10] = {0,1,2,3,4,5,6,7,8,9};
	int iii;

	printf("%s", "TESTS EX07 :\n");
	ft_rev_int_tab(tab07, 10);
	iii = 0;
	while(iii < 10 )
	{
		printf("%d", tab07[iii]);
		iii++;
	}
	printf("%s", "$\n\n");
}

void	ex08(void)
{
	int cpt8;
	int size = 10;
	int tab[10] = {5,3,8,4,12,5,8,1};
	
	printf("%s", "TESTS EX08 :\n");
//show unsorted array
	cpt8 = 0;
	while(cpt8 < 10)
	{
		printf("%d %s", tab[cpt8], " ");
		cpt8++;
	}
	printf("%s", "\n" );
//show sorted array
	ft_sort_int_tab(tab, size);
	cpt8 = 0;
	while(cpt8 < 10)
	{
		printf("%d %s", tab[cpt8], " ");
		cpt8++;
	}
	printf("%s", "\n" );
	
}

