/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:48:21 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/11 10:34:52 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write(1, &"0123456789"[a / 10], 1);
			write(1, &"0123456789"[a % 10], 1);
			write(1, " ", 1);
			write(1, &"0123456789"[b / 10], 1);
			write(1, &"0123456789"[b % 10], 1);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}