students = []
total_students = 30
student = []

for i in range(0, total_students):
    student.append(int(input('Informe a idade do aluno: ')))
    student.append(float(input('Informe a altura do aluno: ')))
    students.append(student)

sum_height = 0.0

for student in students:
    sum_height += student[1]

average_height = sum_height / float(total_students)

total_high_students = 0
for student in students:
    if (student[0] >= 13) and (student[1] >= average_height):
        total_high_students += 1

print('Existem %d alunos com mais de 13 anos acima da media de altura' % total_high_students)
