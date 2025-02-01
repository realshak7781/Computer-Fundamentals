# 🛠️ SQL Operators and Aggregation Functions

In SQL, operators and aggregation functions are essential for performing calculations, comparisons, and data analysis. Operators allow you to manipulate data, while aggregation functions enable you to summarize and analyze data sets.

## ➕ Arithmetic Operators

Arithmetic operators perform mathematical operations on numeric data.

- **Addition (`+`)**: Adds two numbers.
  ```sql
  SELECT price + tax AS total_price FROM products;
  ```

- **Subtraction (`-`)**: Subtracts one number from another.
  ```sql
  SELECT price - discount AS discounted_price FROM products;
  ```

- **Multiplication (`*`)**: Multiplies two numbers.
  ```sql
  SELECT quantity * price AS total_cost FROM order_items;
  ```

- **Division (`/`)**: Divides one number by another.
  ```sql
  SELECT total_amount / number_of_payments AS installment FROM payments;
  ```

- **Modulus (`%`)**: Returns the remainder of a division operation.
  ```sql
  SELECT product_id % 10 AS remainder FROM products;
  ```

## 🔄 Comparison Operators

Comparison operators compare two values and return a boolean result.

- **Equal to (`=`)**: Checks if two values are equal.
  ```sql
  SELECT * FROM employees WHERE department_id = 5;
  ```

- **Not equal to (`!=` or `<>`)**: Checks if two values are not equal.
  ```sql
  SELECT * FROM customers WHERE country != 'USA';
  ```

- **Greater than (`>`)**: Checks if the left value is greater than the right value.
  ```sql
  SELECT * FROM products WHERE price > 100;
  ```

- **Less than (`<`)**: Checks if the left value is less than the right value.
  ```sql
  SELECT * FROM products WHERE stock < 50;
  ```

- **Greater than or equal to (`>=`)**: Checks if the left value is greater than or equal to the right value.
  ```sql
  SELECT * FROM employees WHERE experience >= 5;
  ```

- **Less than or equal to (`<=`)**: Checks if the left value is less than or equal to the right value.
  ```sql
  SELECT * FROM employees WHERE age <= 30;
  ```

## 🧩 Logical Operators

Logical operators combine multiple conditions.

- **AND**: Returns true if both conditions are true.
  ```sql
  SELECT * FROM orders WHERE status = 'shipped' AND payment_received = true;
  ```

- **OR**: Returns true if at least one condition is true.
  ```sql
  SELECT * FROM customers WHERE city = 'New York' OR city = 'Los Angeles';
  ```

- **NOT**: Reverses the result of a condition.
  ```sql
  SELECT * FROM products WHERE NOT discontinued;
  ```

## 🗃️ Aggregation Functions

Aggregation functions perform calculations on multiple rows and return a single result.

- **COUNT()**: Returns the number of rows that match a specified condition.
  ```sql
  SELECT COUNT(*) FROM employees WHERE department_id = 5;
  ```

- **SUM()**: Returns the total sum of a numeric column.
  ```sql
  SELECT SUM(salary) FROM employees WHERE department_id = 5;
  ```

- **AVG()**: Returns the average value of a numeric column.
  ```sql
  SELECT AVG(salary) FROM employees WHERE department_id = 5;
  ```

- **MIN()**: Returns the smallest value in a column.
  ```sql
  SELECT MIN(salary) FROM employees WHERE department_id = 5;
  ```

- **MAX()**: Returns the largest value in a column.
  ```sql
  SELECT MAX(salary) FROM employees WHERE department_id = 5;
  ```

## 📊 Grouping Data

To aggregate data across multiple groups, use the `GROUP BY` clause.

```sql
SELECT department_id, AVG(salary) AS average_salary
FROM employees
GROUP BY department_id;
```

This query calculates the average salary for each department.

## 📋 Filtering Grouped Data

To filter grouped data, use the `HAVING` clause.

```sql
SELECT department_id, COUNT(*) AS employee_count
FROM employees
GROUP BY department_id
HAVING COUNT(*) > 10;
```

This query retrieves departments with more than 10 employees.

 