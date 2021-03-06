/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagripin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:57:15 by aagripin          #+#    #+#             */
/*   Updated: 2019/09/20 17:46:13 by aagripin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned long i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (((*(s1 + i) != '\0') || (*(s2 + i) != '\0')) && (i < n))
	{
		if (*(s1 + i) == *(s2 + i))
			i++;
		else
			return (0);
	}
	return (1);
}
