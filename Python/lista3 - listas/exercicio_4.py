numbers = []
pair_numbers = []
odd_numbers = []

for i in range(20):
    number = int(input('Informe um número: '))
    numbers.append(number)

    if number % 2 == 0:
        pair_numbers.append(number)
    else:
        odd_numbers.append(number)

print(numbers)
print(pair_numbers)
print(odd_numbers)
