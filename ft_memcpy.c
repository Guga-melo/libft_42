/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:22:08 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/17 08:23:00 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str_dst;
	const char	*str_src;
	size_t		i;

	i = 0;
	str_dst = (char *) dst;
	str_src = (const char *) src;
	while (i < n)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char src[100] = "geeksfor";
	size_t n;

	n = 9;
	ft_memcpy(src + 5, src, n);
	printf("%s\n", src);
	return (0);
}*/
