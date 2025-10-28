/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:56:17 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/28 23:07:32 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;
	size_t	trimlen;
	size_t	check;
	size_t	start;
	size_t	end;
	char	*trimstr;

	slen = ft_strlen(s1);
	trimlen = slen;
	while (set[check])
	{
		if (s1[0] == set[check])
		{
			start = 1;
			check = 0;
			while (s1[slen - 1])
			{
				if (s1[slen - 1] == set[check])
					end = slen - 2;
			}
		}
		check++;
	}
	while

	trimstr = (char *) malloc(sizeof(char *) * );
}
