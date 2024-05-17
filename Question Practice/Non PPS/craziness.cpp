#include <iostream>
 #include <vector>
using namespace std;
class itemRecords{
 public:
 int Item_ID;
 int Item_NAME;
 int Item_PRICE;
 int Item_COUNT;
 itemRecords(){}
 itemRecords(int Item_ID,int Item_NAME,int Item_PRICE,int Item_COUNT){
 this->Item_ID=Item_ID;
 this->Item_NAME=Item_NAME;
 this->Item_PRICE=Item_PRICE;
 this->Item_COUNT=Item_COUNT;
 }
};
int main(){
 int action;
 int i=-1;
 itemRecords r[3];
 cout<<"Select what you wanna do 1->Add a item\n2.Update existing Item\n3.Sell the existing Item: ";cin>>action; 
 if(action==1){int item_id;int item_name;int item_price;int item_count;cin>>item_id;cin>>item_name;cin>>item_price;cin>>item_count;i+=1;r[i]=itemRecords(item_id,item_name,item_price,item_count);cout<<"Select what you wanna do 1->Add a item\n2.Update existing Item\n3.Sell the existing Item: ";cin>>action;} 
 if(action==2){cout<<"Enter Item ID to update price: ";int item_id;cin>>item_id;for(int i=0;i<3;i++){if(item_id!=r[i].Item_ID){cout<<"Item ID is not available.";cin>>item_id;}else{cin>>r[i].Item_NAME;cin>>r[i].Item_PRICE;cin>>r[i].Item_COUNT;cout<<"Select what you wanna do 1->Add a item\n2.Update existing Item\n3.Sell the existing Item:";cin>>action;}}} 
 if(action==3){cout<<"Enter Item ID to sell: ";int item_id;cin>>item_id;for(int i=0;i<3;i++){if(item_id==r[i].Item_ID){cout<<"How many do you want? ";int count;cout<<"Sold "<<count<<"Remaining "<<r[i].Item_COUNT-count<<" available.";}}}
 return 0;
}
