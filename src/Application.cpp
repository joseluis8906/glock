#include <iostream>
#include "String.h"
#include "Scanner.h"
#include "Console.h"
#include "Integer.h"

int main () {    
    Glock::Console::Print(Glock::String("Escribe tu nombre: "));
    Glock::String name = Glock::Scanner::NextLine();
    Glock::Console::PrintLn (Glock::String("Hola {name}").Replace("{name}", name));

    Glock::Console::Print(Glock::String("Escribe un numero: "));
    Glock::Integer i = Glock::Scanner::NextInt();
    Glock::Console::PrintLn (Glock::String("El número es: ") + i);
}
