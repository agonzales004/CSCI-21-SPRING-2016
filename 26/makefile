#creates the executable from both the object files
lab26test: lab_26_unit_test.o sorting.cpp
	g++ -Wall -g -o lab26test sorting.cpp lab_26_unit_test.o

#creates the lab13 object file
lab26: sorting.cpp
	g++ -Wall -g -c sorting.cpp

#creates the unit test object file
lab_26_unit_test: lab_26_unit_test.cpp
	g++ -Wall -g -c lab_26_unit_test.cpp
	
clean:
	rm *.o
	rm *test