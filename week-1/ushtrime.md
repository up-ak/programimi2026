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

## 2. Input dhe Output (cin dhe cout)

### cout - Output në Ekran

- **`cout`**: Përdoret për të shfaqur informacion në ekran
- **Sintaksa**: `cout << variabla;` ose `cout << "teksti";`

```cpp
cout << "Përshëndetje Botë!" << endl;
cout << "Numri është: " << 42 << endl;
```

### cin - Input nga Tastiera

- **`cin`**: Përdoret për të lexuar të dhëna nga tastiera
- **Sintaksa**: `cin >> variabla;`

```cpp
int mosha;
cout << "Shkruani moshën tuaj: ";
cin >> mosha;
```

### endl dhe Formatimi

- **`endl`**: Përdoret për të vendosur një rresht të ri dhe për të pastruar buffer-in
- **`\n`**: Alternativë më e shpejtë për rresht të ri

```cpp
cout << "Rreshti i parë" << endl;
cout << "Rreshti i dytë\n";
```

### Shembull Praktik

```cpp
#include <iostream>
using namespace std;

int main() {
    string emri;
    int mosha;

    cout << "Shkruani emrin tuaj: ";
    cin >> emri;
    cout << "Shkruani moshën tuaj: ";
    cin >> mosha;

    cout << "Përshëndetje " << emri << "!" << endl;
    cout << "Ju jeni " << mosha << " vjeç." << endl;

    return 0;
}
```

## 3. Tipet dhe Variablat

### Çfarë janë Variablat?

Variablat janë "kutija" në memorie ku ruhen të dhëna. Çdo variabël ka:

- **Emër**: Identifikuesi i variablës
- **Tip**: Lloji i të dhënave që ruan
- **Vlerë**: Përmbajtja aktuale

### Tipet Numerike

- **`int`**: Numra të plotë (-2,147,483,648 deri 2,147,483,647)

  ```cpp
  int numri = 42;
  int temperatura = -15;
  ```

- **`double`**: Numra dhjetorë (me precizion të dyfishtë)

  ```cpp
  double çmimi = 19.93243243249;
  double pi = 3.14159;
  ```

- **`float`**: Numra dhjetorë (me precizion të thjeshtë)
  ```cpp
  float pesha = 75.5f;  // 'f' në fund tregon që është float
  ```

### Tipi i Vërtetësisë

- **`bool`**: Mund të ketë vetëm dy vlera: `true` ose `false`
  ```cpp
  bool eshtePune = true;
  bool eshtePushim = false;
  ```

### Tipet Tekstuale

- **`char`**: Karakter i vetëm (shkronjë, shifër, simbol)

  ```cpp
  char shkronja = 'A';
  char simboli = '@';
  ```

- **`string`**: Varg karakteresh (tekst)
  ```cpp
  string emri = "Alban";
  string mesazhi = "Mirëdita të gjithëve!";
  ```

### Deklarimi i Variablave

**Sintaksa**: `<tipi> <emri> [= <vlera fillestare>];`

```cpp
// Deklarim pa vlerë fillestare
int numri;
double çmimi;

// Deklarim me vlerë fillestare
int mosha = 25;
string emri = "Elira";
bool aktiv = true;

// Deklarim i shumë variablave të të njëjtit tip
int a = 5, b = 10, c = 15;
```

### Rregullat për Emrat e Variablave

- Duhet të fillojnë me shkronjë ose nënvijë (\_)
- Mund të përmbajnë shkronja, shifra dhe nënvija
- Nuk mund të përdorin fjalë të rezervuara (int, if, else, etj.)
- Janë case-sensitive (emri ≠ Emri)

## 4. Shembuj Praktikë

- Shembulli 1: Programi "Përshëndetje Botë!"
- Shembulli 2: Lexoni emrin, moshën dhe qytetin e përdoruesit dhe shfaqni një mesazh përshëndetës

---

**Detyra për shtëpi**: Karta e Studentit - Deklaroni variabla të tipeve të ndryshme (`string`, `int`, `double`, `char`, `bool`) për emrin, moshën, mesataren, grupin dhe statusin aktiv të një studenti. Lexoni vlerat nga tastiera me `cin` dhe shfaqni ato të formatuara me `cout`, secilën në rresht të ri.
