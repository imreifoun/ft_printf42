# FT_PRINTF42

in This Project You will Learn How to USE Variadic Functions

Variadic functions are functions that can take a variable number of arguments. 
In C programming, a variadic function adds flexibility to the program. 
It takes one fixed argument and then any number of arguments can be passed. 
The variadic function consists of at least one fixed variable and then an ellipsis(…) as the last parameter.

MORE INFO ABOUT Variadic Functions 

Syntax:  int function_name(data_type variable_name, ...);

Values of the passed arguments can be accessed through the header file named as:
#include <stdarg.h>



# Macros (function macro)

va_start : enables access to variadic function arguments .

va_arg : accesses the next variadic function argument .

va_copy : makes a copy of the variadic function arguments .

va_end : ends traversal of the variadic function arguments .

# Type (typedef)

va_list : holds the information needed by va_start, va_arg, va_end, and va_copy


# The Second Project in 42 NETWORK

RESOURCE FROM :

https://en.cppreference.com/w/c/variadic && https://www.geeksforgeeks.org/variadic-functions-in-c/
