ListArray.o: ListArray.h List.h
	g++ -c ListArray.h

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

Point2D.o: Point2D.h Point2D.cpp
	g++ -c Point2D.cpp

Shape.o: Shape.h Shape.cpp
	g++ -c Shape.cpp

Cirlce.o: Circle.h Circle.cpp
	g++ -c Circle.cpp

bin/testCircle: testCircle.cpp Circle.o Shape.o Point2D.o
	g++ -c testCircle.cpp
	mkdir -p bin
	g++ -o bin/testCircle testCircle.o Circle.o Shape.o Point2D.o

Rectangle.o: Rectangle.h Rectangle.cpp
	g++ -c Rectangle.cpp

bin/testRectangle: testRectangle.cpp Rectangle.o Shape.o Point2D.o
	g++ -c testRectangle.cpp
	mkdir -p bin
	g++ -o bin/testRectangle testRectangle.o Rectangle.o SHape.o Point2D.o

bin/testPoint2D: testPoint2D.cpp Point2D.o
	g++ -c testPoint2D.cpp
	mkdir -p bin
	g++ -o bin/testPoint2D testPoint2D.o Point2D.o

bin/testCircle: testCircle.cpp Circle.o Shape.o Point2D.o
	g++ -c testCircle.cpp
	mkdir -p bin
	g++ -o bin/testCircle testCircle.o Circle.o Shape.o Point2D.o
Square.o: Square.cpp Square.h
	g++ -c Square.cpp

bin/testSquare: testSquare.cpp Square.o Shape.o Point2D.0
	g++ -c testSquare.cpp
	mkdir -p bin
	g++ -o bin/testSquare testSquare.o Square.o Shape.o Point2D.o

bin/Drawing.o: Drawing.cpp Drawing.h
	g++ -c Drawing.cpp

testDrawing: testDrawing.cpp Drawing.o Square.o Rectangle.o Circle.o Shape.o Point2D.o
	g++ -c testDrawing.cpp
	mkdir -p bin
	g++ -o bin/testDrawing testDrawing.o Draqing.o Square.o Rectangle.o Circle.o Shape.o Point2D.o

clean:
	rm -rf *.o *.gch bin
	
















