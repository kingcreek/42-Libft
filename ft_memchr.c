/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:52:07 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/13 15:52:07 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t len)
{
	unsigned char	*ret;

	ret = (unsigned char *)ptr;
	while (len--)
	{
		if (*ret == (unsigned char)c)
			return (ret);
		else
			ret++;
	}
	return (0);
}
