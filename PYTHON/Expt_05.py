# Initial task list

task_list = [

 ("Task 1", "2025-02-06", "High"),

 ("Task 2", "2025-02-07", "Medium"),

 ("Task 3", "2025-02-08", "Low"),

]

# Displaying the initial task list

print("Initial Task List:")

print(task_list)# Adding a new task

new_task = ("Task 4", "2025-02-09", "High")

task_list.append(new_task)

# Removing a task (removing the second task in the list)

task_list.remove(task_list[1])

# Updating a task (updating the priority of Task 3)

task_list[1] = ("Task 3", "2025-02-08", "High")

# Sorting the tasks by date (second element in the tuple)

task_list.sort()

# Displaying the updated task list

print("\nUpdated Task List:")

print(task_list)
