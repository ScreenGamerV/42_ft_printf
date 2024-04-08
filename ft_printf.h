/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:17:51 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/28 17:23:55 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
int		ft_printhexadecimal(char index, unsigned long long value);
int		ft_printint_unsigned(unsigned int value);
int		ft_descount(unsigned long long value);
int		ft_intcount(unsigned int value);
int		ft_printargs(char index, va_list args);
int		ft_printchar(char value);
int		ft_printint_unsigned(unsigned int value);
int		ft_printint(int value);
int		ft_printarr(int size, char *arr);
int		ft_printstring(char *value);
int		ft_printf(const char *format, ...);
int		ft_printpointer(char index, unsigned long long value);

#endif
