---
# 🧪 Experiment 8 :- 2D Array - Matrices

---

📘 README: Programming Experiment – Matrix Operations
---
📌 Overview
---
This experiment focuses on performing fundamental Matrix Operations using programming. Matrices are used extensively in mathematics, computer science, graphics, and data science. The following operations are covered :-
---
Addition of two matrices
Multiplication of two matrices
Matrix input and display
Transpose of a matrix

--

🔢 Q1. Code for Addition of Two Matrices
✅ Aim

To write a program that performs the addition of two matrices.

📚 Theory

Matrix addition is performed by adding corresponding elements of the matrices. Both matrices must have the same dimensions (rows × columns).

📐 Syntax (Python)
result[i][j] = matrix1[i][j] + matrix2[i][j]

🧠 Logic

Create two matrices of the same size.

Add corresponding elements and store them in a new matrix.

💻 Code
```cpp
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

print("Enter elements of first matrix:")
matrix1 = [[int(input()) for _ in range(cols)] for _ in range(rows)]

print("Enter elements of second matrix:")
matrix2 = [[int(input()) for _ in range(cols)] for _ in range(rows)]

result = [[matrix1[i][j] + matrix2[i][j] for j in range(cols)] for i in range(rows)]

print("Addition of matrices:")
for row in result:
    print(row)
```
📌 Conclusion

Successfully implemented addition of two matrices by adding corresponding elements.

---

✖️ Q2. Code for Multiplication of Two Matrices
✅ Aim

To multiply two matrices using nested loops.

📚 Theory

Matrix multiplication is valid only when:

Columns in the first matrix = Rows in the second matrix

The resulting matrix will have dimensions: rows of first × columns of second

📐 Syntax
result[i][j] += matrix1[i][k] * matrix2[k][j]

🧠 Logic

Multiply rows of first matrix with columns of second matrix.

Use three nested loops for row, column, and summing the products.

💻 Code
```cpp
rows1 = int(input("Enter rows of first matrix: "))
cols1 = int(input("Enter columns of first matrix: "))
rows2 = int(input("Enter rows of second matrix: "))
cols2 = int(input("Enter columns of second matrix: "))

if cols1 != rows2:
    print("Matrix multiplication not possible!")
else:
    print("Enter elements of first matrix:")
    matrix1 = [[int(input()) for _ in range(cols1)] for _ in range(rows1)]

    print("Enter elements of second matrix:")
    matrix2 = [[int(input()) for _ in range(cols2)] for _ in range(rows2)]

    result = [[0 for _ in range(cols2)] for _ in range(rows1)]

    for i in range(rows1):
        for j in range(cols2):
            for k in range(cols1):
                result[i][j] += matrix1[i][k] * matrix2[k][j]

    print("Multiplication of matrices:")
    for row in result:
        print(row)
```
📌 Conclusion

Matrix multiplication implemented successfully using three nested loops.

---

📥 Q3. Matrix Input from User and Display It
✅ Aim

To take a matrix as input from the user and display it in proper format.

📚 Theory

Matrix input involves taking multiple rows of input with each row containing multiple elements.

📐 Syntax
matrix = [[int(input()) for j in range(cols)] for i in range(rows)]

🧠 Logic

Ask user for number of rows and columns.

Take element input row-wise.

Display using nested loops.

💻 Code
```cpp
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

print("Enter matrix elements:")
matrix = [[int(input()) for _ in range(cols)] for _ in range(rows)]

print("Matrix is:")
for row in matrix:
    print(row)
```
📌 Conclusion

Matrix input and display done successfully using nested loops.

---

🔄 Q4. Transpose of a Matrix
✅ Aim

To compute the transpose of a matrix.

📚 Theory

Transpose of a matrix is obtained by flipping it over its diagonal:

Rows become columns

Columns become rows

For matrix A:

A[i][j] becomes A[j][i]

📐 Syntax
transpose = [[matrix[j][i] for j in range(rows)] for i in range(cols)]

🧠 Logic

Loop through columns.

For each column, fetch each row element to form a new row in the transpose.

💻 Code
```cpp
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

print("Enter matrix elements:")
matrix = [[int(input()) for _ in range(cols)] for _ in range(rows)]

transpose = [[matrix[j][i] for j in range(rows)] for i in range(cols)]

print("Transpose of matrix:")
for row in transpose:
    print(row)
```
📌 Conclusion

Successfully computed the transpose of the given matrix.
