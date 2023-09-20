/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:18:17 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/25 15:28:28 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(long num)
{
	long	i;

	i = 2;
	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (1)
	{
		nb++;
		if (is_prime(nb))
			return (nb);
	}
}
