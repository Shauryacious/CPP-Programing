<link rel="stylesheet" type="text/css" href="style.css">

<!-- To open Md, cmd+k, then press v -->

## XOR (Exclusive OR)

| Bit 1 | Bit 2 | Bit1 ^ Bit2 |
| ----- | ----- | ----------- |
| 1     | 1     | 0           |
| 0     | 0     | 0           |
| 0     | 1     | 1           |
| 1     | 0     | 1           |

**Rule:** If both bits are the same, the result is `0`. If the bits are different, the result is `1`.

### Properties of XOR

1. **XOR with 0:**
   - `a ^ 0 = a`
2. **XOR with itself:**
   - `a ^ a = 0`
3. **XOR with 1:**
   - `a ^ 1 = ~a`
4. **XOR with -1:**
   - `a ^ -1 = ~a`
