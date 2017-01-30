/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:04:16 by drecours          #+#    #+#             */
/*   Updated: 2016/11/14 13:40:08 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*truc;
	int		len;

	i = -1;
	len = ft_strlen(src);
	if (!(truc = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (0);
	while (i++ != len)
		truc[i] = src[i];
	truc[i] = '\0';
	return (truc);
}
