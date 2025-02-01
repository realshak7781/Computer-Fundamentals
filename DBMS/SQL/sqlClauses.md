# 📄 SQL Clauses

SQL clauses are essential components of SQL queries that allow you to filter, group, and sort data retrieved from a database. Here's an overview of some commonly used SQL clauses:

## 🔍 WHERE Clause

The `WHERE` clause filters records based on specified conditions.

```sql
SELECT * FROM Employees
WHERE Department = 'Sales';
```

This query retrieves all employees who work in the Sales department.

## 🗃️ GROUP BY Clause

The `GROUP BY` clause groups rows that have the same values in specified columns into summary rows.

```sql
SELECT Department, COUNT(*) AS EmployeeCount
FROM Employees
GROUP BY Department;
```

This query counts the number of employees in each department.

## 📊 HAVING Clause

The `HAVING` clause filters groups created by the `GROUP BY` clause based on specified conditions.

```sql
SELECT Department, COUNT(*) AS EmployeeCount
FROM Employees
GROUP BY Department
HAVING COUNT(*) > 10;
```

This query retrieves departments with more than 10 employees.

## 📑 ORDER BY Clause

The `ORDER BY` clause sorts the result set of a query by one or more columns.

```sql
SELECT * FROM Employees
ORDER BY LastName ASC;
```

This query retrieves all employees, sorted by their last names in ascending order.

## 📉 LIMIT Clause

The `LIMIT` clause restricts the number of rows returned by a query.

```sql
SELECT * FROM Employees
LIMIT 5;
```

This query retrieves the first 5 employees from the result set.

