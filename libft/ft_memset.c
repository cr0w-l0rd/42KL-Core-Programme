/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:09:41 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/23 15:22:49 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*sentence;

	sentence = s;
	while (n--)
	{
		*sentence = c;
		sentence++;
	}
	return (sentence);
}

/*int	main(void)
{
	char	array[10];
	ft_memset(array, '!', sizeof(array));
	printf("%s", array);
	return (0);
}*/
