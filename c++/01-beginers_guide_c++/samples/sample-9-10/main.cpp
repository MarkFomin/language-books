/*
 * Функция может быть членом одного класса и 
 * другом второго.
 */
#include<iostream>
using namespace std;
class Cylinder;
enum colors {red, green, yellow};
class Cube {
	colors color;
public:
	Cube(colors c){color=c;}
	bool sameColor(const Cylinder &y); 
};
class Cylinder{
	colors color;
public:
	Cylinder(colors c){color=c;}
	friend bool Cube::sameColor(const Cylinder& y);
};
bool Cube::sameColor(const Cylinder &y){
	return color==y.color;
}
int main(){
	Cube cube1(red);
	Cube cube2(green);
	Cylinder cyl(green);
	cout<<"Куб1 и цилиндр "<<(cube1.sameColor(cyl)?"одного цвета\n":"разных цветов\n");
	cout<<"Куб2 и цилиндр "<<(cube2.sameColor(cyl)?"одного цвета\n":"разных цветов\n");
	return 0;
}
