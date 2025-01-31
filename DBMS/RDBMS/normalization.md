# 📌 Database Normalization and Its Types  

Database normalization is a systematic approach to organizing data in a database to **reduce redundancy** and **improve data integrity**. The process ensures that data is structured logically, preventing inconsistencies and anomalies.

---

## 🔥 Types of Normal Forms  

Normalization is divided into multiple stages, known as **normal forms (NF)**. Each form eliminates specific types of redundancy and anomalies.

---

### ✅ 1. First Normal Form (1NF)  

A table is in **1NF** if:  

- 🟢 **Atomicity**: All columns contain **atomic (indivisible)** values.  
- 🟢 **Single Type**: Each column holds values of a **single data type**.  
- 🟢 **No Repeating Groups**: No arrays or multiple values in a single column.

#### ❌ **Problem (Not in 1NF)**  

| Student_ID | Name   | Courses       |  
|------------|--------|---------------|  
| 1          | Alice  | Math, Science |  
| 2          | Bob    | English       |  
| 3          | Charlie| History, Math |  

🔴 **Issue**: The "Courses" column contains **multiple values**, which violates **1NF**.  

#### ✅ **Solution (Convert to 1NF)**  

| Student_ID | Name   | Course  |  
|------------|--------|---------|  
| 1          | Alice  | Math    |  
| 1          | Alice  | Science |  
| 2          | Bob    | English |  
| 3          | Charlie| History |  
| 3          | Charlie| Math    |  

Now, each column has **atomic values**, and there are **no repeating groups**.

---

### ✅ 2. Second Normal Form (2NF)  

A table is in **2NF** if:  

- ✅ It is already in **1NF**.  
- ✅ **All non-key attributes are fully dependent on the entire primary key** (No Partial Dependency).  

#### ❌ **Problem (Not in 2NF)**  

| Student_ID | Course_ID | Student_Name | Instructor |  
|------------|----------|--------------|------------|  
| 1          | C101     | Alice        | Prof. Smith |  
| 2          | C102     | Bob          | Prof. Brown |  
| 3          | C103     | Charlie      | Prof. Lee   |  
| 4          | C101     | David        | Prof. Smith |  

🔴 **Issue**: `Student_Name` depends only on `Student_ID`, while `Instructor` depends only on `Course_ID`. This creates **partial dependency**, violating **2NF**.

#### ✅ **Solution (Convert to 2NF)**  

**Student Table:**  

| Student_ID | Student_Name |  
|------------|--------------|  
| 1          | Alice        |  
| 2          | Bob          |  
| 3          | Charlie      |  
| 4          | David        |  

**Course Table:**  

| Course_ID | Instructor  |  
|----------|------------|  
| C101     | Prof. Smith |  
| C102     | Prof. Brown |  
| C103     | Prof. Lee   |  

**Enrollment Table:**  

| Student_ID | Course_ID |  
|------------|----------|  
| 1          | C101     |  
| 2          | C102     |  
| 3          | C103     |  
| 4          | C101     |  

Now, every **non-key attribute depends only on the primary key**, satisfying **2NF**.

---

### ✅ 3. Third Normal Form (3NF)  

A table is in **3NF** if:  

- ✅ It is already in **2NF**.  
- ✅ **No transitive dependency** (Non-key attributes must depend **only** on the primary key).

#### ❌ **Problem (Not in 3NF)**  

| Employee_ID | Employee_Name | Department_ID | Department_Name |  
|------------|--------------|---------------|----------------|  
| 101        | Alice        | D1            | HR            |  
| 102        | Bob          | D2            | IT            |  
| 103        | Charlie      | D1            | HR            |  

🔴 **Issue**: `Department_Name` depends on `Department_ID`, not directly on `Employee_ID`, causing a **transitive dependency**.

#### ✅ **Solution (Convert to 3NF)**  

**Employee Table:**  

| Employee_ID | Employee_Name | Department_ID |  
|------------|--------------|---------------|  
| 101        | Alice        | D1            |  
| 102        | Bob          | D2            |  
| 103        | Charlie      | D1            |  

**Department Table:**  

| Department_ID | Department_Name |  
|--------------|----------------|  
| D1          | HR             |  
| D2          | IT             |  

Now, **every column depends only on the primary key**, ensuring **3NF**.

---

### ✅ 4. Boyce-Codd Normal Form (BCNF)  

A table is in **BCNF** if:  

- ✅ It is already in **3NF**.  
- ✅ **For every functional dependency (X → Y), X must be a super key**.

#### ❌ **Problem (Not in BCNF)**  

| Student_ID | Course_ID | Instructor  |  
|------------|----------|------------|  
| 1          | C101     | Prof. Smith |  
| 2          | C102     | Prof. Brown |  
| 3          | C103     | Prof. Lee   |  
| 4          | C101     | Prof. Smith |  

🔴 **Issue**: `Course_ID → Instructor` (Course determines Instructor), but `Course_ID` is **not a super key**, violating **BCNF**.

#### ✅ **Solution (Convert to BCNF)**  

**Student-Course Table:**  

| Student_ID | Course_ID |  
|------------|----------|  
| 1          | C101     |  
| 2          | C102     |  
| 3          | C103     |  
| 4          | C101     |  

**Course-Instructor Table:**  

| Course_ID | Instructor  |  
|----------|------------|  
| C101     | Prof. Smith |  
| C102     | Prof. Brown |  
| C103     | Prof. Lee   |  

Now, **every determinant is a super key**, ensuring **BCNF**.

---

### 🎯 **Conclusion**  

✅ **1NF**: No repeating groups, atomic values.  
✅ **2NF**: No partial dependencies (non-key attributes depend on the full primary key).  
✅ **3NF**: No transitive dependencies (attributes depend **only** on the primary key).  
✅ **BCNF**: Every determinant must be a super key.  

Following **normalization** ensures **efficient, scalable, and anomaly-free databases**! 🚀  

