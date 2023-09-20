/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:25:19 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/20 08:50:49 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	aux;

	aux = 0;
	while (dest[aux])
	{
		aux++;
	}
	while (*src)
	{
		dest[aux] = *src;
		aux++;
		src++;
	}
	dest[aux] = '\0';
	return (dest);
}
