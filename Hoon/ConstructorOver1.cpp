#include <iostream>
using namespace std;

class CMyData
{
	public:
		//����Ʈ �����ڴ� ����.
		//�Ű������� int �ϳ��� ������ �Լ� ���� �� ����
		CMyData(int nParam) : m_nData(nParam) {};

		//�Ű������� int �ڷ��� �� ���� ������ �Լ� ���� ����
		CMyData(int x, int y) : m_nData(x + y) {};

		int GetData(void) {return m_nData;}

	private:
		int m_nData;
};

int main()
{
	CMyData a(10);
	CMyData b(3, 4);

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}
