# ATM SYSTEM

A simple C++14 console-based ATM simulation. Users can log in with an account number and PIN, then perform basic banking operations such as:

- Quick Withdraw (preset amounts)
- Normal Withdraw (custom amount, multiples of 5)
- Deposit
- Check Balance
- Logout
---


https://github.com/user-attachments/assets/d8742a31-25b0-4eec-ad61-b8c3f83c9fc1


---
## Features

- User authentication with account number and 4-digit PIN
- Persistent storage of client data in `ClientFile.txt`
- Input validation for all operations
- Simple text-based menu navigation

## Getting Started

### Prerequisites

- C++14 compatible compiler (e.g., g++, Visual Studio)
- Console/terminal access

### Building

1. Clone or download the repository.
2. Ensure `ATM SYSTEM.cpp` and `ClientFile.txt` are in the same directory.
3. Compile the code:
Or use Visual Studio to open and build the project.

### Running

1. Run the compiled executable:
2. Follow the on-screen prompts to log in and use the ATM.

### Client Data File

- `ClientFile.txt` should contain client records, one per line, in the following format:
Example:
## Notes

- All balances are stored as floating-point numbers.
- PINs must be 4-digit numbers.
- Withdrawals must not exceed the current balance.

## License

This project is provided for educational purposes.

---
*AnasChetoui* ``@anaschetoui``
