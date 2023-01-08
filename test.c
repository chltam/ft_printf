/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:48:19 by htam              #+#    #+#             */
/*   Updated: 2023/01/03 21:48:20 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"
int main()
{
	int n;
	//char
	printf("\033[32mprintf char: \033[0m");
	n = printf("%c", 'a');
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf char: \033[0m");
	fflush(stdout);
	n = ft_printf("%c", 'a');
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);
	
	//string
	printf("\033[32mprintf string: \033[0m");
	n = printf("%s", "Hello World");
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf string: \033[0m");
	fflush(stdout);
	n = ft_printf("%s", "Hello World");
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);
	
	//pointer
	printf("\033[32mprintf pointer: \033[0m");
	n = printf("%p", &n);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf pointer: \033[0m");
	fflush(stdout);
	n = ft_printf("%p", &n);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//dec
	printf("\033[32mprintf dec: \033[0m");
	n = printf("%d", 4242);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf dec: \033[0m");
	fflush(stdout);
	n = ft_printf("%d", 4242);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//int
	printf("\033[32mprintf int: \033[0m");
	n = printf("%i", 2424);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf int: \033[0m");
	fflush(stdout);
	n = ft_printf("%i", 2424);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//int negative
	printf("\033[32mprintf int negative: \033[0m");
	n = printf("%i", -2456);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf int negative: \033[0m");
	fflush(stdout);
	n = ft_printf("%i", -2456);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//unsigned
	printf("\033[32mprintf unsigned int: \033[0m");
	n = printf("%u", -1);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf unsigned int: \033[0m");
	fflush(stdout);
	n = ft_printf("%u", -1);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//hex low
	printf("\033[32mprintf hex lowercase: \033[0m");
	n = printf("%x", 65535);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf hex lowercase: \033[0m");
	fflush(stdout);
	n = ft_printf("%x", 65535);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//hex up
	printf("\033[32mprintf hex uppercase: \033[0m");
	n = printf("%X", 65535);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf hex uppercase: \033[0m");
	fflush(stdout);
	n = ft_printf("%X", 65535);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//percent
	printf("\033[32mprintf percent: \033[0m");
	n = printf("%%");
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf percent: \033[0m");
	fflush(stdout);
	n = ft_printf("%%");
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//only string
	printf("\033[32mprintf only string: \033[0m");
	n = printf("test");
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf only string: \033[0m");
	fflush(stdout);
	n = ft_printf("test");
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//no string
	printf("\033[32mprintf no string: \033[0m");
	n = printf(0);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf no string: \033[0m");
	fflush(stdout);
	n = ft_printf(0);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//mix
	printf("\033[32mprintf mix: \033[0m");
	n = printf("\ncspdiuxX%%mix\n%c\n%s\n%d%i\n%u\n%p\n%x\n%X", 'c', "this is a string", 123, 456, -1, &n, -1, -1);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf mix: \033[0m");
	fflush(stdout);
	n = ft_printf("\ncspdiuxX%%mix\n%c\n%s\n%d%i\n%u\n%p\n%x\n%X", 'c', "this is a string", 123, 456, -1, &n, -1, -1);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//random shit
	printf("\033[32mprintf %%%%%%N: \033[0m");
	n = printf("%%%N");
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf %%%%%%N: \033[0m");
	fflush(stdout);
	n = ft_printf("%%%N");
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//overflow
	printf("\033[32mprintf int overflow 2147483648: \033[0m");
	n = printf("%i", 2147483648);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf int overflow 2147483648: \033[0m");
	fflush(stdout);
	n = ft_printf("%i", 2147483648);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);	

	//overflow unsigned int
	printf("\033[32mprintf unsigned int overflow 4294967296: \033[0m");
	n = printf("%u", 4294967296);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf unsigned int overflow 4294967296: \033[0m");
	fflush(stdout);
	n = ft_printf("%u", 4294967296);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//overflow hex
	printf("\033[32mprintf hex overflow 2147483648: \033[0m");
	n = printf("%x", 2147483648);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf hex overflow 2147483648: \033[0m");
	fflush(stdout);
	n = ft_printf("%x", 2147483648);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	//overflow pointer
	printf("\033[32mprintf hex 2147483648: \033[0m");
	n = printf("%p", 18446744073709551615);
	printf("\n");
	printf("\033[32mreturn value: %d\n\033[0m", n);
	fflush(stdout);
	printf("\033[93mft_printf hex 2147483648: \033[0m");
	fflush(stdout);
	n = ft_printf("%p", 18446744073709551615);
	printf("\n");
	printf("\033[93mreturn value: %d\n\n\033[0m", n);

	return (0);
}
