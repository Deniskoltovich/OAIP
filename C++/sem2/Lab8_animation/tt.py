import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

def main():
    y = lambda x: (np.arctan(np.tan(x)))
    fig = plt.subplots()
    print("Введите левую границу графика:")
    n = float(input())
    print('Введите правую границу графика:')
    m = float(input())
    x = np.linspace(n, m, 100)
    plt.plot(x, y(x))
    plt.show()
main()