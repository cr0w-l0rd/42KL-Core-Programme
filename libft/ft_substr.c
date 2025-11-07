/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:58:16 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/28 12:11:58 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*substring;
	size_t		mainlen;

	i = 0;
	if (s[i] == '\0' || !s || start >= len)
		return (NULL);
	mainlen = ft_strlen(s);
	substring = (char *) malloc(sizeof(char *) * len);
	while (i <= len)
	{
		substring[i] = s[start + i];
		substring++;
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("input the args smthn liddis : 123456789 5 4");
		return (1);
	}
}