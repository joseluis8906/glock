#include <iostream>
#include "String.h"
#include "Integer.h"

#ifndef __GLOCK_CONSOLE__
#define __GLOCK_CONSOLE__

namespace Glock {
    class Console {
        public:
            Console ();
            static void Print (const String&);
            static void Print (const Integer&);

            static void PrintLn (const String&);
            static void PrintLn (const Integer&);
    };
}

#endif
