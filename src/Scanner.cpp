#include "Scanner.h"

Glock::Scanner::Scanner () { }

Glock::String Glock::Scanner::NextLine () {
    std::string s;
    std::getline(std::cin, s);
    return (Glock::String) s;
}
