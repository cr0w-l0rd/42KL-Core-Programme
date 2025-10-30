/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:56:17 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/30 23:27:23 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	char			*trimmed;
	int				begin;
	int				end;
	int				i;
	size_t			len;

	begin = 0;
	end = ft_strlen(s1) - 1;
	while (trim(set, s1[begin]))
		begin++;
	while (trim(set, s1[end]))
		end--;
	len = end - begin;
	trimmed = (char *) calloc(len + 1, sizeof(char));
	if (!trimmed)
		return (NULL);
	while (trimmed[i])
	{
		trimmed[i] = s1[begin + i];
	}
	return (trimmed);
}

static int	trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	
}