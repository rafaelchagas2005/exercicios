grade_1 = float(input('Informe a nota 1: '))
grade_2 = float(input('Informe a nota 2: '))

average = (grade_1 + grade_2) / 2

if average >= 7:
    print('O aluno foi aprovado.')
else:
    print('O aluno está de exame.')