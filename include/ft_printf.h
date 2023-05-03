/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:06:20 by aducobu           #+#    #+#             */
/*   Updated: 2023/05/02 13:06:23 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_strlen(char *str);
int	ft_putstr(char *str);
int	ft_print_nbr(int nb);
int	size_nb(int nb);
int	convert_hexa(unsigned int nb, char c);
int	ft_print_ptr(unsigned long p);
int	ft_print_unsigned(unsigned int nb);
int	ft_printf(const char *format, ...);

#endif