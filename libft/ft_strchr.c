/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:52:53 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/13 15:52:53 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		if (s[i++] == (char)c)
			return ((char *)s + i - 1);
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}
