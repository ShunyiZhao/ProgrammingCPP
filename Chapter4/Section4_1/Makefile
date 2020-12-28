CC = clang++
STD = -std=c++14
CFLAGS = -Wall -Wextra -Wequal-float
VALGRIND = valgrind --leak-check=full --show-leak-kinds=all

PRACTICE4_4 = practice4_4

run4_4:
	$(CC) $(STD) $(PRACTICE4_4).cpp $(CFLAGS) -o $(PRACTICE4_4)
	./$(PRACTICE4_4)
	echo "Valgrind:"
	$(VALGRIND) ./$(PRACTICE4_4)
