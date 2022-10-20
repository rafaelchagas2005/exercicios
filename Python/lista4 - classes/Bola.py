class Bola:
    def __init__(self):
        self.cor = None

    def troca_cor(self, cor):
        self.cor = cor

    def mostra_cor(self):
        print(self.cor)


bola = Bola()
bola.troca_cor('Azul')
bola.mostra_cor()
