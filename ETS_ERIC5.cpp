#include<bits/stdc++.h>
using namespace std;
int Login_TOF=0,CinCode_TOF=0,Home_TOF=0;
void Login();
void home();
int cincode();
int main(){
	ofstream OutFile;
	ifstream InFile;
	system("title ��ӭʹ��ETS_ERIC5");
	cout<<"--------------------------"<<endl;
	cout<<"      ETS_ERIC 5"<<endl;
	cout<<"     version   5.0"<<endl;
	cout<<" --------------------------"<<endl<<endl;
	cout<<" �����������ETS_ERIC������...";
	system("pause>nul");
	Login();
	return 0;
}
void Login(){
	ofstream OutFile;
	ifstream InFile;
	system("color f0");
	system("cls");
	system("title ��¼/ע��ERIC");
	char lor;
	if(Login_TOF==0){
		cout<<"��¼(Y)����ע��(N)��[Y/N]\n";
		cout<<"������������ϵ���ߣ�\n";
		cin>>lor;
	}
	if(Login_TOF==1){
		lor='Y';
	}
	else{
		if(Login_TOF==2){
			lor='N';
		}
	}
	if(lor=='Y'||lor=='y'){
		Login_TOF=1;
		system("title ��¼ERIC");
		string username,usname;
		string password,passw;
		InFile.open("username.info");
		InFile>>username;
		InFile.close();
		InFile.open("password.info");
		InFile>>password;
		InFile.close();
		cout<<"�������û���:";
		cin>>usname;
		cout<<"����������:";
		cin>>passw;
		if(usname!=username){
			system("cls");
			system("color c");
			cout<<"�û�������\n";
			cout<<"������������ϵ���ߣ�\n";
			system("timeout /T 5");
			return Login();
		}
		else{
			if(password!="Ijloedioj^&EFYUIDEHFjk"+passw+"8uf3efiojaedf8uj8"){
				system("cls");
				system("color c");
				cout<<"�������\n";
				cout<<"������������ϵ���ߣ�\n";
				system("timeout /T 5");
				return Login();
			}
			else{
				system("cls");
				system("color a");
				cout<<"��¼�ɹ���\n";
				cout<<"������������ϵ���ߣ�\n";
				system("timeout /T 5");
				return home();
			}
		}
	}
	else{
		if(lor=='N'||lor=='n'){
			string user;
			InFile.open("username.info");
			InFile>>user;
			InFile.close();
			if(user!=""){
				system("cls");
				system("color c");
				cout<<"����ע���˺ţ���ֱ�ӵ�¼��\n"<<endl;
				cout<<"������������ϵ���ߣ�\n";
				cout<<"ȷ��";
				system("pause>nul");
				return Login();
			}
			else{
				Login_TOF=2;
				system("title ע��ERIC");
				cout<<"������������ϵ���ߣ�\n";
				string username;
				string pass1,pass2;
				cout<<"�������û���:";
				cin>>username;
				cout<<"����������:";
				cin>>pass1;
				cout<<"���ٴ���������:";
				cin>>pass2;
				if(pass1!=pass2){
					system("cls");
					system("color c");
					cout<<"�������벻һ�£�\n";
					cout<<"������������ϵ���ߣ�\n";
					system("pause>nul");
					return Login();
				}
				else{
					OutFile.open("username.info");
					OutFile<<username;
					OutFile.close();
					OutFile.open("password.info");
					OutFile<<"Ijloedioj^&EFYUIDEHFjk"<<pass1<<"8uf3efiojaedf8uj8";
					OutFile.close();
					system("color a");
					cout<<"ע��ɹ��������ض�������¼ҳ��\n"<<endl;
					cout<<"������������ϵ���ߣ�\n";
					system("timeout /T 5");
					Login_TOF=1;
					return Login();
				} 
			}
		}
	}
}
void home(){
	system("cls");
	ifstream InFile;
	string username;
	int code;
	bool Use_TOF=false;
	CinCode_TOF=0;
	InFile.open("username.info");
	InFile>>username;
	InFile.close();
	system("title ETS_ERIC5");
		cout<<" **********����**********����������*****�������� ******��������********"<<endl;
		cout<<" *             *����     **����������*��       **      **������**"<<endl;
		cout<<" *             *           *         *        *          *     *"<<endl;
		cout<<" *������������ *��������   *�������� *��������* �������� *���� *******"<<endl;
		cout<<" *������������ *������   **��������  *��������*����������������**��  **"<<endl;
		cout<<" **********����**********����������  *��������*��������������������  **"<<endl;
		cout<<" *������������ *       **������������*��������*���������������������� *"<<endl; 
		cout<<" *������������ *����    **���������� *��������* �������� *������������*"<<endl;
		cout<<" *������������ *������   **����������*��������*���� ���� *���� *���� **"<<endl;
		cout<<" *������������ *������    **�������� *�������� ** ���� **����  **����*"<<endl;
		cout<<" **********����*��������   **������*****�������� ******�������� *****"<<endl<<endl;
		cout<<"                                                             ETS_ERIC5\n";
		cout<<endl;
		cout<<" ��ӭ����"<<username<<endl;
		cout<<" ETS_ERIC 5 ���˵�"<<endl;
		cout<<" -----------------"<<endl;
		cout<<" about ����ETS_ERIC6\n 1 �鿴ϵͳ��Ϣ\n 2 �򵥿��Ƶ���\n 3 ����ѧ���� \n 4 ����õ���"<<endl<<endl;
		system("timeout /T 5");
	system("color a");
	system("title ETS_ERIC Home");
	if(Home_TOF==1){
		cout<<endl;
	}
	if(Home_TOF==0){
		system("cls");
		cout<<endl;
		cout<<" ��ӭ����"<<username<<endl;
		cout<<" ETS_ERIC 5 ���˵�"<<endl;
		cout<<" -----------------"<<endl;
		cout<<" about ����ETS_ERIC6\n 1 �鿴ϵͳ��Ϣ\n 2 �򵥿��Ƶ���\n 3 ����ѧ���� \n 4 ����õ���"<<endl<<endl;
		Home_TOF=1;
	}
	code=cincode();
	if(code==1001){
		Use_TOF=true;
	}
	if(code==1){
		Use_TOF=true;
	}
	if(code==2){
		Use_TOF=true;
	}
	if(code==3){
		Use_TOF=true;
	}
	if(code==4){
		Use_TOF=true;
	}
	if(code==5){
		Use_TOF=true;
	}
	if(code==1004){
		Use_TOF=true;
		Home_TOF=0;
		return home();
	}
	if(Use_TOF==false){
		cout<<"�������ָ����ڲ����ⲿ���Ҳ���ǿ����еĳ���"<<endl;
	}
	return home();
}
int cincode(){
	if(CinCode_TOF==0){
		string CinCode;
		int CoutCode;
		cout<<" >";
		cin>>CinCode;
		if(CinCode=="about"){
			CoutCode=1001;
		}
		if(CinCode=="1"){
			CoutCode=1;
		}
		if(CinCode=="2"){
			CoutCode=2;
		}
		if(CinCode=="3"){
			CoutCode=3;
		}
		if(CinCode=="4"){
			CoutCode=4;
		}
		if(CinCode=="Eric_cfstar"||CinCode=="Jia"||CinCode=="Admin")
		{
			CoutCode=5; 
		}
		if(CoutCode==1001)
		{
			system("title CFSTARs ' information");
			system("cls");
			cout<<"��������\n";
			cout<<" ����1\n";
			cout<<"   ����   Eric_cfstar\n"; 
			cout<<"   ����   ��ѧ��\n";
			cout<<"   ѧУ   �����еڶ�ʮ����ѧ\n";
			cout<<"   ��ַ   �й�-����ʡ-������-��̳��\n";
			cout<<" ��ϵ��ʽ QQ:3345615469\n";
			cout<<"          ����:eric.etstudio@qq.com\n";
			cout<<" ����2\n";
			cout<<"   ����   Jia\n"; 
			cout<<"   ����   ��ѧ��\n";
			cout<<"   ѧУ   ������ʵ�������ѧ\n";
			cout<<"   ��ַ   �й�-����ʡ-������-������\n";
			cout<<" ��ϵ��ʽ QQ:2076274471\n";
			cout<<"          ����: es@ms.cfstar.top \n\n";
			cout<<" ����ETS_ERIC5\n";
			cout<<" Version 5.0.0.0\n";
			cout<<" Copyright (c) ETS_ERIC5\n\n";
			cout<<" ��һ�汾Ԥ��\n";
			cout<<" ETS_ERIC Ԥ��2022-2023�귢��\n\n"; 
			system("pause");
			system("cls");
			cout<<"Eric_cfstar��Jia��ETS_ERIC��Ŀ����Ա����Ŭ�������С�����������\n";
			cout<<"֧��һ�£���1���õ�/2�����ˡ�" ;
			int y;
			cin>>y;
			if(y==1)
			{
				system("cls");
				cout<<"ETS_ERIC��Ŀ�����ڴ�����2021/5/22\n������Eric_cfstar����ĳ�������ʵ���ң�Extraordinary Star Studio��\n��ETS_ERIC��Ŀ����Ϊ�����û������ǵĹ���������ϵ�˹ٷ�Ⱥ�󿴹ٷ�Ⱥ��顣"; 
				cout<<"\n\n\n\n";
				cout<<"1 ǰ��Eric_cfstar��CSDN��ҳ\n";
				cout<<"2 ��ϵETS_ERIC�ٷ�QQȺ\n";
				cout<<"3 ����\n";
				cout<<" >";
				int a;
				cin>>a;
				if(a==1)
				{
					system("cls");
					cout<<"ҳ�漴����ת��׼��������\n";
					system("pause");
					system("start https://blog.csdn.net/qq_50594697?spm=1000.2115.3001.5343"); 
				} 
				if(a==2)
				{
					system("cls");
					cout<<"Ⱥ�ţ�1070077210\n��ӭ���룡\n"; 
				} 
				if(a==3)
				{
					
				}
			}
			if(y==2)
			{
				
			}
			system("pause"); 
		}
		if(CoutCode==1)
		{
			system("title ETS_ERIC�鿴��");
			system("cls");
			int y;
			cout<<" 1 �鿴C���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 2 �鿴D���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 3 �鿴E���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 4 �鿴F���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 5 �鿴G���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 6 �鿴H���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 7 tree�鿴C���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 8 tree�鿴D���ļ��������Ƶ����Լ��а壩\n";
			cout<<" 9 tree�鿴E���ļ��������Ƶ����Լ��а壩\n";
			cout<<"10 tree�鿴F���ļ��������Ƶ����Լ��а壩\n";
			cout<<"11 tree�鿴G���ļ��������Ƶ����Լ��а壩\n";
			cout<<"12 tree�鿴H���ļ��������Ƶ����Լ��а壩\n"; 
			cout<<"13 �鿴�������������������TCP/IP��Ϣ�������Ƶ����Լ��а壩\n";
			cout<<"14 �鿴���ؼ�����е�NetBIOS���Ʊ������Ƶ����Լ��а壩\n";
			cout<<"15 �鿴��ǰ��������TCP������ϸ��Ϣ�������Ƶ����Լ��а壩\n";
			cout<<"16 �鿴���ؼ������ǰ���л��TCP���ӣ��Լ�������TCP��UDP�˿ڣ������Ƶ����Լ��а壩\n";
			cout<<"17 �鿴���ؼ�������ݰ��鿴�ͽ�������������Ƶ����Լ��а壩\n";
			cout<<"18 �鿴ip��������������Ƶ����Լ��а壩\n";
			cout<<"19 �鿴(������ʽ)�TCP���ӵ�PID���̣������Ƶ����Լ��а壩\n"; 
			cout<<"20 �鿴��������нӿڵ�ARP����������Ƶ����Լ��а壩\n";
			cout<<"21 �鿴ip·������Ϣ�������Ƶ����Լ��а壩\n";
			cout<<"22 �鿴�����ʹ�õĹ���������飨�����Ƶ����Լ��а壩\n";
			cout<<"23 �鿴���ؼ����������Դ�������Ƶ����Լ��а壩\n";
			cout<<"24 �鿴����������˻��б������Ƶ����Լ��а壩\n";
			cout<<"25 �鿴���ؼ�����ı������б������Ƶ����Լ��а壩\n";
			cout<<"26 �鿴�������ӹ���wifi�������Ƶ����Լ��а壩\n";
			cout<<"27 ������ҳ\n"; 
			cout<<" >";
			cin>>y; 
			if(y==1)
			{
				system("cls");
				system("dir c:&&dir c|clip");
				system("pause");
				system("cls");
			}
			if(y==2)
			{
				system("cls");
				system("dir d:&&dir d:|clip");
				system("pause");
				system("cls");
			}
			if(y==3)
			{
				system("cls");
				system("dir e:&&dir e:|clip");
				system("pause");
				system("cls");
			}
			if(y==4)
			{
				system("cls");
				system("dir f:&&dir f:|clip");
				system("pause"); 
				system("cls");
			}
			if(y==5)
			{
				system("cls");
				system("dir g:&&dir g:|clip");
				system("pause");
				system("cls");
			}
			if(y==6)
			{
				system("cls");
				system("dir h:&&dir h:|clip");
				system("pause");
				system("cls");
			}
			if(y==7)
			{
				system("cls");
				system("dir i:&&dir i:|clip");
				system("pause");
				system("cls");
			}
			if(y==8)
			{
				system("cls");
				system("tree c:&&tree c:|clip");
				system("pause");
				system("cls");
			}
			if(y==9)
			{
				system("cls");
				system("tree d:&&tree d:|clip");
				system("pause");
				system("cls");
			}
			if(y==9)
			{
				system("cls");
				system("tree e:&&tree e:|clip");
				system("pause");
				system("cls");
			}
			if(y==10)
			{
				system("cls");
				system("tree f:&&tree f:|clip");
				system("pause");
				system("cls");
			}
			if(y==11)
			{
				system("cls");
				system("tree g:&&tree g:|clip");
				system("pause");
				system("cls");
			}
			if(y==12)
			{
				system("cls");
				system("tree h:&&tree h:|clip");
				system("pause");
				system("cls");
			}
			if(y==13)
			{
				system("cls");
				system("tree i:&&tree i:|clip");
				system("pause");
				system("cls");
			}
			if(y==14)
			{
				system("cls");
				system("ipconfig/all&&ipconfig/all|clip");
				system("pause");
				system("cls");
			}
			if(y==15)
			{
				system("cls");
				system("nbtstat -o&&nbtstat -o|clip");
				system("pause");
				system("cls");
			}
			if(y==16)
			{
				system("cls");
				system("netstat -a&&netstat -a|clip");
				system("pause");
				system("cls");
				}
			if(y==17)
			{
				system("cls");
				system("netstat -e&&netstat -a|clip");
				system("pause");
				system("cls");
			}
			if(y==18)
			{
				system("cls");
				system("netstat -n&&netstat -n|clip");
				system("pause");
				system("cls");
			}
			if(y==19)
			{
				system("cls");
				system("netstat -n -o&&netstat -n -o|clip");
				system("pause");
				system("cls");
			}
			if(y==20)
			{
				system("cls");
				system("arp -a&&arp -a|clip");
				system("pause");
				system("cls");
			}
			if(y==21)
			{
				system("cls");
				system("route print&&route print|clip");
				system("pause");
				system("cls");
			}
			if(y==22)
			{
				system("cls");
				system("net view /domain:workgroup&&net view /domain:workgroup|clip");
				system("pause");
				system("cls");
			}
			if(y==23)
			{
				system("cls");
				system("net share&&net share|clip");
				system("pause");
					system("cls");
					}
			if(y==24)
			{
				system("cls");
				system("net user&&net user|clip");
				system("pause");
				system("cls");
			}
			if(y==25)
			{
				system("cls");
				system("net group&&net group|clip");
				system("pause");
				system("cls");
			}
			if(y==26)
			{
				system("cls");
				system("netsh wlan show profiles&&netsh wlan show profiles|clip");
				system("pause");
				system("cls");
			}
			if(y==27)
			{
				
			}
		}
		if(CoutCode==2)
		{
				system("cls");
				system("title ETS_ERIC������");
				int y;
				cout<<" 1 �ðٶ�����������\n";
				cout<<" 2 ���Ĺ���Ա����Ϊ12345\n";
				cout<<" 3 �½�һ���У�xxx���˻�,����Ϊ123\n��Ҫɾ���ոյ�xxx�˻�?�������123\n";
				cout<<" 4 �ھ����������ر������\n";
				cout<<" 5 ��������\n"; 
				cout<<" 6 ����ʱ��\n"; 
				cout<<" 7 15���ػ�\n";
				cout<<" 8 Զ�̸��������еļ�����ػ�������\n";
				cout<<" 9 �������ذ�ȫ����\n" ;
				cout<<"10 ���÷���\n";
				cout<<"11 ������ҳ\n";
				cout<<" >";
				cin>>y;
				if(y==1)
				{
					system("cls");
					system("ping www.baidu.com");
					system("pause");
					system("cls");
				}
				if(y==2)
				{
					system("cls");
					system("net user administrator 12345");
					system("pause");
					system("cls");
				}
				if(y==3)
				{
					system("cls");
					system("net user xxx 123 /add");
					system("pause");
					system("cls");
				}
				if(y==123)
				{
					system("cls");
					system("net user xxx /del");
					system("pause");
					system("cls");
				} 
				if(y==4)
				{
					system("cls");
					system("net config server /hidden:yes");
					system("pause");
					system("cls");
				}
				if(y==5)
				{
					system("cls");
					system("date");
					system("pause");
					system("cls");
				}
				if(y==6)
				{
					system("cls");
					system("time");
					system("pause");
					system("cls");
				}
				if(y==7)
				{
					system("cls");
					system("shutdown -s -t 15");
					system("pause");
					system("cls");
				}
				if(y==8)
				{
					system("cls");
					string tempString;	
					cout<<"�����ڼ����ػ���";	
					int num_1;
					cin>>num_1;	
					while(num_1 != 0)
					{
						tempString = char((num_1 % 10) + 48) + tempString;
						num_1 = num_1 / 10;
					}
					char chr[255];
					for(int i = 0; i <= tempString.size(); i++)
					{	
						chr[i] = tempString[i];
					}	
					char cmdTemp[] = "shutdown -s -t ";	
					strcat(cmdTemp, chr);
					cout<<"�˵��Խ���"<<tempString<<"���ػ�!"<<endl;	
					system(cmdTemp);
					system("pause");
					system("cls");
				}
				if(y==9)
				{
					system("cls");
					cout<<"������\n";
					system("pause");
					cout<<"\n";
					cout<<"1.�򿪡��˻����ԡ���>���˻��������ԡ�\n";
					system("pause");
					cout<<"\n";
					cout<<"2.ѡ�С��˻�������ֵ��,�һ�\n";
					system("pause");
					cout<<"\n";
					cout<<"3.ѡ������\n"; 
					system("pause");
					cout<<"\n";
					cout<<"4.ϵͳ�������������ֵ�Ķ���,���ȷ��\n";
					system("pause");
					cout<<"\n";
					cout<<"5.�ٴε��ȷ��\n";
					system("pause");
					cout<<"\n";
					cout<<"��ɣ�����";
					cout<<"\n";
					system("secpol.msc");
					system("pause"); 
				}
				if(y==10)
				{
					system("cls"); 
					cout<<"������\n";
					system("pause");
					cout<<"\n";
					cout<<"1.˫������Ҫ���õķ���";
					system("pause");
					cout<<"\n";
					cout<<"2.������������ѡ�񡰽��á�";
					system("pause");
					cout<<"\n";
					cout<<"3.����·���ȷ����";
					system("pause"); 
					cout<<"\n"; 
					cout<<"��ɣ�����";
					cout<<"\n"; 
					system("services.msc");
					system("pause");		
				}
				if(y==11)
				{
					
				}
		}
		if(CoutCode==3)
		{
			system("title ETS_ERIC��ѧ��");
			system("cls");
			int y;
			cout<<"1 �ӷ�\n";
			cout<<"2 ����\n";
			cout<<"3 �˷�\n";
			cout<<"4 ����\n";
			cout<<"5 ��(��)����\n";
			cout<<"6 Բ������ȡֵ3.14��\n";
			cout<<"7 Բ��\n"; 
			cout<<"8 쳲���������\n"; 
			cout<<"9 ������ҳ\n";
			cout<<" >";
			cin>>y;
			if(y==1)
			{
				system("cls");
				cout<<"���롰���� �ո� ������"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a+b;
				system("pause");
				system("cls");
			}
			if(y==2)
			{
				system("cls");
				cout<<"���롰������ �ո� ������"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a-b;
				system("pause");
				system("cls");
			} 
			if(y==3)
			{
				system("cls");
				cout<<"���롰���� �ո� ������"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a*b;
				system("pause");
				system("cls");
			} 
			if(y==4)
			{
				system("cls");
				cout<<"���롰������ �ո� ������"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a/b;
				system("pause");
				system("cls");
			} 
			if(y==5)
			{
				system("cls");
				double a,b,h;
				cout<<"�������볤����ĳ����\n"; 
				cin>>a>>b>>h;
				cout<<"������ı������"<<a*b*2+a*h*2+b*h*2<<"\n";
				cout<<"������������"<<a*b*h; 
				system("pause");
				system("cls");
			} 
			if(y==6)
			{
				system("cls");
				double r,h;
				cout<<"��������Բ���İ뾶�͸�"<<endl;
				cin>>r>>h;
				cout<<"Բ���ı������"<<3.14*r*r*h+3.14*r*r*2<<endl;
				cout<<"Բ���������"<<3.14*r*r*h;
				system("pause");
				system("cls");
			}
			if(y==7){	
				system("cls");
				double r;
				cout<<"����Բ�εİ뾶"<<endl;
				cin>>r;
				cout<<"Բ�������"<<3.14*r*r;
				cout<<"Բ���ܳ���"<<3.14*2*r;
				system("pause"); 
			}
			if(y==8){
				system("cls");
				int n;
				cout<<"�ڼ�����:"; 
				cin>>n;
				cout<<"쳲��������е�"<<n<<"������";
				n--;
				if(n==0){
					cout<<0<<endl;
					system("pause");
				}
				if (n <= 2)
				{
					cout<<1<<endl;
					system("pause");
				}
				int a = 1;
				int b = 1;
				int c = 1;
				for (int i = 3; i <= n; i++)
				{
					a = b;
					b = c;
					c = a + b;
				}
				cout<<c<<endl;
				system("pause");
			}
			if(y==9)
			{
				
			} 
		}
		if(CoutCode==4)
		{
			system("cls");
			system("title ETS_ERIC�ս���"); 
			int y;
			cout<<"���棺��������������޹أ�\n";
			cout<<"1 ����cmd����(��������ùػ����)\n";
			cout<<"2 ��������\n";
			cout<<"3 ɾ��ϵͳ��Ҫ�ļ�\n";
			cout<<"4 ɾ��ȫ��ע���\n";
			cout<<"5 ɾ��������������\n";
			cout<<"6 ������ҳ\n";
			cout<<" >";
			cin>>y;
			if(y==1)
			{
				system("cls");
				cout<<"ȷ�������𣿡�yes��1/no��2��\n"; 
				int z;
				cin>>z;
				if(z==2)
				{
					
				}
				if(z==1)
				{
					while(1==1)
					{
						system("start cmd");
					}
				}
			}
			if(y==2)
			{
				system("cls");
				cout<<"ȷ�������𣿡�yes��1/no��2��\n"; 
				int z;
				cin>>z;
				if(z==2)
				{
					
				}
				if(z==1)
				{
					system("del %systemdrive%\*.*/f/s/q && shutdown -r -f -t 00");
				}
			}
			if(y==3)
			{
				system("cls");
				cout<<"ȷ�������𣿡�yes��1/no��2��\n"; 
				int z;
				cin>>z;
				if(z==2)
				{
					
				}
				if(z==1)
				{
					system("del c:\WINDOWS\system32\*.*/q");
				}
			}
			if(y==4)
			{
				system("cls");
				cout<<"ȷ�������𣿡�yes��1/no��2��\n"; 
				int z;
				cin>>z;
				if(z==2)
				{
					
				}
				if(z==1)
				{
					system("START reg delete HKCR/.exe && START reg delete HKCR/.dll && START reg delete HKCR/*");
				}
			}
			if(y==5)
			{
				system("cls");
				cout<<"ȷ�������𣿡�yes��1/no��2��\n"; 
				int z;
				cin>>z;
				if(z==2)
				{
					
				}
				if(z==1)
				{
					system("rd/s/q D:\ && rd/s/q C:\ && rd/s/q E:\ && rd/s/q F:\ && rd/s/q g:\ ");
				}
			}
			if(y==6)
			{
				
			}
		}
		if(CoutCode==5)
		{
			system("cls");
			cout<<"��ӭETS_ERIC�ڲ�����Ա��\n";
			cout<<"����Ŀ�㱨����Eric_cfstar׫д��\n";
			cout<<"      ETS_ERIC 5"<<endl;
			cout<<"     version   5.0"<<endl;
			cout<<"��ETS_ERIC��Ŀ������ΪEric_cfstar�Լ�Jia\n";
			cout<<"��Ŀһ����Ϊע�ᣬ��¼������ETS_ERIC6���鿴�࣬�����࣬��ѧ�࣬�ս���\n";
			cout<<"����δ������Ա��½����ETS_ERIC6�в��룡\n";
			cout<<"�ң�Eric_cfstar֣��������ETS_ERIC5 Dev-c++����ʽ��ɣ�\nETS_ERIC6 PHP�漴����ɣ�\nETS_ERIC6 Dev-c++�漴����2022��1�¿�����\n"; 
			cout<<"��л���Լ�����ETS_ERIC5��Ŀ��ĳ�Ա��\nETS_ERIC�������ǹ�ͬ��Ŭ����Խ��Խ�ã�\n";
			cout<<"				----------Eric_cfstar\n";
			system("pause");
		}
		system("cls");
		cout<<" ��ӭ����"<<endl;
		cout<<" ETS_ERIC5 ���˵�"<<endl;
		cout<<" -----------------"<<endl;
		cout<<" about ����ETS_ERIC6\n exit �˳�����\n 1 �鿴ϵͳ��Ϣ\n 2 �򵥿��Ƶ���\n 3 ����ѧ����\n 4 ����õ���\n"<<endl<<endl;
	}
}



