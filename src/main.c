/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 22:14:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/08 17:16:19 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**new_argv;
	
	a = NULL;
	b = NULL;
	new_argv = NULL;
	if (argc < 2 || (argc == 2 && argv[1][0] == '\0'))
		return (1);
	new_argv = parser(&a, argc, argv);
	sorting(&a, &b);
	if (argc == 2)
		free_argv(new_argv);
	print_stack(a);
	free_stack(a);
}
