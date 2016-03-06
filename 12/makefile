#creates the executable from both the object files
lab12test: lab_12_unit_test.o item.o food_item.o magic_item.o
	g++ -Wall -g -o lab12test item.o lab_12_unit_test.o food_item.o magic_item.o

#creates the lab12 object file
lab12: item.cpp item.h food_item.cpp food_item.h magic_item.cpp magic_item.h
	g++ -Wall -g -c item.cpp food_item.cpp magic_item.cpp

#creates the unit test object file
lab_12_unit_test: lab_12_unit_test.cpp
	g++ -Wall -g -c lab_12_unit_test.cpp