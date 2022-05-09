/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:10:26 by rkochary          #+#    #+#             */
/*   Updated: 2022/05/06 20:13:24 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_printf(const char *form, ...)
{
	int		i;
	int		count;
	va_list	arguments;

	i = 0;
	count = 0;
	va_start(arguments, form);
	while (form[i])
	{
		if (form[i] == '%')
		{
			count += for_form(form[i + 1], &arguments);
			i++;
		}
		else
			count += ft_putchar(form[i]);
		i++;
	}
	va_end(arguments);
	return (count);
}
