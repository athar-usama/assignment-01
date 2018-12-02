#ifndef CNUMBER_H_INCLUDED
#define CNUMBER_H_INCLUDED

#include <iostream>

using namespace std;

class cnumber {

    private:

        double real;
        double imaginary;

    public:

        cnumber(): real(0), imaginary(0){
        };

        cnumber(double realpart, double imaginarypart): real(realpart), imaginary(imaginarypart){
        };

        void setter(){

            cout << "Enter the real part: ";
            cin >> real;

            cout << "Enter the imaginary part: ";
            cin >> imaginary;

        }

        void getter(){

            if(imaginary >= 0){
                cout << real << " + " << imaginary << "j" << endl;
            }
            else{
                cout << real << " - " << fabs(imaginary) << "j" << endl;
            }

            //cout << "Real part: " << real << endl;
            //cout << "Imaginary part: " << imaginary << endl;

        }

        cnumber add(cnumber a){

            cnumber ctemp;
            ctemp.real = real + a.real;
            ctemp.imaginary = imaginary + a.imaginary;
            return ctemp;

        }

        cnumber sub(cnumber a){

            cnumber ctemp;
            ctemp.real = real - a.real;
            ctemp.imaginary = imaginary - a.imaginary;
            return ctemp;

        }

        cnumber mul(cnumber a){

            cnumber ctemp;
            ctemp.real = (real * a.real) - (imaginary * a.imaginary);
            ctemp.imaginary = (real * a.imaginary) + (imaginary * a.real);
            return ctemp;

        }

        cnumber div(cnumber a){

            if(a.real == 0 && a.imaginary == 0){
                throw 0;
            }

            cnumber ctemp;
            ctemp.real = ((real * a.real) + (imaginary * a.imaginary)) / ((a.real * a.real) + (a.imaginary * a.imaginary));
            ctemp.imaginary = ((imaginary * a.real) - (real * a.imaginary)) / ((a.real * a.real) + (a.imaginary * a.imaginary));
            return ctemp;

        }

        cnumber operator + (cnumber a){

            cnumber ctemp;
            ctemp.real = real + a.real;
            ctemp.imaginary = imaginary + a.imaginary;
            return ctemp;

        }

        cnumber operator - (cnumber a){

            cnumber ctemp;
            ctemp.real = real - a.real;
            ctemp.imaginary = imaginary - a.imaginary;
            return ctemp;

        }

        cnumber operator * (cnumber a){

            cnumber ctemp;
            ctemp.real = (real * a.real) - (imaginary * a.imaginary);
            ctemp.imaginary = (real * a.imaginary) + (imaginary * a.real);
            return ctemp;

        }

        cnumber operator / (cnumber a){

            if(a.real == 0 && a.imaginary == 0){
                throw 0;
            }

            cnumber ctemp;
            ctemp.real = ((real * a.real) + (imaginary * a.imaginary)) / ((a.real * a.real) + (a.imaginary * a.imaginary));
            ctemp.imaginary = ((imaginary * a.real) - (real * a.imaginary)) / ((a.real * a.real) + (a.imaginary * a.imaginary));
            return ctemp;

        }

};

#endif // CNUMBER_H_INCLUDED
