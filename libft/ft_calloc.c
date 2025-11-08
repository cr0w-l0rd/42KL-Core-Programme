/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:25:41 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/28 12:09:25 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		actualsize;
	size_t		*memalloced;

	actualsize = nmemb * size;
	memalloced = malloc(actualsize);
	if (!memalloced)
		return (NULL);
	ft_memset(memalloced, 0, actualsize);
	return (memalloced);
}