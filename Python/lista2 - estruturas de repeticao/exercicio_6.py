count_numbers_between_30_and_90 = 0

for i in range(10):
    number = float(input('Informe um número: '))

    if number >= 30 and number <= 90:
        count_numbers_between_30_and_90 += 1

print(f'Quantidade de números entre 30 e 90: {count_numbers_between_30_and_90}')
