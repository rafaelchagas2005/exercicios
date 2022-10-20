over_18 = 0

for i in range(10):
    age = int(input('Informe sua idade: '))

    if age >= 18:
        over_18 += 1

print(f'Pessoas maiores de 18 anos: {over_18}')