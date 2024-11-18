/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:03:31 by esever            #+#    #+#             */
/*   Updated: 2024/11/14 16:10:20 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	process_input(const char *input, unsigned int *i, va_list *args)
{
	unsigned int	return_counter;

	return_counter = 0;
	if (input[*i] == 'c')
		return_counter += printf_char(va_arg(*args, int));
	else if (input[*i] == 's')
		return_counter += printf_string(va_arg(*args, char *));
	else if (input[*i] == 'p')
		return_counter += printf_ptr(va_arg(*args, void *));
	else if (input[*i] == 'd' || input[*i] == 'i')
		return_counter += printf_nbr(va_arg(*args, int));
	else if (input[*i] == 'x')
		return_counter += printf_hex(va_arg(*args, int), 1);
	else if (input[*i] == 'X')
		return_counter += printf_hex(va_arg(*args, int), 0);
	else if (input[*i] == 'u')
		return_counter += printf_uint(va_arg(*args, int));
	else if (input[*i] == '%')
	{
		printf_char('%');
		return (1);
	}
	return (return_counter);
}

int	ft_printf(const char *input, ...)
{
	va_list			args;
	unsigned int	i;
	unsigned int	return_length;

	i = 0;
	return_length = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			return_length += process_input(input, &i, &args);
		}
		else
		{
			return_length += printf_char(input[i]);
		}
		i++;
	}
	va_end(args);
	return (return_length);
}
#include <stdio.h>

int main()
{
	ft_printf("%p",0);
	printf("\n");
	
}