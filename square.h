#include <iostream>
#include "Shape.cpp"
using namespace std;

class Cuadrado: public Shape{

    private:
        int squareSize, squareType, x, y;

    public: 
        void Clear(){
            cout << "\x1B[2J\x1B[H";
        }

        void setSquareSize(int tamanioCuadrado){
            squareSize = tamanioCuadrado;

        }
        int getSquareSize(){
            if (squareSize < 2){
                squareSize = 2;
                
            }
            return squareSize;
        }

        void setSquareType(int type){
            squareType = type;

        }
        int getSquareType(){
            if ((squareType < 1 || squareType > 2)){
                squareType = 1;
                
            }
            return squareType;
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
                cout<<"Cuadrado de dimension: "<<squareSize<<endl;
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
                

                if (squareType == 2){ //Cuadrado vacio
                    for (int i = 0; i < squareSize; i++){
                        for (int z = 0; z < x; z++) {
					        cout << " ";

				        }
                        for (int j = 0; j < squareSize; j++){   
                            if (i == 0 || j == 0 || i == squareSize-1 || j == squareSize-1){
                                cout <<"*";
                            }
                            else{
                                cout<<" ";
                            }
                            if(j+1 == squareSize){
                                cout<<endl;
                            }
            
                        }
        
                    }
                }

                else if(squareType == 1){   //Cuadrado relleno
                    for (int i = 0; i < squareSize; i++){
                        for (int z = 0; z < x; z++) {
					        cout << " ";

				        }
                        for (int j = 0; j < squareSize; j++){   
                            cout <<"* ";

                            if(j+1 == squareSize){
                                cout<<endl;
                            }
                        }
                    }
                }
                
                
            }
        }
             
};
