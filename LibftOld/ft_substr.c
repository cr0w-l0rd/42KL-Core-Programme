/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:58:16 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/27 00:25:17 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char	*substring;
	size_t		mainlen;

	i = 0;
	if (s[i] == '\0' || !s || start >= len)
		return (NULL);
	mainlen = ft_strlen(s);
	subtring = (char *) malloc(sizeof(char *) * len);
	while (i <= len)
	{
		subtring[i] = s[start + i];
		subtring++;
		i++;
	}
	subtring[i] = '\0';
	return (substring);
}
