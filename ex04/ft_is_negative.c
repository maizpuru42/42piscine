/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:18:07 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/12 16:57:19 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{  
    if (n >= 0)
    {
        write(1, "P", 1);
    }

    if (n < 0)
    {
        write(1, "N", 1);
    }
}

int main(void)
{
    ft_is_negative(5);
    write(1, "\n", 1);
    return (0);
}