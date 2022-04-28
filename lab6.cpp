#include <iostream>

using namespace std;

int capitalpi(int n)

{



    if(n > 0)

    {

        return ((double(n)/double((n+2))-10)) * capitalpi(n-1);

    }

    else

        return 1;
}


int capitalpi()

{

    int x;

    cout << "Please enter a value n: \n";

    cin >> x;



    if(x > 0)

    {

        return ((x/(x+2))-10) * capitalpi(x-1);

    }

    else

        return 1;

}

int main()

{

    int x;



    cout << "Please enter a value n: \n";

    cin >> x;



    cout << capitalpi(x) << endl;

    cout << capitalpi() << endl;



    return 0;

}
