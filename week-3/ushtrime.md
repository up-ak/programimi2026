# Bazat e Programimit - C++ (Java 3)

## Përsëritje

Në javën e kaluar mësuam:

- Strukturën themelore të programeve C++
- Input/Output me `cin` dhe `cout`
- Tipet e të dhënave: `int`, `double`, `bool`, `char`, `string`
- Operatorët aritmetikor: `+`, `-`, `*`, `/`, `%`
- Operatorët shkurtesë: `+=`, `-=`, `*=`, `/=`, `++`, `--`
- Konstantet me `const`

---

## 1. Kushtezimet (Conditional Statements)

### Çfarë janë Kushtezimet?

Kushtezimet lejojnë që programi të marrë vendime dhe të ekzekutojë kod të ndryshëm bazuar në kushte të caktuara. Janë thelbësore për krijimin e programeve inteligjente dhe dinamike.

### Operatorët Relacionalë (Krahasues)

Para se të fillojmë me kushtezimet, duhet të njohim operatorët që përdoren për të krijuar kushte:

| Operatori | Kuptimi              | Shembull | Rezultati |
| --------- | -------------------- | -------- | --------- |
| `==`      | Baraz me             | `5 == 5` | `true`    |
| `!=`      | Ndryshe nga          | `5 != 3` | `true`    |
| `>`       | Më e madhe se        | `5 > 3`  | `true`    |
| `<`       | Më e vogël se        | `5 < 3`  | `false`   |
| `>=`      | Më e madhe ose baraz | `5 >= 5` | `true`    |
| `<=`      | Më e vogël ose baraz | `3 <= 5` | `true`    |

**KUJDES**: Mos e ngatërroni `=` (shoqërim) me `==` (krahasim)!

```cpp
int x = 5;     // Shoqërim: x merr vlerën 5
if (x == 5)    // Krahasim: kontrollon nëse x është 5
```

### Operatorët Logjikë

Përdoren për të kombinuar kushte të shumta:

| Operatori | Emri      | Kuptimi                                   | Shembull              |
| --------- | --------- | ----------------------------------------- | --------------------- |
| `&&`      | AND (DHE) | Të dyja kushtet duhet të jenë të vërteta  | `(x > 0 && x < 10)`   |
| `\|\|`    | OR (OSE)  | Së paku një kusht duhet të jetë i vërtetë | `(x < 0 \|\| x > 10)` |
| `!`       | NOT (JO)  | Kundërshton kushtin                       | `!(x == 0)`           |

```cpp
int mosha = 20;
bool eshtStudent = true;

// Shembuj me operatorë logjikë
if (mosha >= 18 && mosha <= 65) {
    cout << "Moshë pune" << endl;
}

if (mosha < 18 || eshtStudent) {
    cout << "Zbritje në biletë" << endl;
}

if (!(mosha < 18)) {
    cout << "I rritur" << endl;
}
```

---

## 2. Sintaksa Bazë e if

### Forma e Thjeshtë

**Sintaksa**:

```cpp
if (kushti) {
    // Kodi që ekzekutohet nëse kushti është i vërtetë
}
```

**Shembull**:

```cpp
int temperatura = 30;

if (temperatura > 25) {
    cout << "Është vapë sot!" << endl;
}
```

### Kur të Përdoren Kllapat { }

```cpp
// Nëse ka vetëm një urdhër, kllapat janë opsionale (por rekomandohen)
if (x > 0)
    cout << "Pozitiv" << endl;

// Nëse ka më shumë se një urdhër, kllapat janë të detyrueshme
if (x > 0) {
    cout << "Pozitiv" << endl;
    x = x * 2;
}
```

**Rekomandimi**: Gjithmonë përdorni kllapa edhe për një urdhër, për të shmangur gabime!

---

## 3. Kushtezimi me Dy Degëzime (if-else)

### Sintaksa

```cpp
if (kushti) {
    // Blloku 1: Ekzekutohet nëse kushti është i vërtetë
} else {
    // Blloku 2: Ekzekutohet nëse kushti është i gabuar
}
```

### Shembull

```cpp
int numri;
cout << "Shkruani një numër: ";
cin >> numri;

if (numri >= 0) {
    cout << "Numri është pozitiv ose zero." << endl;
} else {
    cout << "Numri është negativ." << endl;
}
```

### Diagrami i Rrjedhës

```
      [Kushti?]
       /     \
     Po      Jo
     /         \
[Blloku1]  [Blloku2]
     \         /
      \       /
    [Vazhdimi]
```

---

## 4. Kushtezimi me Shumë Degë (if-else if-else)

### Sintaksa

```cpp
if (kushti1) {
    // Blloku 1
} else if (kushti2) {
    // Blloku 2
} else if (kushti3) {
    // Blloku 3
} else {
    // Blloku i fundit (opsional)
}
```

### Rëndësia e Renditjes

Kushtet kontrollohen nga lart poshtë. Kur një kusht është i vërtetë, blloqet e tjera nuk kontrollohen.

```cpp
// E saktë
if (piket >= 90) {
    cout << "10" << endl;
} else if (piket >= 80) {  // Kontrollohet vetëm nëse piket < 90
    cout << "9" << endl;
}

// E GABUAR - Gjithmonë do të printojë "7" për çdo piket >= 60
if (piket >= 60) {
    cout << "7" << endl;
} else if (piket >= 90) {  // Kjo nuk do të arrihet kurrë!
    cout << "10" << endl;
}
```

