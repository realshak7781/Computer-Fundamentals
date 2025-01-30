# 🎓 Attributes and Their Types

In database management systems (DBMS), an **attribute** refers to a property or characteristic of an entity. Understanding the different types of attributes is crucial for effective database design. Below are the various types of attributes:

## 1. 🔹 Single-Valued Attribute

A single-valued attribute holds a single value for each entity. For example:

- **Age**: Represents the age of a person.
- **Student ID (S.ID)**: Unique identifier for a student.

These attributes cannot have multiple values.

## 2. 🔸 Multi-Valued Attribute

A multi-valued attribute can hold multiple values for a single entity. For instance:

- **Phone Numbers**: An individual may have multiple contact numbers.
- **Email Addresses**: A person can possess more than one email address.

In ER diagrams, multi-valued attributes are depicted by double ovals.

## 3. 🔹 Composite Attribute

Composite attributes consist of multiple components, each representing a sub-part of the attribute. For example:

- **Full Name**: Can be divided into First Name, Middle Name, and Last Name.
- **Address**: Comprises House Number, Street, City, State, and ZIP Code.

These components can be accessed individually or collectively.

## 4. 🔸 Derived Attribute

Derived attributes are those whose values can be calculated or derived from other attributes. Examples include:

- **Age**: Can be derived from the Date of Birth.
- **Total Price**: Computed by multiplying Quantity and Unit Price.

In ER diagrams, derived attributes are represented by dashed ovals.

## 5. 🔹 Key Attribute

A key attribute uniquely identifies an entity within an entity set. For example:

- **Employee ID**: Uniquely identifies an employee.
- **ISBN Number**: Unique identifier for a book.

Key attributes are underlined in ER diagrams.

## 6. 🔸 Stored Attribute

Stored attributes are those that are physically stored in the database. For instance:

- **Date of Birth**: Stored as it is.
- **Product Price**: The actual price of a product.

These attributes are used to derive other attributes when needed.

## 7. 🔹 Simple Attribute

Simple attributes are indivisible and atomic. They cannot be broken down into smaller components. Examples include:

- **Gender**: Male or Female.
- **Blood Group**: A+, B-, etc.

These attributes are fundamental and cannot be decomposed further.


