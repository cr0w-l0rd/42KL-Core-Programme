/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 00:48:52 by mbiusing          #+#    #+#             */
/*   Updated: 2025/11/06 00:49:06 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("um u can just do smthn liddis : a.out M 1 or!! a.out z 2");
        return (1);
    }
    char c = *argv[1];
    int fd = ft_atoi(argv[2]);
    ft_putchar_fd(c, fd);
    return (0);
}
*/