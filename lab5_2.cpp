#include <iostream>
#include<cmath>
using namespace std;
double deg2rad(double a){
    a=a*(M_PI/180);
    return a;
}
double rad2deg(double a){
	a=a*(180/M_PI);
	return a;
}
double findXComponent(double l1, double l2, double a1, double a2){
	double xcomp,lx1,lx2;
	lx1=l1*cos(a1);
	lx2=l2*cos(a2);
	xcomp=lx1+lx2;
	return xcomp;
}
double findYComponent(double l1, double l2, double a1, double a2){
	double ycomp,ly1,ly2;
	ly1=l1*sin(a1);
	ly2=l2*sin(a2);
	ycomp=ly1+ly2;
	return ycomp;
}
double pythagoras(double xcomp, double ycomp){
	double l=sqrt((pow(xcomp,2)+(pow(ycomp,2))));
	return l;
}
double showResult(double result_vec_length,double result_vec_direction){
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
	cout << "\nLength of the resultant vector = " << result_vec_length;
	cout << "\nDirection of the resultant vector (deg) = " << result_vec_direction;
	cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
	return 0;
}
