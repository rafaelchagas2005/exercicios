height = float(input('Informe uma altura: '))
weight = float(input('Informe um peso: '))

imc = weight / (height * height)

if imc < 18.5:
    print('Abaixo do peso.')
elif 18.5 >= imc < 25:
    print('Peso normal.')
elif 25 >= imc < 30:
    print('Acima do peso.')
elif imc >= 30:
    print('Obeso.')