"""
"""

class Coordinate(object):
    """
    __init__: constructor
    """
    def __init__(self, x, y):
        self.x = x
        self.y = y

    #overriding
    def __str__(self):
        return f"({self.x}, {self.y})"

    def __repr__(self):
        return str(self)

    def __add__(self, other):
        return Coordinate(x=self.x + other.x, y=self.y + other.y)

    def cal_distance(self, other):
        """
        @args:
            other: Coordinate
        """
        diff_x = (self.x - other.x) ** 2
        diff_y = (self.y - other.y) ** 2
        distance = (diff_x + diff_y) ** 0.5
        return distance

if __name__ == '__main__':
    coord_a = Coordinate(x=2, y=0)
    coord_b = Coordinate(x=0, y=0)
    # print(str(coord_a))
    # print(coord_a.x)
    # print(coord_a.y)
    # print(coord_a.cal_distance(coord_b))
    # list_a = [coord_a, coord_b]
    # print(list_a)
    print(coord_a + coord_b)



