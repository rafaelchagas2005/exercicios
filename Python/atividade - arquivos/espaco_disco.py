input_file = open('usuarios.txt', 'r')


lines = input_file.readlines()

input_file.close()

users = []
used_spaces = []
total_space = 0.0

for line in lines:
    fields = line.split()
    user = fields[0]
    used_space = int(fields[1])
    users.append(user)
    used_spaces.append(used_space)
    total_space += used_space

output_file = open('relatorio.txt', 'w')

output_file.write(
    'ACME Inc.               Uso do espaco em disco pelos usuarios\n')
output_file.write(
    '------------------------------------------------------------------------')
output_file.write('\nNr.  Usuario        Espaco utilizado     %% do uso')

for i in range(0, len(users)):
    spaceMB = used_spaces[i] / (1024.0 * 1024.0)
    percentage_use = used_spaces[i] / total_space
    output_file.write('\n%d - %s - %.2f MB - %.2f%%' % (i + 1, users[i], spaceMB, percentage_use * 100.0))

output_file.write('\nEspaco total ocupado: %.2f MB' % (total_space / (1024.0 * 1024.0)))
output_file.write('\nEspaco médio ocupado: %.2f MB' % (total_space / len(users) / (1024.0 * 1024.0)))

output_file.close()
