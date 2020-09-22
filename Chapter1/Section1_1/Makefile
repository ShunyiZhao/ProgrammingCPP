PRAC1EXE = practice1_1
CC = clang++
STD = -std=c++14

test1_1:
	$(CC) $(STD) practice1_1.cpp -o practice1_1
run:
	$(CC) $(STD) practice1_1.cpp -o practice1_1
	./$(PRAC1EXE)
memleak: test1_1
	echo "Valgrind:"
	valgrind --leak-check=full --show-leak-kinds=all ./$(PRAC1EXE)
testrun:
	$(CC) $(STD) $(PRAC1EXE).cpp -DTEST -o $(PRAC1EXE)
	./$(PRAC1EXE)
clear:
	rm $(PRAC1EXE)
