#include <iostream>
#include <iomanip>

#ifndef __GLOCK_CONSOLE__
#define __GLOCK_CONSOLE__

namespace Glock {
    class Console {
        public:
            Console ();

            static void SetPrecision (int precision) {std::cout << std::fixed << std::setprecision(precision);}

            template<class T>
            static void Print (const T& target) {std::cout << target.ToString ();}
    
            template<class T>
            static void PrintLn (const T& target) {std::cout << target.ToString () << std::endl;}
    };
}

#endif
