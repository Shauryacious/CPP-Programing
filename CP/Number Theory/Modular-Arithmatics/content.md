# Modular Arithmetic

## Key Properties

1. **Range of A % B**

   - If we perform `A % B`, the result is always in the range **0** to **B-1**.
   - **Examples:**
     - `9 % 3 = 0`
     - `10 % 3 = 1`
     - `11 % 3 = 2`
     - `12 % 3 = 0`
     - `13 % 3 = 1`
     - `14 % 3 = 2`
     - `15 % 3 = 0`

2. **When A < B**

   - If `A < B` and we perform `A % B`, the result will always be `A`.
   - **Example:**
     - `5 % 10 = 5`

3. **Distributive Property of Modulus**
   - `(A + B) % M = (A % M + B % M) % M`
   - **Example:**
     - `(19 + 11) % 3 = (19%3 + 11%3) % 3`
     - `30 % 3 = (1 + 2)%3`
     - `0 = 0`

## Important Observation

- **Observation:**

  - `(A % B) % B = A % B`
  - Because `A % B` will lie in the range from `0` to `B-1`
  - Say `A % B = X`
  - Then `X % B = X`, since `X < B` (Property 2)

- We can take as many `mod` operations as we want, it will not affect the answer.
- **Examples:**
  - `((A % B) % B) % B = A % B`
  - `(((A % B) % B) % B) % B = A % B`
  - `(((((A % B) % B) % B) % B) % B) % B = A % B`
- **Note:**

  - During problem-solving, if we are confused about whether we have taken a `mod` or not, we can still take a `mod` in the final answer as it will not impact the result.

    3.1 (A + B) % B ==> A % B

  - Because (A % B + B % B) % B ==> (A % B + 0) % B ==> (A % B) % B ==> A % B

## Subtraction

4. (A - B) % M = [(A % M - B % M) + M] % M

   - Why +M? Because say A % M is x (which is in the range from 0 to M-1) and B % M is y (which is in the range from 0 to M-1) and x - y (when y > x, e.g., x == 0 and y == M-1) is in the range from -M+1 to M-1
   - So to make it in the range from 0 to M-1 (make it positive), we add M to it.

   - **Example:**
     - `(16 - 9) % 5 = [(16 % 5 - 9 % 5) + 5] % 5 = [(1 - 4) + 5] % 5 = [(-3) + 5] % 5 = 2`

## Multiplication

5. `(A*B) % M = [(A % M )*(B % M)] % M`
   - We take mod first because in competitive programming we have to take mod at every step to avoid overflow.
   - Say `(10^5 * 10^4 * 10^3 * 10^2 * 10^1 * 10^0 = 10^{15})`
   - Which can't be stored in `int` so we take mod at every step.
   - So `((10^5 * 10^4 * 10^3 * 10^2 * 10^1 * 10^0) % M` ===> `(10^5 % M * 10^4 % M * 10^3 % M * 10^2 % M * 10^1 % M * 10^0 % M) % M)`