---

## 5. Operatori Ternar (Ternary Operator)

### Sintaksa

```cpp
variabla = kushti ? shprehja1 : shprehja2;
```

- Nëse `kushti` është i vërtetë, `shprehja1` ekzekutohet
- Nëse `kushti` është i gabuar, `shprehja2` ekzekutohet

### Shembuj

**Shembulli 1**: Gjeni maksimumun

```cpp
int a = 10, b = 20;
int max = (a > b) ? a : b;
cout << "Maksimumi: " << max << endl;  // Printon: 20
```

### Krahasimi me if-else

```cpp
// Me operator ternar
int rezultati = (x > 0) ? 1 : -1;

// Ekuivalenti me if-else
int rezultati;
if (x > 0) {
    rezultati = 1;
} else {
    rezultati = -1;
}
```

**Kur të përdoret**:

- ✅ Për shoqërime të thjeshta
- ✅ Kur kodi është më i lexueshëm
- ❌ Jo për logjikë komplekse
- ❌ Jo për blloqe të shumta urdhërash

---

## 6. Detyrat Praktike

### Detyra 1: Llogaritja e Vlerës Absolute

**Përshkrim**: Lexoni një numër dhe printoni vlerën e tij absolute.

**Testimi**:

- Input: `5` → Output: `5`
- Input: `-5` → Output: `5`
- Input: `0` → Output: `0`

---

### Detyra 2: Krahasimi i Dy Numrave

**Përshkrim**: Lexoni dy numra dhe tregoni marrëdhënien mes tyre.

**Testimi**:

- Input: `5, 5` → Output: `5 është e barabartë me 5`
- Input: `10, 3` → Output: `10 është më e madhe se 3`
- Input: `2, 7` → Output: `2 është më e vogël se 7`

---

### Detyra 4: Çift apo Tek

**Përshkrim**: Tregoni nëse një numër është çift apo tek.

**Shpjegim i Operatorit Modulo (%)**:

- `8 % 2 = 0` → Çift (pjesëtohet plotësisht me 2)
- `7 % 2 = 1` → Tek (mbetet 1)
- Nëse `x % 2 == 0`, atëherë x është çift

**Testimi**:

- Input: `10` → Output: `ÇIFT`
- Input: `7` → Output: `TEK`
- Input: `0` → Output: `ÇIFT`

---

### Detyra 5: Caktimi i Notës Bazuar në Pikë

**Përshkrim**: Lexoni pikët dhe caktoni notën përkatëse.

**Testimi**:

- Input: `95` → Output: `Nota: 10`
- Input: `75` → Output: `Nota: 8`
- Input: `45` → Output: `Nota: 5`
- Input: `105` → Output: `GABIM`

---

### Detyra Shtepie: Maksimumi i Tre Numrave

**Përshkrim**: Gjeni numrin më të madh mes tre numrave.

**Testimi**:

- Input: `5, 10, 3` → Output: `10`
- Input: `15, 7, 15` → Output: `15`
- Input: `-5, -2, -10` → Output: `-2`

---

## 8. Gabimet e Shpeshta dhe Si t'i Shmangni

### 1. Përdorimi i `=` në vend të `==`

```cpp
// ❌ GABIM
if (x = 5) {  // Kjo cakton 5 në x, jo e krason!
    cout << "x është 5" << endl;
}

// ✅ SAKTË
if (x == 5) {
    cout << "x është 5" << endl;
}
```

### 2. Harrimi i Kllapave për Blloqe të Shumta

```cpp
// ❌ GABIM - Vetëm urdhëri i parë është brenda if
if (x > 0)
    cout << "Pozitiv" << endl;
    x = x * 2;  // Ky ekzekutohet gjithmonë!

// ✅ SAKTË
if (x > 0) {
    cout << "Pozitiv" << endl;
    x = x * 2;
}
```

### 3. Logjika e Gabuar me Operatorë Logjikë

```cpp
// ❌ GABIM - Nuk kontrollon interval korrekt
if (x > 0 && < 10) {  // Gabim sintakse!

// ✅ SAKTË
if (x > 0 && x < 10) {
```

### 4. Renditja e Gabuar e Kushteve

```cpp
// ❌ GABIM - Kushti i përgjithshëm është i pari
if (piket >= 50) {
    cout << "6" << endl;
} else if (piket >= 90) {  // Kjo nuk do të arrihet kurrë!
    cout << "10" << endl;
}

// ✅ SAKTË - Kushtet specifike vijnë të parat
if (piket >= 90) {
    cout << "10" << endl;
} else if (piket >= 50) {
    cout << "6" << endl;
}
```

### 5. Krahasimi i Numrave me Presje Dhjetore

```cpp
double x = 0.1 + 0.2;  // Mund të mos jetë saktësisht 0.3

// ❌ GABIM - Mund të mos funksionojë për shkak të precizionit
if (x == 0.3) {
    cout << "Baraz" << endl;
}

// ✅ SAKTË - Përdorni një epsilon për tolerancë
const double EPSILON = 0.00001;
if (abs(x - 0.3) < EPSILON) {
    cout << "Baraz (afërsisht)" << endl;
}
```
