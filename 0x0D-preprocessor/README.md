## C - Preprocessor

In this project, we will look at;
1. Understanding C program Compilation Process
2. Object-like Macros
3. Macro Arguments
4. Pre Processor Directives in C
5. Standard Predefined Macros
6. include guard

### Tasks

#### 0. Object-like Macro
Creates a header file that defines a macro named **SIZE** as an abbreviation for the token **1024**

syntax
```
#define [macro_name] [token_value]
```
Solution [0-object_like_macro.h](0-object_like_macro.h)

#### 1. Pi
Creates a header file that defines a macro named **PI** as an abbreviation for the token 3.14159265359

Solution: [1-pi.h](1-pi.h)

#### 2. File name
Program that prints the name of the file it was compiled from
``` printf("%s", __FILE__) ```
Solution: [2-main.c](2-main.c)

