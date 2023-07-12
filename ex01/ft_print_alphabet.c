/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:01:36 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/12 16:57:15 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char x;

    x = 'a';
    while (x <= 'z')
    {
        write(1, &x, 1);
        x++;
    }
    
}

int main(void)
{
    ft_print_alphabet();
    return (0);
}