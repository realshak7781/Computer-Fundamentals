SQL subqueries are a powerful tool for writing complex queries and retrieving data that depends on calculations or values from other tables. ([takeuforward.org](https://takeuforward.org/dbms/sql-subqueries?utm_source=chatgpt.com))

**What is a Subquery?** 🧐

A subquery, also known as a nested query, is a query within another SQL query. It allows you to perform operations that depend on the results of another query. ([en.wikipedia.org](https://en.wikipedia.org/wiki/SQL_syntax?utm_source=chatgpt.com))

**Types of Subqueries** 🛠️

1. **Single-Row Subqueries** 🧍‍♂️
   - Return only one row from the inner query.
   - Example: Find employees who earn more than the average salary.

     ```sql
     SELECT employee_number, name
     FROM employees emp
     WHERE salary > (SELECT AVG(salary) FROM employees);
     ```

2. **Multiple-Row Subqueries** 🧑‍🤝‍🧑
   - Return more than one row from the inner query.
   - Example: List departments with more than one employee.

     ```sql
     SELECT department
     FROM employees
     WHERE department IN (SELECT department FROM employees GROUP BY department HAVING COUNT(*) > 1);
     ```

3. **Correlated Subqueries** 🔄
   - Refer to columns from the outer query.
   - Example: Find employees whose salary is above the average for their department.

     ```sql
     SELECT employee_number, name
     FROM employees emp
     WHERE salary > (SELECT AVG(salary) FROM employees WHERE department = emp.department);
     ```

**Advantages of Subqueries** 🌟

- **Simplify Complex Queries** 🧩: Break down complex problems into manageable parts.
- **Enhanced Readability** 📖: Make SQL statements easier to understand.
- **Modularity** 🛠️: Encapsulate logic within queries.

**Performance Considerations** 🚀

While subqueries are powerful, they can impact performance, especially correlated subqueries, as they may execute the inner query multiple times. In such cases, consider using joins or optimizing your queries for better performance. ([takeuforward.org](https://takeuforward.org/dbms/techniques-for-optimising-sql-queries?utm_source=chatgpt.com))

**Conclusion** 🎯

Mastering subqueries enhances your ability to write efficient and effective SQL queries, enabling you to handle complex data retrieval tasks with ease. 