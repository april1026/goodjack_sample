#include <iostream>
using namespace std;
const int DOWN = 1;

typedef struct body {
	int point[2];
	struct body *next;
} body;


body* addBody(body *nowBody, int direction);


int main(){
	body *nowBody = new body;
	nowBody->point[0] = 0;
	nowBody->point[1] = 0;
	
	for (int times = 0; times < 10; times++) {
		int direction = DOWN;
		nowBody = addBody(nowBody, direction);
	}

	
	cout << nowBody->point[0] << ", " << nowBody->point[1];
}

body* addBody(body *nowBody, int direction) {
	int x = nowBody->point[0];
	int y = nowBody->point[1];
	
	int nextX, nextY;
	if (DOWN == direction) {
		nextX = x;
		nextY = y + 1;
	}
	
	nowBody->next = new body;
	
	nowBody->next->point[0] = nextX;
	nowBody->next->point[1] = nextY;
	
	return nowBody->next;
}
