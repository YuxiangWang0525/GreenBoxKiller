#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int chas(){
	char isosin;
	cout<<"������ԭϵͳ�̷�:";
	cin>>isosin;
	freopen("runkiller.bat","w",stdout);
	cout<<isosin<<":"<<endl;
	cout<<"cd Windows\\Fonts"<<endl;
	cout<<"del .\\_GBfonts\\*.* /s /q /f"<<endl;
	cout<<"rd _GBfonts"<<endl;
	cout<<"cd/"<<endl;
	cout<<"cd Windows\\System32"<<endl;
	cout<<"del ShellExec.exe"<<endl;
	cout<<"cd/"<<endl;
	cout<<"cd Windows\\System32\\drivers"<<endl;
	cout<<"del EhomeNet2.sys"<<endl;
	cout<<"exit"<<endl;
	fclose(stdout);
}
int main(){
	chas();
	system("runkiller.bat");
	cout<<"ɾ�����׺����ļ��ɹ�"<<endl;
	system("pause"); 
}
