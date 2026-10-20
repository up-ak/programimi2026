# Bazat e Programimit - Java 5

## 1. Unazat (Loops)

### while

```cpp
while (kushti) {
    blloku;
}
```

### do while

```cpp
do {
    blloku;
} while (kushti);
```

### for

```cpp
for (inicializimi; kushti; inkrementimi) {
    blloku;
}
```

## 2. Kontrolli i Unazave

- `continue` - përsërit ciklin e unazës
- `break` - del nga unaza

## 3. Unazat e Brendshme (Nested Loops)

```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
        // blloku
    }
}
```

## 4. Detyra Praktike

1. Llogaritja e shumës dhe prodhimit:

   ```cpp
   z = Σ(i=1 to n) i + Π(i=1 to n) i
   ```

2. Printo numrat tek deri në n

3. Seria Fibonacci:

   ```cpp
   int a = 0, b = 1;
   // Gjenero serinë: 0, 1, 1, 2, 3, 5, 8, 13, ...
   ```

4. Kontrolli nese numri i lexuar `n` eshte numer i thjeshtë
