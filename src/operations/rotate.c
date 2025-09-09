/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:06:51 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/09 11:19:26 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack	**stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (!(*stack)->next)
		return ;
	last_node = *stack;
	first_node = (*stack)->next;
	*stack = get_last_node(stack);
	(*stack)->next = last_node;
	last_node->next = NULL;
	*stack = first_node;
}

void	ra(t_stack **stack)
{
	write (1, "ra\n", 3);
	rotate(stack);
}

void	rb(t_stack **stack)
{
	write (1, "rb\n", 3);
	rotate(stack);
}
