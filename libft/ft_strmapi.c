/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:53:29 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/13 15:53:29 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*target;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	target = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!target)
		return (NULL);
	i = 0;
	while (s[i])
	{
		target[i] = f(i, s[i]);
		i++;
	}
	target[i] = '\0';
	return (target);
}
