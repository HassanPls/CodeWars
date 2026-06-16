/* Write a function that removes the spaces from the string, then return the resultant string. */

#include <string>

std::string no_space(const std::string &x)
{
    std::string ans = "";

    for (size_t i = 0; i < x.size(); i++)
    {
        if (x[i] != ' ') {
            ans += x[i];
        }
    }
    
    return ans;
}