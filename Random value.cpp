#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=0;i<5000;i++){
	
	int randNum = (rand() % 5) + 1;
	switch(randNum){
	case 1:
    cout << "delivered"<<endl;
    break;
    case 2:
    cout << "bounced"<<endl;
    break;
    case 3:
    cout << "sent"<<endl;
    break;
    case 4:
    cout << "opened"<<endl;
    break;
    case 5:
    cout << "failed"<<endl;
    break;
	}
}
}