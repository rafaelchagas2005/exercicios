months = ('Janeiro', 'Fevereiro', 'Marco', 'Abril', 'Maio',
          'Junho', 'Julho', 'Agosto', 'Setembro', 'Outubro', 'Novembro', 'Dezembro')
temperatures = {}

for month in months:
    temperatures[month] = float(input('Informe a temperatura media do mes de %s: ' % month))

sum_temperatures = 0.0
for temperature in temperatures.values():
    sum_temperatures += temperature

average_annual_temperature = sum_temperatures / 12.0

print('Temperaturas acima da media anual: %.2f' % average_annual_temperature)
for month in months:
    if temperatures[month] >= average_annual_temperature:
        print('%s - %.2f' % (months, temperatures[months]))
