/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:22:04 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/25 19:46:02 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base)
{
	int	i;

	i = 0;
	if (!base || base[0] == '\0')
	{
		return (0);
	}
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (+x);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_length;

	base_length = 0;
	if (!is_valid_base(base))
	{
		return ;
	}
	while (base[base_length])
	{
		base_length++;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = abs(nbr);
	}
	if (nbr >= base_length)
	{
		ft_putnbr_base(nbr / base_length, base);
	}
	ft_putchar(base[nbr % base_length]);
}
