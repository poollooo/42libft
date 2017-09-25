/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnizet <pnizet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:52:25 by pnizet            #+#    #+#             */
/*   Updated: 2017/09/22 11:12:35 by pnizet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t ret;

	ret = ft_strlen(src) + ft_strlen(dst);
	if (size >= ft_strlen(dst))
	{
		ft_strncat(dst, src, size - ft_strlen(dst) - 1);
		return (ret);
	}
	return (size + ft_strlen(src));
}
