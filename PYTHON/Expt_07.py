students = {

 101: {"name": "John", "grade": "A", "attendance": 90},

 102: {"name": "Alice", "grade": "B", "attendance": 85},

 103: {"name": "Bob", "grade": "A", "attendance": 95}

}

# Add a new student

students[104] = {"name": "Charlie", "grade": "B", "attendance": 80}

# Update grade of student 101

students[101]["grade"] = "A+"# Display all student records

for student_id, details in students.items():

 print(f"ID: {student_id}, Name: {details['name']}, Grade:

{details['grade']}, Attendance: {details['attendance']}%")
