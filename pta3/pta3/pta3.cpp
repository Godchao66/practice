#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int menu_number;//���˵����ѡ��

	//��ӭ���� 
	printf("\n\n\n");
	printf("\t*****************************************************************\n\n");
	printf("\t          * ˧����Ů�ǣ���ӭʹ����Ϣ����ϵͳ *\n\n");
	printf("\t*�y�z�|�} �~SWPU������ƿγ���Ф��Ϊ������~ �}�|�z�y *\n\n");
	printf("\t              *      *           *      *\n");
	printf("\t             *  *  *  *         *  *  *  *\n");
	printf("\t            *    *     *       *    *     *                  *\n");
	printf("\t           *            *     *            *                 **\n");
	printf("\t*****************************************************************\n");
	printf("\t            *          *       *          *                  **\n");
	printf("\t             *        *         *        *                   *\n");
	printf("\t              *      *           *      *\n");
	printf("\t                 **                 ** \n");
	printf("\t          \n");
	printf("\t                            ----------������ƻ����γ���");

	printf("\n\n\n\t");
	system("pause");

	{
		//����ϵͳ������



		system("cls");
		printf("\t\t|******ѧ������ϵͳ******|\n");
		printf("\t\t|.................|\n");
		printf("\t\t|******��ѡ��˵����кţ�0-6��******|\n");
		printf("\t\t|.................|\n");
		printf("\t\t|1---ѧ����Ϣ¼��|\n");
		printf("\t\t|2---ѧ����Ϣ����|\n");
		printf("\t\t|3---ѧ����Ϣ��ѯ|\n");
		printf("\t\t|4---ѧ�������ѯ|\n");
		printf("\t\t|5---ѧ����Ϣɾ��|\n");
		printf("\t\t|6---ѧ����Ϣ�޸�|\n");
		printf("\t\t|0---�˳�|\n");
		printf("\t\t|.................|\n");
		printf("\t\t|************|\n");




		printf("\n\t��ѡ����ţ� ");
		scanf("%d", &menu_number);
		//ѡ�� �˵��������һ��
		system("cls");
		switch (menu_number)
		{
		case 0://�˳�ϵͳ
			printf("�˳�ϵͳ.....\n");
			printf("������ϣ��������˵�����");
			break;
		case 1://ѧ����Ϣ¼�� 
			printf("ѧ����Ϣ¼��.....\n");
			printf("������ϣ��������˵�����");
			break;
		case 2://ѧ����Ϣ���� 
			printf("ѧ����Ϣ���� .....\n");
			printf("������ϣ��������˵�����");
			break;
		case 3://ѧ����Ϣ��ѯ
			printf("ѧ����Ϣ��ѯ.....\n");
			printf("������ϣ��������˵�����");
			break;
		case 4://ѧ�������ѯ
			printf("ѧ�������ѯ.....\n");
			printf("������ϣ��������˵�����");
			break;
		case 5://ѧ����Ϣɾ��
			printf("�˳�ϵͳ.....\n");
			printf("������ϣ��������˵�����");
			break;
		case 6://ѧ����Ϣ�޸�
			printf("ѧ����Ϣ�޸�.....\n");
			printf("������ϣ��������˵�����");
			break;
		default:
			printf("\n\n\t\t�������.....\n");
			printf("������ϣ��������˵�����");
			break;
		}
		system("pause");
	}
	return 0;
}
