/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:55:37 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/19 17:07:07 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	aux;

	count = 0;
	aux = 0;
	if (to_find[aux] == '\0')
		return (str);
	while (str[count] != '\0')
	{
		while (str[count + aux] == to_find[aux] && str[count + aux] != '\0')
			aux++;
		if (to_find[aux] == '\0')
			return (str + count);
		count++;
		aux = 0;
	}
	return (0);
}
