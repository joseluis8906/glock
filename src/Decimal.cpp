#include <sstream>
#include <iomanip>
#include "Decimal.h"

Glock::Decimal::Decimal () { }

Glock::Decimal::Decimal (int target) : value{(long double)target} { }

Glock::Decimal::Decimal (long int target) : value{(long double)target} { }

Glock::Decimal::Decimal (long long int target) : value{(long double)target} { }

Glock::Decimal::Decimal (float target) : value{(long double)target} { }

Glock::Decimal::Decimal (double target) : value{(long double)target} { }

Glock::Decimal::Decimal (long double target) : value{target} { }

Glock::String Glock::Decimal::ToString () const {
    std::ostringstream out;
    out << std::setprecision(precision) << value;
    return out.str();
}

void Glock::Decimal::SetPrecision (int precision) {
    this->precision = precision + 1;
}

