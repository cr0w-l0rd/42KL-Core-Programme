/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:25:41 by mbiusing          #+#    #+#             */
/*   Updated: 2025/11/15 11:40:14 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memalloced;
	size_t	actualsize;

	if (nmemb != 0 && size != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	actualsize = nmemb * size;
	memalloced = malloc(actualsize);
	if (!memalloced)
		return (NULL);
	ft_memset(memalloced, 0, actualsize);
	return (memalloced);
}
