# Lab Task 1 – Shell Commands (Programming Fundamentals)

This repository contains documentation and evidence of completing Lab Task 1 for the Programming Fundamentals course at FAST University, Islamabad. The task involved getting hands-on experience with basic **Linux shell commands** and understanding **command-line utilities**.

## Lab Overview

- **Course Title**: Programming Fundamentals  
- **Lab Title**: Shell Commands  
- **Duration**: 3 Hours  
- **Platform**: Ubuntu (Linux)  
- **Language/Tool**: g++, C++  

## Objective

To gain familiarity with the Ubuntu terminal and perform basic file and directory operations using shell commands.

---

## Covered Commands

| Command | Description |
|---------|-------------|
| `sudo`  | Run commands with administrative privileges |
| `apt-get` | Install, update, and remove packages |
| `echo`  | Print text to terminal |
| `ls`    | List directory contents |
| `touch` | Create empty files |
| `mkdir` | Create directories |
| `pwd`   | Show current working directory |
| `cp`    | Copy files |
| `cat`   | Display file contents |
| `mv`    | Move or rename files |
| `rm`    | Remove files |
| `clear` | Clear the terminal screen |
| `exit`  | Exit the terminal |
| `rmdir` | Remove empty directories |
| `cd`    | Change directory |
| `man`   | View manual pages |

---

## Redirection and Navigation

- `>` : Redirect output to a file (overwrite).
- `>>`: Redirect output to a file (append).
- `.`  : Current directory  
- `..` : Parent directory  
- `/`  : Root directory  
- `~`  : Home directory  

---

## File Permissions

- **r**: Read permission  
- **w**: Write permission  
- **x**: Execute permission  
- Modify with `chmod` using symbolic or numeric mode.

Example:
```bash
chmod go+r file.txt      # Adds read permission to group and others
chmod 755 script.sh      # Sets rwxr-xr-x
```

---

## Ubuntu Terminal Shortcuts

| Shortcut             | Function                          |
|----------------------|-----------------------------------|
| Ctrl + Shift + T     | Open new terminal tab             |
| Ctrl + Shift + W     | Close terminal tab                |
| Ctrl + C             | Kill current process              |
| Ctrl + L             | Clear terminal screen             |
| Ctrl + R             | Search command history            |
| Up/Down Arrow Keys   | Scroll through command history    |

---

## Lab Tasks

### ✅ Task 1:
- Run all the listed shell commands and attach screenshots of execution.

### ✅ Task 2:
- Create a directory structure as instructed.
- Perform file operations:
  1. Copy `Task1.txt` from Desktop to `PF-lab` without using `cd`.
  2. Create a duplicate `task1_1.txt` in the same directory.
  3. Change directory back to the home directory.

---

## Author

**Faseeh Zafar**  
Data Science Undergraduate  
FAST National University, Islamabad
