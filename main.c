/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 22:14:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/07/28 19:02:59 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**handle_args(int argc, char **argv)
{
	char	**new_argv;
	
	if (argc == 2)
	{
		new_argv = ft_split(argv + 1,' ');
		if (!new_argv)
			ft_error();
			exit;
	}
	else
		new_argv = argv + 1;
	return (new_argv);
}

void	stack_init(t_stack	**stack_a, char **new_argv, int argc)
{
	int i;

	i = 0;
	while(i++ < argc - 1)
	{
		(*stack_a)->value = ft_atol(new_argv[i]);
		(*stack_a)->index = -1;
		(*stack_a) = (*stack_a)->next;
	}
}

int	main(int argc, char **argv)
{
	char	**new_argv;
	t_stack	*a;
	t_stack	*b;
	
	a = NULL;
	b = NULL;
	if (argc < 2)
		return (1);
	new_argv = handle_args(argc, argv);
	if (check_args(new_argv))
		stack_init(&a, new_argv + 1, argc);
	else
		ft_error();
	if (!stack_sorted(&a))
	{
		if(lst_size(&a) <= 5)
			tiny_sort(&a, &b);
		else
			push_swap(&a, &b);
	}
}