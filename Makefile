SearchRange: SearchRange.o
	g++ -g -o SearchRange.exe SearchRange.o -pthread    

SearchRange.o: SearchRange/SearchRange.cpp
	g++ -g  -c -pthread SearchRange/SearchRange.cpp
