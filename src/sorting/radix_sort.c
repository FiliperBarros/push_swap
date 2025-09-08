/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:44:41 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/08 17:08:34 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack **a, t_stack **b)
{
	int	i;
	int	j;
	int	max_bytes;
	int	size_of_stack_a;

	i = 0;
	size_of_stack_a = stack_size(a);
	max_bytes = calculate_max_bytes(size_of_stack_a - 1);
	sort_index(a);
	while (i < max_bytes)
	{
		j = 0;
		while (j < size_of_stack_a)
		{
			if (((*a)->index >> i) & 1)
				ra(a);
			else
				pb(b, a);
			j++;
		}
		while (stack_size(b))
			pa(a, b);
		i++;
	}
	
	
}
