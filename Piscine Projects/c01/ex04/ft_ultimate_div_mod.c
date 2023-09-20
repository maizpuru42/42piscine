/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:32:37 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/17 12:45:29 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	nba;
	int	nbb;

	nba = *a;
	nbb = *b;
	*a = nba / nbb;
	*b = nba % nbb;
}
