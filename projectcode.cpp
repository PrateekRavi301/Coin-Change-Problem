#include<iostream>

using namespace std;

int getNumofCoins(int coins[], int sum){
	if(sum==0)
		return 0;
	else{
		int result= 0; 
		for(int i=9;i>=0;i--){
			while(sum>=coins[i]){
				sum-=coins[i];
				result++;
			}
		}
		return result;							
	}
}
int greedy(int sum){
	int coin1 = 0;
	int coin2 = 0;
	int coin5 = 0;
	int coin10 = 0;
	int coin20 = 0;
	int coin50 = 0;
	int coin100 = 0;
	int coin200 = 0;
	int coin500 = 0;
	int coin2000 = 0;
	while(sum != 0){
		if(sum>=2000){
			sum-=2000;
			coin2000++;
		}
		else if(sum>=500){
			sum-=500;
			coin500++;
		}
		else if(sum>=200){
			sum-=200;
			coin200++;
		}
		else if(sum>=100){
			sum-=100;
			coin100++;
		}
		else if(sum>=50){
			sum-=50;
			coin50++;
		}
		else if(sum>=20){
			sum-=20;
			coin20++;
		}
		else if(sum>=10){
			sum-=10;
			coin10++;
		}
		else if(sum>=5){
			sum-=5;
			coin5++;
		}
		else if(sum>=2){
			sum-=2;
			coin2++;
		}
		else{
			sum-=1;
			coin1++;
		}
	}
	cout<<"\n2000 coins: "<<coin2000;
	cout<<"\n500 coins: "<<coin500;
	cout<<"\n200 coins: "<<coin200;
	cout<<"\n100 coins: "<<coin100;
	cout<<"\n50 coins: "<<coin50;
	cout<<"\n20 coins: "<<coin20;
	cout<<"\n10 coins: "<<coin10;
	cout<<"\n5 coins: "<<coin5;
	cout<<"\n2 coins: "<<coin2;
	cout<<"\n1 coins: "<<coin1;
}
int main(){
	
	int coins[] = {1,2,5,10,20,50,100,200,500,2000},sum,choice=0;
	cout<<"Enter amount to change in coins: ";
	cin>>sum;
	cout<<"\n\t\t MAIN MENU";
	while(choice!=3){
		cout<<"\n\t 1. Coin Change By Brute Force";
		cout<<"\n\t 2. Coin Change By Greedy Algorithm";
		cout<<"\n\t 3. Exit";
		cout<<"\n Enter Choice: ";
		cin>>choice;
		if(choice==1){
			cout<<"\nCoins: ";
			for(int i=0;i<10;i++)
				cout<<coins[i]<<" ";
			cout<<"\nSum: "<<sum;
			
			cout<<"\nMinimum coins required: "<<getNumofCoins(coins,sum);
			break;
			
		}
		else if(choice==2){
			
			greedy(sum);
			break;
		}
		else if(choice==3){
			break;
		}
		else
			cout<<"\n INVALID CHOICE";
	}
	return 0;
	
}
	

