#include <iostream>
#include <math.h>

bool IsWithinRadius(int x, int y, int r, int l) {return (sqrt(x*x + y*y) <= r && y <=0, x >=0)||((x<=0 && x >= -l)&&(y <= r && y >= r));}
bool num48(int x, int y, int r, int l) {return (sqrt(x*x + y*y) <= r && y >=0)||((x<=0 && x >= -l)&&(y <= r && y >= r));}
bool num51(int x, int y, int r, int l) {return (sqrt(x*x + y*y) <= r && y >=0, x >=0)||((x >= -l&& x >= l)&&(y <= r && y >= r));}


using namespace std;
int main(){
    //19, 51,48
    // 19
    int x, y, r, l;

    cout << "Enter x y r l: " << endl;
    cin >> x >> y >> r >> l;
    cout << "\nRes: " << ((IsWithinRadius(x, y, r, l))) << "\n";

    // 48
    cout << "\nRes: " << ((num48(x, y, r, l))) << "\n";

    // 51
    cout << "\nRes: " << ((num51(x, y, r, l))) << "\n";


    return 0;
}
