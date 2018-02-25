

struct test {
	string material;
	int quantity;
    float price;
	double extended;
};
struct test2 {
	string material2;
	int quantity2;
	float price2;
	double extended;
};
struct test3 {
	string material3;
	int quantity3;
	float price3;
	double extended;
};

test  var1;
test2 var2;
test3 var3;

float s1 = 5.5;
float s2 = 2.6;
float s3 = 1.9;   //10 BTC in sum and cost price of roundabout a local banking license: (100k$)

string m1 = "gold";
string m2 = "silver";
string m3 = "iron";

string unit = "BTC";

void settings(void) {

var1.price = s1;
var2.price2 = s2;
var3.price3 = s3;  

var1.material = m1;
var2.material2 = m2; 
var3.material3 = m3;
}


void testprint(void) {

cout << "Bitcoin Generator Test Programm: \n";
cout << var1.price << " "  << unit << " " << var1.material << "\n" 
     << var2.price2 << " " << unit << " " << var2.material2 << "\n" 
     << var3.price3 << " " << unit << " " << var3.material3 << "\n";

}
