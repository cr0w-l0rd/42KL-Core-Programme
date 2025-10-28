/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:06:47 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/26 23:22:00 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return (big);
	i = 0;
	j = 0;
	while (big[i] && i <= len)
	{
		while (big[i] == little[j])
		{
			if (little[j + 1] == '\0')
				return (i - j);
			i++;
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
