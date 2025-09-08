/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:48:13 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/08 17:15:26 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_index(t_stack	**stack)
{
	int	i;
	long	min;
	t_stack	*current;
	int index;
	
	i = 0;
	index = 0;
	while (i < stack_size(stack))
	{
		current = *stack;
		min = 2147483648 + 1;
		while(current)
		{
			if (current->value < min && current->index == -1)
				min = current->value;
			current = current->next;
		}
		current = *stack;
		while(current->value != min)
			current = current->next;
		current->index = index;
		index++;
		i++;
		print_stack(*stack);
	}
}

