# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 23:19:15 by yooshima          #+#    #+#              #
#    Updated: 2025/02/04 09:07:15 by yooshima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= iter
CXX			:= c++
CPPFLAGS	:= -Wall -Wextra -Werror -std=c++98

SRCS		:= main.cpp
OBJS		:= $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
