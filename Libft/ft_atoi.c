/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:27:07 by mbiusing          #+#    #+#             */
/*   Updated: 2025/10/25 15:59:11 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *num)
{
	int	i;
	int	res;
	int	posneg;

	i = 0;
	res = 0;
	posneg = 1;
	while ((num[i] >= 9 && num[i] <= 13) || (num[i] == ' '))
		i++;
	if (num[i] == '+' || num[i] == '-')
	{
		if (num[i] == '-')
			posneg *= -1;
		i++;
	}
	while (num[i] >= '0' && num[i] <= '9')
	{
		res = res * 10 + (num[i] - '0');
		i++;
	}
	return (posneg * res);
}

/*int	main(void)
{
	char test1[] = " kdshfs 123";
	printf("%d", ft_atoi(test1));
	return (0);
}*/
