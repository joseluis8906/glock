#include "Integer.h"

Glock::Integer::Integer () { }

Glock::Integer::Integer (int target) : value{(signed long long int)target} { }

Glock::Integer::Integer (long int target) : value{(signed long long int)target} { }

Glock::Integer::Integer (long long int target) : value{(signed long long int)target} { }

signed long long int Glock::Integer::getValue () const {
    return value;
}

