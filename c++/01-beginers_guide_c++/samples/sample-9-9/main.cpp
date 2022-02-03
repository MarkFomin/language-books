/*
 * Дружественные функции могут быть друзьями двух и более 
 * классов.
 */
#include<iostream>
using namespace std;
class Cylinder;//упреждающее объявление.
enum colors {red, green, yellow};
class Cube{
	colors color;
public:
	Cube(colors c){color=c;};
	friend bool sameColor(const Cube &x, const Cylinder &y); 
};
class Cylinder{
	colors color;
public:
	Cylinder(colors c){color=c;};
	friend bool sameColor(const Cube &x, const Cylinder &y);
};
bool sameColor(const Cube &x, const Cylinder &y){
	return x.color==y.color;
}
int main(){
	Cube cube1(red);
	Cube cube2(green);
	Cylinder cyl(green);
	cout<<"Куб1 и цилиндр "<<(sameColor(cube1, cyl)?"одного цвета\n":"разных цветов\n");
	cout<<"Куб2 и цилиндр "<<(sameColor(cube2, cyl)?"одного цвета\n":"разных цветов\n");
}
