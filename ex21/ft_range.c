/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:12:16 by drecours          #+#    #+#             */
/*   Updated: 2016/11/14 11:40:21 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *sapin;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	sapin = (int *)malloc(sizeof(int) * (max - min));
	while (min != max)
	{
		sapin[i] = min;
		++min;
		++i;
	}
	return (sapin);
}
