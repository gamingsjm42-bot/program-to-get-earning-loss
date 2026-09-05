//includes
#include <stddef.h>
#include <string.h>
#include <math.h>
/// @brief that function return size_t from const char*
/// @param __l that size_t transform it
size_t toInt(const char* __l)
{
    //set returining var
    size_t returning ; 
    //forloop
    for (size_t i = 0; i < strlen(__l); i++) returning+=pow(10,i);
    //return
    return returning;
}