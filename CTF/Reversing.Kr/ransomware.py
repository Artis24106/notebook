with open('./ransomware/file', 'rb') as f:
    f_file = f.read()
with open('./ransomware/run.exe', 'rb') as f:
    f_header = f.read()

for i in range(116):
    print(chr(f_file[i] ^ f_header[i] ^ 0xff), end="")
print()
