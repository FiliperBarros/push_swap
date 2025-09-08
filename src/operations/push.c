/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:19:40 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/02 15:51:41 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **stack_to, t_stack **stack_from)
{
	t_stack	*temp;
	
	if (!*stack_to || !stack_to)
	{
		temp = (*stack_from)->next;
		*stack_to = *stack_from;
		(*stack_to)->next = NULL;
		(*stack_from) = temp;
	}
	else
	{
		temp = (*stack_from)->next;
		(*stack_from)->next = *(stack_to);
		*stack_to = *stack_from;
		(*stack_from) = temp;
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	write(1, "pa\n", 3);
	push(stack_a, stack_b);
}
void	pb(t_stack **stack_b, t_stack **stack_a)
{
	write(1, "pb\n", 3);
	push(stack_b, stack_a);
}
