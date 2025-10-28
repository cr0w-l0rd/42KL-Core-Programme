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
	char	*dest_cpy;
	char	*src_cpy;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	cpydest = (char *) dest;
	cpysrc = (char *) src;
	i = 0;
	if (dest_cpy > src_cpy)
	{
		while (len-- > 0)
			dest_cpy[len] = src_cpy[len];
	}
	else
	{
		while (i++ < len)
			dest_cpy[i] = src_cpy[i];
	}
	return (dest);
}
