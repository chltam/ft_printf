/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:57:42 by htam              #+#    #+#             */
/*   Updated: 2022/12/26 20:57:44 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "./libft/libft.h"
#include <stdio.h>

int ft_format_char(va_list arg);
int ft_format_decimal(va_list arg);
int ft_format_string(va_list arg);

// extern t_format *g_dispatchtable;

//c/s/'p'/di/u/'x''X'%[[[pXx]]]
// va_arg(args, char);


// typedef int	(*t_format)(va_list);

static const t_format	g_dispatchtable[] = {
['c'] = ft_format_char,
['s'] = ft_format_string,
['d'] = ft_format_decimal,
['i'] = ft_format_decimal,
['%'] = ft_format_percent

};



// int ft_format_decimal(int number)
// {
// 	static int	len;
// 	int result;

// 	if (number == -2147483648)
// 	{
// 		write (1, "-2147483648", 11);
// 		return (11);
// 	}
// 	if (number < 0)
// 	{
// 		number = -number;
// 		write(1, "-", 1);
// 		len += 1;
// 	}
// 	if (number > 9)
// 	{
// 		ft_format_decimal(number / 10);
// 		number = number % 10;
// 	}
// 	if (number <= 9)
// 	{
// 		len += ft_format_char(number + 48);
// 	}
// 	result = len;
// 	// len = 0;
// 	return (result);
// }
// int	ft_sender(char c, va_list args)
// {
// 	return (g_dispatchtable[c](va_arg(args, char)));
// }

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		n;
	int		len;

	len = 0;
	n = 0;
	va_start(args, str);
	while (str[n])
	{
		if (str[n] == '%' && g_dispatchtable[str[n + 1]])
		{
			len += g_dispatchtable[str[n + 1]](args);
			n++;
		}
		else
			len += write(1, &str[n], 1);
		n++;
	}
	va_end(args);
	return (len);
}

int main()
{
	// printf("%s%HHHHHH", "123");
	int n = ft_printf("%s%%%HHHHHH", "123");
	printf("\n%d", n);
	return (0);
}

// int main(int argc, char *argv[]) {
//   int number1 = 12345;
//   int result1 = ft_format_decimal(number1);
//   printf("The number %d has %d digits.\n", number1, result1);

//   int number2 = -67890;
//   int result2 = ft_format_decimal(number2);
//   printf("The number %d has %d digits.\n", number2, result2);

//   return 0;
// }