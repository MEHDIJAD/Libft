/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-garo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:03:10 by eel-garo          #+#    #+#             */
/*   Updated: 2024/10/23 19:19:15 by eel-garo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr = (const unsigned char *)s;
	size_t i;

	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
				return (void *)(&ptr[i]);
		i++;
	}
	return (NULL);
}
