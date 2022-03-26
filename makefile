pa3: main.o Money.o Account.o
	g++ -o pa3 main.o Money.o Account.o
	

main.o: main.cpp
	g++ -c main.cpp

Money.o: Money.h Money.cpp
	g++ -c Money.h Money.cpp

Account.o: Account.h Account.cpp
	g++ -c Account.h Account.cpp


clean:
	rm *.o pa3