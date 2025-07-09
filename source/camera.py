from pixeldata import PixelMetaData

class Camera:
    image = [[]]
    def __init__(self, res_width, res_height):
        self.image = [[PixelMetaData() for _ in range(res_height)] for _ in range(res_width)]

