alas = 5
tinggi = 12
sisi_miring = int((alas ** 2 + tinggi **2) ** 0.5)

a = tinggi
b = alas
c = sisi_miring

keliling = a + b + c
luas = int((0.5* alas * tinggi))

print(f"Diketahui :")
print(f"Alas = {alas}")
print(f"Tinggi = {tinggi}")
print(f"\n")
print(f"Jawab : ")
print(f"Sisi A = {a}")
print(f"Sisi B = {b}")
print(f"Sisi C = {c}")
print(f"Keliling = {keliling}")
print(f"Luas = {luas}")