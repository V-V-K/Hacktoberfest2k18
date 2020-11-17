#include<iostream>
#include<math.h>

using namespace std;
// distance between two lines exercise

class point{
    int a,b;
    public:
    point(int x,int y){
        a=x;
        b=y;
    }
    

    friend void distance(point o1,point o2);
};

 void distance(point o1,point o2){
        double loda;
        loda= sqrt(pow((o2.a-o1.a),2) + pow((o2.b-o1.b),2));
        cout<<loda;
    };


int main() {
   point g(0,0),h(0,2); 
   distance(g,h);
   return 0;
}
