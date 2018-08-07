#include <cstdlib>
#include "Scanner.h"

Glock::Scanner::Scanner () { }

Glock::String Glock::Scanner::NextLine () {
    std::string s;
    std::getline(std::cin, s);
    return (Glock::String) s;
}

Glock::Integer Glock::Scanner::NextInt () {
    std::string s;
    std::getline(std::cin, s);
    return (Glock::Integer) std::atoll(s.c_str());
}
