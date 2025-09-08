/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 12:47:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/08 10:37:18 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack	**a)
{
	t_stack	*temp;
	
	int	size;

	size = 0;
	temp = *a;
	while(temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
