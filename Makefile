fib: 
	g++ -o fibonacci_words fibonacci_words.cc main.cc

doc:
	doxygen

all: fib doc

.PHONY: clean

clean:
	rm -f fibonacci_words *.o
	rm -rf html latex