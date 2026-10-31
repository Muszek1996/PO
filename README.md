# PO

C++ OOP class exercise ("programowanie obiektowe") on class templates and inheritance.

- `Pracownik` ("employee"): abstract base with auto-incremented ID, pay, overtime, leave, and pure virtual `wypisz()` (print)
- `Informatyk` (IT worker), `Kierownik` (manager), `Biurowy` (office worker): derived classes
- `Zespół<ilosc, typ>` ("team"): class template with a fixed size that holds `ilosc` employees of type `typ` and prints them with `<<`
- `Source.cpp`: creates a 3-person team of `Informatyk` through an alias template and prints it

## Build
Open `Szablony/Szablony.sln` in Visual Studio and run.
