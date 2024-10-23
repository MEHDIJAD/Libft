/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-garo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:03:50 by eel-garo          #+#    #+#             */
/*   Updated: 2024/10/22 11:42:06 by eel-garo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void 	*ft_bzero(void *str, size_t  n)
{
	unsigned char *ptr = (unsigned char *)str;
	size_t	i;

	i = 0;
	while(i < n)
	{
		ptr[i] = '0';
		i++;
	}
	return (str);
}
