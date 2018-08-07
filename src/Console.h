#include <iostream>

#ifndef __GLOCK_CONSOLE__
#define __GLOCK_CONSOLE__

namespace Glock {
    class Console {
        public:
            Console ();

            template<class T>
            static void Print (const T& target) {std::cout << target.ToString ();}
    
            template<class T>
            static void PrintLn (const T& target) {Print(target); std::cout << std::endl;}
    };
}

#endif
