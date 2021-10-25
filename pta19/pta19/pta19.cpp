#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 int main()
{
	int m, n;
	int m_cup, n_cup, ret;

	scanf("%d %d", &m, &n);
	if (m > 0 && n > 0)
	{
		m_cup = m;
		n_cup = n;
		ret = m_cup % n_cup;
		while (ret != 0)
		{
			m_cup = n_cup;
			n_cup = ret;
			ret = m_cup % n_cup;
		}
		printf("%d", n_cup);
		printf(" %d", m * n / n_cup);
	}

}


