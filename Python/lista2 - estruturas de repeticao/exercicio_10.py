i = 1
number = 0
total = 0
positive = 0;
negative = 0

while i != 0:
    number = float(input('Informe um número: '))

    if number > 0:
        positive += 1
    elif number < 0:
        negative += 1

    if number == 0:
        break

    total += number
    i += 1

print(f'Média dos valores: {total / (i - 1)}')
print(f'Total de valores positivos: {positive}')
print(f'Total de valores Negativo: {negative}')
print(f'Percentual de valores positivos: {(positive / (i - 1) * 100)}%')
print(f'Percentual de valores negativos: {(negative / (i - 1) * 100)}%')
