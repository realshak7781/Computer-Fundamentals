# 🔗 Joins in SQL

In SQL, joins are used to combine records from two or more tables based on related columns. They enable you to retrieve data that spans multiple tables in a relational database.

## 🛠️ Types of Joins

1. **INNER JOIN**: Returns records that have matching values in both tables.

2. **LEFT JOIN (LEFT OUTER JOIN)**: Returns all records from the left table and the matched records from the right table. If no match is found, the result is NULL from the right side.

3. **RIGHT JOIN (RIGHT OUTER JOIN)**: Returns all records from the right table and the matched records from the left table. If no match is found, the result is NULL from the left side.

4. **FULL JOIN (FULL OUTER JOIN)**: Returns all records when there is a match in either left or right table. If there is no match, the result is NULL from the side that lacks a match.

5. **CROSS JOIN**: Returns the Cartesian product of both tables, meaning it combines all rows from the first table with all rows from the second table.

6. **SELF JOIN**: A self-join is a regular join, but the table is joined with itself.

## 📝 Examples

### 1. INNER JOIN

Retrieve employees and their corresponding department names:

```sql
SELECT employees.name, departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id;
```

### 2. LEFT JOIN

Retrieve all employees and their department names, including those without a department:

```sql
SELECT employees.name, departments.department_name
FROM employees
LEFT JOIN departments ON employees.department_id = departments.department_id;
```

### 3. RIGHT JOIN

Retrieve all departments and their employees, including departments without employees:

```sql
SELECT employees.name, departments.department_name
FROM employees
RIGHT JOIN departments ON employees.department_id = departments.department_id;
```

### 4. FULL JOIN

Retrieve all employees and departments, matching where possible:

```sql
SELECT employees.name, departments.department_name
FROM employees
FULL JOIN departments ON employees.department_id = departments.department_id;
```

### 5. CROSS JOIN

Combine all employees with all departments:

```sql
SELECT employees.name, departments.department_name
FROM employees
CROSS JOIN departments;
```

### 6. SELF JOIN

Find pairs of employees who work in the same department:

```sql
SELECT e1.name AS Employee1, e2.name AS Employee2, e1.department_id
FROM employees e1
INNER JOIN employees e2 ON e1.department_id = e2.department_id
WHERE e1.employee_id <> e2.employee_id;
```

Understanding these joins is crucial for effective database querying and data analysis. 