import pandas as pd
import numpy as np

df = pd.read_csv("ResultadoLimiar.csv")
print(df.to_string());
entradas =df["entradas"].to_numpy()
saidas = df["saidas"].to_numpy()
print(saidas);
print();