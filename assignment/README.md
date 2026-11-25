# CSE121 SPL - Assignment 1

These beginner C programs use loops to print character and number patterns.
Each program asks for a pattern length, `n`.

## Programs, explanations, and sample runs

### `rightAlignedHash.c`

The outer loop makes `n` rows. On each row, the first inner loop prints
`n - row` spaces and the next prints one more `#` than on the previous row.
The spaces line up the right edge.

Sample run with `n = 4`:

```text
Enter the length of the pattern: 4
   #
  ##
 ###
####
```

### `centredIncre.c`

This prints a growing triangle of stars. The row loop counts from `1` to `n`;
each row prints leading spaces followed by that row's number of `* ` pairs.

Sample run with `n = 4`:

```text
Enter the length of the pattern: 4
   *
  * *
 * * *
* * * *
```

### `centeredDecre.c`

This prints a shrinking alphabet triangle. The row length decreases from `n`
to `1`; each row resets its character to `A` and prints one more letter than
the row below. Leading spaces indent the shorter rows.

Sample run with `n = 4`:

```text
Enter the length of the pattern: 4
A B C D
 A B C
  A B
   A
```

### `rightAlindDecreChar.c`

This also prints shrinking alphabet rows, but without spaces between letters.
The character restarts at `A` on every row, and indentation increases as the
row gets shorter.

Sample run with `n = 4`:

```text
Enter the length of the pattern: 4
ABCD
 ABC
  AB
   A
```

### `diamondNum.c`

The first half grows from one row to `n` rows, increasing `count` each time.
The second half decreases the row length and count. Each row repeats its
current number for the row length.

Sample run with `n = 4`:

```text
Enter the length of the pattern: 4
   1
  22
 333
4444
 333
  22
   1
```

### `square.c`

The outer loop prints `n` rows. The inner loop prints `n` hashes on every
row, making an `n` by `n` square.

Sample run with `n = 4`:

```text
Enter the length of the pattern: 4
# # # #
# # # #
# # # #
# # # #
```

## How to compile and run

From this folder, use GCC. For example, in Windows PowerShell:

```powershell
gcc .\rightAlignedHash.c -o .\rightAlignedHash.exe
.\rightAlignedHash.exe
```

Replace the source and executable names to run another program. Enter a
positive integer; use `n` from 1 to 26 for the alphabet patterns. These
beginner examples assume valid input and do not check for invalid or missing
input.
