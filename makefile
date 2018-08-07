CC = g++ -Wall -Wextra -Wpedantic -O3 -std=c++17
CFLAGS = `pkg-config gtkmm-3.0 --cflags` -c
LDFLAGS = `pkg-config gtkmm-3.0 --libs`
SOURCE = src
OBJ = obj

all: jarvis

jarvis: Application.o Integer.o Decimal.o String.o Scanner.o Console.o
	$(CC) \
	$(OBJ)/Application.o \
	$(OBJ)/Integer.o \
	$(OBJ)/Decimal.o \
	$(OBJ)/String.o \
	$(OBJ)/Scanner.o \
	$(OBJ)/Console.o \
	-o jarvis $(LDFLAGS)
	
Application.o: $(SOURCE)/Application.cpp
	$(CC) $(CFLAGS) $(SOURCE)/Application.cpp -o  $(OBJ)/Application.o

Integer.o: $(SOURCE)/Integer.cpp
	$(CC) $(CFLAGS) $(SOURCE)/Integer.cpp -o $(OBJ)/Integer.o

Decimal.o: $(SOURCE)/Decimal.cpp
	$(CC) $(CFLAGS) $(SOURCE)/Decimal.cpp -o $(OBJ)/Decimal.o
	
String.o: $(SOURCE)/String.cpp
	$(CC) $(CFLAGS) $(SOURCE)/String.cpp -o $(OBJ)/String.o

Scanner.o: $(SOURCE)/Scanner.cpp
	$(CC) $(CFLAGS) $(SOURCE)/Scanner.cpp -o $(OBJ)/Scanner.o

Console.o: $(SOURCE)/Console.cpp
	$(CC) $(CFLAGS) $(SOURCE)/Console.cpp -o $(OBJ)/Console.o
	
clean:
	rm $(OBJ)/*o jarvis
