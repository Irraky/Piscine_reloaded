/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 10:10:42 by drecours          #+#    #+#             */
/*   Updated: 2016/11/12 17:07:29 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putendl(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 2;
	j = 2;
	if (ac > 1)
	{
		while (i != ac)
		{
			while (j != ac)
			{
				if (ft_strcmp(av[j - 1], av[j]) > 0)
					ft_swap(&av[j - 1], &av[j]);
				++j;
			}
			++i;
			j = 2;
		}
		i = 1;
		while (i != ac)
			ft_putendl(av[i++]);
	}
	return (0);
}
