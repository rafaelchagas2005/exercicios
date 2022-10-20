i = 1
age = 0
sum_age = 0
average = 0

while i != 0:
    age = int(input('Informe sua idade: '))

    if age != 0:
        sum_age += age
    else:
        break

    i += 1

average = sum_age / (i - 1)

print(f'Média das idades: {average} ')
