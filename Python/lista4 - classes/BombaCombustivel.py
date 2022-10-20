class BombaCombustivel():
    def __init__(self, tipo_combustivel, valor_litro, quantidade_combustivel):
        self.tipo_combustivel = tipo_combustivel
        self.valor_litro = valor_litro
        self.quantidade_combustivel = quantidade_combustivel

    def set_tipo_combustivel(self, tipo_combustivel):
        self.tipo_combustivel = tipo_combustivel

    def set_valor_litro(self, valor_litro):
        self.valor_litro = float(valor_litro)

    def set_quantidade_combustivel(self, quantidade_combustivel):
        self.quantidade_combustivel = quantidade_combustivel

    def abastecer_por_valor(self, valor):
        total_litros = valor / self.valor_litro
        if total_litros <= self.quantidade_combustivel:
            self.set_quantidade_combustivel(self.quantidade_combustivel - total_litros)

    def abastecer_por_litro(self, total_litros):
        if total_litros <= self.quantidade_combustivel:
            self.set_quantidade_combustivel(self.quantidade_combustivel - total_litros)


bomba1 = BombaCombustivel('Gasolina Aditivada', 3.03, 10000)
bomba1.abastecer_por_litro(100)
print(bomba1.quantidade_combustivel)
bomba1.abastecer_por_valor(100)
print(bomba1.quantidade_combustivel)
