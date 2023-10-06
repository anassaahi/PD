#include <iostream>
using namespace std;
void flowers(float r, float w, float t, float ori, float dis);
main(){
cout << "Red Rose: ";
float r;
cin >> r;
cout << "White Rose: ";
float w;
cin >> w;
cout << "Tulips: ";
float t;
cin >> t;
float ori;
float dis;
r = r * 2.00;
w = w * 4.10;
t = t * 2.50;
ori = r + w + t;
dis = ori-((ori*20)/100);
flowers(r, w, t, ori, dis);
}
void flowers(float r, float w, float t, float ori, float dis)
{cout << "Original Price: $"<<ori<<endl;
{if (ori < 200)
cout << "No discount applied."<<endl;
}
{if (ori > 200)
cout << "Price after Discount: $"<<dis;
}
}