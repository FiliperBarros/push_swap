/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:24:17 by frocha-b          #+#    #+#             */
/*   Updated: 2025/07/07 16:49:04 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int check_args(char **argv)
{
	if (!has_duplicate(argv) && all_digit(argv))
		return (1);
	return (0);
}

static int	has_duplicate(char **argv)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i] && argv[i + 1] && argv[i] != argv[i + 1])
		i++;
	if ((argv[i] && argv[i + 1] && argv[i] == argv[i + 1]))
		return (0);
	return (1);
}

static int	all_digit(char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][0] == '+' || argv[i][0] == '-')
				j++;
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}