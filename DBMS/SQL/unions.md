# 🔗 SQL UNION Operator

In SQL, the `UNION` operator is used to combine the result sets of two or more `SELECT` statements into a single result set. This operation is particularly useful when you need to merge data from different tables or queries that share a similar structure.

## 🛠️ Syntax

```sql
SELECT column1, column2, ...
FROM table1
UNION
SELECT column1, column2, ...
FROM table2;
```

**Key Points:**

- Each `SELECT` statement within the `UNION` must have the same number of columns in the result sets with similar data types.
- The columns in each `SELECT` statement must also be in the same order.

## 📋 Example

Consider two tables: `Sales2024` and `Sales2025`, both containing the columns `ProductID`, `ProductName`, and `SalesAmount`.

```sql
SELECT ProductID, ProductName, SalesAmount
FROM Sales2024
UNION
SELECT ProductID, ProductName, SalesAmount
FROM Sales2025;
```

This query combines the sales records from both years into a single result set.

## 🔄 UNION vs. UNION ALL

- **`UNION`**: By default, the `UNION` operator removes duplicate rows from the result set.

- **`UNION ALL`**: If you want to include all rows, including duplicates, you can use `UNION ALL`. This can be more efficient since it doesn't require the database to check for duplicates.

  ```sql
  SELECT ProductID, ProductName, SalesAmount
  FROM Sales2024
  UNION ALL
  SELECT ProductID, ProductName, SalesAmount
  FROM Sales2025;
  ```

## ⚠️ Considerations

- **Column Compatibility**: Ensure that the corresponding columns in each `SELECT` statement have compatible data types.

- **Order of Columns**: The order of columns in each `SELECT` statement should match.

- **Performance**: Using `UNION` (which removes duplicates) can be more resource-intensive than `UNION ALL`. Choose the appropriate operator based on whether you need to eliminate duplicates.

Understanding the `UNION` operator allows you to effectively combine data from multiple queries, enhancing your ability to analyze and report on data across different tables or datasets. 