/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:50:54 by frocha-b          #+#    #+#             */
/*   Updated: 2025/07/11 17:05:35 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack	*stack_to, t_stack	*stack_from)
{
	t_stack	*temp;

	temp = stack_to;
	stack_to = stack_to->next;	
	temp->next = stack_from;
}

void	rotate(t_stack	*stack)
{
	t_stack	*temp;
	t_stack	*last_node;
	t_stack	*first_node;
	
	temp = stack;
	first_node = stack->next;
	last_node = get_last_node(stack);
	
	last_node->next = stack;
	stack->next = NULL;
	stack = first_node;
}
void	ra(t_stack *stack)
{
	ft_printf("ra\n");
	rotate(stack);
}
// void	reverse_rotate(t_stack	*stack)
// {
// 	t_stack 	*second_last_node;
// 	t_stack		*first_node;
	
// 	first_node = stack;
// 	second_last_node = get_second_last_node(stack);
// 	stack = second_last_node->next;
// 	stack->next = first_node;
// 	second_last_node->next = NULL;
// }
void	pa(t_stack	*a, t_stack	*b)
{
	ft_printf("pa\n");
	push(a, b);
}
void	pb(t_stack	*b, t_stack	*a)
{
	ft_printf("pb\n");
	push(b, a);
}
// void	rra(t_stack *a)
// {
// 	ft_printf("rra\n");
// 	reverse_rotate(a);
// }


// void	rotate(t_stack	*stack)
// {
// 	t_stack	*first_node;
// 	t_stack	*last_node;
// 	t_stack	*temp;
// 	ft_printf("ra\n");

// 	temp = stack;
// 	first_node = stack->next;
// 	last_node = get_last_node(stack);
	
// 	last_node->next = temp;
// 	temp->next = NULL;
// 	stack = first_node;
// }