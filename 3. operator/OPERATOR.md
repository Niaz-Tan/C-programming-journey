# C Operators

## What is an Operator?

An **operator** is a symbol that tells the computer to perform an operation on one or more values (called **operands**).

Example:

```c
int a = 10;
int b = 5;

int sum = a + b;
```

- `a` and `b` are **operands**.
- `+` is the **operator**.

---

# 1. Arithmetic Operators

Used for mathematical calculations.

| Operator | Name                | Example  | Result |
| :------: | ------------------- | -------- | :----: |
|   `+`    | Addition            | `10 + 5` |  `15`  |
|   `-`    | Subtraction         | `10 - 5` |  `5`   |
|   `*`    | Multiplication      | `10 * 5` |  `50`  |
|   `/`    | Division            | `10 / 5` |  `2`   |
|   `%`    | Modulus (Remainder) | `10 % 3` |  `1`   |

### Example

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    return 0;
}
```

### Integer Division

```c
printf("%d", 10 / 3);
```

Output:

```
3
```

The decimal part is discarded.

To get decimal values:

```c
printf("%.2f", 10.0 / 3);
```

Output:

```
3.33
```

---

# 2. Comparison Operators

Comparison operators compare two values.

The result is always:

- `1` → True
- `0` → False

| Operator | Meaning                  | Example  | Result |
| :------: | ------------------------ | -------- | :----: |
|   `==`   | Equal to                 | `5 == 5` |  `1`   |
|   `!=`   | Not equal to             | `5 != 3` |  `1`   |
|   `>`    | Greater than             | `10 > 5` |  `1`   |
|   `<`    | Less than                | `5 < 10` |  `1`   |
|   `>=`   | Greater than or equal to | `5 >= 5` |  `1`   |
|   `<=`   | Less than or equal to    | `3 <= 5` |  `1`   |

### Example

```c
printf("%d\n", 10 > 5);
printf("%d\n", 10 == 5);
```

Output:

```
1
0
```

---

# 3. Logical Operators

Logical operators combine multiple conditions.

| Operator | Name        | Description                            |
| :------: | ----------- | -------------------------------------- |
|   `&&`   | Logical AND | True if both conditions are true       |
|  `\|\|`  | Logical OR  | True if at least one condition is true |
|   `!`    | Logical NOT | Reverses the result                    |

### AND (`&&`)

```c
10 > 5 && 5 > 3
```

Result:

```
1
```

---

### OR (`||`)

```c
10 > 5 || 5 < 3
```

Result:

```
1
```

---

### NOT (`!`)

```c
!(10 > 5)
```

Result:

```
0
```

---

## Truth Table

|  A  |  B  | A && B | A \|\| B |
| :-: | :-: | :----: | :------: |
|  0  |  0  |   0    |    0     |
|  0  |  1  |   0    |    1     |
|  1  |  0  |   0    |    1     |
|  1  |  1  |   1    |    1     |

---

# 4. Ternary Operator

The ternary operator is a short version of `if-else`.

### Syntax

```c
condition ? value_if_true : value_if_false;
```

### Example

```c
int age = 20;

char *result = (age >= 18) ? "Adult" : "Child";

printf("%s", result);
```

Output:

```
Adult
```

Another example:

```c
int a = 10;
int b = 20;

int max = (a > b) ? a : b;

printf("%d", max);
```

Output:

```
20
```

---

# 5. Bitwise Operators

Bitwise operators work directly with binary bits.

Suppose:

```c
int a = 5;
int b = 3;
```

Binary:

```
5 = 0101
3 = 0011
```

| Operator | Name        | Example  |     Result     |
| :------: | ----------- | -------- | :------------: |
|   `&`    | Bitwise AND | `5 & 3`  |      `1`       |
|   `\|`   | Bitwise OR  | `5 \| 3` |      `7`       |
|   `^`    | Bitwise XOR | `5 ^ 3`  |      `6`       |
|   `~`    | Bitwise NOT | `~5`     | Flips all bits |
|   `<<`   | Left Shift  | `5 << 1` |      `10`      |
|   `>>`   | Right Shift | `8 >> 1` |      `4`       |

### Bitwise AND (`&`)

```
  0101
& 0011
------
  0001
```

Result:

```
1
```

---

### Bitwise OR (`|`)

```
  0101
| 0011
------
  0111
```

Result:

```
7
```

---

### Bitwise XOR (`^`)

```
  0101
^ 0011
------
  0110
```

Result:

```
6
```

---

### Left Shift (`<<`)

```c
5 << 1
```

```
00000101

↓

00001010
```

Result:

```
10
```

A left shift by **1** is roughly equivalent to multiplying by **2**.

---

### Right Shift (`>>`)

```c
8 >> 1
```

```
00001000

↓

00000100
```

Result:

```
4
```

A right shift by **1** is roughly equivalent to dividing by **2** (for positive numbers).

---

# Operator Precedence

Operators follow precedence rules, just like mathematics.

```c
2 + 3 * 4
```

Result:

```
14
```

Multiplication happens before addition.

Use parentheses to change the order:

```c
(2 + 3) * 4
```

Result:

```
20
```

---

# Operator Cheat Sheet

| Category   | Operators                   |
| ---------- | --------------------------- |
| Arithmetic | `+` `-` `*` `/` `%`         |
| Comparison | `==` `!=` `>` `<` `>=` `<=` |
| Logical    | `&&` `\|\|` `!`             |
| Ternary    | `? :`                       |
| Bitwise    | `&` `\|` `^` `~` `<<` `>>`  |

---

# Summary

- **Arithmetic Operators** → Perform mathematical calculations.
- **Comparison Operators** → Compare two values and return `1` (true) or `0` (false).
- **Logical Operators** → Combine or negate conditions.
- **Ternary Operator** → A shorthand for `if-else`.
- **Bitwise Operators** → Work directly with the binary representation (bits) of numbers.
