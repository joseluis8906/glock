#include "String.h"
#include "Integer.h"
#include "Decimal.h"

#ifndef __GLOCK_SCANNER__
#define __GLOCK_SCANNER__

namespace Glock {
    class Scanner {
        public:
            Scanner ();
            static String NextLine ();
            static Integer NextInt ();
            static Decimal NextDecimal ();
    };
}

#endif
