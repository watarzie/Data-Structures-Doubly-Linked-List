derlecalistir:program calistir
program:linkedlist.o main.o
	g++ ./lib/linkedlist.o ./lib/main.o -o ./bin/program
linkedlist.o:
	g++ -I "./include" -c ./src/linkedlist.cpp -o ./lib/linkedlist.o
main.o:
	g++ -I "./include" -c ./src/main.cpp -o ./lib/main.o
calistir:
	./bin/program.exe
	
	