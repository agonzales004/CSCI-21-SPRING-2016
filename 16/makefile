#creates the executable from both the object files
lab16test: lab_16_unit_test.o sl_node.o sl_list.o
	g++ -Wall -g -o lab16test sl_node.o sl_list.o lab_16_unit_test.o

#creates the SLNode object file
lab15: sl_node.cpp sl_node.h
	g++ -Wall -g -c sl_node.cpp
	
#creates the SLList object file
lab16: sl_list.cpp sl_list.h
	g++ -Wall -g -c sl_list.cpp


#creates the unit test object file
lab_16_unit_test: lab_16_unit_test.cpp
	g++ -Wall -g -c lab_16_unit_test_unit_test.cpp