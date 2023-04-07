/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:52:20 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/13 15:52:20 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	cont;

	if (!dest && !src)
		return (NULL);
	cont = -1;
	if (dest > src)
		ft_memcpy(dest, src, n);
	else
		while (cont++ + 1 < n)
			*(char *)(dest + cont) = *(char *)(src + cont);
	return (dest);
}
