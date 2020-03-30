n = int(input())
phonebook = {}
for _ in range(n):
    k,v = input().split()
    phonebook[k] = v

running = True
while (running):
    try:
        s = input()
        if s in phonebook:
            print(s + "=" + phonebook.get(s))
        else:
            print("Not found")
    except:
        running = False
