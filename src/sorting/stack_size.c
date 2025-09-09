/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 12:47:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/09 10:33:32 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack	**a)
{
	int		size;
	t_stack	*temp;

	size = 0;
	temp = *a;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
