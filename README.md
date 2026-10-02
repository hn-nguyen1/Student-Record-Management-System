# Student Record Management System

A C++ command-line application for creating and displaying student records using persistent file storage.

## Overview

The program provides a simple menu-driven workflow for entering student information and storing records in a text file. Records persist between program executions through append-based file storage.

## Features

- Menu-driven command-line interface
- Add student records
- Store student name, roll number, and marks
- Append records to persistent storage
- Read and display saved records
- Basic menu validation
- Basic file-open error handling

## Technical Concepts

- C++
- Standard Library
- `iostream`
- `fstream`
- `string`
- File I/O
- Functions
- Loops and conditionals
- Command-line interaction
- Persistent data storage

## Project Structure

```text
Student-Record-Management-System/
├── README.md
├── .gitignore
├── src/
│   └── main.cpp
└── data/
    └── students.txt
```

## Running the Project

Compile with a C++ compiler:

```bash
g++ src/main.cpp -o student_records
```

Run the executable:

```bash
./student_records
```

On Windows, the executable can be run as:

```text
student_records.exe
```

## Current Workflow

```text
Start
  ↓
Menu
  ├── Add Student → Append record to students.txt
  ├── Display All Students → Read records from students.txt
  └── Exit
```

## Future Improvements

The current implementation is intentionally kept close to the original project. Planned improvements include:

- Introduce a `Student` class
- Store records using `std::vector<Student>`
- Add search functionality
- Add update and delete operations
- Add sorting
- Improve input validation
- Separate data management from the user interface
- Expand automated testing
