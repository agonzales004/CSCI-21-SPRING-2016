#creates the executable from both the object files
assignment5test:	 assignment_5_unit_test.o bs_treet.o bs_nodet.o
	g++ -Wall -g -o assignment5test bs_treet.o bs_nodet.o assignment_5_unit_test.o 

#creates the prize and box object files
assignment5:	bs_treet.cpp bs_treet.h bs_nodet.cpp bs_nodet.h
	g++ -Wall -g -c bs_treet.cpp bs_nodet.cpp 

#creates the unit test object file
assignment_5_unit_test:    assignment_5_unit_test.cpp
	g++ -Wall -g -c assignment_5_unit_test.cpp