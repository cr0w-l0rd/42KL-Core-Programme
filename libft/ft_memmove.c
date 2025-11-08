/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:39:49 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/25 04:49:12 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dst;
	const unsigned char	*src_c;
	size_t			i;

	if (!dest && !src)
		return (NULL);

	dst = (unsigned char *)dest;
	src_c = (const unsigned char *)src;

	if (dst > src_c && dst < src_c + len)
	{
		// Copy backwards
		while (len > 0)
		{
			len--;
			dst[len] = src_c[len];
		}
	}
	else
	{
		// Copy forwards
		i = 0;
		while (i < len)
		{
			dst[i] = src_c[i];
			i++;
		}
	}
	return (dest);
}