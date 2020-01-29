/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagripin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 23:18:46 by aagripin          #+#    #+#             */
/*   Updated: 2019/09/20 20:24:16 by aagripin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ('a' <= *str && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}
