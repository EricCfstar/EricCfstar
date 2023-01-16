#include<bits/stdc++.h>
using namespace std;
int Login_TOF=0,CinCode_TOF=0,Home_TOF=0;
void Login();
void home();
int cincode();
int main(){
	ofstream OutFile;
	ifstream InFile;
	system("title 欢迎使用ETS_ERIC5");
	cout<<"--------------------------"<<endl;
	cout<<"      ETS_ERIC 5"<<endl;
	cout<<"     version   5.0"<<endl;
	cout<<" --------------------------"<<endl<<endl;
	cout<<" 按任意键进入ETS_ERIC主程序...";
	system("pause>nul");
	Login();
	return 0;
}
void Login(){
	ofstream OutFile;
	ifstream InFile;
	system("color f0");
	system("cls");
	system("title 登录/注册ERIC");
	char lor;
	if(Login_TOF==0){
		cout<<"登录(Y)还是注册(N)？[Y/N]\n";
		cout<<"忘记密码请联系作者！\n";
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
		system("title 登录ERIC");
		string username,usname;
		string password,passw;
		InFile.open("username.info");
		InFile>>username;
		InFile.close();
		InFile.open("password.info");
		InFile>>password;
		InFile.close();
		cout<<"请输入用户名:";
		cin>>usname;
		cout<<"请输入密码:";
		cin>>passw;
		if(usname!=username){
			system("cls");
			system("color c");
			cout<<"用户名错误！\n";
			cout<<"忘记密码请联系作者！\n";
			system("timeout /T 5");
			return Login();
		}
		else{
			if(password!="Ijloedioj^&EFYUIDEHFjk"+passw+"8uf3efiojaedf8uj8"){
				system("cls");
				system("color c");
				cout<<"密码错误！\n";
				cout<<"忘记密码请联系作者！\n";
				system("timeout /T 5");
				return Login();
			}
			else{
				system("cls");
				system("color a");
				cout<<"登录成功！\n";
				cout<<"忘记密码请联系作者！\n";
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
				cout<<"您已注册账号，请直接登录！\n"<<endl;
				cout<<"忘记密码请联系作者！\n";
				cout<<"确定";
				system("pause>nul");
				return Login();
			}
			else{
				Login_TOF=2;
				system("title 注册ERIC");
				cout<<"忘记密码请联系作者！\n";
				string username;
				string pass1,pass2;
				cout<<"请输入用户名:";
				cin>>username;
				cout<<"请输入密码:";
				cin>>pass1;
				cout<<"请再次输入密码:";
				cin>>pass2;
				if(pass1!=pass2){
					system("cls");
					system("color c");
					cout<<"密码输入不一致！\n";
					cout<<"忘记密码请联系作者！\n";
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
					cout<<"注册成功，正在重定向至登录页面\n"<<endl;
					cout<<"忘记密码请联系作者！\n";
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
		cout<<" **********　　**********　　　　　*****　　　　 ******　　　　********"<<endl;
		cout<<" *             *　　     **　　　　　*　       **      **　　　**"<<endl;
		cout<<" *             *           *         *        *          *     *"<<endl;
		cout<<" *　　　　　　 *　　　　   *　　　　 *　　　　* 　　　　 *　　 *******"<<endl;
		cout<<" *　　　　　　 *　　　   **　　　　  *　　　　*　　　　　　　　**　  **"<<endl;
		cout<<" **********　　**********　　　　　  *　　　　*　　　　　　　　　　  **"<<endl;
		cout<<" *　　　　　　 *       **　　　　　　*　　　　*　　　　　　　　　　　 *"<<endl; 
		cout<<" *　　　　　　 *　　    **　　　　　 *　　　　* 　　　　 *　　　　　　*"<<endl;
		cout<<" *　　　　　　 *　　　   **　　　　　*　　　　*　　 　　 *　　 *　　 **"<<endl;
		cout<<" *　　　　　　 *　　　    **　　　　 *　　　　 ** 　　 **　　  **　　*"<<endl;
		cout<<" **********　　*　　　　   **　　　*****　　　　 ******　　　　 *****"<<endl<<endl;
		cout<<"                                                             ETS_ERIC5\n";
		cout<<endl;
		cout<<" 欢迎您，"<<username<<endl;
		cout<<" ETS_ERIC 5 主菜单"<<endl;
		cout<<" -----------------"<<endl;
		cout<<" about 关于ETS_ERIC6\n 1 查看系统信息\n 2 简单控制电脑\n 3 简单数学计算 \n 4 毁灭该电脑"<<endl<<endl;
		system("timeout /T 5");
	system("color a");
	system("title ETS_ERIC Home");
	if(Home_TOF==1){
		cout<<endl;
	}
	if(Home_TOF==0){
		system("cls");
		cout<<endl;
		cout<<" 欢迎您，"<<username<<endl;
		cout<<" ETS_ERIC 5 主菜单"<<endl;
		cout<<" -----------------"<<endl;
		cout<<" about 关于ETS_ERIC6\n 1 查看系统信息\n 2 简单控制电脑\n 3 简单数学计算 \n 4 毁灭该电脑"<<endl<<endl;
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
		cout<<"您输入的指令不是内部或外部命令，也不是可运行的程序。"<<endl;
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
			cout<<"关于作者\n";
			cout<<" 作者1\n";
			cout<<"   姓名   Eric_cfstar\n"; 
			cout<<"   工作   中学生\n";
			cout<<"   学校   常州市第二十四中学\n";
			cout<<"   地址   中国-江苏省-常州市-金坛区\n";
			cout<<" 联系方式 QQ:3345615469\n";
			cout<<"          邮箱:eric.etstudio@qq.com\n";
			cout<<" 作者2\n";
			cout<<"   姓名   Jia\n"; 
			cout<<"   工作   中学生\n";
			cout<<"   学校   常州市实验初级中学\n";
			cout<<"   地址   中国-江苏省-常州市-天宁区\n";
			cout<<" 联系方式 QQ:2076274471\n";
			cout<<"          邮箱: es@ms.cfstar.top \n\n";
			cout<<" 关于ETS_ERIC5\n";
			cout<<" Version 5.0.0.0\n";
			cout<<" Copyright (c) ETS_ERIC5\n\n";
			cout<<" 下一版本预告\n";
			cout<<" ETS_ERIC 预计2022-2023年发布\n\n"; 
			system("pause");
			system("cls");
			cout<<"Eric_cfstar与Jia等ETS_ERIC项目组人员正在努力开发中。。。。。。\n";
			cout<<"支持一下？【1：好的/2：不了】" ;
			int y;
			cin>>y;
			if(y==1)
			{
				system("cls");
				cout<<"ETS_ERIC项目开启于创建于2021/5/22\n它来自Eric_cfstar创办的超凡星曜实验室（Extraordinary Star Studio）\n该ETS_ERIC项目初衷为帮助用户简化他们的工作，请联系此官方群后看官方群简介。"; 
				cout<<"\n\n\n\n";
				cout<<"1 前往Eric_cfstar的CSDN主页\n";
				cout<<"2 联系ETS_ERIC官方QQ群\n";
				cout<<"3 返回\n";
				cout<<" >";
				int a;
				cin>>a;
				if(a==1)
				{
					system("cls");
					cout<<"页面即将跳转，准备好了吗？\n";
					system("pause");
					system("start https://blog.csdn.net/qq_50594697?spm=1000.2115.3001.5343"); 
				} 
				if(a==2)
				{
					system("cls");
					cout<<"群号：1070077210\n欢迎加入！\n"; 
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
			system("title ETS_ERIC查看类");
			system("cls");
			int y;
			cout<<" 1 查看C盘文件（并复制到电脑剪切板）\n";
			cout<<" 2 查看D盘文件（并复制到电脑剪切板）\n";
			cout<<" 3 查看E盘文件（并复制到电脑剪切板）\n";
			cout<<" 4 查看F盘文件（并复制到电脑剪切板）\n";
			cout<<" 5 查看G盘文件（并复制到电脑剪切板）\n";
			cout<<" 6 查看H盘文件（并复制到电脑剪切板）\n";
			cout<<" 7 tree查看C盘文件（并复制到电脑剪切板）\n";
			cout<<" 8 tree查看D盘文件（并复制到电脑剪切板）\n";
			cout<<" 9 tree查看E盘文件（并复制到电脑剪切板）\n";
			cout<<"10 tree查看F盘文件（并复制到电脑剪切板）\n";
			cout<<"11 tree查看G盘文件（并复制到电脑剪切板）\n";
			cout<<"12 tree查看H盘文件（并复制到电脑剪切板）\n"; 
			cout<<"13 查看计算机中所有适配器的TCP/IP信息（并复制到电脑剪切板）\n";
			cout<<"14 查看本地计算机中的NetBIOS名称表（并复制到电脑剪切板）\n";
			cout<<"15 查看当前计算机活动的TCP连接详细信息（并复制到电脑剪切板）\n";
			cout<<"16 查看本地计算机当前所有活动的TCP连接，以及侦听的TCP和UDP端口（并复制到电脑剪切板）\n";
			cout<<"17 查看本地计算机数据包查看和接收情况（并复制到电脑剪切板）\n";
			cout<<"18 查看ip连接情况（并复制到电脑剪切板）\n";
			cout<<"19 查看(数字形式)活动TCP连接的PID进程（并复制到电脑剪切板）\n"; 
			cout<<"20 查看计算机所有接口的ARP缓存表（并复制到电脑剪切板）\n";
			cout<<"21 查看ip路由器信息（并复制到电脑剪切板）\n";
			cout<<"22 查看计算机使用的工作域或工作组（并复制到电脑剪切板）\n";
			cout<<"23 查看本地计算机共享资源（并复制到电脑剪切板）\n";
			cout<<"24 查看计算机所有账户列表（并复制到电脑剪切板）\n";
			cout<<"25 查看本地计算机的本地组列表（并复制到电脑剪切板）\n";
			cout<<"26 查看所有连接过的wifi（并复制到电脑剪切板）\n";
			cout<<"27 返回主页\n"; 
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
				system("title ETS_ERIC控制类");
				int y;
				cout<<" 1 用百度来测试网速\n";
				cout<<" 2 更改管理员密码为12345\n";
				cout<<" 3 新建一个叫：xxx的账户,密码为123\n想要删除刚刚的xxx账户?输入序号123\n";
				cout<<" 4 在局域网中隐藏本计算机\n";
				cout<<" 5 更改日期\n"; 
				cout<<" 6 更改时间\n"; 
				cout<<" 7 15秒后关机\n";
				cout<<" 8 远程给局域网中的计算机关机或重启\n";
				cout<<" 9 启动本地安全设置\n" ;
				cout<<"10 禁用服务\n";
				cout<<"11 返回主页\n";
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
					cout<<"您想在几秒后关机：";	
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
					cout<<"此电脑将在"<<tempString<<"秒后关机!"<<endl;	
					system(cmdTemp);
					system("pause");
					system("cls");
				}
				if(y==9)
				{
					system("cls");
					cout<<"方法：\n";
					system("pause");
					cout<<"\n";
					cout<<"1.打开“账户策略”—>“账户锁定策略”\n";
					system("pause");
					cout<<"\n";
					cout<<"2.选中“账户锁定阈值”,右击\n";
					system("pause");
					cout<<"\n";
					cout<<"3.选中属性\n"; 
					system("pause");
					cout<<"\n";
					cout<<"4.系统弹出“建议的数值改动”,点击确定\n";
					system("pause");
					cout<<"\n";
					cout<<"5.再次点击确定\n";
					system("pause");
					cout<<"\n";
					cout<<"完成！！！";
					cout<<"\n";
					system("secpol.msc");
					system("pause"); 
				}
				if(y==10)
				{
					system("cls"); 
					cout<<"方法：\n";
					system("pause");
					cout<<"\n";
					cout<<"1.双击你想要禁用的服务";
					system("pause");
					cout<<"\n";
					cout<<"2.在启动类型中选择“禁用”";
					system("pause");
					cout<<"\n";
					cout<<"3.点击下方“确定”";
					system("pause"); 
					cout<<"\n"; 
					cout<<"完成！！！";
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
			system("title ETS_ERIC数学类");
			system("cls");
			int y;
			cout<<"1 加法\n";
			cout<<"2 减法\n";
			cout<<"3 乘法\n";
			cout<<"4 除法\n";
			cout<<"5 长(正)方体\n";
			cout<<"6 圆柱（π取值3.14）\n";
			cout<<"7 圆形\n"; 
			cout<<"8 斐波拉契数列\n"; 
			cout<<"9 返回主页\n";
			cout<<" >";
			cin>>y;
			if(y==1)
			{
				system("cls");
				cout<<"输入“加数 空格 加数”"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a+b;
				system("pause");
				system("cls");
			}
			if(y==2)
			{
				system("cls");
				cout<<"输入“被减数 空格 减数”"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a-b;
				system("pause");
				system("cls");
			} 
			if(y==3)
			{
				system("cls");
				cout<<"输入“乘数 空格 乘数”"<<endl;
				double a,b;
				cin>>a>>b;
				cout<<a*b;
				system("pause");
				system("cls");
			} 
			if(y==4)
			{
				system("cls");
				cout<<"输入“被除数 空格 除数”"<<endl;
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
				cout<<"依次输入长方体的长宽高\n"; 
				cin>>a>>b>>h;
				cout<<"长方体的表面积是"<<a*b*2+a*h*2+b*h*2<<"\n";
				cout<<"长方体的体积是"<<a*b*h; 
				system("pause");
				system("cls");
			} 
			if(y==6)
			{
				system("cls");
				double r,h;
				cout<<"依次输入圆柱的半径和高"<<endl;
				cin>>r>>h;
				cout<<"圆柱的表面积是"<<3.14*r*r*h+3.14*r*r*2<<endl;
				cout<<"圆柱的体积是"<<3.14*r*r*h;
				system("pause");
				system("cls");
			}
			if(y==7){	
				system("cls");
				double r;
				cout<<"输入圆形的半径"<<endl;
				cin>>r;
				cout<<"圆的面积是"<<3.14*r*r;
				cout<<"圆的周长是"<<3.14*2*r;
				system("pause"); 
			}
			if(y==8){
				system("cls");
				int n;
				cout<<"第几个数:"; 
				cin>>n;
				cout<<"斐波拉契数列第"<<n<<"个数是";
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
			system("title ETS_ERIC终结类"); 
			int y;
			cout<<"警告：电脑损毁于作者无关！\n";
			cout<<"1 无限cmd弹窗(程序可以用关机解除)\n";
			cout<<"2 死亡蓝屏\n";
			cout<<"3 删除系统重要文件\n";
			cout<<"4 删除全部注册表\n";
			cout<<"5 删除电脑所有数据\n";
			cout<<"6 返回主页\n";
			cout<<" >";
			cin>>y;
			if(y==1)
			{
				system("cls");
				cout<<"确定运行吗？【yes：1/no：2】\n"; 
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
				cout<<"确定运行吗？【yes：1/no：2】\n"; 
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
				cout<<"确定运行吗？【yes：1/no：2】\n"; 
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
				cout<<"确定运行吗？【yes：1/no：2】\n"; 
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
				cout<<"确定运行吗？【yes：1/no：2】\n"; 
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
			cout<<"欢迎ETS_ERIC内部管理员！\n";
			cout<<"该项目汇报：（Eric_cfstar撰写）\n";
			cout<<"      ETS_ERIC 5"<<endl;
			cout<<"     version   5.0"<<endl;
			cout<<"此ETS_ERIC项目制作人为Eric_cfstar以及Jia\n";
			cout<<"项目一共分为注册，登录，关于ETS_ERIC6，查看类，控制类，数学类，终结类\n";
			cout<<"其余未参与人员将陆续在ETS_ERIC6中参与！\n";
			cout<<"我，Eric_cfstar郑重宣布：ETS_ERIC5 Dev-c++版正式完成！\nETS_ERIC6 PHP版即将完成！\nETS_ERIC6 Dev-c++版即将在2022年1月开启！\n"; 
			cout<<"感谢您以及所有ETS_ERIC5项目组的成员！\nETS_ERIC将在我们共同的努力下越办越好！\n";
			cout<<"				----------Eric_cfstar\n";
			system("pause");
		}
		system("cls");
		cout<<" 欢迎您，"<<endl;
		cout<<" ETS_ERIC5 主菜单"<<endl;
		cout<<" -----------------"<<endl;
		cout<<" about 关于ETS_ERIC6\n exit 退出程序\n 1 查看系统信息\n 2 简单控制电脑\n 3 简单数学计算\n 4 毁灭该电脑\n"<<endl<<endl;
	}
}



