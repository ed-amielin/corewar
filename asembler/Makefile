# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddodukal <ddodukal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 16:23:08 by ddodukal          #+#    #+#              #
#    Updated: 2019/10/30 14:56:58 by eamielin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../asm

LIBFT = gnl/libft/libft.a
LIBFT_DIR = gnl/libft/

HEAD = asm.h
INCLUD_DIR = .
FLAGS =  -Wall -Werror -Wextra

SRC = asm.c bonus.c checkfile.c comname.c labelch.c valid.c \
gnl/get_next_line.c addcheckfile.c convert.c usefull.c codecon.c dlc1.c \
block5.c dlc2.c cortos.c corconval.c corcode.c corcode2.c errman.c dlc3.c \
dlc4.c

O_FILES		= $(addprefix , $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(LIBFT) $(O_FILES)
	gcc $(O_FILES) -o $(NAME) -lft -L $(LIBFT_DIR) $(FLAGS)
	@printf '\033[1;32m[ ✔ ] %s\n\033[0m' "Create binary asm"

$%.o: %.c $(HEAD)
		gcc -c $< -o $@ $(FLAGS) -I $(INCLUD_DIR)

$(LIBFT):
	make -C gnl/libft/
	@printf '\033[1;32m[ ✔ ] %s\n\033[0m' "Compile lib"

clean:
	rm -rf $(O_FILES)
	make clean -C gnl/libft/
	@printf '\033[1;32m[ ✔ ] %s\n\033[0m' "All *.o were cleaned"

fclean: clean
	rm -rf $(NAME)
	make fclean -C gnl/libft
	@printf '\033[1;32m[ ✔ ] %s\n\033[0m' "Libft.a and binary were cleaned"

re: fclean all
