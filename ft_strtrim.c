/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:49:13 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/17 14:52:53 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_cut;
	char	*result;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_cut = ft_strlen(s1);
	while (size_cut && ft_strchr(set, s1[size_cut]))
		size_cut--;
	result = ft_substr(s1, 0, size_cut + 1);
	return (result);
}
/*#include <stdio.h>

int main()
{
	char str[50] = "lalaagula bonitalalalalala";
	char set[10] = "la";
	printf("%s", ft_strtrim(str, set));
	return (0);
}*/
