1. **What is the difference between `malloc()` and `calloc()`?**
   - `malloc()` allocates memory but does not initialize it, while `calloc()` allocates and initializes memory to zero.

2. **Explain the difference between `printf()` and `sprintf()`.**
   - `printf()` prints to the standard output (console), whereas `sprintf()` prints to a string.

3. **What is a pointer?**
   - A pointer is a variable that stores the memory address of another variable.

4. **What is the purpose of the `sizeof` operator in C?**
   - `sizeof` is used to determine the size, in bytes, of a variable or data type.

5. **Explain the concept of a structure in C.**
   - A structure is a user-defined data type that groups related data under a single name.

6. **How do you dynamically allocate memory in C?**
   - Dynamic memory allocation is achieved using functions like `malloc()`, `calloc()`, `realloc()`, and memory is deallocated using `free()`.

7. **What is the difference between `++i` and `i++`?**
   - `++i` is the pre-increment operator, and `i++` is the post-increment operator. The former increments the value before using it, while the latter increments the value after using it.

8. **How do you swap two variables without using a temporary variable?**
   - This can be achieved using arithmetic or bitwise operations:
   ```c
   a = a + b;
   b = a - b;
   a = a - b;
   ```

9. **Explain the purpose of `const` in C.**
   - `const` is used to declare constants. It specifies that the variable's value cannot be changed after initialization.

10. **What is the purpose of the `typedef` keyword?**
    - `typedef` is used to create an alias for data types, making code more readable and manageable.

11. **What are the differences between `malloc()` and `free()` and `new` and `delete` in C++?**
    - `malloc()` and `free()` are used in C for dynamic memory allocation and deallocation, while `new` and `delete` are used in C++ for the same purpose. The primary difference is that `new` and `delete` also call the constructor and destructor, respectively, for the allocated memory.

12. **What is the purpose of the `volatile` keyword?**
    - The `volatile` keyword is used to indicate that a variable may be changed by an external entity outside of the program.

13. **What is the role of the `#define` preprocessor directive?**
    - `#define` is used to create a symbolic constant or a macro, making code more readable and maintainable.

14. **What is the difference between `NULL` and `nullptr` in C++?**
    - `NULL` is typically used in C, while `nullptr` is introduced in C++ and is used as a pointer literal, providing type safety.

15. **Explain the difference between call by value and call by reference.**
    - Call by value passes the actual value to a function, while call by reference passes the memory address of the value.
