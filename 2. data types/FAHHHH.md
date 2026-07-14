# C Data Types

## Basic Data Types

| Data Type                         | Size (Bytes) | Range / Precision                           | Format Specifier     | Description                                | Example              |
| --------------------------------- | -----------: | ------------------------------------------- | -------------------- | ------------------------------------------ | -------------------- |
| `char`                            |            1 | -128 to 127 (signed) or 0 to 255 (unsigned) | `%c`, `%hhd`, `%hhu` | Stores a single character or small integer | `'A'`, `65`          |
| `signed char`                     |            1 | -128 to 127                                 | `%hhd`               | Signed 8-bit integer                       | `-100`               |
| `unsigned char`                   |            1 | 0 to 255                                    | `%hhu`               | Unsigned 8-bit integer                     | `255`                |
| `short`                           |            2 | -32,768 to 32,767                           | `%hd`                | Small integer                              | `1000`               |
| `unsigned short`                  |            2 | 0 to 65,535                                 | `%hu`                | Unsigned small integer                     | `60000`              |
| `int`                             |            4 | -2,147,483,648 to 2,147,483,647             | `%d`                 | Most commonly used integer type            | `42`                 |
| `unsigned int`                    |            4 | 0 to 4,294,967,295                          | `%u`                 | Unsigned integer                           | `4000000000`         |
| `long`                            |       4 or 8 | Platform dependent                          | `%ld`                | Large integer                              | `1000000L`           |
| `unsigned long`                   |       4 or 8 | Platform dependent                          | `%lu`                | Unsigned large integer                     | `1000000UL`          |
| `long long`                       |            8 | -9.22×10¹⁸ to 9.22×10¹⁸                     | `%lld`               | Very large integer                         | `1234567890123LL`    |
| `unsigned long long`              |            8 | 0 to 18.44×10¹⁸                             | `%llu`               | Unsigned very large integer                | `123456789ULL`       |
| `float`                           |            4 | ~6–7 decimal digits                         | `%f`                 | Single-precision floating point            | `3.14f`              |
| `double`                          |            8 | ~15–16 decimal digits                       | `%lf`                | Double-precision floating point            | `3.1415926535`       |
| `long double`                     | 16 (usually) | ~18–21 decimal digits                       | `%Lf`                | Extended precision floating point          | `3.141592653589793L` |
| `_Bool` (`bool` in `<stdbool.h>`) |            1 | 0 or 1                                      | `%d`                 | Boolean value                              | `true`, `false`      |
| `void`                            |            0 | No value                                    | —                    | Represents no type/value                   | `void func()`        |

---

## Integer Type Modifiers

| Modifier    | Meaning                             | Can Be Used With                            |
| ----------- | ----------------------------------- | ------------------------------------------- |
| `signed`    | Allows positive and negative values | `char`, `int`                               |
| `unsigned`  | Only positive values                | `char`, `short`, `int`, `long`, `long long` |
| `short`     | Uses less memory than `int`         | `int`                                       |
| `long`      | Larger integer than `int`           | `int`, `double` (`long double`)             |
| `long long` | Very large integer                  | `int`                                       |

---

## Fixed-Width Integer Types (`<stdint.h>`)

| Data Type  | Size | Range             | Format Specifier | Description                     |
| ---------- | ---: | ----------------- | ---------------- | ------------------------------- |
| `int8_t`   |    1 | -128 to 127       | `%d`             | Exactly 8-bit signed integer    |
| `uint8_t`  |    1 | 0 to 255          | `%u`             | Exactly 8-bit unsigned integer  |
| `int16_t`  |    2 | -32,768 to 32,767 | `%d`             | Exactly 16-bit signed integer   |
| `uint16_t` |    2 | 0 to 65,535       | `%u`             | Exactly 16-bit unsigned integer |
| `int32_t`  |    4 | -2³¹ to 2³¹−1     | `%d`             | Exactly 32-bit signed integer   |
| `uint32_t` |    4 | 0 to 2³²−1        | `%u`             | Exactly 32-bit unsigned integer |
| `int64_t`  |    8 | -2⁶³ to 2⁶³−1     | `%lld`           | Exactly 64-bit signed integer   |
| `uint64_t` |    8 | 0 to 2⁶⁴−1        | `%llu`           | Exactly 64-bit unsigned integer |

---

## Common Format Specifiers

| Data Type            | Format Specifier |
| -------------------- | ---------------- |
| `char`               | `%c`             |
| `signed char`        | `%hhd`           |
| `unsigned char`      | `%hhu`           |
| `short`              | `%hd`            |
| `unsigned short`     | `%hu`            |
| `int`                | `%d` or `%i`     |
| `unsigned int`       | `%u`             |
| `long`               | `%ld`            |
| `unsigned long`      | `%lu`            |
| `long long`          | `%lld`           |
| `unsigned long long` | `%llu`           |
| `float`              | `%f`             |
| `double`             | `%lf`            |
| `long double`        | `%Lf`            |
| `pointer`            | `%p`             |

---

## Type Categories

| Category       | Data Types                            |
| -------------- | ------------------------------------- |
| Character      | `char`                                |
| Integer        | `short`, `int`, `long`, `long long`   |
| Floating Point | `float`, `double`, `long double`      |
| Boolean        | `_Bool`, `bool`                       |
| Void           | `void`                                |
| Fixed Width    | `int8_t`, `uint32_t`, `int64_t`, etc. |

---

## Which One Should You Use?

| Situation                    | Recommended Type                  |
| ---------------------------- | --------------------------------- |
| Single character             | `char`                            |
| Normal integer               | `int`                             |
| Very large integer           | `long long`                       |
| Decimal number               | `double`                          |
| Less memory decimal          | `float`                           |
| True/False                   | `bool`                            |
| Binary/File/Bit manipulation | `uint8_t`, `uint16_t`, `uint32_t` |
| Exact-size integers          | `int32_t`, `uint64_t`, etc.       |
