
class sumon:
    def __init__(self, n):
        self.n = n

    def factorial(self):
        if self.n == 0:
            return 1
        else:
            result = 1
            for i in range(1, self.n + 1):
                result *= i
            return result