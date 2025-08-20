// In C++ projects, the term headers refers to files with the extension .h or .hpp.
// They are interface files — meaning they declare what functions, classes, or variables exist, without
// necessarily giving their full implementation.

// ✅ Why put headers in include/?
// It keeps all the declarations (interfaces) in one place.
// When someone wants to use your library, they only need the headers (to know what’s available), not the full .cpp implementation.
// It makes your project more modular and reusable.

//  (.h) -> header files
//  declares functions(add,subtract,multiply,division)

#ifndef MATHUTILS_H
#define MATHUTILS_H

int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);

#endif