#include <iostream>
#include <cstdlib>


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
    }
    else
    {
      bigger = num_2;
    }

    if (bigger % 2 == 0)
    {
      cout << "Wieksza liczba jest parzysta" << endl;
    }
    else
    {
      cout << "Wieksza liczba jest nieparzysta" << endl;
    }

    if (bigger <= 9 && bigger >= -9)
    {
      cout << "Wieksza liczba jest jednocyfrowa" << endl;
    }
    else if (bigger <= 99 && bigger >= -99)
    {
      cout << "Wieksza liczba jest dwucyfrowa" << endl;
    }
    else
    {
      cout << "Wieksza liczba jest inna" << endl;
    }

    if (num_2 == 0) {
      cout << "Nie dzielimy przez 0" << endl;
    }else
    {
      num_1_equ = num_1;
      num_2_equ = num_2;

      score = num_1_equ / (num_2_equ * 2);

      cout << score << endl;

      system("PAUSE");

    }

  return 0;
}
