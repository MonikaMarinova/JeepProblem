#include <QCoreApplication>
#include <iostream>

#define distance 1000
#define trips distance/2
#define drum 500

using namespace std;

void trip();

double usedFuel = 0.0;
double stored = 0.0;
double consumed = 0.0;
int cnt = 0;

int main()
{
    trip();

    return 0;
}

void trip(){
    for(int f = 1 ; f <= trips - 1; f += 2){
        //cout<<f<<endl;
        usedFuel += 1.d/f;
        //stored += (f-2.d)/f;
    }
    //usedFuel -= trips/(2.d*trips -1);
    usedFuel *= drum;
    //usedFuel /= 2;

   // consumed = usedFuel + stored;

    cout << usedFuel << endl;
    //cout << stored<< endl;
   // cout << consumed << endl;
}
