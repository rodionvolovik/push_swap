PUSH_SWAP = push_swap
CHECKER = checker
INCLUDES = -I./ -I src_checker/get_next_line/get_next_line.h
LIBFT = libft/libft.a
OBJ_PS = 	src/check_input.o \
		src/fill_stack.o \
		src/print_stacks.o \
		src_push_swap/add_oper.o \
		src_push_swap/ft_pivot.o \
		src_push_swap/ft_sort.o \
		src_push_swap/ft_sort_three.o \
		src_push_swap/logic.o \
		src_push_swap/optim1.o \
		src_push_swap/optim2.o \
		src_push_swap/optim_operations.o \
		src_push_swap/push_swap.o \
		src_push_swap/stack_len.o \
		sort_instructions/is_sorted.o \
		sort_instructions/pushes.o \
		sort_instructions/rotates.o \
		sort_instructions/swaps.o
OBJ_CH = src/check_input.o \
		src/fill_stack.o \
		src/print_stacks.o \
		src_checker/checker.o \
		src_checker/get_next_line/get_next_line.o \
		sort_instructions/is_sorted.o \
		sort_instructions/pushes.o \
		sort_instructions/rotates.o \
		sort_instructions/swaps.o

.phony: all clean fclean re

all: $(OBJ_CH) $(OBJ_PS) $(LIBFT)
	@ gcc -Wall -Wextra -Werror $(LIBFT) $(OBJ_PS) -o $(PUSH_SWAP)
	@ gcc -Wall -Wextra -Werror $(LIBFT) $(OBJ_CH) -o $(CHECKER)
	@ echo "\x1b[32m Project was successfully compiled \x1b[0m"

$(LIBFT):
	@ make -C ./libft
	@ echo "\x1b[32m Library was successfully compiled \x1b[0m"

%.o : ./%.c
	@ $(CC) $(CFLAGS) -o $@ -c $< $(INCLUDES)
	@ echo "\x1b[32m Compiling object files \x1b[0m"

clean:
	@ make clean -C ./libft
	@ /bin/rm -f $(OBJ_CH)
	@ /bin/rm -f $(OBJ_PS)

fclean: clean
	@ /bin/rm -f libft/libft.a
	@ /bin/rm -f push_swap
	@ /bin/rm -f checker
	@ echo "\x1b[31m You deleted this project binaries \x1b[0m"

re: fclean all

# echo "2 1 3 6 5 8\nsa\npb\npb\npb\nsa\npa\npa\npa\n" | ./a.out | cat -e
# clear && gcc sort_instructions/* src/* libft/*.c src_checker/*.c src_checker/get_next_line/get_next_line.c -I./ -o checker
# echo "2 1 3 6 5 8\nsa\npb\npb\npb\nsa\npa\npa\npa\n" | ./a.out | cat -e
# clear && gcc sort_instructions/* src/* libft/*.c src_push_swap/*c -I./ -o push_swap
# ARG="68 103 8 19 55 99 86 147 144 1 100 54 49 67 34"