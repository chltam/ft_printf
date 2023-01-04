/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:37:10 by htam              #+#    #+#             */
/*   Updated: 2023/01/04 19:37:11 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_format_char(va_list arg);
int ft_format_decimal(va_list arg);
int ft_format_string(va_list arg);

t_format	g_dispatchtable[] = {
['c'] = ft_format_char,
['s'] = ft_format_string,
['d'] = ft_format_decimal,
['i'] = ft_format_decimal

};