grade = float(input('Informe sua nota: '))

if grade < 3:
    print('Conceito E.')
elif grade >= 3 and grade <= 5:
    print('Conceito D.')
elif grade >= 6 and grade <= 7:
    print('Conceito C.')
elif grade >= 8 and grade <= 9:
    print('Conceito B.')
elif grade == 10:
    print('Conceito A.')