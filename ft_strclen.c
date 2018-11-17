/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:39:35 by lufranco          #+#    #+#             */
/*   Updated: 2017/12/21 10:42:54 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strclen(char *str, int c)
{
	int	i;

	i = 0;
	if (str)
		while (str[i] != '\0' && str[i] != c)
			i++;
	return (i);
}