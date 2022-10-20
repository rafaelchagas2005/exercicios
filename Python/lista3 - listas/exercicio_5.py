grades = []
for i in range(0, 10):
    student_grades = []
    for j in range(0, 4):
        student_grades.append(float(input('Informe a nota do aluno %.d: ' % (i + 1))))
    grades.append(student_grades)

average_students = 0
for student_grades in grades:
    sum_grades = 0
    for grade in student_grades:
        sum_grades += grade
    if (sum_grades / 4.0) >= 7.0:
        average_students += 1

print('%d alunos ficaram acima da media' % average_students)
