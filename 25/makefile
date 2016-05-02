#creates the executable from both the object files
lab25test: lab_25_unit_test.o bst_node.o bs_tree.o
	g++ -Wall -g -o lab25test bst_node.o lab_25_unit_test.o bs_tree.o

#creates the lab25 object file
lab25: bst_node.cpp bst_node.h
	g++ -Wall -g -c bst_node.cpp
	
#creates the lab25 object file
lab25: bs_tree.cpp bs_tree.h
	g++ -Wall -g -c bs_tree.cpp

#creates the unit test object file
lab_25_unit_test: lab_25_unit_test.cpp
	g++ -Wall -g -c lab_25_unit_test.cpp
	
clean:
	rm *.o
	rm *test