/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:17:45 by otodd             #+#    #+#             */
/*   Updated: 2023/10/30 18:17:51 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	*proxy_str;

	proxy_str = (char *)str;
	while (*proxy_str)
		if (*proxy_str++ == c)
			return (--proxy_str);
	return (0);
}
