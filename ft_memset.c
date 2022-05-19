/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:36:59 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/04 08:45:38 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	char			*str;
	unsigned char	a;

	i = 0;
	str = (char *)b;
	a = (unsigned int)c;
	while (len > 0)
	{
		str[len - 1] = a;
		len--;
	}
	return (str);
}

/*#include <stdio.h>

int main ()
{
	char str[50] = "ola mundo :D, adeus mundo :c";
	printf("%s", ft_memset(str, '#', 3));
	return (0);
}*/
