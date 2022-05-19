/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:06:43 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/17 11:30:32 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pst;

	pst = 0;
	if (c == 0)
		return ((char *) s + ft_strlen(s));
	if (!ft_isprint(c))
		return ((char *) s);
	while (*s != 0)
	{
		if (c == *s)
			pst = (char *) s;
		s++;
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
