# C Data Types (Beginner)

> **Memory Unit**
>
> - **1 Byte = 8 Bits**
> - The **Size** column shows how many bytes of memory a variable usually occupies.
> - The **Range** column shows the minimum and maximum values the data type can store.

| Data Type   |                                  Size (Typical)                                   | Range                                                   | Stores                       | Example             | Format Specifier |
| ----------- | :-------------------------------------------------------------------------------: | ------------------------------------------------------- | ---------------------------- | ------------------- | ---------------- |
| `char`      |                                      1 Byte                                       | -128 to 127 _(or 0 to 255 if `unsigned`)_               | A single character           | `'A'`               | `%c`             |
| `short`     |                                      2 Bytes                                      | -32,768 to 32,767                                       | Small whole numbers          | `100`               | `%hd`            |
| `int`       |                                      4 Bytes                                      | -2,147,483,648 to 2,147,483,647                         | Whole numbers                | `2500`              | `%d`             |
| `long`      | 4 Bytes (32-bit)<br>8 Bytes (most 64-bit Linux/macOS)<br>4 Bytes (64-bit Windows) | Platform dependent                                      | Large whole numbers          | `100000L`           | `%ld`            |
| `long long` |                                      8 Bytes                                      | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | Very large whole numbers     | `999999999LL`       | `%lld`           |
| `float`     |                                      4 Bytes                                      | About **6–7** decimal digits of precision               | Decimal numbers              | `3.14f`             | `%f`             |
| `double`    |                                      8 Bytes                                      | About **15–16** decimal digits of precision             | More precise decimal numbers | `3.141592653589793` | `%lf`            |

---

# Memory Visualization

## `char` (1 Byte)

```
+--------+
| Byte 1 |
+--------+
```

---

## `short` (2 Bytes)

```
+--------+--------+
| Byte 1 | Byte 2 |
+--------+--------+
```

---

## `int` (4 Bytes)

```
+--------+--------+--------+--------+
| Byte 1 | Byte 2 | Byte 3 | Byte 4 |
+--------+--------+--------+--------+
```

---

## `long long` (8 Bytes)

```
+--------+--------+--------+--------+--------+--------+--------+--------+
| Byte 1 | Byte 2 | Byte 3 | Byte 4 | Byte 5 | Byte 6 | Byte 7 | Byte 8 |
+--------+--------+--------+--------+--------+--------+--------+--------+
```

---

# Beginner Tips

- Use **`char`** for a single character.
- Use **`int`** for most whole numbers.
- Use **`double`** for decimal numbers (it is generally preferred over `float`).
- Use **`long long`** only when `int` cannot hold a large enough number.
- Don't worry too much about **`long`** yet. Its size depends on the operating system and compiler.

---

# Notes

- `char` is the smallest standard data type and occupies **1 byte (8 bits)**.
- `int` is the default integer type in C.
- `float` and `double` store decimal (floating-point) numbers.
- `long` is the only commonly used beginner type whose size may differ between platforms:
  - **32-bit systems:** usually **4 bytes**
  - **64-bit Linux/macOS:** usually **8 bytes**
  - **64-bit Windows:** usually **4 bytes**
