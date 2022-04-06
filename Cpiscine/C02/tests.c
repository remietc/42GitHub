/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:01:25 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/24 00:23:32 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>
#include <stdio.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"

void	test_ex00(void)
{
	char dest[13] = "Hello world!";
	char src[15] = "Bonjour popol!";
	char dest1[13] = "Hello world!";
	char src1[15] = "Bonjour popol!";


	printf("\033[1;33m");
	printf("EX00 :\n\n");
	printf("\033[1;0m");

	printf("Avant ft_strcpy :\n\nsrc = %s\ndest = %s\n\n", src, dest);
	ft_strcpy(dest, src);
	printf("Apres ft_strcpy :\n\nsrc = %s\ndest = %s\n\n", src, dest);
	printf("Avant strcpy :\n\nsrc1 = %s\ndest1 = %s\n\n", src1, dest1);
	strcpy(dest1, src1);
	printf("Avec strcpy :\n\nsrc1 = %s\ndest1 = %s\n\n", src1, dest1);

}

void	test_ex01(void)
{
	char dest[13] = "Hello world!";
	char src[15] = "Bonjour popol!";
	char dest1[13] = "Hello world!";
	char src1[15] = "Bonjour popol!";


	printf("\033[1;33m");
	printf("EX01 :\n\n");
	printf("\033[1;0m");

	printf("Avant ft_strncpy :\n\nsrc = %s\ndest = %s\n\n", src, dest);
	ft_strncpy(dest, src, 13);
	printf("Apres ft_strncpy :\n\nsrc = %s\ndest = %s\n\n", src, dest);
	printf("Avant strncpy :\n\nsrc1 = %s\ndest1 = %s\n\n", src1, dest1);
	strncpy(dest1, src1, 13);
	printf("Avec strncpy :\n\nsrc1 = %s\ndest1 = %s\n\n", src1, dest1);

}

void	test_ex02(void)
{
	int b = 0;
	char str0[1] = "";
	char str1[11] = "HelloWorld";
	char str2[13] = "Hello World!";

	printf("\033[1;33m");
	printf("EX02 :\n\n");
	printf("\033[1;0m");

	b = ft_str_is_alpha(str0);
	printf("str = %s\n return = %d\n\n", str0, b);

	b = ft_str_is_alpha(str1);
	printf("str = %s\n return = %d\n\n", str1, b);

	b = ft_str_is_alpha(str2);
	printf("str = %s\n return = %d\n\n", str2, b);
}

void	test_ex03(void)
{
	int b = 0;
	char str0[1] = "";
	char str1[11] = "0123456789";
	char str2[13] = "Hello World!";

	printf("\033[1;33m");
	printf("EX03 :\n\n");
	printf("\033[1;0m");

	b = ft_str_is_numeric(str0);
	printf("str = %s\n return = %d\n\n", str0, b);

	b = ft_str_is_numeric(str1);
	printf("str = %s\n return = %d\n\n", str1, b);

	b = ft_str_is_numeric(str2);
	printf("str = %s\n return = %d\n\n", str2, b);
}

void	test_ex04(void)
{
	int b = 0;
	char str0[1] = "";
	char str1[11] = "helloworld";
	char str2[13] = "HelloWorld";

	printf("\033[1;33m");
	printf("EX04 :\n\n");
	printf("\033[1;0m");

	b = ft_str_is_lowercase(str0);
	printf("str = %s\n return = %d\n\n", str0, b);

	b = ft_str_is_lowercase(str1);
	printf("str = %s\n return = %d\n\n", str1, b);

	b = ft_str_is_lowercase(str2);
	printf("str = %s\n return = %d\n\n", str2, b);
}

void	test_ex05(void)
{
	int b = 0;
	char str0[1] = "";
	char str1[11] = "HELLOWORLD";
	char str2[13] = "HelloWorld";

	printf("\033[1;33m");
	printf("EX05 :\n\n");
	printf("\033[1;0m");

	b = ft_str_is_uppercase(str0);
	printf("str = %s\n return = %d\n\n", str0, b);

	b = ft_str_is_uppercase(str1);
	printf("str = %s\n return = %d\n\n", str1, b);

	b = ft_str_is_uppercase(str2);
	printf("str = %s\n return = %d\n\n", str2, b);
}

void	test_ex06(void)
{
	int b = 0;
	char str0[1] = "";
	char str1[16] = "Hello World!123";
	char str2[2] = "\n";

	printf("\033[1;33m");
	printf("EX06 :\n\n");
	printf("\033[1;0m");

	b = ft_str_is_printable(str0);
	printf("str = %s\n return = %d\n\n", str0, b);

	b = ft_str_is_printable(str1);
	printf("str = %s\n return = %d\n\n", str1, b);

	b = ft_str_is_printable(str2);
	printf("str = %s\n return = %d\n\n", str2, b);
}

void	test_ex07(void)
{
	char str[13] = "Hello World!";

	printf("\033[1;33m");
	printf("EX07 :\n\n");
	printf("\033[1;0m");

	printf("Avant ft_strupcase :\n\nstr = %s\n\n", str);
	ft_strupcase(str);
	printf("Apres ft_strupcase :\n\nstr = %s\n\n", str);
}

void	test_ex08(void)
{
	char str[13] = "hELLO wORLD!";

	printf("\033[1;33m");
	printf("EX08 :\n\n");
	printf("\033[1;0m");

	printf("Avant ft_strlowcase :\n\nstr = %s\n\n", str);
	ft_strlowcase(str);
	printf("Apres ft_strlowcase :\n\nstr = %s\n\n", str);
}

void	test_ex09(void)
{
	char str[40] = "RZ/A8LRT4[K)*KAA@7j(5?N[^FYw]EB";

	printf("\033[1;33m");
	printf("EX09 :\n\n");
	printf("\033[1;0m");

	printf("Avant ft_strcapitalize :\n\nstr = %s\n\n", str);
	ft_strcapitalize(str);
	printf("Apres ft_strcapitalize :\n\nstr = %s\n\n", str);
}

void	test_ex10(void)
{
	char src[13] = "Salut";
	char dest[15] = "Bonjour popol!";
	unsigned int n = 0;

	printf("\033[1;33m");
	printf("EX10 :\n\n");
	printf("\033[1;0m");

	printf("Avant ft_strlcpy :\n\nsrc = %s\ndest = %s\nn = %d\n\n", src, dest, n);
	n = ft_strlcpy(dest, src, 0);
	printf("Apres ft_strlcpy :\n\nsrc = %s\ndest = %s\nn = %d\n\n", src, dest, n);
}

void	test_ex11(void)
{
	char str[35] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,127,0};

	printf("\033[1;33m");
	printf("EX11 :\n\n");
	printf("\033[1;0m");

	printf("Avant ft_putstr_non_printable (en décimal):\n\n");
	printf("1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,127\n\n");
	printf("Apres ft_putstr_non_printable (en Hexa):\n\n");

	ft_putstr_non_printable(str);

	printf("\n\n");
}

int main()
{
	test_ex00();
	test_ex01();
	test_ex02();
	test_ex03();
	test_ex04();
	test_ex05();
	test_ex06();
	test_ex07();
	test_ex08();
	test_ex09();
	test_ex10();
	test_ex11();
}
