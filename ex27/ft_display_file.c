/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:34:59 by drecours          #+#    #+#             */
/*   Updated: 2016/11/14 16:51:04 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "truc.h"

int		main(int argc, char **argv)
{
	int		valeur;
	char	lettre;

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		valeur = open(argv[1], O_RDONLY);
		if (valeur == -1)
			return (0);
		while (read(valeur, &lettre, 1) != 0)
			write(1, &lettre, 1);
		close(valeur);
	}
	return (0);
}
