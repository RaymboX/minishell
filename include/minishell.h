/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <mraymond@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:09:51 by mraymond          #+#    #+#             */
/*   Updated: 2022/09/15 11:48:15 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

//LIBRARIES
# include <unistd.h>
# include <fcntl.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <stdlib.h>
# include "libft/header/libft.h"
# include "signal.h"

//debug
# include <stdio.h>

//Message
# define NOARGALLOWED "Don't care about your extra argument. Show must go on!\n"
# define WELCOME "Welcome to RaymboX's Minishell. Hope you enjoy!\n"


//struct

typedef struct s_var
{
	char				**envp;
	char				**argv;
	char				*cmd_line;
	struct sigaction	sa_quit;
	struct sigaction	sa_int;
}				t_var;


#endif