/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:46:17 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/26 23:45:18 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	s_size;
	unsigned char	ch;

	s_size = ft_strlen(s);
	ch = (unsigned char) c;
	if (ch == '\0')
		return ((char *) &s[s_size]);
	while (s[s_size] >= 0)
	{
		if (s[s_size] == c)
			return ((char *) &s[s_size]);
		s_size--;
	}
	return (NULL);
}
