#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;


void VectorCreate()
{
	int m, n;
	cout << "请输入行和列：";
	cin >> m >> n;

	//注意下面这一行：vector <int后两个 "> "之间要有空格！否则会被认为是重载 "> > "。 
	vector<vector<int> >  p(m, vector<int>(n));

	cout << "请输入数据：";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> p[i][j];

	cout << "输出数据：" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(3) << p[i][j];
		cout << endl;
	}

}


int main() {

	VectorCreate();

	getchar();
	return 0;
}