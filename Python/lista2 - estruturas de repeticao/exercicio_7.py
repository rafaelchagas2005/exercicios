sum_age = 0
weight_height = 0
age_height = 0

for i in range(10):
    age = int(input('Informe sua idade: '))
    height = float(input('Informe sua altura: '))
    weight = float(input('Informe seu peso: '))

    if weight > 90 and height < 1.50:
        weight_height += 1

    if age >= 10 and age <= 30 and height > 1.90:
        age_height += i

    sum_age += age

print(f'Média de idade: {sum_age / (i)}')
print(f'Pessoas com peso maior que 90kg com menos de 1.50m:  {weight_height}')
print(f'Percentual de pessoas entre 10 e 30 anos com mais de 1.90m: {(age_height / (i) * 100)}%')
