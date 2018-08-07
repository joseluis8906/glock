#include <iostream>
#include "String.h"

#ifndef __GLOCK_DECIMAL__
#define __GLOCK_DECIMAL__

namespace Glock {
    class Decimal {
        private:
            long double value;
        public:            
            Decimal ();
            Decimal (int);
            Decimal (long int);
            Decimal (long long int);
            Decimal (float);
            Decimal (double);
            String ToString() const;
    };
}

#endif
