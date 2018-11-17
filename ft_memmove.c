/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:01:15 by lufranco          #+#    #+#             */
/*   Updated: 2017/11/11 17:51:54 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	tmp = ft_memalloc(len + 1);
	tmp = ft_memcpy(tmp, src, len);
	dst = ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
