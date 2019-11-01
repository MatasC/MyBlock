# MyChain blockchain  
## Naudojimasis  
Atsisiųskite failo direktoriją iš github, atsidarykite ją naudodami terminalą ir suves kite komandą ``make``. Programa sukurs blockchain ir atspausdins kiekvieno iš jų hashą. Atlikusi darbą programa pati išvalys visus paleidimo ir object failus.
## Versijos
### [v0.1](https://github.com/MatasC/MyBlock/releases/tag/v0.1) - (2019-10-18)
Pridėta:  
-Blockchain išpildymas. Blokai sukuriami tik kai yra atrinkta šimtas tinkamų transakcijų (netinkamos yra ištrinamos prieš pradedant kurti blokus). Vartotojų duomenys nuskaitomi iš jau sugeneruoto duomenų failo. Programa baigia darbą, kai visos turimos transakcijos yra sukeltos i MyBlock blokus ir išsaugotos MyChain'e.  

### [v0.2](https://github.com/MatasC/MyBlock/releases/tag/v0.2) - (2019-10-24)
Pridėta:  
-Transakcijos ID  

Pataisymai:  
-Blockchain išpildymas pataisytas pagal reikalavimus.  
-Transakcijų pool'o išpildymas atliktas taip, kad transakcija būtų patikrinta prieš patekdama į pool'ą.  

### [v0.2.1](https://github.com/MatasC/MyBlock/releases/tag/v0.2.1) - (2019-10-25)
Pataisymai:  
- Transakcijų pool'o išpildymas pataisytas, kad būtų galima atlikti validumo patikrinimą po transakcijos patekimo į pool'ą.  
- Blockchain gali sukurti bloką net jeigu nėra 100 transakcijų (maksimalus leistinas tranksakcijų skaičius viename bloke).  
- Padidinta minimali pervedimo suma transakcijoje tam, kad būtų didesnė tikimybė sukurti nevalidžią transakciją (Pervedamų pinigų suma didesnė nei sąskaitos likutis).
### v0.3 - (2029-11-1)
Nuosavame kompiuteryje įdiegtas Bitcoin core realizacija (dėl užimamos vietos to nepavyko atlikti darbiniame laptope).  