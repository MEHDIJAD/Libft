/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-garo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:20:59 by eel-garo          #+#    #+#             */
/*   Updated: 2024/10/23 10:44:13 by eel-garo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *ptr1 = (unsigned char *)dst;
	unsigned char *ptr2 = (unsigned char *)src;
	size_t	i;

	i = 0;
	while(i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	ptr1[i] = '\0';
	return (dst);
}
