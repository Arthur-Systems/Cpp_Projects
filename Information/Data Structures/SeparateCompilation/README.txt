Separate Compilation
CS 124-03 Spring 2021
Week 1 Code Example
-----------------------------
This short demo code example parallels programs that you will write
in the future.  The goal of this demo is to illustrate what 
you need to do in order to achieve separate compilation in C++.
As in any programming language, as programs get beyond a certain size,
it becomes vital to be able to break them up into separate files.  The
mechanisms for this in C++ are a bit more painstaking than what you might
be accustomed to from other programming languages, requiring you to more
carefully arrange your code and to understand more precisely how the
compiler works.

Broadly, C++ programs are built out of two things: declarations and
definitions.  Recall the distinction:

* Declarations allow you to tell the compiler about the existence of
  something, to give a type to a name.  There are different kinds of
  declarations -- variable declarations, function declarations, class
  declarations -- and each has the job of giving a type to a name.
  Other than a few built-in types, such as int and char, no name can
  be used in a C++ source file until after the point where it is declared.
  (There is a small handful of exceptions to this rule, but this is true
  for the most part.)

* Definitions give full meaning to something, to fully elaborate the
  meaning of a name.  Like declarations, there are different kinds of
  definitions -- variable definitions, function definitions -- and
  each has the job of solidifying the meaning of some name.  In the case
  of a variable, the declaration *is* the definition, because the declaration
  includes the type, and the type is sufficient information for the compiler
  to know how much memory to allocate for it.  In the case of a function,
  the declaration is the function's signature, while the definition is its
  body.

To divide our C++ programs into what you might call "modules" -- separate
groupings of functions, classes, etc. -- we write our code in two kinds of
files: header files and source files.

* A source file contains the definitions of everything necessary to implement
  a module.  If a module is a collection of functions (say, a collection of
  mathematical utility functions), those functions would all be defined in
  the module's source file.  For reasons we will see later, each module has
  only one source file.

* Header files contain the declarations of those things that are intended to
  be visible to other modules.  Notably, though, header files do not contain
  definitions.  So, for example, our module of mathematical utility functions
  would have a header file that contained the declarations of those utility
  functions (i.e., their signatures) but not their definitions (i.e., no
  bodies).  Also, if there were functions in the module that were helpers,
  but were not intended to be "public" and available to other modules, we
  would simply leave their declarations out of the header file.  Generally
  speaking, each module consists of one header file (or none if the module
  does not make anything publicly available to other modules).

Splitting our code up this way might seem like a bit of a burden, but the
necessity arises from the way that a C++ compiler does its work on a large
program.

* Source files are each compiled separately by the compiler.  A C++ compiler
  does not know how to search for things defined in other source files; the
  C++ compiler will compile each source file completely in absence of
  all the others, generating "object files" (a mostly-compiled version of
  the source file) for each one independently.  In a particular source file,
  a name can not be used until it is declared, though it can use the name if 
  the definition appears in some other source file; a declaration represents a
  sort of promise to the compiler -- "I promise, even though you can not see 
  its definition here, that there really is a function called 'square' 
  somewhere, which really takes an int parameter and returns an int value."  
  When compiling a source file, the compiler will put placeholders in place of
  uses of things that are defined in other source files, since the compiler
  never sees the entire program at once.

* Assuming compilation of all the source files is successful, a separate
  program called the linker stitches together all of the object files into
  one executable target (e.g., an .exe file on Windows).  This process
  involves resolving all of the references that each object file makes to
  things that exist in other object files.  The linker has some rules,
  which, if violated, lead to what are called "link errors."  A couple of
  examples:
  
    - If there is a function called square() used by one object file but
      not defined there, the linker will complain if square() is not
      defined in some other object file.  In other words, if you promise
      the compiler that a function exists, the linker is the one that makes
      sure that you keep your promise.
    
    - If there are two functions called square() with identical signatures
      (i.e., the same parameter types and return type) defined in two
      different object files, the linker complains, because any call to
      square() is ambiguous -- how can the linker know which one should be
      called?

The moral of this entire story is that there needs to be an easy way to
ensure that each function is defined in only one place, while the declaration
can be used in many places without having to copy and paste it.  This is
what "header files" are for; they contain declarations (but not definitions!),
so that it is possible to include them verbatim into a source file (using the
#include directive) in order to pull in declarations of functions that are
defined in other places.

