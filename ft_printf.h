/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:03:57 by esever            #+#    #+#             */
/*   Updated: 2024/11/14 15:04:01 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
int		printf_char(int c);
int		printf_string(char *s);
int		printf_ptr(void *ptr);
int		ft_printf(const char *s, ...);
int		printf_nbr(int n);
int		printf_hex(unsigned int n, int x_switch);
int		printf_uint(unsigned int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
