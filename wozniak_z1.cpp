#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  string name;
  char gender;
  int num_1, num_2;
  float score, num_1_equ, num_2_equ;


  cout << "Podaj imie" << endl;
  cin >> name;
  cout << "Witaj: " << name << endl;

  cout << "Jestes M (mezczyzna) czy K (kobieta)" << endl;
  cin >> gender;
  cout <<"Jestes " << gender << endl;

  if (gender == 'M' || gender == 'm')
  {
    cout << name << " , witam Pana" << endl;
  }

  else if (gender == 'K' || gender == 'k')
  {
    cout << name << " , witam Pania" << endl;
  }

  else if (gender != 'K' || gender != 'M')
  {
    cout << "Witaj, " << name << endl;
  }

  else if (gender != 'k' || gender != 'm')
  {
    cout << "Witaj, " << name << endl;
  }

  cout << "Podaj dwie liczby" << endl;
  cin >> num_1 >> num_2;

  if (num_1 == 0 || num_2 == 0)
  {
    cout << "Liczby musza byc wieksze od 0, " << name << " sprobuj jeszcze raz" << endl;
    system("PAUSE");
  }

  else if (num_1 > num_2)
  {
    if (num_1 % 2 == 0 && num_1 > 9)
    {
      cout << "Pierwsza liczba jest wieksza, jest parzysta i przynajmniej dwucyfrowa" << endl;
    }

    else if (num_1 % 2 == 0 && num_1 <= 9)
    {
      cout << "Pierwsza liczba jest wieksza, jest parzysta i NIE jest dwucyfrowa" << endl;

      num_1_equ = num_1;
      num_2_equ = num_2;
    }

    else if (num_1 % 2 != 0 && num_1 > 9)
    {
      cout << "Pierwsza liczba jest wieksza, NIE jest parzysta, jest przynajmniej dwucyfrowa" << endl;

      num_1_equ = num_1;
      num_2_equ = num_2;
    }

    else if (num_1 % 2 != 0 && num_1 <= 9)
    {
      cout << "Pierwsza liczba jest wieksza, NIE jest parzysta, Nie jest dwucyfrowa" << endl;

      num_1_equ = num_1;
      num_2_equ = num_2;
    }
  }

  else if (num_1 < num_2)
  {
    if (num_2 % 2 == 0 && num_2 > 9)
    {
      cout << "Druga liczba jest wieksza, jest parzysta i przynajmniej dwucyfrowa" << endl;

      num_1_equ = num_1;
      num_2_equ = num_2;
    }

    else if (num_2 % 2 == 0 && num_2 <= 9)
    {
      cout << "Druga liczba jest wieksza, jest parzysta i NIE jest dwucyfrowa" << endl;

      num_1_equ = num_1;
      num_2_equ = num_2;
    }

    else if (num_2 % 2 != 0 && num_2 > 9)
    {
      cout << "Druga liczba jest wieksza, NIE jest parzysta, jest przynajmniej dwucyfrowa" << endl;

      num_1_equ = num_1;
      num_2_equ = num_2;
    }

    else if (num_2 % 2 != 0 && num_2 <= 9)
    {
      cout << "Druga liczba jest wieksza, NIE jest parzysta, Nie jest dwucyfrowa" << endl;

      num_1_equ = num_1;
      num_2_equ = num_2;
    }
  }

  else if (num_1 == num_2 && num_1 % 2 == 0 && num_2 % 2 == 0)
  {
    cout <<"Podane liczby sa rowne i sa PARZYSTE" << endl;

    num_1_equ = num_1;
    num_2_equ = num_2;
  }

  else
  {
    cout <<"Podane liczby sa rowne i sa NIE-PARZYSTE" << endl;

    num_1_equ = num_1;
    num_2_equ = num_2;
  }

  score = num_1_equ / (num_2_equ * 2);

  cout << score << endl;

  system("pause");

  return 0;
}

