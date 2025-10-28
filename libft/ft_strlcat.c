/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:05:23 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/25 17:54:18 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t set_size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	appendable;
	size_t	i;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	appendable = set_size - dest_size - 1;
	i = 0;
	while (i <= appendable)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
