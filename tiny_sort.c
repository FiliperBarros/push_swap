/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 18:53:53 by frocha-b          #+#    #+#             */
/*   Updated: 2025/08/05 18:21:47 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	t_stack	*highest_node;

	highest_node = find_highest_node(a);
	if (highest_node == *a)
		ra(a);
	// else if ((*a)->next == highest_node)
	// 	rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

t_stack	*find_highest_node(t_stack **a)
{
	t_stack	*highest_node;
	long	max;

	max = INT_MIN - 1;
	while (*a)
	{
		if ((*a)->value > max)
		{
			highest_node = *a;
			max= (*a)->value;
		}
		(*a) = (*a)->next;
	}
	return (highest_node);
}
void	tiny_sort(t_stack **a)
{
	int	size;

	size = stack_size(a);
	if (size == 2)
		ra(a);
	if (size == 3)
		sort_three(a);
	if (size == 4)	
		sort_four(a);
	if (size == 5)
		sort_five(a);
}

