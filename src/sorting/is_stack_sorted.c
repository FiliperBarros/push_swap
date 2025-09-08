/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stack_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 12:46:12 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/08 10:45:25 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_stack_sorted(t_stack	**a)
{
	while((*a)->next)
	{	
		if((*a)->value > (*a)->next->value)
			return (0);
		(*a) = (*a)->next;
	}
	return (1);
}
