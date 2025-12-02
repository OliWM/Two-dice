A quick programme to simulate the throwing of two dice, 50 000 times, and print how many times each possible outcome occurred. 

Compile using the accompanying compile-flags and launch / task files if it works for you (I'm in VScode, on macOS).

Example output:
2: 1353 
3: 2791 
4: 4119 
5: 5661 
6: 6924 
7: 8418 
8: 6897 
9: 5593 
10: 4085 
11: 2832 
12: 1327 


## Otherwise try: compile and run
To compile quick and dirty with clang (I'm using C23 and llvm 21.6) just

```bash
#for macOS/Linux
clang -std=c2x -g -Iinclude -o main src/main.c
```
or
```bash
#for Windows (I think this is how)
clang -std=c2x -g -Iinclude -o main.exe src\main.c
```

And then run
```bash
#for macOS/Linux
./main
```
Or
```cmd
#for Windows (I think this is how)
main.exe
```

## Flowchart
![Flowchart of two-dice simulator](https://i.imgur.com/6GgkWr9.png)
