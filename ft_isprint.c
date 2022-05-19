/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:30:28 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/16 14:39:23 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 32) && (c < 127))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int main()
{
	char c;

	c = '\n';
	printf("%d", ft_isprint(c));
	return (0);
}*/
