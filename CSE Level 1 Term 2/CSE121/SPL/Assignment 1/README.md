# CSE121 SPL - Assignment 1

This folder contains small C programs that practice using loops to print
patterns. Each program asks for the pattern size, `n`, and then prints one
pattern to the console.

## Programs

### `rightAlignedHash.c`

Prints a right-aligned triangle made of `#` characters. The first row has one
hash, and each next row has one more. Spaces before the hashes line up the
right edge.

For `n = 4`:

```text
   #
  ##
 ###
####
```

### `centredIncre.c`

Prints a growing triangle made of `*` characters. Each row prints one more
star than the previous row, with spaces before the stars.

### `centeredDecre.c`

Prints a shrinking alphabet triangle. Every row starts again at `A`, but has
one fewer letter than the row above it. Leading spaces move each shorter row
to the right.

### `rightAlindDecreChar.c`

Prints a shrinking alphabet triangle, starting with `n` letters in the first
row and removing one letter on each following row. The letters restart at
`A` on every row, and leading spaces move the shorter rows to the right.

### `diamondNum.c`

Prints a number pattern that grows and then shrinks. The number printed on a
row is repeated once for each position in that row. The upper half counts up
from `1`; the lower half counts back down.

### `square.c`

Prints an `n` by `n` square made of `#` characters. The outer loop creates the
rows, and the inner loop prints `n` hashes in each row.

## How the loops work

Most programs use nested `for` loops:

- The outer loop chooses the current row.
- A spaces loop (when present) prints indentation before the pattern.
- The inner pattern loop prints the characters or number for that row.
- `printf("\n")` moves to the next output row.

In the alphabet patterns, `ch++` advances the character from `A` to `B`, then
to the next letter. In `diamondNum.c`, a `count` variable changes between
rows to make the pattern grow and shrink.

## Compile and run

With GCC, compile a program from this folder and run the resulting executable.
For example:

```sh
gcc rightAlignedHash.c -o rightAlignedHash
./rightAlignedHash
```

Replace `rightAlignedHash.c` with another source filename to run a different
pattern. Enter a positive integer when prompted for the pattern length. These
beginner examples assume valid input and do not check for non-positive values
or failed input.
