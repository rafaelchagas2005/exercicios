numbers = []
for i in range(0, 4):
    numbers.append(int(input('Informe um numero inteiro: ')))

sum = 0
multiplication = 1
for i in numbers:
    sum += i
    multiplication *= i

print(numbers)
print('Soma dos numeros: %d' % sum)
print('Multiplicacao dos numeros: %d' % multiplication)
