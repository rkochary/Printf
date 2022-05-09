/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:02:49 by rkochary          #+#    #+#             */
/*   Updated: 2022/05/07 17:46:03 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	for_form(const char form, va_list *lst)
{
	int	i;

	i = 0;
	if (form == 'c')
		i += ft_putchar(va_arg(*lst, int));
	else if (form == 's')
		i += ft_putstr(va_arg(*lst, char *));
	else if (form == 'd' || form == 'i')
		i += ft_putnbr(va_arg(*lst, int));
	else if (form == 'u')
		i += ft_base(va_arg(*lst, unsigned int), 10, 87);
	else if (form == 'x')
		i += ft_base(va_arg(*lst, unsigned int), 16, 87);
	else if (form == 'X')
		i += ft_base(va_arg(*lst, unsigned int), 16, 55);
	else if (form == 'p')
		i += ft_ptr(va_arg(*lst, unsigned long long));
	else if (form == '%')
		i += ft_putchar('%');
	return (i);
}
