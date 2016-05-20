#creates the executable from both the object files
assignment4test:	 DLList.o DLNode.o driver.o
	g++ -Wall -g -o assignment4test DLList.o DLNode.o driver.o

#creates the DLNode and DLList object files
assignment4:	DLList.cpp DLList.h DLNode.cpp DLNode.h driver.cpp
	g++ -Wall -g -c DLList.cpp DLNode.cpp driver.cpp

