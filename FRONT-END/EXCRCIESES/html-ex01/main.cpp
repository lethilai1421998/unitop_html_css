#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    //1. Nhap vao mot tu de doan
    string tuBiAn("MYSTERE"); 
    cout << "Nhap vao mot tu: ";
    cin >> tuBiAn;
    //2. Tron cac chu cai
    srand(time(0));
    string chuoi = tuBiAn;
    cout << "Hay doan tu dung tu cac ky tu: ";
    while(chuoi.size() != 0){
        int viTri = rand() % chuoi.size();
        cout<<chuoi[viTri];
        chuoi.erase(viTri,1);
    }
    cout<<endl;
    
    //3. Vong lap tim tu
    string timTu("");
    while(timTu != tuBiAn){
        cin >> timTu;
        if (timTu != tuBiAn) cout << "Khong dung, hay tim lai" << endl;
        else cout << "Chuc mung ban da tim dung tu" << endl;
    }
    return 0;
}