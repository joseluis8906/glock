#include "Decimal.h"

Glock::Decimal::Decimal () { }

Glock::Decimal::Decimal (int target) : value{(long double)target} { }

Glock::Decimal::Decimal (long int target) : value{(long double)target} { }

Glock::Decimal::Decimal (long long int target) : value{(long double)target} { }

Glock::Decimal::Decimal (float target) : value{(long double)target} { }

Glock::Decimal::Decimal (double target) : value{(long double)target} { }

Glock::String Glock::Decimal::ToString () const {
    return std::to_string (value);
}

