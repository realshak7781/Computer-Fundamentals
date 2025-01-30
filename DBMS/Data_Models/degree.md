### **What is Degree in DBMS?**  

**Degree** in DBMS refers to the **number of entities (tables) participating in a relationship**.  

Think of a **relationship** as a connection between entities (tables). The **degree** simply tells how many entities are involved.  

---

## **Types of Degree in DBMS**  

### **1️⃣ Unary Relationship (Degree = 1)**
📌 A relationship where **only one entity** is involved (self-relationship).  

🔹 **Example:**  
- An **Employee** supervises another **Employee** (both are from the same table).  
- A **Person** is married to another **Person**.  

---

### **2️⃣ Binary Relationship (Degree = 2)**
📌 A relationship where **two entities** are involved.  
📌 **Most common type** in DBMS.  

🔹 **Example:**  
- A **Student** enrolls in a **Course**.  
- A **Customer** places an **Order**.  

---

### **3️⃣ Ternary Relationship (Degree = 3)**
📌 A relationship where **three entities** are involved.  

🔹 **Example:**  
- A **Doctor** treats a **Patient** at a **Hospital**.  
- A **Supplier** supplies a **Product** to a **Store**.  

---

### **4️⃣ N-ary Relationship (Degree = N)**
📌 A relationship where **more than three entities** are involved.  
📌 **Less common**, but useful in complex systems.  

🔹 **Example:**  
- A **Company** signs a **Contract** with a **Vendor** under a **Government Regulation** (4 entities).  

---

## **🔹 Summary Table**
| Degree | Relationship Type | Example |
|--------|------------------|---------|
| 1 | **Unary** | Employee supervises Employee |
| 2 | **Binary** | Student enrolls in Course |
| 3 | **Ternary** | Doctor treats Patient at Hospital |
| N | **N-ary** | Company signs Contract with Vendor under Government Regulation |

---

## **📌 Final Thought 💡**  
The **degree** of a relationship tells us how many **entities** are connected. Most relationships in databases are **binary**, but complex systems may use **ternary or n-ary** relationships. 🚀