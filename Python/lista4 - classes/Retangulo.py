class Retangulo:
    def __init__(self, base, altura):
        self.base = base
        self.altura = altura

    def get_base(self):
        return self.base

    def set_base(self, base):
        self.base = base

    def get_altura(self):
        return self.altura

    def set_altura(self, altura):
        self.altura = altura

    def calcula_area(self):
        return self.base * self.altura

    def calcula_perimetro(self):
        return 2 * self.base + 2 * self.altura

base = int(input('Informe o valor da base: '))
altura = int(input('Informe o valor da altura: '))

retangulo = Retangulo(base, altura)

print(f'Área do retangulo: {retangulo.calcula_area()}')
print(f'Perímetro do retangulo: {retangulo.calcula_perimetro()}')
