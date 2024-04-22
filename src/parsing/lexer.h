/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 01:58:43 by asioud            #+#    #+#             */
/*   Updated: 2023/07/03 20:15:19 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Lexical analysis 
 * The data and function here will read input 
 * to make it easier to convert them into tokens
*/

#ifndef LEXER_H
# define LEXER_H

# define EOF (-1)
# define ERRCHAR (0)

# define INIT_SRC_POS (-2)

/**
 * @brief This struct represents our command line
 * @param buffer: the command line
 * @param buff_size: the size of the command line
 * @param cur_pos: the current position in the command line
*/
typedef struct s_cli
{
	char		*buffer;
	long int	buff_size;
	long int	cur_pos;
}				t_cli;

char				get_next_char(t_cli *cli);

char				peek_char(t_cli *cli);

void				unget_char(t_cli *cli);

/**
 * @brief Skip whitespaces in the input buffer
 * @param cli The Command Line
 */
void				skip_whitespaces(t_cli *cli);

#endif
