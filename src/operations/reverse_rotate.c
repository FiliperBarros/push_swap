/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:34:26 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/09 10:40:40 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack	**stack)
{
	t_stack	*previous_last_node;
	t_stack	*temp;

	if (!(*stack)->next)
		return ;
	temp = *stack;
	previous_last_node = get_previous_last_node(stack);
	previous_last_node->next->next = temp;
	*stack = previous_last_node->next;
	previous_last_node->next = NULL;
}

void	rra(t_stack	**stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}
