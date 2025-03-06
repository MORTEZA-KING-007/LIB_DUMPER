# include <iostream>
# include <vector>
# include <ctime>

# define AUTHORMORTEZA ALIZADA;
# define TOOL_NAME DUMPER TOOL;

using namespace std;



void set_style() {
	long t = time(0);
	string time = "";

	time += ctime(&t);

	int index = time.find(":");

	string hour;
	hour = time[index-2];
	hour += time[index-1];

	string minute;
	minute = time[index+1];
	minute += time[index+2];

	string second;
	second = time[index+4];
	second += time[index+5];

	vector <string> data = {hour, minute, second};
	vector <vector <int>> int_time = {
		{stoi(hour), stoi(minute), stoi(second)}
	};
	system("apt install figlet");
	system("clear");
	system("figlet MORTEZA");
	cout << "==================================================" << endl;
	cout << " [✓] AUTHOR            : MORTEZA ALIZADH" << endl;
	cout << " [✓] GITHUB            : MORTEZA-KING-007" << endl;
	cout << " [✓] TODAY TIME        : " << hour << ":" << minute << ":" << second << endl;
	cout << "==================================================" << endl;
	cout << "[✓] Enter your lib path :-> ";
	string path;
	getline(cin, path);

	if (true) {
		system("apt install radare2 -y && clear");
		string cmd ="rabin2 -s "+path+" > /sdcard/dumped_lib.txt";
		system(cmd.c_str());
	}
	cout << "==================================================" << endl;
	cout << "[✓] Lib you put its path dumped and saved successfully!" << endl;
	cout << "==================================================" << endl;
}



int main () {

	set_style();

	return 0;
}
