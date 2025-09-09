/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:48:16 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/09 10:56:48 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**handle_args(int argc, char **argv, char **new_argv)
{
	if (argc == 2)
	{
		new_argv = ft_split(*(argv + 1), ' ');
		if (!new_argv)
			exit(1);
	}
	else
		new_argv = argv + 1;
	return (new_argv);
}
