/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:01:25 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/01 18:47:34 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"

void	test_ex00(void)
{
	int retour = 0;
	char s1[10] = "ab";
	char s2[10] = "ac";

	printf("\033[1;33m");
	printf("EX00 :\n\n");
	printf("\033[1;0m");
	
	printf("s1 = %s\ns2 = %s\n\n", s1, s2);

	printf("Avec ft_strcmp\n\n");
	retour = ft_strcmp(s1, s2);
	printf("retour = %d\n\n", retour);

	printf("Avec strcmp\n\n");
	retour = strcmp(s1, s2);
	printf("retour = %d\n\n", retour);
}

void	test_ex01(void)
{
	int retour = 0;
	int	n = 1;
	char s1[10] = "bkjbwj";
	char s2[10] = "zljfal";

	printf("\033[1;33m");
	printf("EX01 :\n\n");
	printf("\033[1;0m");

	printf("s1 = %s\ns2 = %s\n", s1, s2);
	printf("n = %d\n\n", n);
	
	printf("Avec ft_strncmp\n\n");
	retour = ft_strncmp(s1, s2, n);
	printf("retour = %d\n\n", retour);

	printf("Avec strncmp\n\n");
	retour = strncmp(s1, s2, n);
	printf("retour = %d\n\n", retour);

}

void	test_ex02(void)
{
	char src[15] = "Bonjour Popol!";
	char dest[30] = "Hello World!";

	printf("\033[1;33m");
	printf("EX02 :\n\n");
	printf("\033[1;0m");
	
	printf("Avant ft_strcat :\n\n");
	printf("src = %s\ndest = %s\n\n", src, dest);

	ft_strcat(dest, src);

	printf("Apres ft_strcat :\n\n");
	printf("src = %s\ndest = %s\n\n", src, dest);
}

void	test_ex03(void)
{
	unsigned int nb = 14;
	char src[15] = "Bonjour Popol!";
	char dest[30] = "Hello World!";

	printf("\033[1;33m");
	printf("EX03 :\n\n");
	printf("\033[1;0m");
	
	printf("Avant ft_strncat :\n\n");
	printf("src = %s\ndest = %s\n", src, dest);
	printf("nb = %d\n\n", nb);

	ft_strncat(dest, src, nb);

	printf("Apres ft_strncat :\n\n");
	printf("src = %s\ndest = %s\n", src, dest);
}

void	test_ex04(void)
{
	char str[17] = "Salut les amis!";
	char to_find[4] = "les";

	printf("\033[1;33m");
	printf("EX04 :\n\n");
	printf("\033[1;0m");

	printf("Avec ft_strstr :\n\n");
	printf("str = %s\nto_find = %s\n", str, to_find);
	printf("retour = %s\n\n", ft_strstr(str, to_find));

	printf("Avec strstr :\n\n");
	printf("str = %s\nto_find = %s\n", str, to_find);
	printf("retour = %s\n\n", strstr(str, to_find));
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
	while (i < 80) {printf("*"); i++;} i = 0;
}
