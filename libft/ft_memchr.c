/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:01:36 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/26 23:45:41 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*strholder;
	unsigned char	*chrholder;
	int				i;

	strholder = (unsigned char *) str;
	chrholder = (unsigned char *) c;
	while (i <= n)
	{
		if (strholder[i] == chrholder)
			return ((void *) &strholder[i]);
		i++;
	}
	return (NULL);
}
