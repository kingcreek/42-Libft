/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:52:59 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/13 15:52:59 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*buffer;
	int		pos;

	pos = 0;
	buffer = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	while (s[pos])
	{
		buffer[pos] = s[pos];
		pos++;
	}
	buffer[pos] = '\0';
	return (buffer);
}
