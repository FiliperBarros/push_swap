/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 18:53:53 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/09 11:01:25 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_min_value_to_top(t_stack	**stack)
{
	t_stack	*current_node;
	int		min;
	int		index;
	int		min_index;

	current_node = *stack;
	min = current_node->value;
	index = 0;
	while (current_node)
	{
		if (current_node->value < min)
		{
			min = current_node->value;
			min_index = index;
		}
		current_node = current_node->next;
		index++;
	}
	while ((*stack)->value != min)
	{
		if (min_index == 1)
			ra(stack);
		else
			rra(stack);
	}
}

void	sort_three_numbers(t_stack **a)
{
	t_stack	*highest_node;

	highest_node = get_highest_node(a);
	if (highest_node == *a)
		ra(a);
	else if ((*a)->next == highest_node)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_four_numbers(t_stack **a, t_stack	**b)
{
	move_min_value_to_top(a);
	pb(b, a);
	sort_three_numbers(a);
	pa(a, b);
}

void	sort_five_numbers(t_stack **a, t_stack	**b)
{
	move_min_value_to_top(a);
	pb(b, a);
	sort_four_numbers(a, b);
	pa(a, b);
}

void	tiny_sort(t_stack **a, t_stack	**b)
{
	int	size;

	size = stack_size(a);
	if (size == 2)
		ra(a);
	if (size == 3)
		sort_three_numbers(a);
	if (size == 4)
		sort_four_numbers(a, b);
	if (size == 5)
		sort_five_numbers(a, b);
}
