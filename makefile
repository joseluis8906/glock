CC = g++ -Wall -Wextra -Wpedantic -O3 -std=c++14
CFLAGS = `pkg-config gtkmm-3.0 --cflags` -c
LDFLAGS = `pkg-config gtkmm-3.0 --libs`
SOURCE = src
OBJ = obj

all: jarvis

jarvis: Application.o Scanner.o String.o Integer.o Console.o
	$(CC) \
	$(OBJ)/Application.o \
	$(OBJ)/Scanner.o \
	$(OBJ)/Console.o \
	$(OBJ)/String.o \
	$(OBJ)/Integer.o \
	-o jarvis $(LDFLAGS)
	
Application.o: $(SOURCE)/Application.cpp
	$(CC) $(CFLAGS) $(SOURCE)/Application.cpp -o  $(OBJ)/Application.o

Integer.o: $(SOURCE)/Integer.cpp
	$(CC) $(CFLAGS) $(SOURCE)/Integer.cpp -o $(OBJ)/Integer.o
	
String.o: $(SOURCE)/String.cpp
	$(CC) $(CFLAGS) $(SOURCE)/String.cpp -o $(OBJ)/String.o

Scanner.o: $(SOURCE)/Scanner.cpp
	$(CC) $(CFLAGS) $(SOURCE)/Scanner.cpp -o $(OBJ)/Scanner.o

Console.o: $(SOURCE)/Console.cpp
	$(CC) $(CFLAGS) $(SOURCE)/Console.cpp -o $(OBJ)/Console.o
	
clean:
	rm $(OBJ)/*o jarvis
