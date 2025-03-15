# 🔗 Joins in SQL  

In SQL, joins are used to combine records from two or more tables based on related columns. They enable you to retrieve data that spans multiple tables in a relational database.  

---

## 🛠️ Types of Joins  

1. **INNER JOIN**: Returns records that have matching values in both tables.  
2. **LEFT JOIN (LEFT OUTER JOIN)**: Returns all records from the left table and the matched records from the right table. If no match is found, the result is NULL from the right side.  
3. **RIGHT JOIN (RIGHT OUTER JOIN)**: Returns all records from the right table and the matched records from the left table. If no match is found, the result is NULL from the left side.  
4. **FULL JOIN (FULL OUTER JOIN)**: Returns all records when there is a match in either left or right table. If there is no match, the result is NULL from the side that lacks a match.  
5. **CROSS JOIN**: Returns the Cartesian product of both tables, meaning it combines all rows from the first table with all rows from the second table.  
6. **SELF JOIN**: A self-join is a regular join, but the table is joined with itself.  

---

## 📌 Sample Tables  

### **Employees Table**  

| employee_id | name   | department_id |  
|------------|--------|--------------|  
| 1          | Alice  | 101          |  
| 2          | Bob    | 102          |  
| 3          | Charlie| NULL         |  
| 4          | David  | 101          |  
| 5          | Emma   | 103          |  

### **Departments Table**  

| department_id | department_name  |  
|--------------|----------------|  
| 101          | HR             |  
| 102          | IT             |  
| 103          | Marketing      |  
| 104          | Finance        |  

---

## 📝 Examples  

### 1. **INNER JOIN**  

Retrieve employees and their corresponding department names. Only matched records are returned.  

```sql
SELECT employees.name, departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id;
```

**Output:**  

| name   | department_name |  
|--------|----------------|  
| Alice  | HR             |  
| Bob    | IT             |  
| David  | HR             |  
| Emma   | Marketing      |  

---

### 2. **LEFT JOIN**  

Retrieve all employees and their department names, including those without a department.  

```sql
SELECT employees.name, departments.department_name
FROM employees
LEFT JOIN departments ON employees.department_id = departments.department_id;
```

**Output:**  

| name    | department_name |  
|---------|----------------|  
| Alice   | HR             |  
| Bob     | IT             |  
| Charlie | NULL           |  
| David   | HR             |  
| Emma    | Marketing      |  

---

### 3. **RIGHT JOIN**  

Retrieve all departments and their employees, including departments without employees.  

```sql
SELECT employees.name, departments.department_name
FROM employees
RIGHT JOIN departments ON employees.department_id = departments.department_id;
```

**Output:**  

| name   | department_name |  
|--------|----------------|  
| Alice  | HR             |  
| Bob    | IT             |  
| David  | HR             |  
| Emma   | Marketing      |  
| NULL   | Finance        |  

---

### 4. **FULL JOIN**  

Retrieve all employees and departments, matching where possible.  

```sql
SELECT employees.name, departments.department_name
FROM employees
FULL JOIN departments ON employees.department_id = departments.department_id;
```

**Output:**  

| name    | department_name |  
|---------|----------------|  
| Alice   | HR             |  
| Bob     | IT             |  
| Charlie | NULL           |  
| David   | HR             |  
| Emma    | Marketing      |  
| NULL    | Finance        |  

---

### 5. **CROSS JOIN**  

Combine all employees with all departments (Cartesian Product).  

```sql
SELECT employees.name, departments.department_name
FROM employees
CROSS JOIN departments;
```

**Output (Partial):**  

| name   | department_name |  
|--------|----------------|  
| Alice  | HR             |  
| Alice  | IT             |  
| Alice  | Marketing      |  
| Alice  | Finance        |  
| Bob    | HR             |  
| Bob    | IT             |  
| Bob    | Marketing      |  
| Bob    | Finance        |  
| ...    | ...            |  

---

### 6. **SELF JOIN**  

Find pairs of employees who work in the same department.  

```sql
SELECT e1.name AS Employee1, e2.name AS Employee2, e1.department_id
FROM employees e1
INNER JOIN employees e2 ON e1.department_id = e2.department_id
WHERE e1.employee_id <> e2.employee_id;
```

**Output:**  

| Employee1 | Employee2 | department_id |  
|-----------|----------|--------------|  
| Alice     | David    | 101          |  
| David     | Alice    | 101          |  

---

## 🔥 Conclusion  

Understanding these joins is crucial for effective database querying and data analysis. Each type of join serves a unique purpose in retrieving meaningful data from relational databases. Mastering SQL joins will help you manipulate and extract data efficiently. 🚀
