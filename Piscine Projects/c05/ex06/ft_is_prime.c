/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:26:24 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/24 16:10:29 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;
	int	b;

	a = nb ;
	b = 0;
	while (a >= 1)
	{
		if (nb % a == 0)
		{
			b++;
		}
		a--;
	}
	if (b != 2)
		return (0);
	else
		return (1);
}