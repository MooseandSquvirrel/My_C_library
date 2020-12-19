/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 19:24:33 by agardner          #+#    #+#             */
/*   Updated: 2018/04/17 14:21:00 by agardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((char *)s)[i] = ((unsigned char)c);
		i++;
	}
	return (s);
}