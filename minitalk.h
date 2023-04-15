/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eborunov <eborunov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:57:29 by eborunov          #+#    #+#             */
/*   Updated: 2023/04/15 12:36:54 by eborunov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define WAIT_US  100 // usleep()

// ======================== INCLUDES

# include "libft/libft.h"
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

void	configure_sigaction_signals(struct sigaction *sa);
void	send_int(pid_t pid, int num);
void	send_char(pid_t pid, char c);
void	send_bit(pid_t pid, char bit, char flag_to_pause);

typedef struct s_protocol
{
	int		bits;
	int		data;
	int		flag;
	char	*message;
}			t_protocol;

#endif
