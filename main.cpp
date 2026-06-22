#include <iostream>
using namespace std;

int main(){
    int select = 0;
    while(1){
    cout<<"==================欢迎来到机房预约系统=================="<<endl;
    cout<<endl<<"请输入您的身份"<<endl;
    cout<<"\t\t-------------------------\n"<<endl;
    cout<<"\t\t                         \n"<<endl;
    cout<<"\t\t         1. 学生          \n"<<endl;
    cout<<"\t\t                          \n"<<endl;       
    cout<<"\t\t         2. 老师          \n"<<endl;
    cout<<"\t\t                          \n"<<endl;
    cout<<"\t\t         3. 管理员         \n"<<endl;
    cout<<"\t\t                          \n"<<endl;
    cout<<"\t\t          0.退出           \n"<<endl;
    cout<<"\t\t                          \n"<<endl;
    cout<<"\t\t-------------------------- \n"<<endl;
    cout<<"请输入您的选择：";
    cin>>select;

    switch(select){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            break;
        default:
            cout<<"输入错误，请重新输入！"<<endl;
            cout << "按回车退出...";
            cin.get(); 
            system("clear");
            break;
    } 
}
  return 0;
}