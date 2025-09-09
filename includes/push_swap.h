/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 18:56:28 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/09 11:04:56 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/******************************************************************************/
/*                              INCLUDES                                      */
/******************************************************************************/

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>

/******************************************************************************/
/*                               STRUCT                                       */
/******************************************************************************/

typedef struct s_stack
{
	int					value;
	int					index;
	struct s_stack		*next;
}				t_stack;

/******************************************************************************/
/*                              OPERATIONS                                    */
/******************************************************************************/

void	ra(t_stack **a);
void	rb(t_stack **b);
void	rra(t_stack	**a);
void	pa(t_stack	**a, t_stack	**b);
void	pb(t_stack	**b, t_stack	**a);
void	sa(t_stack	**stack_a);
void	sb(t_stack	**stack_b);

/******************************************************************************/
/*                               PARSER                                       */
/******************************************************************************/

char	**parser(t_stack **a, int argc, char **argv);
char	**handle_args(int argc, char **argv, char **new_argv);
void	fill(t_stack **stack_a, char **new_argv);
bool	check_args(char **argv);

/******************************************************************************/
/*                               SORTING                                      */
/******************************************************************************/

int		calculate_max_bytes(int max_index);
bool	is_stack_sorted(t_stack	**a);
void	radix_sort(t_stack **a, t_stack **b);
void	sort_index(t_stack	**stack);
void	sorting(t_stack **a, t_stack	**b);
int		stack_size(t_stack	**a);
void	tiny_sort(t_stack **a, t_stack	**b);

/******************************************************************************/
/*                               UTILS                                        */
/******************************************************************************/

void	exit_error(void);
void	free_argv(char **argv);
void	free_stack(t_stack	*stack);
long	ft_atol(const char *n);
char	**ft_split(char const *s, char sep);
t_stack	*get_last_node(t_stack **stack);
t_stack	*get_previous_last_node(t_stack	**stack);
t_stack	*get_highest_node(t_stack **stack);
void	print_stack(t_stack *a);

#endif