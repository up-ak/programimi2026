# Bazat e Programimit - C++ (Java 1)

## 1. Përsëritje dhe Koncepte Themelore

### Çfarë është një Program?

- **Programi**: Varg urdhërash që ekzekutohen nga kompjuteri në një renditje të caktuar
- Programet shkruhen në gjuhë programuese dhe përkthen në gjuhë makine
- Kompjuteri ekzekuton instruksionet hap pas hapi

### Gjuha Programuese C++

- **Gjuha programuese**: Sintaksa dhe rregullat për shkruarjen e programeve
- C++ është gjuhë e kompajluar (compiled language)
- Duhet të kompajlohet para se të ekzekutohet

### Struktura Themelore e një Programi C++

```cpp
#include <iostream>
using namespace std;

int main() {
    // Kodi juaj këtu
    return 0;
}
```

- **`#include <iostream>`**: Përfshin librari për input/output
- **`using namespace std;`**: Lejon përdorimin e elementeve standard pa prefiksin `std::`
- **`main()`**: Pika hyrëse e programit - nga këtu fillon ekzekutimi
- **`return 0;`**: Tregon që programi ka përfunduar me sukses

## 2. Output në Ekran (cout dhe endl)

### cout - Output në Ekran

- **`cout`**: Përdoret për të shfaqur informacion në ekran
- **Sintaksa**: `cout << variabla;` ose `cout << "teksti";`

```cpp
cout << "Përshëndetje Botë!" << endl;
cout << "Numri është: " << 42 << endl;
```

### endl dhe Formatimi

- **`endl`**: Përdoret për të vendosur një rresht të ri dhe për të pastruar buffer-in
- **`\n`**: Alternativë më e shpejtë për rresht të ri

```cpp
cout << "Rreshti i parë" << endl;
cout << "Rreshti i dytë\n";
```

## 3. Shembuj Praktikë

- Shembulli 1: Programi "Përshëndetje Botë!"
