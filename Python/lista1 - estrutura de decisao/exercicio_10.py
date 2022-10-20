number_1 = float(input('Informe o número 1: '))
number_2 = float(input('Informe o número 2: '))

print('\nSelecione uma opção: \n')
print('1 - Adição')
print('2 - Subtração')
print('3 - Multiplicação')
print('4 - Divisão')

operation = float(input())

if operation == 1:
    print(number_1 + number_2)
elif operation == 2:
    print(number_1 - number_2)
elif operation == 3:
    print(number_1 * number_2)
elif operation == 4:
    if number_2 == 0:
        print('Erro ao dividir por zero.')
    else:
        print(number_1 / number_2)
else:
    print('Opção inválida.')