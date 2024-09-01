/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtalbi <mtalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:51:47 by mtalbi            #+#    #+#             */
/*   Updated: 2023/12/01 10:40:48 by mtalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	void	*ptr;

	ptr = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (len-- > 0)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	}
	else
	{
		while (len-- > 0)
			*((unsigned char *)dest++) = *((unsigned char *)src++);
	}
	return (ptr);
}
