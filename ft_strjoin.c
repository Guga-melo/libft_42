/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 07:55:23 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/18 11:19:38 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		j;
	int		i;

	j = 0;
	i = 0;
	while (s1[i] != 0)
		i++;
	while (s2[j] != 0)
		j++;
	result = malloc((i + j) * sizeof(char));
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		result[i + j] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = 0;
	return (result);
}

/*#include <string.h>
#include <stdio.h>

int main()
{
	char str1[100] = "guga abraça";
	char str2[100] = "a baleia beluga que descança no pier";
	printf("%s", ft_strjoin(str1, str2));
	return (0);
}*/
