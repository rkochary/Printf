/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:19:54 by rkochary          #+#    #+#             */
/*   Updated: 2022/05/06 20:06:24 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_base(unsigned long long nbr, unsigned int base, int type);
int	ft_puthex(unsigned int i);
int	ft_puthexupper(unsigned int i);
int	for_form(const char form, va_list *lst);
int	ft_printf(const char *form, ...);
int	ft_ptr(unsigned long long nbr);

#endif
