/* Create a method to see whether the string is ALL CAPS. */

#include <string>

bool is_uppercase(const std::string &s)
{
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] != toupper(s[i]))
            return false;
    }

    return true;
}