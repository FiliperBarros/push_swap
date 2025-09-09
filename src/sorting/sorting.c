/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:37:17 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/09 10:34:40 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_stack **a, t_stack **b)
{
	if (!is_stack_sorted(a))
	{
		if (stack_size(a) <= 5)
			tiny_sort(a, b);
		else
			radix_sort(a, b);
	}
	else
		return ;
}
