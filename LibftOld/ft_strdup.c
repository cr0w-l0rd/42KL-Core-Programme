/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:47:02 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/26 23:57:57 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*array;
	int	size;
	int	i;

	size = ft_strlen(s);
	array = (char *) malloc(sizeof(char *) * size);
	if (!array)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		*array = s[i];
		array++;
		i++;
	}
	*array = '\0';
	return (array);
}
