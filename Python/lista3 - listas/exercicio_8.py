a = []
for i in range(0, 10):
    a.append(int(input('Informe um numero: ')))

sum_of_square = 0
for number in a:
    sum_of_square += (number * number)

print('A soma dos quadrados dos numeros lidos eh %d' % sum_of_square)
