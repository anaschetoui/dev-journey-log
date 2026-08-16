# Person Exercise — Requirements

## Project Overview

Create a class named:

```cpp
clsPerson
```

The exercise reviews the OOP concepts learned so far, including:

- Classes and Objects
- Private Members
- Properties
- Read Only Properties
- Parameterized Constructor
- Encapsulation
- Data Hiding
- Object Interface

---

## 1. Person Data

The `clsPerson` class should contain these properties:

- `ID`
- `FirstName`
- `LastName`
- `FullName`
- `Email`
- `Phone`

---

## 2. ID Property

`ID` must be **Read Only**.

It should have:

```text
GetID()
```

Do not create:

```text
SetID()
```

The developer using the class should be able to read the person's ID, but not change it directly.

---

## 3. FirstName Property

`FirstName` must be **Read and Write**.

Create:

```text
SetFirstName()
GetFirstName()
```

---

## 4. LastName Property

`LastName` must be **Read and Write**.

Create:

```text
SetLastName()
GetLastName()
```

---

## 5. FullName Property

Create a `FullName` property.

It should provide the person's full name using:

```text
FirstName + LastName
```

The full name is derived from the first and last names.

---

## 6. Email Property

`Email` must be **Read and Write**.

Create:

```text
SetEmail()
GetEmail()
```

---

## 7. Phone Property

`Phone` must be **Read and Write**.

Create:

```text
SetPhone()
GetPhone()
```

---

## 8. Constructor

Do not allow creating an empty `Person` object.

Create a constructor that requires:

- ID
- FirstName
- LastName
- Email
- Phone

The object should be created with its required data.

---

## 9. SendEmail()

Create:

```text
SendEmail()
```

The function must receive:

- `Subject`
- `Body`

Both should be strings.

Example:

```cpp
Person1.SendEmail("Hello", "Are you still there?");
```

The method should use the **email stored inside the Person object**.

Do not pass the recipient's email as a parameter.

---

## 10. SendSMS()

Create:

```text
SendSMS()
```

The function must receive:

- `Message`

Example:

```cpp
Person1.SendSMS("How are you?");
```

The method should use the **phone number stored inside the Person object**.

Do not pass the phone number as a parameter.

---

## 11. PrintInfo()

Create:

```text
PrintInfo()
```

It should display:

- ID
- FirstName
- LastName
- FullName
- Email
- Phone

---

## 12. Main Program

Create a `Person` object using the constructor.

Then demonstrate:

```text
PrintInfo()
SendEmail()
SendSMS()
```

The outside code should interact with the `Person` object through its public properties and methods.

---

## 13. Encapsulation Requirement

The internal person data should remain protected inside the class.

`SendEmail()` should obtain the email from the current `Person` object instead of asking the caller to provide another person's email.

`SendSMS()` should obtain the phone number from the current `Person` object instead of asking the caller to provide another person's phone number.

The goal is to provide a simple public interface while keeping the internal data controlled by the class.

---

## 14. Important

You do not need to implement real email or SMS sending.

The purpose is to practice the interface:

```cpp
Person1.SendEmail("Subject", "Body");
Person1.SendSMS("Message");
```

The actual work can simply be demonstrated with output.

---

## Concepts Reviewed

- `Class`
- `Object`
- `Private Members`
- `Set`
- `Get`
- `Read Only Property`
- `Read and Write Property`
- `Parameterized Constructor`
- `Encapsulation`
- `Data Hiding`
- Object Interface
