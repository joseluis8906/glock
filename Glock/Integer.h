#include <iostream>
#include "String.h"

#ifndef __GLOCK_INTEGER__
#define __GLOCK_INTEGER__

namespace Glock {
    class Integer {
        private:
            signed long long int value;
        public:            
            Integer ();
            Integer (int);
            Integer (long int);
            Integer (long long int);
            String ToString() const;
    };
}

#endif
