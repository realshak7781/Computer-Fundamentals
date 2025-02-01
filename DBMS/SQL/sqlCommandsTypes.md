# 📚 SQL Commands and Their Types

Structured Query Language (SQL) is the standard language for interacting with relational databases. SQL commands are categorized based on their functionality. Here's a concise overview:

## 🏗️ Data Definition Language (DDL)

DDL commands define and modify the structure of database objects.

- **CREATE**: 🛠️ Creates new database objects like tables, indexes, or views.
  ```sql
  CREATE TABLE Employees (
      ID INT PRIMARY KEY,
      Name VARCHAR(100),
      Position VARCHAR(50)
  );
  ```

- **ALTER**: 🔄 Modifies existing database objects by adding, deleting, or altering columns.
  ```sql
  ALTER TABLE Employees ADD COLUMN Salary DECIMAL(10, 2);
  ```

- **DROP**: ❌ Deletes existing database objects.
  ```sql
  DROP TABLE Employees;
  ```

- **TRUNCATE**: 🧹 Removes all records from a table without deleting the table itself.
  ```sql
  TRUNCATE TABLE Employees;
  ```

## 🛠️ Data Manipulation Language (DML)

DML commands handle the manipulation of data within tables.

- **INSERT**: ➕ Adds new records to a table.
  ```sql
  INSERT INTO Employees (ID, Name, Position) VALUES (1, 'Alice', 'Developer');
  ```

- **UPDATE**: ✏️ Modifies existing records in a table.
  ```sql
  UPDATE Employees SET Salary = 75000 WHERE ID = 1;
  ```

- **DELETE**: 🗑️ Removes records from a table.
  ```sql
  DELETE FROM Employees WHERE ID = 1;
  ```

## 🔍 Data Query Language (DQL)

DQL is primarily focused on querying data.

- **SELECT**: 🔎 Retrieves data from one or more tables.
  ```sql
  SELECT Name, Position FROM Employees WHERE Salary > 50000;
  ```

## 🔐 Data Control Language (DCL)

DCL commands manage access permissions to the database.

- **GRANT**: ✅ Provides specific privileges to users.
  ```sql
  GRANT SELECT, INSERT ON Employees TO User1;
  ```

- **REVOKE**: 🚫 Removes specific privileges from users.
  ```sql
  REVOKE INSERT ON Employees FROM User1;
  ```

## 🔄 Transaction Control Language (TCL)

TCL commands handle the transactions within a database.

- **COMMIT**: 💾 Saves all changes made during the current transaction.
  ```sql
  COMMIT;
  ```

- **ROLLBACK**: ⏪ Reverts changes made during the current transaction.
  ```sql
  ROLLBACK;
  ```

- **SAVEPOINT**: 📍 Sets a savepoint within a transaction to which you can later roll back.
  ```sql
  SAVEPOINT Savepoint1;
  ```

