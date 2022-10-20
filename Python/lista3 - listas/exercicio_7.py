people = []
person = []
for i in range(0, 5):

    person.append(input('Informe a idade da pessoa: '))
    person.append(input('Informe a altura da pessoa: '))
    people.append(person)

people.reverse()
for person in people:
    print('Idade: %s - Altura: %s' % (person[0], people[1]))
