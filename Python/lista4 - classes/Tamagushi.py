class Tamagushi:
    def __init__(self, nome, fome, saude, idade):
        self.nome = nome
        self.fome = fome
        self.saude = saude
        self.idade = idade

    def set_nome(self, nome):
        self.nome = nome

    def get_nome(self):
        return self.nome

    def set_fome(self, fome):
        self.fome = fome

    def get_fome(self):
        return self.fome

    def set_saude(self, saude):
        self.saude = saude

    def get_saude(self):
        return self.saude

    def set_idade(self, idade):
        self.idade = idade

    def get_idade(self):
        return self.idade

    def get_humor(self):
        return self.get_fome() * self.get_saude()


bicho = Tamagushi('Tamagoshi', 10, 10, 10)
print(f'Humor: {bicho.get_humor()}')
