# Locking Protocols in DBMS 🔒

In Database Management Systems (DBMS), **locking protocols** are essential for managing concurrent transactions and ensuring data consistency. They regulate how transactions acquire and release locks on data items to prevent conflicts and maintain database integrity.

## Types of Locks 🔑

1. **Shared Lock (S) 🤝**: Allows a transaction to read a data item. Multiple transactions can hold shared locks on the same item simultaneously, but no transaction can modify the data until all shared locks are released.

2. **Exclusive Lock (X) 🚫**: Allows a transaction to both read and write a data item. Only one transaction can hold an exclusive lock on a data item at any given time, ensuring exclusive access for modifications.

## Lock-Based Protocols 🛡️

Lock-based protocols dictate how transactions acquire and release locks. The primary protocols include:

### 1. Simplistic Lock Protocol 🧩

- **Description**: Transactions obtain a lock on the data before performing any operations (read or write) and release the lock after completing the transaction.

### 2. Pre-Claiming Lock Protocol 📝

- **Description**: Before a transaction begins execution, it requests all the locks it will need. If all locks are granted, the transaction proceeds; otherwise, it waits until all necessary locks are available.

### 3. Two-Phase Locking (2PL) Protocol 📈📉

- **Description**: Divides the transaction execution into two phases:
  - **Growing Phase**: The transaction acquires all the required locks without releasing any.
  - **Shrinking Phase**: The transaction releases the acquired locks and cannot obtain any new locks.

- **Types of 2PL**:
  - **Strict Two-Phase Locking**: Transactions hold all exclusive locks until they commit or abort, preventing cascading rollbacks.
  - **Rigorous Two-Phase Locking**: Transactions hold all locks (shared and exclusive) until they commit, ensuring serializability.
  - **Conservative Two-Phase Locking**: Transactions obtain all required locks before execution begins, avoiding deadlocks but potentially reducing concurrency.

## Deadlock and Starvation 🚧

- **Deadlock**: Occurs when two or more transactions wait indefinitely for each other to release locks, creating a cycle of dependencies.

- **Starvation**: Happens when a transaction waits indefinitely to acquire a lock because other transactions continuously acquire the same lock first.

## Conclusion 🎯

Locking protocols are vital in DBMS to manage concurrent transactions effectively. By implementing appropriate locking mechanisms, databases ensure data consistency, integrity, and isolation, thereby maintaining reliable and efficient operations. 