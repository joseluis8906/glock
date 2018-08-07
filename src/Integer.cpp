#include "Integer.h"

Glock::Integer::Integer () { }

Glock::Integer::Integer (int target) : value{(signed long long int)target} { }

Glock::Integer::Integer (long int target) : value{(signed long long int)target} { }

Glock::Integer::Integer (long long int target) : value{(signed long long int)target} { }

Glock::String Glock::Integer::ToString () const {
    return std::to_string (value);
}

