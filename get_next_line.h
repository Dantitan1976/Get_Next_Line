/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:09:49 by dramirez          #+#    #+#             */
/*   Updated: 2022/12/21 23:02:34 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3 
# endif

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *cadena);
char	*ft_strchr(const char *cadena, int caract);
char	*ft_strdup(const char *src);
char	*ft_substr(const char *str, unsigned int inicio, size_t longitud);
char	*ft_strjoin(const char *str1, const char *str2);
char	*get_next_line(int fd);

#endif
