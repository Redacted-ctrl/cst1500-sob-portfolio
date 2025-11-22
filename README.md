# CST1500 – Computer Systems Architecture & Operating Systems  
## Coursework One – SOB Portfolio (2024/25)

This repository contains my submission for **Coursework One**, consisting of **10 SOB tasks** completed during Weeks 1–6.  
Each SOB demonstrates key concepts in:

- C programming  
- Windows Batch scripting  
- Bash scripting  
- Operating system fundamentals  
- File system operations and automation  
- User input, pointers, loops, functions, and error handling  

All files are named according to the official specification (CW1SOB1–CW1SOB10).

---

# 📁 Repository Structure

### **C Programs**
- `CW1SOB1.c` — Student info + calculations  
- `CW1SOB2.c` — User input + arithmetic  
- `CW1SOB3.c` — Grade classification (loop until `-1`)  
- `CW1SOB4.c` — Functions, name printing, password system  
- `CW1SOB5.c` — Pointer-based arithmetic + memory addresses  

### **Batch Scripts**
- `CW1SOB6.bat` — Create folders/files in *The_Bag*  
- `CW1SOB7.bat` — CMD file management + recursive listing  
- `CW1SOB8.bat` — Create and populate `results.txt`  

### **Bash Scripts**
- `CW1SOB9.sh` — Create folders a/b/c, store username + favourite movie  
- `CW1SOB10.sh` — Parameterised folder/file generator  

### **Additional Files**
- `Screenshots/` — Required screenshots for SOB7 & SOB10  
- `Docs/` — Documentation files  
- `CW1SOB10_Screenshot.docx`  

---

# How to Run the Code

Below are clear instructions on how to run every file type in this coursework.

-------------------------------------------

## **Running C Programs**  
(Works on Linux, macOS, or Windows with MinGW)

# **Compile**
```bash
gcc filename.c -o filename
```

# **Run**
```bash
./filename
```

Example:
```bash
gcc CW1SOB3.c -o SOB3
./SOB3
```

-------------------------------------------

## **Running Batch Scripts (Windows Only)**

Run in **Command Prompt (CMD)**:

```cmd
CW1SOB6.bat
```

or if you need full path:
```cmd
C:\path\to\folder\CW1SOB6.bat
```

-------------------------------------------

## **Running Bash Scripts (macOS / Linux)**

# **Make the script executable**
```bash
chmod +x filename.sh
```

# **Run**
```bash
./filename.sh
```

Example:
```bash
chmod +x CW1SOB9.sh
./CW1SOB9.sh ~/Desktop
```

-------------------------------------------

## Complete SOB List  
| SOB | Language  |         Description          |
|-----|-----------|------------------------------|
| CW1SOB1 | C     | Student info + calculations  |
| CW1SOB2 | C     | User name + arithmetic       |
| CW1SOB3 | C     | Loop + grade classification  |
| CW1SOB4 | C     | Functions + password checks  |
| CW1SOB5 | C     | Pointer-based arithmetic     |
| CW1SOB6 | Batch | Folder creation + messages   |
| CW1SOB7 | Batch | CMD file management + script |
| CW1SOB8 | Batch | File creation + moving       |
| CW1SOB9 | Bash  | Folders a/b/c automation     |
| CW1SOB10| Bash  | x folders & y files generator|

-------------------------------------------

# 📝 Demonstrations  
All SOBs were demonstrated to the lab tutor or submitted via screenshots/video as required.

-------------------------------------------

# 📚 Notes  
This repository reflects my work for the **CST1500** module as part of my first-year studies.


