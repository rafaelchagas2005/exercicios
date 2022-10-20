grade1 = float(input('Informe a nota 1: '))
grade2 = float(input('Informe a nota 2: '))

average = (grade1 + grade2) / 2

if average >= 7:
    print('O aluno foi aprovado.')
else:
    print('O aluno está de exame.')