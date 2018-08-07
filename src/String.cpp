// Example program
#include "String.h"

Glock::String::String () : std::string() { }
    	
Glock::String::String ( const std::string& s ) : std::string( s ) { }

Glock::String::String ( const std::string& s, std::size_t n ) : std::string( s,n ) { }

Glock::String::String ( const char *s, std::size_t n ) : std::string( s,n ) { }
    	
Glock::String::String ( const char *s ) : std::string( s ) { }

Glock::String::String ( std::size_t n, char c ) : std::string ( n,c ) { }
    	
template <class InputIterator>
Glock::String::String( InputIterator first, InputIterator last ) : std::string( first,last ) { }
    	
bool Glock::String::operator== (const String &other) const {
    if (compare(other) != 0) {
        return false;
    }
    
    return true;
}
    	
Glock::String Glock::String::Replace (const String &target, const String &source) {
    size_t pos = find(target);
    String tmp = data();
    tmp.replace(pos, target.size(), source);
    return tmp;
}
        
bool Glock::String::EndsWith (String const &target) {
    if (length() >= target.length()) {
        return (0 == compare (length() - target.length(), target.length(), target));
    } else {
        return false;
    }
}
        
bool Glock::String::StartsWith (String const &target) {
    if(find(target) == 0) {
		return true;
    } else {
		return false;
    }
}

Glock::String Glock::String::ToString () const {
    return *this;
}

