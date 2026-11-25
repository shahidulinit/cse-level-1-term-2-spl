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

## Program explanations and sample runs

The sample inputs below are entered after starting each program. Programs that
read input do not print a prompt.

### `sAq1.c` - basic arithmetic

Reads two integers and prints their sum, difference, integer quotient, and
remainder. Integer division drops any fractional part.

Sample input:

```text
13 5
```

Sample output:

```text
13 + 5 = 18
13 - 5 = 8
13 / 5 = 2
13 % 5 = 3
```

### `sAq2.c` - increment operators

`a++` contributes the old value of `a` before increasing it. `++b` increases
`b` first, then contributes the new value. The final printed values are `a`,
`b`, and their expression result `x`.

Sample output:

```text
11 5 15
```

### `sBq1.c` - character value and next character

Reads one character. `%d` prints its integer character code, while `ch + 1`
advances to the next character. On common ASCII systems, entering `A` gives:

Sample input:

```text
A
```

Sample output:

```text
65 B
```

### `sBq2.c` - arithmetic precedence

Evaluates `a + b * c - a / b + a % b` with `a = 8`, `b = 3`, and `c = 2`.
Multiplication, division, and remainder happen before addition and
subtraction; integer division makes `8 / 3` equal `2`.

Sample output:

```text
14
```

### `sCq1.c` - nested conditional operator

Reads three integers and uses nested `?:` expressions to select the smallest.

Sample input:

```text
9 2 5
```

Sample output:

```text
min: 2
```

### `sCq2.c` - compound assignment

Starts with `x = 12`, then applies `+= 5`, `*= 2`, `-= 8`, and `/= 3`.
Because `x` is an integer, the last division truncates `26 / 3` to `8`.

Sample output:

```text
8
```

### `sDq1.c` - even or odd

Reads an integer and prints the result of `n % 2 == 0`: `1` means even and
`0` means odd.

Sample input:

```text
8
```

Sample output:

```text
1
```

### `sDq2.c` - bitwise operators

Uses `a = 5` and `b = 3`. The output values are bitwise AND (`a & b`), OR
(`a | b`), XOR (`a ^ b`), and left shift (`a << 1`) respectively.

Sample output:

```text
1 7 6 10
```

### `sEq1.c` - logical operators

Reads `a` and `b`, then prints the results of an AND condition, an OR
condition, and a NOT condition. In C, a true condition prints as `1` and a
false condition as `0`.

Sample input:

```text
5 0
```

Sample output:

```text
1
1
1
```

### `sEq2.c` - conditional operator

With `a = 7`, `b = 4`, and `c = 2`, the condition `a > b` is true, so the
program prints `a + c` rather than `b * c`.

Sample output:

```text
9
```

### `sFq1.c` - integer-to-float conversion

Reads an integer and a floating-point number. Casting `a` to `float` allows
the sum and average to retain decimal places.

Sample input:

```text
5 3.5
```

Sample output:

```text
Sum: 8.50
Average: 4.25
```

### `sFq2.c` - mixed increments

First calculates `a = 6 + 2 * 5`, giving `16`. In `a-- - ++c`, `a--` uses
`16` and then decreases `a`, while `++c` increases `c` before using it. The
final line prints the updated `a`, `b`, and `c`.

Sample output:

```text
15 10 25
```

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
