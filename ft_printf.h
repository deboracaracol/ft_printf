/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaracol <dcaracol@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:29:05 by dcaracol          #+#    #+#             */
/*   Updated: 2023/06/20 14:28:33 by dcaracol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
char	*ft_base(char format, int base);
int		ft_putchar(char c);
int		ft_putnbr_t(unsigned long val, unsigned long base, char format);
int		ft_putnbr(int val, int base, char format);
int		ft_putstr(char *s);
int		ft_pointer(unsigned long val, unsigned long base, char format);

#endif