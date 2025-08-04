# Bank Management System (Version 3)

A comprehensive C++ console application for managing a banking system with role-based access control, client management, and transaction operations.

## Overview

This Bank Management System provides a complete solution for banking operations management. The system implements:

- Client account management (add, delete, update, find)
- User management with granular permission control
- Transaction operations (deposit, withdraw, balance reports)
- Login system with role-based access control
- Data persistence through text file storage

## Features

### Client Management
- Create new client accounts with unique account numbers
- Update existing client information
- Delete client accounts
- Search for clients by account number
- View a complete list of all clients

### Transaction Operations
- Deposit funds to client accounts
- Withdraw funds with balance validation
- Generate total balance reports

### User Management
- Role-based access control with granular permissions
- Add users with customized access rights
- Update user information and permissions
- Delete users (with protection for admin account)
- Find users by username

### Security
- Password-protected access
- Permission-based feature access
- Bitwise permission flags for efficient access control:
  - View clients
  - Add clients
  - Delete clients
  - Update clients
  - Find clients
  - Perform transactions
  - Manage users

## System Requirements

- C++14 compatible compiler
- Console terminal support
- File system access for data storage

### Initial Login

The system comes with a default admin user:
- Username: Admin
- Password: (check your UserFile.txt or the default password set)

### Navigation

The system uses numbered menus for navigation:
1. Enter the number corresponding to your desired option
2. Follow on-screen prompts for data entry
3. Use the logout option to exit securely

### Adding a New Client

1. Login with appropriate permissions
2. Select "Add New Client" from the main menu
3. Enter the client details (Account Number, PIN, Name, etc.)
4. Confirm to save the new client

### Performing Transactions

1. Select "Transactions" from the main menu
2. Choose the transaction type (Deposit, Withdraw, Total Balances)
3. Follow the prompts to complete the transaction

### Managing Users

1. Login with admin privileges
2. Select "Manage Users" from the main menu
3. Choose the desired user management option
4. Follow on-screen instructions

## Data Storage

The system uses two primary data files:
- `ClientFile.txt`: Stores client account information
- `UserFile.txt`: Stores user credentials and permissions

Data is stored in a delimited format with "#//#" as the field separator.

## License

This project is provided for educational purposes.

## Credits

Developed as a comprehensive banking solution demonstrating C++ programming concepts including:
- File I/O operations
- Data structures
- User authentication
- Permission systems
- Menu-driven interfaces

---
Anas Chetoui ``@anaschetoui``
