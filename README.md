# CSE233 – Assignment 2  
**Operating Systems**  
**Course Code: CSE233**

This repository contains **all exercises from Lab 5 (Process Management)** 

### Lab 5 Exercises Implemented (Exact Match with Lab 5 PDF)

| Exercise | Description                                      | Files / Commands                                      |
|----------|--------------------------------------------------|--------------------------------------------------------|
| 1        | Process creation using `fork()`                  | `process_creation.c`                                   |
| 2        | Running a process in background                  | `sleep 300 &` → `jobs`                                 |
| 3        | Terminating a process                            | `kill <PID>`                                           |
| 4        | Pausing and resuming a process                   | `kill -STOP <PID>` → `kill -CONT <PID>`                |
| 5        | Role of the **Linker** – combining multiple files| `file1.c` + `file2.c` → `gcc file1.c file2.c -o linker_example` |
| 6        | Role of the **Loader** – dynamic libraries       | `simple_program.c` → `ldd simple_program`              |

### What is the job of the Linker?
The **linker** operates at **compile-time**.  
It takes multiple object files (`.o`) and combines them into one executable, resolving function calls and variables across files.  
Example: `hello()` defined in `file1.c` is correctly linked to the call in `file2.c`.

### What is the job of the Loader?
The **loader** operates at **run-time**.  
When you execute `./program`, the loader:
- Loads the executable into memory
- Sets up stack and heap
- Dynamically loads shared libraries (e.g., `libc.so.6`)  
→ Visible using the `ldd` command

### Linker vs Loader – Summary Table

| Aspect      | Linker                     | Loader                          |
|-------------|----------------------------|---------------------------------|
| Phase       | Compile-time               | Run-time                        |
| Input       | Object files (.o)          | Executable file                 |
| Output      | Single executable          | Running process in memory       |
| Main Task   | Resolve symbols            | Load code + shared libraries    |

### Environment
- **Compiler**: GCC (GNU Compiler Collection)  
- **Operating System**: Ubuntu Linux (POSIX compliant)  
- **C Standard**: C99 or later

### How to Build & Run

```bash
make         # compiles all programs
make run     # runs all examples in order
make clean   # removes compiled files
