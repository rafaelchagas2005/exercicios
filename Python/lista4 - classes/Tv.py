class Tv:
    def __init__(self, canal=0):
        self.volume = 0
        self.canal = canal

    def set_canal(self, canal):
        if (canal >= 0) and (canal <= 100):
            self.canal = canal

    def aumenta_volume(self):
        if self.volume < 100:
            self.volume += 1

    def diminui_volume(self):
        if self.volume > 0:
            self.volume -= 1


tv = Tv()
tv.set_canal(10)
tv.aumenta_volume()
tv.aumenta_volume()
tv.aumenta_volume()
tv.aumenta_volume()
tv.diminui_volume()
print(f'Canal: {tv.canal} - Volume: {tv.volume}')
