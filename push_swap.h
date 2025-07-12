/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 18:56:28 by frocha-b          #+#    #+#             */
/*   Updated: 2025/07/12 16:04:28 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"


typedef struct s_stack
{
	int					value;
	int					index;
	struct s_stack		*next;
}				t_stack;



t_stack	*get_last_node(t_stack *stack);
void	print_stack(t_stack *a);


				// OPERATIONS
void	rotate(t_stack	**stack);
void	ra(t_stack **a);


void	push(t_stack	*stack_to, t_stack	*stack_from);
void	pa(t_stack	*a, t_stack	*b);
void	pb(t_stack	*b, t_stack	*a);



void	swap(t_stack	**stack);
void	sa(t_stack	**stack_a);
void	sb(t_stack	**stack_b);




#endif