/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_node.c                   			            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:35:06 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/02 11:37:22 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_last_node(t_stack	**stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

t_stack	*get_previous_last_node(t_stack	**stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp->next->next)
		temp = temp->next;
	return (temp);
}

t_stack	*get_highest_node(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*highest_stack;

	temp = *stack;
	highest_stack = temp;
	while (temp)
	{
		if (temp->value > highest_stack->value)
			highest_stack = temp;
		temp = temp->next;
	}
	return (highest_stack);
}
