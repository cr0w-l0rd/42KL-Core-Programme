/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:13:50 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/31 23:00:07 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	slen;
	int	i;
	char	**strofwords;
	int	numofwords;

	slen = ft_strlen(s);
	i = 0;
	numofwords = 0;
	while (s[i])
	{
		if (s[0] || s[i - 1] == c)
		{
			numofwords++;
		}
		i++;
	}
	strofwords = (char *) malloc(sizeof(char) * numofwords);

	if (!strofwords)
		return (NULL);
}

char	str_allocater(char,int wordlen)
{
	word = (char *) malloc(sizeof(char) * wordlen)
	if (!word)
		return (NULL);

}
