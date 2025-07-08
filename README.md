Here’s a professional and informative `README.md` file for your Qt-based **To-Do List Application**:

---

# 📝 Qt To-Do List App

This is a simple desktop **To-Do List** application built using **Qt (C++)**. It allows users to add, edit, and remove tasks with automatic saving and loading from a local `tasks.txt` file.

## 🚀 Features

* ✅ Add new tasks
* ✏️ Edit tasks by double-clicking
* ❌ Remove the last task
* 🗑️ Clear all tasks
* 💾 Automatically saves and loads tasks from `tasks.txt`

## 🖼️ UI Overview

* A text input field to enter new tasks
* A list to display current tasks
* Buttons: **Add**, **Remove Last**, and **Remove All**
* Tasks are editable directly from the list

## 🛠️ Technologies Used

* **C++**
* **Qt Framework**

  * `QMainWindow`
  * `QListWidget`
  * `QFile` and `QTextStream` for file I/O

## 📂 File Structure

```
├── mainwindow.cpp         # Main logic for UI and task management
├── mainwindow.h
├── mainwindow.ui          # UI layout (Qt Designer)
├── main.cpp               # Entry point
├── tasks.txt              # Auto-generated file storing tasks
```

## 📸 Screenshot (Optional)

*You can include a screenshot here of the running application.*

## 🧪 How It Works

* On startup, the app loads tasks from `tasks.txt`.
* Tasks can be added using the input box and **Add** button.
* Tasks are stored in a `QListWidget`, which supports in-place editing.
* Every change is automatically saved to `tasks.txt`.

## ▶️ How to Build and Run

1. Open the project in **Qt Creator**.
2. Configure the kit and build the project.
3. Run the application.

## 📌 Notes

* Make sure the application has write access to create `tasks.txt` in the working directory.
* The tasks are stored as plain text, one task per line.

## 📃 License

This project is open-source and free to use for educational or personal purposes.

---

Would you like me to help you add this `README.md` to your project folder or generate one with Markdown syntax for download?
