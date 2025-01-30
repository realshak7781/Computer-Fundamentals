# 🔑 Keys in Database Management Systems (DBMS)

In DBMS, **keys** are crucial for defining the structure of a database and ensuring data accuracy. They help in uniquely identifying records and facilitate efficient data retrieval. Below are the various types of keys commonly used:

## 1. 🗝️ Primary Key

A **Primary Key** is a unique identifier for a record in a table. It ensures that each record is distinct and can be uniquely identified. Characteristics include:

- **Uniqueness**: No two records can have the same primary key value.
- **Non-nullability**: A primary key cannot contain NULL values.

*Example*: In a `Students` table, the `StudentID` can serve as the primary key, uniquely identifying each student.

## 2. 🗝️ Candidate Key

A **Candidate Key** is an attribute, or a set of attributes, that can uniquely identify a record. A table can have multiple candidate keys, but one is chosen as the primary key. Characteristics include:

- **Uniqueness**: Uniquely identifies each record.
- **Minimality**: No subset of the candidate key can uniquely identify a record.

*Example*: In an `Employees` table, both `EmployeeID` and `SocialSecurityNumber` could be candidate keys.

## 3. 🗝️ Super Key

A **Super Key** is a set of one or more attributes that, taken collectively, can uniquely identify a record. It may contain additional attributes that are not necessary for unique identification.

*Example*: In a `Books` table, the combination of `ISBN` and `Title` is a super key, but `ISBN` alone is sufficient to uniquely identify a book.

## 4. 🗝️ Foreign Key

A **Foreign Key** is an attribute, or a set of attributes, in one table that references the primary key of another table. It establishes a relationship between the two tables and ensures referential integrity.

*Example*: In an `Orders` table, `CustomerID` can be a foreign key referencing the `CustomerID` in the `Customers` table.



Understanding these keys is fundamental for designing efficient and reliable databases, as they enforce data integrity and establish clear relationships between different data entities.
