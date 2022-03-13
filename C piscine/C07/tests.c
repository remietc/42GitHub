/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:01:25 by retcheba          #+#    #+#             */
/*   Updated: 2022/03/10 12:30:56 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"

void	test_ex00(void)
{
	char src[50] = "Salut les amis";
	char *dest;
	
	printf("\033[1;33m");
	printf("EX00 :\n\n");
	printf("\033[1;0m");

	dest = ft_strdup(src);
	printf("src = %s\ndest = %s\n\n", src, dest);

}

void	test_ex01(void)
{
	int	min = 0;
	int max = 10;
	int *dest;
	int i = 0;

	printf("\033[1;33m");
	printf("EX01 :\n\n");
	printf("\033[1;0m");

	dest = ft_range(min, max);
	printf("min = %d\nmax = %d\ndest = ", min, max);
	while (i < (max - min))
	{
		printf("%d ", dest[i]);
		i++;
	}
	printf("\n\n");
}

void	test_ex02(void)
{
	int	min = 0;
	int max = 10;
	int *range;
	int i = 0;
	int	retour = 0;

	printf("\033[1;33m");
	printf("EX02 :\n\n");
	printf("\033[1;0m");

	retour = ft_ultimate_range(&range, min, max);
	printf("min = %d\nmax = %d\nretour = %d\n", min, max, retour);
	printf("range = ");
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n\n");
}

void	test_ex03(void)
{
	int		size = 3;
	char	*strs[3] = {"test1","test2","test3"};
	char	sep[1] = " ";
	char	*str;

	printf("\033[1;33m");
	printf("EX03 :\n\n");
	printf("\033[1;0m");

	str = ft_strjoin(size, strs, sep);
	printf("%s$\n\n", str);
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
