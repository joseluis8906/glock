#include <iostream>
#include "String.h"
#include "Scanner.h"
#include "Console.h"
#include "Integer.h"
#include "Decimal.h"

int main () {    
    Glock::Console::Print(Glock::String("Escribe tu nombre: "));
    Glock::String name = Glock::Scanner::NextLine();
    Glock::Console::PrintLn (Glock::String("Hola {name}").Replace("{name}", name));

    Glock::Console::Print(Glock::String("Escribe un entero: "));
    Glock::Integer i = Glock::Scanner::NextInt();
    Glock::Console::PrintLn (Glock::String("El número es: ") + i);

    Glock::Console::Print(Glock::String("Escribe un decimal: "));
    Glock::Decimal d = Glock::Scanner::NextDecimal();
    d.SetPrecision(10);
    Glock::Console::PrintLn(d);
}
