/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:47:02 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/28 12:12:15 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*array;
	int		size;
	int		i;

	if (s == NULL)
		return (NULL);
	size = ft_strlen((char*)s);
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
