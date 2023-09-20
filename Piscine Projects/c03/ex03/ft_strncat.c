/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:29:46 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/20 08:46:21 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	aux;

	count = 0;
	aux = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (aux < nb && src[aux] != '\0')
	{
		dest[count + aux] = src [aux];
		aux++;
	}
	dest[count + aux] = '\0';
	return (dest);
}
