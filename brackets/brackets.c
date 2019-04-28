/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 16:13:27 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/22 17:40:40 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define BUFF_SIZE 4242

int	open_bracket(char c){
	return (c == '(' || c == '{' || c == '[');
}

int close_bracket(char c){
	return (c == ')' || c == '}' || c == ']');
}

int	bracket_match(char a, char b){
	return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

int check_bracket(char *str){
	char stack[BUFF_SIZE];
	int i = 0;
	while (*str){
		if (open_bracket(*str))
			stack[i++] = *str;
		if (close_bracket(*str))
			if (!bracket_match(stack[--i], *str))
				return (0);
		str++;
	}
	return (!i);
}

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc > 1){
		while (++i < argc){
			if (check_bracket(argv[i]))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
		}
	}
	else
		write(1, "\n", 1);
}
