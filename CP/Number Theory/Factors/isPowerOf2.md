# Understanding the Parity of Multiplication and Power of Two

## Multiplication Parity Rules

When multiplying two numbers, the result's parity (whether it is odd or even) follows simple rules:

- **Even ∗ Even = Even**
- **Even ∗ Odd = Even**

- **Odd ∗ Even = Even**

- **Odd ∗ Odd = Odd**  
  The product of two odd numbers is always odd.

## The Unique Even Prime Number

There is only one even prime number: **2**.

##### If a number has no odd divisors (i.e., it is only divisible by 2), then it _must_ be a power of two.

To verify if a number is a power of two, you can repeatedly divide the number by 2 as long as it remains divisible. If the final result is 1, then the number is indeed a power of two.

### Example

Consider the number **8**:

- 8 ÷ 2 = 4
- 4 ÷ 2 = 2
- 2 ÷ 2 = 1

Since we end up with 1, **8** is a power of two.

## Bonus: Using Bitwise AND Operation

`n & (n - 1) == 0`
Another efficient method to check if a number is a power of two is to use the following condition:

### How it Works

- For a number **n** that is a power of two, its binary representation has exactly one `1` followed by zeros.
- The number **n - 1** will have all bits flipped after the position of the `1` in **n**.

When you perform the bitwise AND operation `n & (n - 1)`, all bits will cancel out, resulting in `0`.

### Example

For **n = 8** (which is `1000` in binary):

- **n = 8**: `1000`
- **n - 1 = 7**: `0111`

**8 & 7** = `1000 & 0111 = 0000`

Since the result is `0`, **8** is a power of two.
