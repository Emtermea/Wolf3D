/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 11:53:06 by emtermea          #+#    #+#             */
/*   Updated: 2015/01/09 15:31:27 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

int	get_next_line(int const fd, char **line);

# define BUFF_SIZE 1

#endif
