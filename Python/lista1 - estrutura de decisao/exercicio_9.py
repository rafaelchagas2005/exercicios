year_of_birth = int(input('Insira o seu ano do seu nascimento: '))
difference = 2022 - year_of_birth

if difference >= 18:
    print('Possui idade para votar e ter CNH.')
elif difference >= 16 and difference <= 17:
    print('Possui idade para votar. Não pode ter CNH.')
else:
    print('Não possui idade para votar e nem ter CNH.')