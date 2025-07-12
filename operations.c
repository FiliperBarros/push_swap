/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:50:54 by frocha-b          #+#    #+#             */
/*   Updated: 2025/07/12 16:03:48 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	push(t_stack	**stack_to, t_stack	**stack_from)
// {
// 	t_stack	*temp;
// 	t_stack *temp2;

// 	temp = *stack_from;
// 	if (*stack_to)
// 	{
// 		temp2 = stack_from->next;
// 		(*stack_from)->next = stack_to;
// 		*stack_from = temp2;
// 	}
// 	else
// 		add_node();

void	rotate(t_stack	**stack)
{
	t_stack	*first_node;
	t_stack	*last_node;
	t_stack	*temp;

	temp = *stack;
	first_node = temp->next;
	last_node = get_last_node(*stack);
	
	last_node->next = temp;
	temp->next = NULL;
	*stack = first_node;
}
/* 
void	swap(t_stack	**stack)
{
	t_stack *temp;
	t_stack	*second;
	t_stack	*first;

	temp = *stack;
	second = temp->next;
	first =temp;
	
	first->next = second->next;
	second->next = first;
	*stack = second;
} */


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
	ft_printf("sa\n");
	swap(stack_a);
}

void	sb(t_stack	**stack_b)
{
	ft_printf("sb\n");
	swap(stack_b);
}




void	ra(t_stack **stack)
{
	ft_printf("ra\n");
	rotate(stack);
}

// void	pa(t_stack	**a, t_stack	**b)
// {
// 	ft_printf("pa\n");
// 	push(a, b);
// }
// void	pb(t_stack	**b, t_stack	**a)
// {
// 	ft_printf("pb\n");
// 	push(b, a);
// }