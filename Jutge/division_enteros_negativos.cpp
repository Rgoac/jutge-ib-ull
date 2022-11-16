#include <iostream>

int main()
{
	int a;
    int b; b > 0;
	std::cin >> a;
    std::cin >> b;
	int d = a/b;
	int r = a%b;
    if (r < 0){
		d = d-1;
		int s = d*b;
		r = -s+a;
	}
	std::cout << d << " " << r << std::endl;
}