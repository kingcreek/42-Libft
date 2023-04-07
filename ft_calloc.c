/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:50:46 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/13 15:50:46 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*buffer;

	buffer = (void *)malloc(size * nitems);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * nitems);
	return (buffer);
}
