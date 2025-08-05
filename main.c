/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 22:14:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/08/05 17:54:16 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	free_argv(char **argv)
{
	int	i;

	i = 0;
	while(argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	free_stack(t_stack	**stack)
{
	t_stack	*current;
	t_stack	*temp;
	
	current = *stack;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	free(stack);
}
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

void	fill(t_stack **stack_a, char **new_argv, int argc)
{
	int i;
	t_stack	*temp;
	
	i = 0;	
	temp = add_node(stack_a, i, new_argv);
	(*stack_a) = temp;
	while(++i < argc - 1)
	{
		(*stack_a)->next = add_node(stack_a, i, new_argv);
		(*stack_a) = (*stack_a)->next;
	}
	(*stack_a) = temp;
}

t_stack *add_node(t_stack **stack_a, int i,char **new_argv)
{
	t_stack	*node;
	node = malloc(sizeof(t_stack));
	if (!node)
	{ 
		free_stack(stack_a);
		free(new_argv); 
		exit;
	}
	node->value = ft_atol(new_argv[i]);
	node->index = -1;	
	node->next = NULL;
	return (node);
}

bool	is_stack_sorted(t_stack	**a)
{
	while((*a)->next)
	{
		if((*a)->value > (*a)->next->value)
			return (0);
		(*a) = (*a)->next;
	}
	return (1);
}

int	stack_size(t_stack	**a)
{
	int	size;

	size = 0;
	while(*a)
	{
		size++;
		(*a) = (*a)->next;
	}
	return (size);
}

int	main(int argc, char **argv)
{
	char	**new_argv;
	t_stack	*a;
	t_stack	*b;
	
	a = NULL;
	b = NULL;
	if (argc < 2 || (argc == 2 && argv[1][0] == '\0'))
		return (1);
	new_argv = handle_args(argc, argv);
	if (check_args(new_argv))
		fill(&a, new_argv + 1, argc);
	else
	{
		free_argv(new_argv);
		ft_error();
	}	
	if (!is_stack_sorted(&a))
	{
		if(stack_size(&a) <= 5)
			tiny_sort(&a, &b);
		else
			radix_sort(&a, &b);
	}
	if (argc == 2)
		free_argv(new_argv);
	free_stack(a);
}