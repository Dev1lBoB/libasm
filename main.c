/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpersimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 19:38:57 by wpersimm          #+#    #+#             */
/*   Updated: 2021/03/28 05:26:33 by wpersimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_strlen_check(void)
{
	char	*ar;
	printf("\n\n<<<<<<<<<<<___ft_strlen___>>>>>>>>>>>\n\n");
	ar = "1234567890";
	printf("\nLINE = %s\n\n", ar);
	printf("ORIG = %zu\n", strlen(ar));
	printf("MINE = %zu\n", ft_strlen(ar));
	ar = "";
	printf("\nLINE = %s\n\n", ar);
	printf("ORIG = %zu\n", strlen(ar));
	printf("MINE = %zu\n", ft_strlen(ar));
	ar = "waesrdtfyhujikoijuhytrdeswasrdtfyuijokplokiuytrfyuhijokpl[;'lpkoiuhygtfrdfyguhijokpl[;'lpkoijuhytfrdfyguhijokpl[pokiuytryguijopl[;lpoiuytryguhijokplkoijhugyftrdfyguhijokpiuytrdfyguhijokplokiuytfrfyguhijokijuhygtfrdfyghuijokplokiuhygtfrdfyguhijokpijhugytfrdfgyhuijokplokijuhygtfrfyguhijoklpokijuhygtfuhijokplokijuhygtguhijkolpokijuhygtfguhijkolp'okijuhygtfguhjikolkiuytfrfguhijokl\n\n";
	printf("\nLINE = %s\n\n", ar);
	printf("ORIG = %zu\n", strlen(ar));
	printf("MINE = %zu\n", ft_strlen(ar));
}

void	ft_strcmp_check(void)
{
	char	*ar;
	char	*ar2;
	char	*ar3;

	printf("\n\n<<<<<<<<<<<___ft_strcmp___>>>>>>>>>>>\n\n");
	ar = "1234567890";
	ar2 = "1234567890";
	printf("\nLINE1 = %s\nLINE2 = %s\n\n", ar, ar2);
	printf("MINE = %d\n", ft_strcmp(ar, ar2));
	printf("ORIG = %d\n", strcmp(ar, ar2));
	ar = "12345";
	ar2 = "1234567890";
	printf("\nLINE1 = %s\nLINE2 = %s\n\n", ar, ar2);
	printf("MINE = %d\n", ft_strcmp(ar, ar2));
	printf("ORIG = %d\n", strcmp(ar, ar2));
	ar = "1234567890";
	ar2 = "12345";
	printf("\nLINE1 = %s\nLINE2 = %s\n\n", ar, ar2);
	printf("MINE = %d\n", ft_strcmp(ar, ar2));
	printf("ORIG = %d\n", strcmp(ar, ar2));
	ar = "";
	ar2 = "12345";
	printf("\nLINE1 = %s\nLINE2 = %s\n\n", ar, ar2);
	printf("MINE = %d\n", ft_strcmp(ar, ar2));
	printf("ORIG = %d\n", strcmp(ar, ar2));
	ar = "12345";
	ar2 = "";
	printf("\nLINE1 = %s\nLINE2 = %s\n\n", ar, ar2);
	printf("MINE = %d\n", ft_strcmp(ar, ar2));
	printf("ORIG = %d\n", strcmp(ar, ar2));
	ar = "";
	ar2 = "";
	printf("\nLINE1 = %s\nLINE2 = %s\n\n", ar, ar2);
	printf("MINE = %d\n", ft_strcmp(ar, ar2));
	printf("ORIG = %d\n", strcmp(ar, ar2));
}

void	ft_strcpy_check(void)
{
	char	*ar;
	char	*ar3 = malloc(11);
	char	*ar4 = malloc(11);

	printf("\n\n<<<<<<<<<<<___ft_strcpy___>>>>>>>>>>>\n\n");
	ar = "1234567890";
	printf("\nLINE = %s\n\n", ar);
	printf("MINE = %s\n", ft_strcpy(ar3, ar));
	printf("ORIG = %s\n", strcpy(ar4, ar));
	ar = "";
	printf("\nLINE = %s\n\n", ar);
	printf("MINE = %s\n", ft_strcpy(ar3, ar));
	printf("ORIG = %s\n", strcpy(ar4, ar));
	ar = "qwaersdtfyguhijokpl[;]'[;plkoijhugytfrdeswarsdtfyguhijokpl[;'lpkoijuhgytfrdiedftgyuhijokijhugyftrdedtfyguhijokpijuhygftdresdtfyguhijoihugyftdrsdtfyguhiojpkjihugyftdryfguihojpkjihugyftdryfugihojpkjihugyftdyfugihojpiugytfyguhijokpl[;lpoijuhygtfguhijop";
	printf("\nLINE = %s\n\n", ar);
	printf("MINE = %s\n", ft_strcpy(ar3, ar));
	printf("ORIG = %s\n", strcpy(ar4, ar));
}

void	ft_strdup_check(void)
{
	char	*ar;
	char	*ar3;
	char	*ar4;

	printf("\n\n<<<<<<<<<<<___ft_strdup___>>>>>>>>>>>\n\n");
	ar = "1234567890";
	printf("\nLINE = %s\n\n", ar);
	printf("MINE = %s\n", ar3 = ft_strdup(ar));
	free(ar3);
	printf("ORIG = %s\n", ar4 = strdup(ar));
	free(ar4);
	ar = "23y22eyhbyfghoihugywefuihjowekfjihwoeufoiwp	opwjefheowqi;p3kfwopehif;w	3kfjopwehifl;wkopwhefiphlwefjtguhiojphugyftguiopuhgyfdtyugiophugyfhcyu6jhgewfrghtjykuilukyjtrewrukilugyftdrewrtyukilo;uytrewrtyuiouytrererteyuiopihi";
	printf("\nLINE = %s\n\n", ar);
	printf("MINE = %s\n", ar3 = ft_strdup(ar));
	printf("ORIG = %s\n", ar4 = strdup(ar));
	free(ar4);
	free(ar3);
	ar = "";
	printf("\nLINE = %s\n\n", ar);
	printf("MINE = %s\n", ar3 = ft_strdup(ar));
	printf("ORIG = %s\n", ar4 = strdup(ar));
}

void	ft_read_check(void)
{
	char	ar5[1000];
	int		fd;

	printf("\n\n<<<<<<<<<<<___ft_read___>>>>>>>>>>>\n\n");
	fd = open("main.c", O_RDONLY);
	printf("\nFILE = main.c\nSIZE = 500\n\n");
	ft_read(fd, ar5, 500);
	printf("\nMINE = %s\n\n", ar5);
	close(fd);
	bzero(ar5, sizeof(ar5));
	fd = open("main.c", O_RDONLY);
	read(fd, ar5, 500);
	printf("\nORIG = %s\n\n", ar5);
	close(fd);
	bzero(ar5, sizeof(ar5));
	printf("\nFILE = ft_strlen.s.c\nSIZE = 7\n\n");
	fd = open("ft_strlen.s", O_RDONLY);
	ft_read(fd, ar5, 7);
	printf("\nMINE = %s\n\n", ar5);
	close(fd);
	bzero(ar5, sizeof(ar5));
	fd = open("ft_strlen.s", O_RDONLY);
	read(fd, ar5, 7);
	printf("\nORIG = %s\n\n", ar5);
	close(fd);
	bzero(ar5, sizeof(ar5));
	printf("\nFILE = ft_strdup.s.c\nSIZE = 0\n\n");
	fd = open("ft_strdup.s", O_RDONLY);
	ft_read(fd, ar5, 0);
	printf("\nMINE = %s\n\n", ar5);
	bzero(ar5, sizeof(ar5));
	close(fd);
	fd = open("ft_strdup.s", O_RDONLY);
	read(fd, ar5, 0);
	printf("\nORIG = %s\n\n", ar5);
}

void	ft_write_check(void)
{
	char	*ar;
	printf("\n\n<<<<<<<<<<<___ft_write___>>>>>>>>>>>\n\n");
	ar = "1234567890";
	write(1, "\n", 1);
	write(1, "LINE = ", 7);
	write(1, ar, strlen(ar));
	write(1, "\n\n", 2);
	write(1, "MINE = ", 7);
	ft_write(1, ar, ft_strlen(ar));
	write(1, "\n", 1);
	write(1, "ORIG = ", 7);
	write(1, ar, strlen(ar));
	write(1, "\n", 1);
	ar = "";
	write(1, "\n", 1);
	write(1, "LINE = ", 7);
	write(1, ar, strlen(ar));
	write(1, "\n\n", 2);
	write(1, "MINE = ", 7);
	ft_write(1, ar, ft_strlen(ar));
	write(1, "\n", 1);
	write(1, "ORIG = ", 7);
	write(1, ar, strlen(ar));
	write(1, "\n", 1);
	ar = "dfghuijokpijhugyftdrfyguhijopkijhuygftdrfyghijokpijhugyftdghjkopijhugfhjkopjhiohrqgiqerhgoihqeoighoqiejgpj	ogjh'qohrgoihoeqihroi'hgeoi'hreiohioerhoiehoqhgvjkljhbknl;jhbknlm;jhgghjbknlm;jihugyftdfghjklp[ojihugyfghjklkojihgfghv";
	write(1, "\n", 1);
	write(1, "LINE = ", 7);
	write(1, ar, strlen(ar));
	write(1, "\n\n", 2);
	write(1, "MINE = ", 7);
	ft_write(1, ar, ft_strlen(ar));
	write(1, "\n", 1);
	write(1, "ORIG = ", 7);
	write(1, ar, strlen(ar));
	write(1, "\n", 1);
}

void	ft_list_size_check(void)
{
	t_list list1;
	t_list list2;
	t_list list3;
	t_list list4;
	t_list list5;

	list1.data = "lol";
	list2.data = "kek";
	list3.data = "rofl";
	list4.data = "lmao";
	list5.data = "ajaja";
	list1.next = &list2;
	list2.next = &list3;
	list3.next = &list4;
	list4.next = &list5;
	list5.next = NULL;
	printf("size = %d\n", ft_list_size(&list1));
	printf("size = %d\n", ft_list_size(&list3));
	printf("size = %d\n", ft_list_size(&list5));
	printf("size = %d\n", ft_list_size(NULL));
}

void	ft_list_push_front_check(void)
{
	t_list *list1 = NULL;
	char	*data = "data";

	ft_list_push_front(&list1, data);
	printf("list1->data = %s\n", list1->data);
	printf("size = %d\n", ft_list_size(list1));
	data = "atad";
	ft_list_push_front(&list1, data);
	printf("list1->data = %s\n", list1->data);
	printf("size = %d\n", ft_list_size(list1));
}
int		main(void)
{
//	ft_strlen_check();
//	ft_strcmp_check();
//	ft_strcpy_check();
//	ft_strdup_check();
//	ft_read_check();
//	ft_write_check();
//	ft_list_size_check();
	ft_list_push_front_check();
}
