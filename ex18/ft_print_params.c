/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:01:45 by drecours          #+#    #+#             */
/*   Updated: 2016/11/12 16:56:57 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac >= 2)
	{
		while (i != ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
			++i;
		}
	}
	return (0);
}
