# Bazat e Programimit - Java 6

## Vargjet (Arrays)

- Vargu është strukturë që ruan vlera të njëjtit tip.

### Shembull: Ruajtja e pikëve të studentëve

```cpp
int piket[4] = { 80, 90, 70, 61 };
```

`piket` është varg me gjatësi 4 që përmban vlerat 80, 90, 70, 61

### Leximi nga vargu:

```cpp
int piket[4] = { 80, 90, 70, 61 };
int pike1 = piket[0]; // 80
int pike2 = piket[1]; // 90
int pike3 = piket[2]; // 70
int pike4 = piket[3]; // 61
```

### Shkruarja në varg:

```cpp
int piket[4];
piket[0] = 80;  // pike e pare
piket[1] = 90;  // pike e dyte
piket[2] = 70;  // pike e trete
piket[3] = 61;  // pike e katert
```

### Rregullat për vargje:

- Indeksimi i vargut me gjatësi n fillon nga 0 deri në n-1
- Duhet të kemi kujdes të mos dalim jashtë kufijve të vargut

### Shembull: Vizitimi i secilit element

```cpp
const int n = 6;
int numrat[n] = { 4, -3, 5, 8, 2, 1 };
for (int i = 0; i < n; i++) {
    cout << numrat[i] << endl;
}
```

### Shembuj:

1. Inicializimi dhe shfaqja:

```cpp
const int n = 6;
int v[n] = {5, 3, 8, 4, 1, 9};
for (int i = 0; i < n; i++) {
    cout << v[i] << endl;
}
```

2. Llogaritja e mesatares:

```cpp
const int n = 5;
double v[n] = { 3.4, 2.8, 4.1, 6.5, 9.2 };
double shuma = 0;
for (int i = 0; i < n; i++) {
    shuma += v[i];
}
cout << "Mesatarja: " << shuma / (double)n << endl;
```

3. Kopjimi i vargut:

```cpp
const int n = 5;
double v1[n] = { 3.4, 2.8, 4.1, 6.5, 9.2 };
double v2[n];
for (int i = 0; i < n; i++) {
    v2[i] = v1[i];
}
```

4. Ndërrimi i shenjës:

```cpp
const int n = 5;
double v1[n] = { 3.4, 2.8, 4.1, 6.5, 9.2 };
double v2[n]; // v1 me shenje te kundert
double v3[n]; // v1 * 2

for (int i = 0; i < n; i++) {
    v2[i] = -v1[i];
    v3[i] = 2 * v1[i];
}
```

### Detyra Praktike:

1. Të gjendet shuma e numrave tek dhe çift ne varg.
2. Te gjendet elementi me i madh dhe me i vogel ne varg.
