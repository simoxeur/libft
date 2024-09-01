/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtalbi <mtalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 00:14:04 by mtalbi            #+#    #+#             */
/*   Updated: 2023/12/01 10:43:25 by mtalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	total_len;

	if (!dst && !src)
		return (0);
	dst_len = ft_strlen(dst);
	total_len = dst_len + ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + ft_strlen(src));
	while (*src && (dst_len + 1) < dstsize)
		dst[dst_len++] = *src++;
	dst[dst_len] = '\0';
	return (total_len);
}
