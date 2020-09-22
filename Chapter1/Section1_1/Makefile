PRAC1EXE = practice1_1
PRAC3 = practice1_3
PRAC4 = practice1_4
PRAC5 = practice1_5
CC = clang++
STD = -std=c++14

test1_1:
	$(CC) $(STD) practice1_1.cpp -o practice1_1

runTest1:
	$(CC) $(STD) practice1_1.cpp -o practice1_1
	./$(PRAC1EXE)

runTest3:
	$(CC) $(STD) $(PRAC3).cpp -o $(PRAC3)
	./$(PRAC3)

runTest4:
	$(CC) $(STD) $(PRAC4).cpp -o $(PRAC4)
	./$(PRAC4)

runTest5:
	$(CC) $(STD) $(PRAC5).cpp -o $(PRAC5)
	./$(PRAC5)

memleakTest1: test1_1
	echo "Valgrind:"
	valgrind --leak-check=full --show-leak-kinds=all ./$(PRAC1EXE)
testrun:
	$(CC) $(STD) $(PRAC1EXE).cpp -DTEST -o $(PRAC1EXE)
	./$(PRAC1EXE)
clear:
	rm $(PRAC1EXE)
