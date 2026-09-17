# Pascal's Triangle in C

A lightweight, efficient C program to generate and display **Pascal's Triangle** up to a user-defined number of rows. 

Pascal's Triangle is a triangular array of binomial coefficients. The apex of the triangle is `1`, and each subsequent number is the sum of the two numbers directly above it.

## Features

* **Dynamic Row Sizing:** Prompts the user to input the desired number of rows at runtime.
* **Formatted Visual Alignment:** Automatically prints leading spaces to maintain a perfect pyramid shape in the terminal.
* **Two Implementation Variations Available:**
  * **Binomial Coefficient Method (nCr):** Uses factorials to compute individual positions.
  * **Iterative Addition Method (O(n²)):** An optimized approach that calculates values using the previous row's results to prevent integer overflow.

## Getting Started

### Prerequisites

You need a C compiler installed on your system, such as `gcc` or `clang`.

* **Linux/macOS:** Usually pre-installed. If not, install via `apt install gcc` or Xcode Command Line Tools.
* **Windows:** Use MinGW, MSYS2, or WSL (Windows Subsystem for Linux).

### Installation & Compilation

1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com
   cd pascals-triangle-c
   ```

2. Compile the source file using `gcc`:
   ```bash
   gcc pascal.c -o pascal
   ```

### Running the Program

Execute the compiled binary:

```bash
./pascal
```

## Example Output

```text
Enter the number of rows: 5
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 
```

## How It Works

The program calculates each value $C(n, k)$ in the triangle where $n$ represents the row index and $k$ represents the column index using the recurrence relation:

$$C(n, k) = C(n-1, k-1) + C(n-1, k)$$

Alternatively, it can be computed using the combination formula:

$$C(n, k) = \frac{n!}{k!(n-k)!}$$

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
