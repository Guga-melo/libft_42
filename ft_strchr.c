/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:49:41 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/16 13:09:44 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	found;
	int		i;

	str = (char *) s;
	found = (char) c;
	i = 0;
	while (*str != found)
	{
		if (*str == 0)
			return (0);
		str++;
	}
	return (str);
}

/*#include <stdio.h>

int main()
{
	char str[20] = "la";
	int c;

	c = 'a';
	printf("%s", ft_strchr(str, c));
	return (0);
}*/
