/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/10/21 14:17:21 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

# include <unistd.h>

typedef	struct	s_list
{
 	struct	s_list	*next;
	void	*data;
}				t_list;
t_list	*ft_create_elem(void *data);
t_list	*ft_list_last (t_list *begin_list);
t_list	*ft_list_push_params(int ac, char **av);
t_list 	*ft_list_at(t_list *begin_list, unsigned int nbr);
t_list	ft_list_find(t_list *bgl,void(*f)(void*),void *d_ref,int(*cmp)());
void	ft_list_clear(t_list **begin_list);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_foreach_if(t_list *bgl,void(*f)(void*),void *d_ref,int(*cmp)());
void	ft_list_foreach(t_list*begin_list,void(*f)(void*));
void 	ft_list_merge(t_list **begin_list1, t_list *begin_liste2);
void	ft_list_reverse_fun(t_list **begin_list);
void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());
int		ft_list_size(t_list *begin_list);

#endif
