/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:01:36 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/12 16:57:18 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    int x;

    x = '0';
    while (x <= '9')
    {
        write(1, &x, 1);
        x++;
    }
    
}

int main(void)
{
    ft_print_numbers();
    return (0);
}