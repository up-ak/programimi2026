# Bazat e Programimit - C++ (Java 2)

## 1. Përsëritje nga Java 1

- Struktura e programit: `#include <iostream>`, `using namespace std;`, `main()`, `return 0;`
- Output: `cout << "teksti";` dhe `cout << variabla;`
- Rresht i ri: `endl` ose `\n`

## 2. Input nga Tastiera (cin)

### cin - Input nga Tastiera

- **`cin`**: Përdoret për të lexuar të dhëna nga tastiera
- **Sintaksa**: `cin >> variabla;`

```cpp
int mosha;
cout << "Shkruani moshën tuaj: ";
cin >> mosha;
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

## 4. Operatorët

### Operatori i Shoqërimit (Assignment)

- **`=`**: Cakton një vlerë në variabël

```cpp
int x = 10;
x = 20;  // Tani x është 20
```

### Operatorët Aritmetikor

- **`+`**: Mbledhje
- **`-`**: Zbritje
- **`*`**: Shumëzim
- **`/`**: Pjesëtim
- **`%`**: Modulo (mbetja e pjesëtimit)

```cpp
int a = 10, b = 3;
int mbledhja = a + b;      // 13
int zbritja = a - b;       // 7
int shumezimi = a * b;     // 30
int pjesetimi = a / b;     // 3 (pjesëtim i plotë)
int mbetja = a % b;        // 1 (mbetja)

double x = 10.0, y = 3.0;
double pjesetimi_real = x / y;  // 3.33333...
```

### Operatorët Shkurtesë

- **`+=`**: Shton dhe cakton (`x += 5` është si `x = x + 5`)
- **`-=`**: Zbret dhe cakton
- **`*=`**: Shumëzon dhe cakton
- **`/=`**: Pjesëton dhe cakton
- **`%=`**: Modulo dhe cakton

```cpp
int x = 10;
x += 5;   // x = 15
x -= 3;   // x = 12
x *= 2;   // x = 24
x /= 4;   // x = 6
x %= 4;   // x = 2
```

### Operatorët e Inkrement/Dekrement

- **`++`**: Rrit me 1
- **`--`**: Ul me 1

```cpp
int i = 5;
i++;      // i = 6 (post-increment)
++i;      // i = 7 (pre-increment)
i--;      // i = 6 (post-decrement)
--i;      // i = 5 (pre-decrement)
```

### Përparësia e Operatorëve

1. `++`, `--` (prefix)
2. `*`, `/`, `%`
3. `+`, `-`
4. `=`, `+=`, `-=`, etj.

## 5. Konstantet

### Çfarë janë Konstantet?

Konstantet janë variabla që nuk mund të ndryshojnë vlerën pas inicializimit.

### Deklarimi i Konstanteve

**Sintaksa**: `const <tipi> <emri> = <vlera>;`

```cpp
const double PI = 3.14159;
const int VITI_AKTUAL = 2024;
const string UNIVERSITETI = "UP";
```

### Përfitimet e Konstanteve

- **Siguri**: Pengon ndryshimin aksidental
- **Qartësi**: Bën kodin më të lexueshëm
- **Performancë**: Kompajleri mund t'i optimizojë

### Konventa për Emrat

Zakonisht shkruhen me shkronja të mëdha dhe nënvija:

```cpp
const double GRAVITETI = 9.81;
const int NUMRI_MAKSIMAL = 100;
```

## 6. Shembuj Praktikë

- Shembulli 1: Lexoni emrin, moshën dhe qytetin e përdoruesit dhe shfaqni një mesazh përshëndetës
- Shembulli 2: Llogaritja e Perimetrit dhe Sipërfaqes së Drejtkëndëshit
- Shembulli 3: Llogaritja e Mesatares së Dy Numrave

---

**Detyra për shtëpi**:

1. **Karta e Studentit** - Deklaroni variabla të tipeve të ndryshme (`string`, `int`, `double`, `char`, `bool`) për emrin, moshën, mesataren, grupin dhe statusin aktiv të një studenti. Lexoni vlerat nga tastiera me `cin` dhe shfaqni ato të formatuara me `cout`, secilën në rresht të ri.
2. **Kalkulator i Thjeshtë** - Shkruani numrin e parë -> Shkruani operatorin (+, -, \*, /): -> Shkruani numrin e dytë: " -> rezultati
