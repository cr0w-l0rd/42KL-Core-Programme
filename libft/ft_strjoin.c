/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 00:25:28 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/28 14:09:59 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	size_t	s1len;
	size_t	s2len;
	size_t	i;

	if (s1 != NULL || s2 != NULL)
		return (NULL);

	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen((char *)s2);
	newstring = (char *) malloc(sizeof(char *) * (s1len + s2len + 1));

	if (!newstring)
		return (NULL);
	i = 0;
	while (i < s1len)
	{
		*newstring = *s1;
		newstring++;
		s1++;
	}
	while (i < (s1len + s2len))
	{
		*newstring = *s2;
		newstring++;
		s2++;
	}
	newstring++;
	*newstring = '\0';
	return (newstring);
}

#include <stdio.h>

int	main(void)
{
	char	s1[]= "hi";
	char	s2[]= "there!";
	char	*string;
	int	i;
	string = ft_strjoin(s1, s2);
	if (!string)
		return (1);
	i = 0;
	while (string[i])
	{
		printf("%c", *string);
		string++;
		i++;
	}
	free(string);
	string = NULL;
	return (0);
}
