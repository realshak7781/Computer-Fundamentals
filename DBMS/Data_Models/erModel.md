# 📘 Entity and Its Types in Database Management Systems (DBMS)

In Database Management Systems (DBMS), an **entity** refers to any real-world object or concept that can be distinctly identified and stored within the database. Entities possess attributes that describe their properties. Understanding the various types of entities is crucial for effective database design and management.

---

## 🔹 Types of Entities

### 1️⃣ Strong Entity

- **Definition**: An entity that can exist independently of other entities.
- **Characteristics**:
  - Possesses a primary key that uniquely identifies each instance.
  - Represents a real-world object with a distinct existence.
- **Example**: In a university database, entities like `Student` or `Course` are strong entities, as they can exist without relying on other entities.

### 2️⃣ Weak Entity

- **Definition**: An entity that cannot exist without a corresponding strong entity.
- **Characteristics**:
  - Lacks a primary key; instead, it has a partial key (also known as a discriminator).
  - Depends on a strong entity for its identification and existence.
- **Example**: In a university database, an `Enrollment` entity might be a weak entity, as it depends on both `Student` and `Course` entities to define its existence.

---



