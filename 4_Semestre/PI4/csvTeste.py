import csv, sys
import matplotlib.pyplot as plt

filename = 'GLB.csv'

with open(filename) as f:
    reader = csv.reader(f,delimiter=',')
    x = []
    y = []
    contador = 0
    for row in reader:
        contador+=1
        media = 0
        coluna = 0
        for column in row:
            if(float(column) > 20):
                ano = int(column)
            elif coluna < 12:
                coluna += 1
                media += float(column)
        media = media/12
        y.append(media)
        x.append(ano)
    plt.xlabel("Ano")
    plt.ylabel("Graus Celcius (0.01)")
    #plt.label("Anomalias de temperatura de 1882 - 2017")
    #plt.plot(x,y)
    plt.plot(x,y,'o', label="Anomalias de temperatura de 1882 - 2017")
    plt.show()
