CC = clang++
STD = -std=c++14
CFLAGS = -Wall -Wextra -Wfloat-equal
VALGRIND = valgrind --leak-check=full --show-leak-kinds=all

PRAC5_23 = practice5_23

run5_23:
	$(CC) $(STD) $(PRAC5_23).cpp $(CFLAGS) -o $(PRAC5_23)
	./$(PRAC5_23)
	echo "valgrind:"
	$(VALGRIND) ./$(PRAC5_23)