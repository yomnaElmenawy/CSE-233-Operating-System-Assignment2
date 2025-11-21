# CSE233 – Assignment 2    
**Operating Systems**  
**Course Code: CSE233**

This repository contains **all code examples from Lab 5 (Process Management)** exactly as demonstrated in class, plus full implementation of Assignment 2 requirements.

### Lab 5 Exercises Implemented (Exactly from the Official Lab 5 PDF)

| Exercise | Description | Files / Commands |
|---------|-------------|------------------|
| Exercise 1 | Process creation using `fork()` system call | `process_creation.c` |
| Exercise 2 | Starting a process in the background | `sleep 300 &` + `jobs` |
| Exercise 3 | Stopping a running process | `kill <PID>` |
| Exercise 4 | Pausing and resuming a process | `kill -STOP <PID>` → `kill -CONT <PID>` |
| Exercise 5 | Role of the **Linker** – combining multiple source files | `file1.c` + `file2.c` → compiled together |
| Exercise 6 | Role of the **Loader** – dynamic library loading | `simple_program.c` + `ldd simple_program` |

### What is the job of the Linker?
The **linker** combines multiple object files (`.o`) into a single executable file.  
It resolves function calls and variables defined in different source files.  
Example: `file2.c` calls `hello()` → the linker finds its definition in `file1.c` and connects them.

### What is the job of the Loader?
The **loader** is part of the operating system. When you run a program (e.g., `./simple_program`), the loader:
- Loads the executable into memory
- Sets up stack, heap, and program segments
- Dynamically loads required shared libraries (like `libc.so.6`) at runtime  
→ This is shown clearly by the `ldd` command

### Build & Run Instructions

```bash
make          # compiles all programs
make run      # runs all examples in order
make clean    # removes compiled binaries
