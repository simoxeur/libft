/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtalbi <mtalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 05:02:02 by mtalbi            #+#    #+#             */
/*   Updated: 2023/12/01 10:53:09 by mtalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	slen;
	char	*result;

	slen = ft_strlen(s1);
	result = (char *)malloc(sizeof(char) * (slen + 1));
	if (!result)
		return (NULL);
	slen = 0;
	while (s1[slen])
	{
		result[slen] = s1[slen];
		slen++;
	}
	result[slen] = '\0';
	return (result);
}
