/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:19:13 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 13:58:30 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str_dst;
	const char	*str_src;
	char		*buffer;
	size_t		i;

	str_dst = (char *) dst;
	str_src = (char *) src;
	if (!dst && !src)
		return (0);
	buffer = calloc(len, sizeof(char));
	i = 0;
	while (i < len)
	{
		buffer[i] = str_src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		str_dst[i] = buffer[i];
		i++;
	}
	return (dst);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	dst[50] = "vitoria";
	char	src[50] = "thais";
	size_t	len	= 5;
	printf("%s", ft_memmove(dst, src, len));
	return (0);
}
