/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:06:51 by frocha-b          #+#    #+#             */
/*   Updated: 2025/07/28 15:32:27 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack	**stack)
{
	t_stack	*first_node;
	t_stack	*last_node;
	t_stack	*temp;

	if (!(*stack)->next)
		return ;
	temp = *stack;
	first_node = temp->next;
	last_node = get_last_node(*stack);
	
	last_node->next = temp;
	temp->next = NULL;
	*stack = first_node;
}
void	ra(t_stack **stack)
{
	ft_printf("ra\n");
	rotate(stack);
}

void	rb(t_stack **stack)
{
	ft_printf("rb\n");
	rotate(stack);
}
