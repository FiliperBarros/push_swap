/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:20:59 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/09 10:58:28 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**parser(t_stack **a, int argc, char **argv)
{
	char	**new_argv;

	new_argv = NULL;
	new_argv = handle_args(argc, argv, new_argv);
	if (check_args(new_argv) == true)
		fill(a, new_argv);
	else
	{
		if (argc == 2)
			free_argv(new_argv);
		exit_error();
	}
	return (new_argv);
}
