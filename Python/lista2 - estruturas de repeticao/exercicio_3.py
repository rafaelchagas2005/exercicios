i = 1

for i in range(10):
    name = input('Informe o nome do cliente: ')
    amount = float(input('Informe o valor da compra no ano passado: '))

    if amount < 1000:
        amount *= 0.1
        print(f'cliente: {name} valor do bônus: {amount}')
    else:
        amount *= 0.15
        print(f'cliente: {name} valor do bônus: {amount}')

    i += 1