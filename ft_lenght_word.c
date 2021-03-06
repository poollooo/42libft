/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenght_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnizet <pnizet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 12:21:17 by pnizet            #+#    #+#             */
/*   Updated: 2017/09/25 11:11:43 by pnizet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lenght_word(char const *s, char c)
{
	size_t lenght;
	size_t i;

	lenght = 0;
	i = 0;
	if (!s || !c)
		return (0);
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		lenght++;
	}
	return (lenght);
}
