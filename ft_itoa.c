/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:51:21 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/13 15:51:21 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_numbers(int n)
{
	int		count;
	long	number;

	number = n;
	count = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number = number / 10;
		count++;
	}
	return (count);
}

static int	ft_set_positive(long *number)
{
	if (*number < 0)
	{
		*number *= -1;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*buff;
	long	number;
	int		is_negative;

	number = n;
	size = ft_count_numbers(number);
	if (number == 0)
		return (ft_strdup("0"));
	if (number < 0)
		size += 1;
	buff = (char *)malloc((size + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	buff[size--] = '\0';
	is_negative = ft_set_positive(&number);
	while (size >= 0)
	{
		buff[size--] = (int)(number % 10 + '0');
		number = number / 10;
	}
	if (is_negative == 1)
		buff[0] = '-';
	return (buff);
}
