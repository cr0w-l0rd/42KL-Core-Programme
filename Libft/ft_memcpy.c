/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 04:19:01 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/25 04:28:00 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	dst_cpy;
	unsigned char	src_cpy;
	
	dst_cpy = (unsigned char *) dst;
	src_cpy = (unsigned char *) src;
	while (n > 0)
	{
		*dst_cpy = *src_cpy;
		dst_cpy++;
		src_cpy++;
		n--;
	}
	return (dst);
}
