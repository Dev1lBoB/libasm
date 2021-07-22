/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpersimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 19:39:54 by wpersimm          #+#    #+#             */
/*   Updated: 2021/03/28 04:16:51 by wpersimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
} 					t_list;

size_t				ft_strlen(char *str);
char				*ft_strcpy(char *str1, const char *str2);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_write(int fd, const void *buf, size_t len);
int					ft_read(int fd, const void *buf, size_t len);
char				*ft_strdup(const char *line);
int					ft_list_size(t_list *list);
void				ft_list_push_front(t_list **list, void *data);

#endif
