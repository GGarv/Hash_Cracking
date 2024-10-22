# Brute-Force SHA-256 Cracker

This project demonstrates a brute-force attack to find a password by matching its SHA-256 hash using C++ and OpenMP for multithreading. Below are the steps for compiling, running, debugging, and performing memory analysis on both Windows and Linux.

## Requirements

### Windows
- **g++** (via MinGW or Visual Studio C++ tools)
- **PowerShell** (pre-installed on Windows)
- **OpenMP** support for multithreading
- **Optional:** Visual Studio for debugging

### Linux
- **g++** (can be installed via the package manager)
- **Valgrind** (for memory analysis)
- **GDB** (for debugging)
- **OpenMP** library (`libgomp`) for multithreading

---

## Steps for Windows

1. Navigate to the Project Directory
2. Open **PowerShell** and navigate to the folder containing the repository:

```powershell
cd path\to\Hash_Cracking
```
3. Use **g++** to compile the program.

```powershell
g++ -fopenmp main.cpp sha256.cpp -o hash_cracker
```
4. After compilation, execute the generated program:

```powershell
.\hash_cracker.exe
```

## Steps for Linux

1. Navigate to the Project Directory
2. Open **terminal** and navigate to the folder containing the repository:

```bash
cd path\to\Hash_Cracking
```
3. Use **g++** to compile the program.

```bash
g++ -fopenmp main.cpp sha256.cpp -o hash_cracker
```
4. Alternatively we can use **Makefile**:

```bash
make
```
5.Run the program

```bash
./hash_cracker
```
---
## Debugging and Memory analysis (In linux)

A] For debugging using **GDB**

```bash
gdb ./hash_cracker
```

B] For memory analysis using **Valgrind**

```bash
valgrind --leak-check=full ./hash_cracker
```

   
