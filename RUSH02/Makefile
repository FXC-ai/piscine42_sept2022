CC = gcc
EXEC = rush-02
CFLAGS = -Wall -Wextra -Werror
all : $(EXEC)

$(EXEC) : main.o ft_atoi.o ft_convert_to_expression.o ft_num_to_expression.o ft_read_dictionnary.o ft_split.o ft_strdup.o ft_strlen.o ft_validarg.o
	$(CC) $(CFLAGS) -o rush-02 main.o ft_atoi.o ft_convert_to_expression.o ft_num_to_expression.o ft_read_dictionnary.o ft_split.o ft_strdup.o ft_strlen.o ft_validarg.o

main.o : main.c
	$(CC) $(CFLAGS) -o main.o -c main.c
ft_atoi.o : ft_atoi.c
	$(CC) $(CFLAGS) -o ft_atoi.o -c ft_atoi.c
ft_convert_to_expression.o : ft_convert_to_expression.c
	$(CC) $(CFLAGS) -o ft_convert_to_expression.o -c ft_convert_to_expression.c
ft_num_to_expression.o : ft_num_to_expression.c
	$(CC) $(CFLAGS) -o ft_num_to_expression.o -c ft_num_to_expression.c
ft_read_dictionnary.o : ft_read_dictionnary.c
	$(CC) $(CFLAGS) -o ft_read_dictionnary.o -c ft_read_dictionnary.c
ft_split.o : ft_split.c
	$(CC) $(CFLAGS) -o ft_split.o -c ft_split.c
ft_strdup.o : ft_strdup.c
	$(CC) $(CFLAGS) -o ft_strdup.o -c ft_strdup.c
ft_strlen.o : ft_strlen.c
	$(CC) $(CFLAGS) -o ft_strlen.o -c ft_strlen.c
ft_validarg.o : ft_validarg.c
	$(CC) $(CFLAGS) -o ft_validarg.o -c ft_validarg.c
clean : 
	rm -rf *.o
fclean : clean
	rm -rf rush-02
re : fclean all

.PHONY: all clean fclean re
