/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:04:12 by mbiusing          #+#    #+#             */
/*   Updated: 2025/11/07 16:04:14 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long int    nb;

    nb = n;
    if (nb < 0)
    {
        nb *= -1;
        ft_putchar_fd('-', fd);
    }
    else if (nb >= 0 && nb <= 9)
        ft_putchar_fd(nb + '0', fd);
    else
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);

    }
}

/*
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc!= 3)
    {
        printf("put 3 arguments smthn liddis : a.out 12345 1");
        return (1);
    }
    int nb = ft_atoi(argv[1]);
    int fd = ft_atoi(argv[2]);
    ft_putnbr_fd(nb, fd);
    return (0);
}
*/