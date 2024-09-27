# Understanding the Binary Left Shift Operator (`<<`)

The binary left shift operator (`<<`) shifts the bits of a number to the left by a specified number of positions. This operation effectively multiplies the number by 2 raised to the power of the shift count.

## Explanation with Example

Let's consider the number 5 and shift it left by 2 positions.

### Step-by-Step Breakdown

1. **Binary Representation of 5:**

   - The binary representation of the decimal number 5 is:
     ```
     00000000000000000000000000000101
     ```
   - This can be broken down as:
     ```
     2^0 + 2^2 = 5
     ```

2. **Applying the Left Shift Operation:**
   - When we shift the bits of 5 two positions to the left, the result is:
     ```
     00000000000000000000000000010100
     ```
   - This new binary number is equivalent to:
     ```
     2^2 + 2^4 = 20
     ```
3. **Understanding the Multiplication Effect:**
   - Shifting the bits of 5 two positions to the left is equivalent to multiplying 5 by \(2^2\):
     ```
     5 << 2 = 5 * (2^2) = 5 * 4 = 20
     ```

### Detailed Breakdown

- Original Number:
  00000000000000000000000000000101 (binary for 5)
- After Shifting Left by 2 Positions:
- 00000000000000000000000000010100 (binary for 20)
- Binary Calculation:
  00000000000000000000000000010100 = 2^2 + 2^4 = 20
- Mathematical Calculation:
  5 = 2^0 + 2^2 = 5
  5 << 2 = 2^2 _ (2^2 + 2^0) = 2^2 _ 5 = 20

### Final Result

Thus, applying the left shift operator to the number 5 and shifting it by 2 positions results in 20.

### Summary

- The binary left shift operator (`<<`) shifts the bits of a number to the left by a specified number of positions.
- This operation is equivalent to multiplying the number by 2 raised to the power of the shift count.
- In our example, shifting 5 left by 2 positions results in 20.

In conclusion, the binary left shift operator is a powerful tool for performing quick multiplications by powers of 2.

so (a << b) = a \* 2^b
