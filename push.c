/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:19:40 by frocha-b          #+#    #+#             */
/*   Updated: 2025/07/12 16:37:06 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **stack_to, t_stack	**stack_from)
{
	if (!stack_to)
	{
		(*stack_to)->value = (*stack_from)->value;
		(*stack_to)->next = NULL;
		(*stack_from) = (*stack_from)->next;	
	}
	else
	{
		(*stack_from)->next = *(stack_to);
		*stack_to = *stack_from;
	}
}