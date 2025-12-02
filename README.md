A quick programme to simulate the throwing of two dice, 50 000 times, and print how many times each possible outcome occurred. 

Compile using the accompanying compile-flags and launch / task files if it works for you (I'm in VScode, on iOS).


## Otherwise try: compile and run
To compile quick and dirty with clang (I'm using C23 and llvm 21.6) just

```bash
#for macOs/Linux
clang -std=c2x -g -Iinclude -o main src/main.c
```
or
```bash
#for Windows (I think this is how)
clang -std=c2x -g -Iinclude -o main.exe src\main.c
```

And then run
```bash
#for macOs/Linux
./main
```
Or
```cmd
#for Windows (I think this is how)
main.exe
```

## Flowchart
![Flowchart of two-dice simulator](https://i.imgur.com/6GgkWr9.png)
