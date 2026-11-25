# CSE Level 1 Term 2 - SPL CT 1

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Course](https://img.shields.io/badge/Course-SPL%20%2F%20CSE121-orange.svg)](.)
[![Platform](https://img.shields.io/badge/Platform-VS%20Code-007ACC.svg)](https://code.visualstudio.com/)

A collection of C programming practice solutions for **CSE Level 1 Term 2 SPL CT 1**. Each file demonstrates a specific C concept, including arithmetic operations, operators, type casting, ternary conditions, and expression evaluation.

<details open>
<summary><b>Quick start</b></summary>

```bash
# Compile one program
gcc sAq1.c -o sAq1.exe

# Run it
./sAq1.exe
```

For Windows PowerShell, use:

```powershell
gcc .\sAq1.c -o .\sAq1.exe
.\sAq1.exe
```

</details>

<details>
<summary><b>Open-source setup</b></summary>

1. Install a C compiler such as GCC (MSYS2/UCRT64 is common on Windows).
2. Open this folder in VS Code.
3. Compile a file with the GCC command above or the configured build task.
4. Run the generated executable.

</details>

## Problem index

| File | Topic | What the program demonstrates |
|---|---|---|
| [`sAq1.c`](./sAq1.c) | Basic arithmetic | Addition, subtraction, division, and modulus with integer input |
| [`sAq2.c`](./sAq2.c) | Increment/decrement | Post-increment and pre-increment behavior inside an expression |
| [`sBq1.c`](./sBq1.c) | Character input | Reading a character and moving to the next ASCII character |
| [`sBq2.c`](./sBq2.c) | Operator precedence | Evaluation of arithmetic expressions using parentheses and precedence rules |
| [`sCq1.c`](./sCq1.c) | Nested ternary | Finding the smallest of three integers |
| [`sCq2.c`](./sCq2.c) | Compound assignment | Repeated arithmetic updates using `+=`, `*=`, `-=`, and `/=` |
| [`sDq1.c`](./sDq1.c) | Even/odd check | Printing `1` for even numbers and `0` for odd numbers |
| [`sDq2.c`](./sDq2.c) | Bitwise operators | AND, OR, XOR, and left-shift operations |
| [`sEq1.c`](./sEq1.c) | Logical operators | Combining conditions with `&&`, `||`, and `!` |
| [`sEq2.c`](./sEq2.c) | Ternary operator | Selecting between two expressions from a condition |
| [`sFq1.c`](./sFq1.c) | Type casting | Casting an integer value for floating-point calculations |
| [`sFq2.c`](./sFq2.c) | Mixed increments | Combining arithmetic assignment, post-decrement, and pre-increment |

## Concepts covered

<details>
<summary><b>Arithmetic and compound operators</b></summary>

- `+`, `-`, `*`, `/`, `%`
- `+=`, `-=`, `*=`, `/=`
- Integer division discards the fractional part

</details>

<details>
<summary><b>Increment, decrement, and expression evaluation</b></summary>

- `++x` increments before the value is used
- `x++` uses the current value before incrementing
- C operator precedence determines which operation happens first

</details>

<details>
<summary><b>Conditionals and logical operators</b></summary>

- Ternary syntax: `condition ? trueValue : falseValue`
- Logical AND: `&&`
- Logical OR: `||`
- Logical NOT: `!`

</details>

<details>
<summary><b>Bitwise operators</b></summary>

- `&` performs AND
- `|` performs OR
- `^` performs XOR
- `<<` shifts bits to the left

</details>

## Project structure

```text
ct1/
|-- sAq1.c
|-- sAq2.c
|-- sBq1.c
|-- sBq2.c
|-- sCq1.c
|-- sCq2.c
|-- sDq1.c
|-- sDq2.c
|-- sEq1.c
|-- sEq2.c
|-- sFq1.c
|-- sFq2.c
|-- .vscode/tasks.json
`-- README.md
```

## Compile all source files

Use PowerShell to compile every `.c` file into a separate executable:

```powershell
Get-ChildItem -Filter *.c | ForEach-Object {
    gcc $_.FullName -o ($_.BaseName + ".exe")
}
```

## Learning notes

- Integer division in C does not keep decimal values.
- `%d` is used for integers and `%f` or `%.2f` is used for floating-point values.
- Always initialize variables before reading or using them.
- Compound and bitwise operations are evaluated according to C operator precedence.

## Contributing

Contributions are welcome. Improve comments, add sample inputs and outputs, or create more structured solutions while keeping each practice file focused on one concept.
