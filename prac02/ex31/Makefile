all : mydatabase

mydatabase : mydatabase.o employee.o
	gcc -o mydatabase employee.o mydatabase.o

mydatabase.o : mydatabase.c employee.h
	gcc -c mydatabase.c

employee.o : employee.c employee.h
	gcc -c employee.c

clean :
	rm -f employee.o
	rm -f mydatabase.o
	rm -f mydatabase
