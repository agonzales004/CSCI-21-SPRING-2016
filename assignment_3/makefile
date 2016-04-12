#creates the executable from both the object files
assignment3test:	 assignment_3_unit_test.o box.o prize.o
	g++ -Wall -g -o assignment3test box.o prize.o assignment_3_unit_test.o 

#creates the prize and box object files
assignment3:	prize.cpp prize.h box.cpp box.h
	g++ -Wall -g -c prize.cpp box.cpp 

#creates the unit test object file
assignment_3_unit_test:    assignment_3_unit_test.cpp
	g++ -Wall -g -c assignment_3_unit_test.cpp