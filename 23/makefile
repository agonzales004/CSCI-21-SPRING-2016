#creates the executable from both the object files
lab23test: lab_23_unit_test.o bst_node.o
	g++ -Wall -g -o lab23test bst_node.o lab_23_unit_test.o

#creates the lab23 object file
lab23: bst_node.cpp bst_node.h
	g++ -Wall -g -c bst_node.cpp

#creates the unit test object file
lab_23_unit_test: lab_23_unit_test.cpp
	g++ -Wall -g -c lab_23_unit_test.cpp
	
clean:
	rm *.o
	rm *test