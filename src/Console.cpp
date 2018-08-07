#include "Console.h"

Glock::Console::Console () { }

void Glock::Console::Print (const Glock::String& target) {
    std::cout << target;
}

void Glock::Console::Print (const Glock::Integer& target) {
    std::cout << target.getValue();
}

void Glock::Console::PrintLn (const Glock::String& target) {
    std::cout << target << std::endl;
}

void Glock::Console::PrintLn (const Glock::Integer& target) {
    std::cout << target.getValue() << std::endl;
}
