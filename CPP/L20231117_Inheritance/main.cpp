#include <iostream>
#include "Parent.h"
#include "Child.h"
#include "GrandChild.h"
#include <vector>

using namespace std;

int main()
{
	//FChild* MyChild = new FChild();
	//delete MyChild;

	//FParent* MyChild = new FChild();
	//delete MyChild;
	// �θ� ���� �ڽ� ���� �׷���
	// ��ӽ� virtual ����ϴ� ���� �� ���� �ڵ� ó�� �θ� �����ͷ� �ڽ��� �����ϰ� �Ǹ�,
	// �ڽ��� �Ҹ��ڸ� ȣ�� �� ó�� ���� �� �θ� �������̱� ������ �ڽ��� ã�� �ʰ� �θ� �����ϰ� �˴ϴ�.
	// ��, �ڽ��� �������� �ʰ� ��Ƴ��� �Ǵ°̴ϴ�.
	// �׷��� �׻� �Ҹ��ڿ��� virtual �� �ٿ���� �մϴ�.
	// �׷��� �ϸ� �ڽı��� �� ã�Ƶ��� �������ֱ� ������ ���� �Լ��� �׻� �Ҹ��ڿ��� �����ϵ��� �սô�
	
	// ���â
	 //FParent Constructor
	 //FChild Constructor
	 //FParent Destructor

	vector<FParent*> Family;
	Family.push_back(new FChild());
	Family.push_back(new FChild());
	Family.push_back(new FGrandChild());
	Family.push_back(new FGrandChild());
	Family.push_back(new FGrandChild());

	for (int i = 0; i < Family.size(); i++)
	{
		Family[i];
	}

	for (int i = 0; i < Family.size(); i++)
	{
		delete Family[i];
	}

	return 0;
}