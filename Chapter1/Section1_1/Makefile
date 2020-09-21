PRAC1EXE = practice1_1

test1_1:
	clang++ -std=c++14 practice1_1.cpp -o practice1_1
run:
	clang++ -std=c++14 practice1_1.cpp -o practice1_1
	./$(PRAC1EXE)
memleak: test1_1
	echo "Valgrind:"
	valgrind --leak-check=full --show-leak-kinds=all ./$(PRAC1EXE)
clear:
	rm $(PRAC1EXE)
