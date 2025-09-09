/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:06:28 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/09 10:38:54 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*next_first;

	next_first = (*stack)->next;
	(*stack)->next = next_first->next;
	next_first->next = (*stack);
	*stack = next_first;
}

void	sa(t_stack	**stack_a)
{
	write(1, "sa\n", 3);
	swap(stack_a);
}

void	sb(t_stack	**stack_b)
{
	write(1, "sb\n", 3);
	swap(stack_b);
}
