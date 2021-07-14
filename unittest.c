/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unittest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bagovic <bagovic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:52:34 by bagovic           #+#    #+#             */
/*   Updated: 2021/07/12 18:45:37 by bagovic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void	test_memset(char *str, int value, size_t length)
{
	char	str_memset[50];
	char	str_ft_memset[50];
	int		result;

	printf("TEST_MEMSET:\t");
	strcpy(str_memset, str);
	strcpy(str_ft_memset, str);
	memset(str_memset, value, length);
	ft_memset(str_ft_memset, value, length);
	result = strcmp(str_memset, str_ft_memset);
	if (result == 0)
	{
		printf("OK.\n");
	}
	else
	{
		printf("KO.\n");
	}
}

void	test_bzero(void *s, size_t n)
{
	char	str_bzero[50];
	char	str_ft_bzero[50];
	int		result;

	printf("TEST_BZERO:\t");
	strcpy(str_bzero, s);
	strcpy(str_ft_bzero, s);
	bzero(str_bzero, n);
	ft_bzero(str_ft_bzero, n);
	result = strcmp(str_bzero, str_ft_bzero);
	if (result == 0)
	{
		printf("OK.\n");
	}
	else
	{
		printf("KO.\n");
	}
}

void	test_memcpy(void *dest, const void *src, size_t n)
{
	void	*dest_ft;
	int		result;

	printf("TEST_MEMCPY:\t");
	dest_ft = dest;
	memcpy(&dest, &src, n);
	ft_memcpy(&dest_ft, &src, n);
	result = strcmp(dest, dest_ft);
	if (result == 0)
		printf("OK.\n");
	else
		printf("KO.\n");
}

void	test_isalpha(int c)
{
	int	result_isalpha;
	int	result_ft_isalpha;

	printf("TEST_ISALPHA:\t");
	result_isalpha = isalpha(c);
	result_ft_isalpha = ft_isalpha(c);
	if (result_isalpha == result_ft_isalpha)
		printf("OK.\n");
	else
		printf("KO.\n");
}

void	test_isdigit(int c)
{
	int	result_isdigit;
	int	result_ft_isdigit;

	printf("TEST_ISDIGIT:\t");
	result_isdigit = isdigit(c);
	result_ft_isdigit = ft_isdigit(c);
	if (result_isdigit == result_ft_isdigit)
		printf("OK.\n");
	else
		printf("KO.\n");
}

void	test_isalnum(int c)
{
	int	result_isalnum;
	int	result_ft_isalnum;

	printf("TEST_ISALNUM:\t");
	result_isalnum = isalnum(c);
	result_ft_isalnum = ft_isalnum(c);
	if (result_isalnum == result_ft_isalnum)
		printf("OK.\n");
	else
		printf("KO.\n");
}

void	test_isascii(int c)
{
	int	result_isascii;
	int	result_ft_isascii;

	printf("TEST_ISASCII:\t");
	result_isascii = isascii(c);
	result_ft_isascii = ft_isascii(c);
	if (result_isascii == result_ft_isascii)
		printf("OK.\n");
	else
		printf("KO.\n");
}

void	test_isprint(int c)
{
	int	result_isprint;
	int	result_ft_isprint;

	printf("TEST_ISPRINT:\t");
	result_isprint = isprint(c);
	result_ft_isprint = ft_isprint(c);
	if (result_isprint == result_ft_isprint)
		printf("OK.\n");
	else
		printf("KO.\n");
}

void	test_strlen(const char *s)
{
	int	result_strlen;
	int	result_ft_strlen;

	printf("TEST_STRLEN:\t");
	result_strlen = strlen(s);
	result_ft_strlen = ft_strlen(s);
	if (result_ft_strlen == result_strlen)
		printf("OK.\n");
	else
		printf("KO.\n");
}

void	test_memmove(void *dest, const void *src  , size_t n)
{
	char	str_memmove[50];
	char	str_ft_memmove[50];
	int		result;

	printf("TEST_MEMMOVE:\t");
	strcpy(str_memmove, dest);
	strcpy(str_ft_memmove, dest);

	memmove(str_memmove, src, n);
	ft_memmove(str_ft_memmove, src, n);

	result = strcmp(str_memmove, str_ft_memmove);
	if (result == 0)
	{
		printf("OK.\n");
	}
	else
	{
		printf("KO.\n");
	}
}

void	test_strlcpy(const char *src, size_t size)
{
	char	dest_strlcpy[509];
	char	dest_ft_strlcpy[509];
	int		result;

	printf("TEST_STRLCPY:\t");
	
	strlcpy(dest_strlcpy, src, size);
	ft_strlcpy(dest_ft_strlcpy, src, size);
	result = strcmp(dest_strlcpy, dest_ft_strlcpy);
	if (result == 0)
		printf("OK.\n");
	else
		printf("KO.\n");
}

void	test_strlcat(char *dst, const char *src, size_t size)
{
	char	dst_strlcat[509];
	char	dst_ft_strlcat[509];
	int		result;

	printf("TEST_STRLCAT:\t");
	strcpy(dst_strlcat, dst);
	strcpy(dst_ft_strlcat, dst);

	strlcat(dst_strlcat, src, size);
	ft_strlcat(dst_ft_strlcat, src, size);
	result = strcmp(dst_strlcat, dst_ft_strlcat);
	if (result == 0)
		printf("OK.\n");
	else
		printf("KO.\n");
}
void	test_strlcat_ft(char *dst, const char *src, size_t size)
{
	strlcat(dst, src, size);
	puts(dst);
}

void	run_all_tests(void)
{
	printf("---BEGIN UNIT TEST---\n");
	test_memset("This is string.h library function", 42, 5);
	test_memset("This is string.h library function", 36, 7);
	test_memset("This is string.h library function", 119, 10);
	printf("\n");
	test_bzero("This is string.h library function", 5);
	test_bzero("This is string.h library function", 40);
	test_bzero("This is string.h library function", 0);
	printf("\n");
	test_memcpy("Hello", "World", 3);
	test_memcpy("Hello", "World", strlen("World" - 1));
	test_memcpy("Hello", "World", 0);
	printf("\n");
	test_isalpha(96);
	test_isalpha(112);
	test_isalpha(123);
	test_isalpha(64);
	test_isalpha(66);
	test_isalpha(91);
	test_isalpha(54);
	test_isalpha(1);
	printf("\n");
	test_isdigit(47);
	test_isdigit(58);
	test_isdigit(55);
	test_isdigit(31);
	printf("\n");
	test_isalnum(47);
	test_isalnum(50);
	test_isalnum(58);
	test_isalnum(64);
	test_isalnum(70);
	test_isalnum(91);
	test_isalnum(96);
	test_isalnum(100);
	test_isalnum(123);
	test_isalnum(1230);
	test_isalnum(-1230);
	printf("\n");
	test_isascii(13423);
	test_isascii(134);
	test_isascii(0);
	test_isascii(1);
	test_isascii(127);
	test_isascii(128);
	test_isascii(-1);
	test_isascii(-42314);
	printf("\n");
	test_isprint(0);
	test_isprint(31);
	test_isprint(32);
	test_isprint(33);
	test_isprint(64);
	test_isprint(126);
	test_isprint(127);
	test_isprint(128);
	printf("\n");
	test_strlen("Hello World!");
	test_strlen("Hello\0 World!");
	test_strlen("\0Hello World!");
	test_strlen("");
	printf("\n");
	test_memmove("Hello", "World", 2);
	test_memmove("Hello", "World", 10);
	test_memmove("Hello", "World", 0);
	test_memmove("Hello", "World", 5);
	printf("\n");
	test_strlcpy("Hello, World!", 5);
	test_strlcpy("lorem", 15);
	test_strlcpy("Hello\0, World!", 10);
	test_strlcpy("Hello, World", 0);
	printf("\n");
	char	dst[150]; char	src[20];
	strcpy(dst, "rrrrrrrrrrrrrrr"); strcpy(src, "lorem ipsum dolor sit amet");
	test_strlcat(dst, src, 5);
	strcpy(dst, "Hello"); strcpy(src, "World");
	test_strlcat(dst, src, 7);
	strcpy(dst, "Hello"); strcpy(src, "World");
	test_strlcat(dst, src, 1);
	strcpy(dst, "Hello"); strcpy(src, "World");
	test_strlcat(dst, src, 20);
	printf("---END UNIT TEST---\n");
}
