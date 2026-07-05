/* Define String.prototype.toAlternatingCase (or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; see the initial solution for details) such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase. */

#include <string>

std::string to_alternating_case(const std::string& str)
{
    std::string strResult;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == toupper(str[i])) {
            strResult += tolower(str[i]);
        } else {
            strResult += toupper(str[i]);
        }
    }
    
	return strResult;
}