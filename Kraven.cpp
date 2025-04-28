#include <iostream>
#include <string>
using namespace std;
int main()
{

    string quesoy = "";

// Describiendo que es el sujeto
    cout << "Que eres papu (malo, animal, persona)"; << endl;
    cin >> quesoy;

    //Dando diferentes finales por determinante del sujeto
    if (quesoy == "animal")
    {
        cout << "Kraven te apapacha y te protege:D";
    }
    else if (quesoy == "persona")
    {
        cout << "Kraven te saluda amablemente :D";
    }

    else if (quesoy == "malo")
    {
        cout << "Ni le reses al de arriba pq ese es Kraven D:";
    }
}
