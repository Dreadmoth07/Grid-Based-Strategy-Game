# File Naming
All implementation files should end in `.cpp` and should have associated `.h` header file.

Both header and source files should be written in camelCase.
The name of the file should be reflective of the code it contains.

## Header Files
Header files should have `#define` guards to prevent multiple inclusion.
The format for the symbol name is as follows, `<PATH>_<FILE>_H_`.
For example, a file in src/Client called client.h should be laid out with the following guard:
```
#ifndef SRC_CLIENT_CLIENT_H_
#define SRC_CLIENT_CLIENT_H_

...

#endif
```

Do not define functions in the header file.
Whilst being able to do this is possible,
it violates the separation of code and interface.

## Source Files
The header file for the source file should have the same name.
The source file must end in `.cpp`.

Only include the header files that you need for the source code.


# Coding

Everything should be in the aid of readability.
It is the overarching principle behind this document.

General things:
- Indents are to be done using 4 spaces and no tabs
- Lines should be kept to no longer than 80 characters unless it is:
    - a comment that cannot be separted into multiple lines easily
    - a really long string literal that cannot go on multiple lines
    - an include statement
    - a header guard
    - a using-declaration
- Spell things correctly
- Do not needlessly use `()` unless it is to aid readability with a calculation
- Blank lines should only be used to aid readability

## Naming conventions
Naming in general should be verbose.

- Variables start with a lower case and are camelCase
- Functions start with a lower case and are snake_case
- Class names start with a Captial and are PascalCase

## Comments
Inline comments have two spaces between `//` and the code and a space after.
```
int apples = 0;  // This is where a comment goes
```
If a function needs commenting, the comment should be on the line before the definition.
The same principle applies to code sections and classes.


## Pointers
The pointer is part of the type and so declarations of a pointer should be
`type* a;` rather than `type *a;`

### Reference and Dereference
Do not use `*` or `&` in a multiple declaration.

Have a space to the left of `*`/`&` and no space to the right, unless it is a declaration.


## Source File
- Do not use `using namespace std`.
- Avoid trailing spaces 
- Do not use a non-local variable to show that an error occured. Just throw an exception
- Global variables should be avoided at all costs
- Indenting more than 4 times should be avoided
- Indenting more than 5 times should not be done

### Literals
Lists should be formatted as if the `{}` are the `()` in a function call.

Floats and doubles should always have a decimal point, regardless of if it is required by the language.

### Operators
When using mathematical operators, a space should be either side of the operator.

This helps differentiate multiplication from dereferencing.
Parentheses are the exception and are formatted `int c = (a / b) * d;`.

Increment and decrement operators do not have a space on one side such that it is obvious what they are acting upon. `i++` and `++i` are allowable.

If unsure, have a space around the operator.

### Whitespace
One blank line should be left after every function definition.
Two blank lines should be left after a class definition.
Two blank lines after all `#include` statements.

Two spaces should be present before inline comments

### Functions
#### Declarations
Declarations should be formatted like the following.
The bottom two examples are for those cases where the definition is too long to fit on one line.
The example definitions are in order of preferrence
i.e. you should try to keep all the parameters on the same line.
```
ReturnType ClassName::functionName(Type par_name1, Type par_name2) {
    doSomething();
    ...
}
ReturnType ClassName::reallyLongFunctionName(Type par_name1, Type par_name2,
                                             Type par_name3) {
    doSomething();
    ...
}
ReturnType LongClassName::reallyReallyReallyLongFunctionName(
        Type par_name1,  // 8 space indent
        Type par_name2,
        Type par_name3) {
    doSomething();  // 4 space indent
    ...
}
```

Functions avoid using parameter types of `void*`.

#### Returning
Do not surround the return result with `()`.

`return` is not a function. Do not call `return`.
```
    return(a / b) * c; // This is bad
    return ((a / b) * c); // Do not do this
    return (a / b) * c; // This is good

```


#### Calls
Calls should follow the same format as the declaration.

### Loops and Conditionals
Conditionals should look like the following
```
if (test) {
    ...
} else {
    ...
}
switch (i) {
    case 1:
        ...
    case 2:
        break;
}
```
If the `{}` can be omitted, it is up to the programmer to decide wherether or not to include them.
The conditional would then look like
```
if (test)
    foo;
...
```

Loops should look like the following
```
while (test) {
    ...
}

do {
    ...
} while (test);

for (int i = 0; i < 5; ++i) {
    ...
}
for ( ; i < 5; ++i) {
    ...
}
for (auto x : iterable) {
    ...
}
```
For loops always have a space after the semicolon,
unless there is not statement (such as no initialiser)
in which case a space is before and after the semicolon.


# Closing Remarks
If something is not covered in this style document, code in the style that is already present within that file.
If you wish to add to this document, make an issue and add your improvement in the description.
