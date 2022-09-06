#include <iostream>
//#include "Shape.h"
using namespace std;

class Triangulo: public Shape{

    private:
        int triangleSize, x, y;

    public:

        void Clear() {
            cout << "\x1B[2J\x1B[H";
        }

        void setTriangleSize(int size){
            triangleSize = size;
        }
        int getTriangleSize(){
            if (triangleSize < 3){
                triangleSize = 3;
            }
            return triangleSize;
        }

        void setX(int x){
            this->x = x;
        }
        int getX(){
            if(x < 1){
                x = 2;
            }
            return x;
        }

        void setY(int y){
            this->y = y;
        }
        int getY(){
            if(y < 1){
                y = 2;
            }
            return y;
        }

        void draw(){
            char movement;
            while((movement = cin.get())  != 'e'){

                Clear();
                cout <<"Triangulo de dimension: "<<triangleSize<<endl;
                cout <<"Cordenadas x: "<< getX()<<endl;
			    cout <<"Cordenadas y: "<< getY()<<endl;
                cout <<"[e] Salir"<<endl;
                if (movement == 'a') {
                    x--;
                }
                else if (movement == 's') {
                    y++;
                }
                else if (movement == 'w') {
                    y--;
                }
                else if (movement == 'd') {
                    x++;
                }
                for (int c = 0; c < y; c++) {
				cout << endl;

			    }

                for (int i = 0; i <= triangleSize; i++){
                    for (int z = 0; z < x; z++) {
					        cout << " ";
				    }
                    for (int j = 0; j < i; j++){
                        cout << "*" ;
                    }
                    
                    cout << endl;
                }
            }
        }

};