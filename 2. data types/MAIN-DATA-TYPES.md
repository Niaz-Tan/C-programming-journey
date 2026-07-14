# C Data Types (Beginner)

> **Note:** The size of some data types depends on the compiler and operating system. The table below shows the most common sizes.

| Data Type   | 32-bit System | 64-bit System\*  | Stores                       | Example        | Format Specifier |
| ----------- | :-----------: | :--------------: | ---------------------------- | -------------- | ---------------- |
| `char`      |    1 byte     |      1 byte      | A single character           | `'A'`          | `%c`             |
| `short`     |    2 bytes    |     2 bytes      | Small whole numbers          | `100`          | `%hd`            |
| `int`       |    4 bytes    |     4 bytes      | Whole numbers                | `2500`         | `%d`             |
| `long`      |    4 bytes    | **4 or 8 bytes** | Large whole numbers          | `100000L`      | `%ld`            |
| `long long` |    8 bytes    |     8 bytes      | Very large whole numbers     | `999999999LL`  | `%lld`           |
| `float`     |    4 bytes    |     4 bytes      | Decimal numbers              | `3.14f`        | `%f`             |
| `double`    |    8 bytes    |     8 bytes      | More precise decimal numbers | `3.1415926535` | `%lf`            |

---

## Which One Should I Use?

| Data Type   | Use When                                               |
| ----------- | ------------------------------------------------------ |
| `char`      | Storing a single letter or symbol.                     |
| `short`     | Small integers (rarely used in beginner programs).     |
| `int`       | Default choice for whole numbers.                      |
| `long`      | Need a larger integer than `int` (platform dependent). |
| `long long` | Very large integers.                                   |
| `float`     | Decimal numbers where high precision isn't needed.     |
| `double`    | Decimal numbers with better precision (recommended).   |

---

## Example

```c
#include <stdio.h>

int main() {
    char grade = 'A';
    short year = 2025;
    int age = 20;
    long population = 1000000L;
    long long stars = 900000000000LL;
    float price = 99.99f;
    double pi = 3.141592653589793;

    printf("Grade: %c\n", grade);
    printf("Year: %hd\n", year);
    printf("Age: %d\n", age);
    printf("Population: %ld\n", population);
    printf("Stars: %lld\n", stars);
    printf("Price: %f\n", price);
    printf("Pi: %lf\n", pi);

    return 0;
}
```

---

## Beginner Tip

For your first month of learning C, you'll use these most often:

- `char`
- `int`
- `float`
- `double`

Later you'll learn when `short`, `long`, and `long long` become useful.
