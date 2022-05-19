/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:56:59 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/18 10:52:12 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (!s)
		return (0);
	if (start > len_s)
		return (ft_strdup(""));
	if (len_s - start >= len)
		sub = malloc((len + 1) * sizeof(char));
	else
		sub = malloc((len_s - start + 1) * sizeof(char));
	if (!sub)
		return (0);
	i = 0;
	while (start < len_s && len--)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = 0;
	return (sub);
}

/*#include <stdio.h>

int main()
{
	char str[100] = "tripouille";
	unsigned int start;
	size_t len;

	start = 0;
	len = 42000;
	printf("%d\n", (int)ft_strlen(str)); 
	printf("%s\n", ft_substr(str, start, len));
	printf("%d\n", (int)ft_strlen(str)); 
	return (0);
}*/
