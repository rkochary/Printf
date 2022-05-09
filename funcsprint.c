/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcsprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:53:43 by rkochary          #+#    #+#             */
/*   Updated: 2022/05/06 20:12:15 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	numbercount(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	unsigned int	number;
	int				tmp;

	tmp = n;
	if (n < 0)
	{
		ft_putchar('-');
		number = -n;
	}
	else
		number = n;
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putchar((number % 10) + 48);
	}
	else
		ft_putchar(number + 48);
	return (numbercount(tmp));
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_base(unsigned long long nbr, unsigned int base, int type)
{
	int	i;

	i = 0;
	if (nbr > base - 1)
		i += ft_base(nbr / base, base, type);
	if (nbr % base < 10)
		i += ft_putchar(nbr % base + 48);
	else if (nbr % base >= 10 && type == 87)
		i += ft_putchar(nbr % base + 87);
	else if (nbr % base >= 10 && type == 55)
		i += ft_putchar(nbr % base + 55);
	return (i);
}

int	ft_ptr(unsigned long long nbr)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_base(nbr, 16, 87);
	return (i);
}
