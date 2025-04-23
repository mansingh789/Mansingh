cet_students = {"John", "Alice", "Bob"}

jee_students = {"Alice", "Charlie", "David"}

neet_students = {"Eve", "Bob", "Alice"}

# Union of all students

all_students = cet_students.union(jee_students, neet_students)
print("All Students:", all_students)

# Intersection (students appearing for both CET and JEE)

intersection_students = cet_students.intersection(jee_students)

print("Students appearing for both CET and JEE:",

intersection_students)

# Difference (students in CET but not in JEE)

cet_not_jee = cet_students.difference(jee_students)

print("Students appearing only for CET:", cet_not_jee)
