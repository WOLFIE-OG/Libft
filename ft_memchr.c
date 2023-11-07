/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <otodd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:30:39 by otodd             #+#    #+#             */
/*   Updated: 2023/11/07 18:46:56 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*proxy_s;
	size_t			index;

	index = 0;
	proxy_s = (unsigned char *)s;
	while (index < n)
	{
		if (proxy_s[index] == c)
			return ((void *)&proxy_s[index]);
		index++;
	}
	return (0);
}
