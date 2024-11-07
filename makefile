CXX = g++
CXXFLAGS = -Wall -g

amal: driver.o University.o Student.o Course.o
	$(CXX) $(CXXFLAGS) driver.o University.o Student.o Course.o -o amal

driver.o: driver.cpp
	$(CXX) $(CXXFLAGS) -c driver.cpp

University.o: University.cpp University.h
	$(CXX) $(CXXFLAGS) -c University.cpp

Student.o: Student.cpp Student.h
	$(CXX) $(CXXFLAGS) -c Student.cpp

Course.o: Course.cpp Course.h
	$(CXX) $(CXXFLAGS) -c Course.cpp

clean:
	rm *.o*

run:
	./amal

val:
	valgrind ./amal