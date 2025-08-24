# Password Protection Program in C

A simple C program that securely manages password input with masking (`*`), limits login attempts to 3, and validates user input.

##  Features
- Hidden password input using `getch()`
- Maximum of 3 login attempts
- Provides clear feedback for success or failure
- Built for Windows environments (uses `conio.h` and `Sleep()`)

##  How to Compile and Run (on Windows)
```bash
gcc "Password protection program.c" -o password.exe
password.exe
