import pandas as pd
from sklearn.linear_model import LinearRegression

# データの読み込み
df = pd.read_csv('salary.csv')

# (i) 学者の論文数と年収の相関係数を求める
correlation = df['PUBS'].corr(df['SALARY'])
print(f"相関係数: {correlation:.2f}")

# (ii) 学者の年収を論文数で単回帰分析し、決定係数を求める
X = df[['PUBS']]
y = df['SALARY']

model = LinearRegression()
model.fit(X, y)

r2 = model.score(X, y)
print(f"決定係数: {r2:.2f}")
