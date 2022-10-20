
counts_negative_numbers = 0

for i in range(5):
    number = float(input('Informe um número: '))

    if number < 0:
        counts_negative_numbers += 1

print(f'Quantidade de números negativos: {counts_negative_numbers}')
