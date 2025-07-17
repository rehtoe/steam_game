__name__ = "camera"

from .pixeldata import PixelMetaData
import os

class Camera:
    image = [[]]
    def __init__(self, res_width, res_height):
        self.resolutionWidth = res_width
        self.resolutionHeight = res_height
        self.image = [[PixelMetaData() for _ in range(res_height)] for _ in range(res_width)]
    
    def print(self):
        for i in range(self.resolutionHeight):
            for j in range(self.resolutionWidth):
                phstr = '['+str(self.image[i][j].x)+',' +str(self.image[i][j].y)+']'
                os.sys.stdout.write(phstr)
            print()

    