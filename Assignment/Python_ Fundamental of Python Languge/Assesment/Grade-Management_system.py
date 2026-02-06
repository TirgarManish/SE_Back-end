import tkinter as tk
from tkinter import messagebox

# ---------- Functions ----------

def calculate_grade(marks):
    if marks >= 90:
        return "A+"
    elif marks >= 80:
        return "A"
    elif marks >= 70:
        return "B"
    elif marks >= 60:
        return "C"
    elif marks >= 50:
        return "D"
    else:
        return "Fail"


def add_student():
    name = name_entry.get()
    roll = roll_entry.get()
    marks = marks_entry.get()

    if name == "" or roll == "" or marks == "":
        messagebox.showerror("Error", "All fields are required")
        return

    try:
        marks = int(marks)
    except:
        messagebox.showerror("Error", "Marks must be number")
        return

    grade = calculate_grade(marks)

    record = f"{name}   |   Roll: {roll}   |   Marks: {marks}   |   Grade: {grade}"
    listbox.insert(tk.END, record)

    clear_fields()


def delete_student():
    selected = listbox.curselection()
    if not selected:
        messagebox.showwarning("Warning", "Select record first")
        return
    listbox.delete(selected)


def clear_fields():
    name_entry.delete(0, tk.END)
    roll_entry.delete(0, tk.END)
    marks_entry.delete(0, tk.END)


# ---------- GUI DESIGN ----------

root = tk.Tk()
root.title("Student Grade Management System")
root.geometry("720x560")
root.config(bg="#e3f2fd")

# ---------- Title ----------

title = tk.Label(
    root,
    text="🎓 Student Grade Management System",
    font=("Arial", 20, "bold"),
    bg="#e3f2fd",
    fg="#0d47a1"
)
title.pack(pady=15)

# ---------- Main Card Frame ----------

card = tk.Frame(
    root,
    bg="white",
    bd=2,
    relief="ridge",
    padx=20,
    pady=20
)
card.pack(pady=10, padx=20, fill="both", expand=True)

# ---------- Form Frame ----------

form = tk.Frame(card, bg="white")
form.pack(pady=10)

label_style = {"font": ("Arial", 12, "bold"), "bg": "white", "fg": "#0d47a1"}
entry_style = {"font": ("Arial", 12), "bd": 2, "relief": "groove"}

# Name

tk.Label(form, text="Student Name", **label_style).grid(row=0, column=0, padx=10, pady=10, sticky="w")
name_entry = tk.Entry(form, **entry_style)
name_entry.grid(row=0, column=1, padx=10)

# Roll

tk.Label(form, text="Roll No", **label_style).grid(row=1, column=0, padx=10, pady=10, sticky="w")
roll_entry = tk.Entry(form, **entry_style)
roll_entry.grid(row=1, column=1, padx=10)

# Marks

tk.Label(form, text="Marks", **label_style).grid(row=2, column=0, padx=10, pady=10, sticky="w")
marks_entry = tk.Entry(form, **entry_style)
marks_entry.grid(row=2, column=1, padx=10)

# ---------- Buttons ----------

btn_frame = tk.Frame(card, bg="white")
btn_frame.pack(pady=15)

btn_style = {"font": ("Arial", 11, "bold"), "width": 14, "bd": 0, "cursor": "hand2"}

add_btn = tk.Button(
    btn_frame,
    text="Add Student",
    bg="#0d47a1",
    fg="white",
    command=add_student,
    **btn_style
)
add_btn.grid(row=0, column=0, padx=10)


del_btn = tk.Button(
    btn_frame,
    text="Delete",
    bg="#c62828",
    fg="white",
    command=delete_student,
    **btn_style
)
del_btn.grid(row=0, column=1, padx=10)

clear_btn = tk.Button(
    btn_frame,
    text="Clear",
    bg="#2e7d32",
    fg="white",
    command=clear_fields,
    **btn_style
)
clear_btn.grid(row=0, column=2, padx=10)

# ---------- Listbox Section ----------

list_frame = tk.Frame(card, bg="white")
list_frame.pack(pady=10, fill="both", expand=True)

scrollbar = tk.Scrollbar(list_frame)
scrollbar.pack(side="right", fill="y")

listbox = tk.Listbox(
    list_frame,
    width=80,
    height=12,
    font=("Consolas", 11),
    bd=2,
    relief="groove",
    yscrollcommand=scrollbar.set
)
listbox.pack(side="left", fill="both", expand=True)

scrollbar.config(command=listbox.yview)

# ---------- Footer ----------

footer = tk.Label(
    root,
    text="Developed with Tkinter | Python GUI Project",
    font=("Arial", 10),
    bg="#e3f2fd",
    fg="#555"
)
footer.pack(pady=8)

# ---------- Run ----------

root.mainloop()
