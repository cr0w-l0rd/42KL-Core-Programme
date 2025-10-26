/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:08:26 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/25 17:54:55 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (char *) &str[i];
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	char	test1[] = "whats up!";
	printf("whats up! -> %s", strchr(test1, 'w'));
	return (0);
}*/
