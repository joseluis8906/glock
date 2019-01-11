#include <iostream>
#include <string>

#ifndef __GLOCK_STRING__
#define __GLOCK_STRING__

namespace Glock {
    class String : public std::string {
        public:
            String();
            String( const std::string& s );
            String( const std::string& s, std::size_t n );
            String( const char *s, std::size_t n );
            String( const char *s );
            String( std::size_t n, char c );
            template <class InputIterator>
    	    String( InputIterator first, InputIterator last );
            

            template <class T>
            String operator + (const T& target) { return data() + target.ToString(); }            
            bool operator == (const String &other) const;
            String Replace (const String &target, const String &source);
            bool EndsWith (String const &target);
            bool StartsWith (String const &target);

            
            String ToString () const;
    };
}

#endif
