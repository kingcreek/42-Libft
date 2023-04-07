/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:53:44 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/13 15:53:44 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*res;
	char		ccc;
	size_t		i;

	i = 0;
	ccc = (char)c;
	res = NULL;
	while (str[i])
	{
		if (str[i] == ccc)
			res = &str[i];
		i++;
	}
	if (str[i] == ccc)
		res = &str[i];
	return ((char *)res);
}
