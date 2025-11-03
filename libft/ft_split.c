/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:13:50 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/31 23:00:07 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_tokencount(char const *str, char delimiter)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == delimiter)
			str++;
		if (*str && *str != delimiter)
		{
			count++;
			while (*str && *str != delimiter)
				str++;
		}
	}
	return (count);
}

static char	*ft_malloc_n_copy_word(const char *s, char c)
{
	char	*token;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	token = malloc(sizeof(char) * (len + 1));
	if (!token)
		return (NULL);
	i = 0;
	while (i < len)
	{
		token[i] = s[i];
		i++;
	}
	token[i] = '\0';
	return (token);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	strings = malloc(sizeof(char *) * (ft_tokencount(s, c) + 1));
	if (!strings)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			strings[j] = ft_malloc_n_copy_word(&s[i], c);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	strings[j] = NULL;
	return (strings);
}
