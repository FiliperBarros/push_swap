/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:59:37 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/08 17:24:20 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_argv_size(char **argv)
{
	int	i;

	i = 0;
	while(argv[i])
		i++;
	return (i);
}
t_stack *add_node(t_stack **stack_a, int i,char **new_argv)
{
	t_stack	*node;
	node = malloc(sizeof(t_stack));
	if (!node)
	{ 
		free_stack(*stack_a);
		free(new_argv); 
		exit(1);
	}
	node->value = ft_atol(new_argv[i]);
	node->index = -1;	
	node->next = NULL;
	return (node);
}
void	fill(t_stack **stack_a, char **new_argv)
{	
	int i;
	int	argv_size;
	t_stack	*temp;
	t_stack	*current;
	
	argv_size = get_argv_size(new_argv);
	temp = add_node(stack_a, 0, new_argv);
	current = temp;
	i = 0;
	while(i++ < argv_size -1)
	{
		(current)->next = add_node(stack_a, i, new_argv);
		(current) = (current)->next;
	}
	(*stack_a) = temp;
	print_stack(*stack_a);
}
