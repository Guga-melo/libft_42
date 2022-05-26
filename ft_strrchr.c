/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:06:43 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 10:40:29 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pst;
	char	*str;
	char	find;

	str = (char *) s;
	find = (char) c;
	pst = 0;
	if (find == 0)
		return (str + ft_strlen(str));
	while (*str != 0)
	{
		if (find == *str)
			pst = str;
		str++;
	}
	return (pst);
}
/*#include <string.h>
#include <stdio.h>

int main()
{
    char str[20] = "hello World";
    int c;

    c = 'o';
    printf("%s", ft_strrchr(str, c));
    return (0);
}*/
