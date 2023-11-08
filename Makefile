bin/testListArray: testListArray.cpp ListArray.h List.h
	mkdir -p bin
	g++ -o bin/testListArray testListArray.cpp ListArray.h

clean:
	rm -r *.o *.gch bin

bin/testNode: testNode.cpp Node.h
	mkdir -p bin
	g++ -o bin/testNode testNode.cpp Node.h

bin/testListLinnked: testListLinked.cpp ListLinked.h List.h
	mkdir -p bin
	g++ -o bint/testListLinked testListLinked.cpp ListLinked.h

clean:
	rm -r *.o *gch bin

Point2D.o: Point2D.h Point2D.cpp
	g++ -c Point2D.cpp
