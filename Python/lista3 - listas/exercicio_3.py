grades = []

for i in range(4):
    grade = float(input('Informe uma nota: '))
    grades.append(grade)

sumGrades = 0

for i in range(4):
    print(f'Nota {i}: {grades[i]:.2f}')
    sumGrades += grades[i]

print(f'Media das notas: {(sumGrades / 4)}')

