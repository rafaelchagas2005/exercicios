age_over_50 = 0
age_between_10_and_20 = 0
sum_height = 0
weight_less_than_40 = 0

for i in range(25):
    age = int(input('Informe sua idade: '))
    height = float(input('Informe sua altura em cm: '))
    weight = float(input('Informe seu peso: '))

    if age > 50:
        age_over_50 += 1
    elif age >= 10 and age <= 20:
        age_between_10_and_20 += 1
        sum_height += height

    if weight < 40:
        weight_less_than_40 += 1

print(f'Quantidade de pessoas com mais de 50 anos: {age_over_50}')
print(f'Média de altura das pessoas entre 10 e 20 anos: {sum_height / age_between_10_and_20}cm')
print(f'Porcentagem de pessoas com peso menor que 40kg: {(weight_less_than_40 / i) * 100}%')
