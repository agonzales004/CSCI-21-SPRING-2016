#creates the executable from both the object files
lab4test:	lab_4_unit_test.o lab_4.o
	g++ -Wall -g -o lab4test lab_4.o lab_4_unit_test.o
    
#creates the lab4 object file
lab4:	lab4.cpp
	g++ -Wall -g -c lab_4.cpp
    
#creates the unit test object file
lab_4_unit_test:	lab_4_unit_test.cpp
	g++ -Wall -g -c lab_4_unit_test.cpp