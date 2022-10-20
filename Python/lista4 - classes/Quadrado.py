class Quadrado:
    def __init__(self, lado):
        self.lado = lado

    def set_lado(self, lado):
        self.lado = lado

    def get_lado(self):
        return self.lado

    def calcula_area(self):
        return self.lado * self.lado


quadrado = Quadrado(4)
print(quadrado.calcula_area())
