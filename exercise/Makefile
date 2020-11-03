fib: 
	g++ -o fibonacci_words_exercise fibonacci_words_exercise.cc main_exercise.cc

doc:
	doxygen

all: fib doc

.PHONY: clean

clean:
	rm -f fibonacci_words_exercise *.o
	rm -rf html latex