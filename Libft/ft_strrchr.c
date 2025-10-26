/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:46:17 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/25 17:54:50 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	int	s_size;

	s_size = ft_strlen(str);
	while (str[s_size] >= 0)
	{
		if (str[s_size] == c)
			return (char *) str[s_size];
		s_size--;
	}
	return (NULL);
}
