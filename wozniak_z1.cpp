
/* 1. wczytuje imię użytkownika (jako zmienną typu string).
2. wczytuje jeden znak (zmienną typu char) informujący, czy użytkownik jest kobietą, czy
mężczyzną (należy podać dużą lub małą literę K lub M).
3. jeśli dane o płci zostały poprawnie podane, to drukuje powitanie z użyciem imienia w
postaci: imie, witam Pania/Pana (imion nie trzeba odmieniać), np. Andrzej, witam Pana.
W przypadku danych niepoprawnych drukuje powitanie postaci Witaj, imie.
4. wczytuje dwie dowolne liczby całkowite (mogą być ujemne) do zmiennych typu int.
5. drukuje następujące informacje słowne o większej z wczytanych liczb:
– czy jest parzysta czy nieparzysta
– czy jest jednocyfrowa, czy dwucyfrowa, czy też inna.
6. drukuje wynik dzielenia pierwszej liczby przez podwojoną wartość drugiej liczby.
Wskazówka: nie wolno dopuścić do dzielenia przez zero (wydrukować odpowiedni komunikat) i do obcinania
wyniku po przecinku – wynik musi być dokładny. */

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  string name;
  char gender;
  int num_1, num_2, bigger;
  float score, num_1_equ, num_2_equ;

  cout << "Podaj imie" << endl;
  cin >> name;

  cout << "Jestes M (mezczyzna) czy K (kobieta)" << endl;
  cin >> gender;

  if (gender == 'M' || gender == 'm')
  {
    cout << name << " , witam Pana" << endl;
  }
  else if (gender == 'K' || gender == 'k')
  {
    cout << name << " , witam Pania" << endl;
  }
  else
  {
    cout << "Witaj, " << name << endl;
  }

  cout << "Podaj dwie liczby" << endl;
  cin >> num_1 >> num_2;

  if (num_1 > num_2 )
  {
    bigger = num_1;
    if (bigger % 2 == 0)
    {
      cout << "Wieksza liczba jest parzysta" << endl;
      if (bigger < 10 && bigger > -10)
      {
        cout << "Wieksza liczba jest jednocyfrowa" << endl;
      }
      else if (bigger > 10 && bigger < 100)
      {
        cout << "Wieksza liczba jest dwucyfrowa" << endl;
      }
      else if (bigger < -9 && bigger > -100)
      {
        cout << "Wieksza liczba jest dwucyfrowa" << endl;
      }
      else
      {
        cout << "Wieksza liczba jest inna" << endl;
      }
    }
    else
    {
      cout << "Wieksza liczba jest nieparzysta" << endl;
      if (bigger < 10 && bigger > -10)
      {
        cout << "Wieksza liczba jest jednocyfrowa" << endl;
      }
      else if (bigger > 10 && bigger < 100)
      {
        cout << "Wieksza liczba jest dwucyfrowa" << endl;
      }
      else if (bigger < -9 && bigger > -100)
      {
        cout << "Wieksza liczba jest dwucyfrowa" << endl;
      }
      else
      {
        cout << "Wieksza liczba jest inna" << endl;
      }
    }
  }
  else
  {
    bigger = num_2;
    if (num_2 == 0)
    {
      cout << "Pamietaj cholero nie dziel przez 0" << endl;
      system("PAUSE");
    }else
    {
      if (bigger % 2 == 0)
    {
      cout << "Wieksza liczba jest parzysta" << endl;
      if (bigger < 10 && bigger > -10)
      {
        cout << "Wieksza liczba jest jednocyfrowa" << endl;
      }
      else if (bigger > 10 && bigger < 100)
      {
        cout << "Wieksza liczba jest dwucyfrowa" << endl;
      }
      else if (bigger < -9 && bigger > -100)
      {
        cout << "Wieksza liczba jest dwucyfrowa" << endl;
      }
      else
      {
        cout << "Wieksza liczba jest inna" << endl;
      }
    }
    else
    {
      cout << "Wieksza liczba jest nieparzysta" << endl;
      if (bigger < 10 && bigger > -10)
      {
        cout << "Wieksza liczba jest jednocyfrowa" << endl;
      }else if (bigger > 10 && bigger < 100)
      {
      cout << "Wieksza liczba jest dwucyfrowa" << endl;
      }else if (bigger < -9 && bigger > -100)
      {
        cout << "Wieksza liczba jest dwucyfrowa" << endl;
      }
      else
      {
        cout << "Wieksza liczba jest inna" << endl;
      }
    }
    }
  }

  num_1_equ = num_1;
  num_2_equ = num_2;

  score = num_1_equ / (num_2_equ * 2);

  cout << score << endl;

  system("PAUSE");

  return 0;
}

