/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:45:06 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/25 15:24:41 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	x;

	x = 0;
	if (nb <= 0)
		return (0);
	while (x * x < nb)
	{
		x++;
	}
	if (x * x == nb)
		return (x);
	else
		return (0);
}
