CXX = clang++
CXX_FLAGS = -Wall -Wextra -pedantic -Werror -fsanitize=undefined -std=c++20

main:
	$(CXX) $(CXX_FLAGS) main.cpp person.cpp student.cpp lecturer.cpp factory.cpp -o main
	valgrind ./main

clean:
	rm main