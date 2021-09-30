#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int menu_number;//主菜单序号选择

	//欢迎界面 
	printf("\n\n\n");
	printf("\t*****************************************************************\n\n");
	printf("\t          * 帅哥美女们，欢迎使用信息管理系统 *\n\n");
	printf("\t*▂▃▅▆ ▇SWPU程序设计课程组肖斌为您服务▇ ▆▅▃▂ *\n\n");
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
	printf("\t                            ----------程序设计基础课程组");

	printf("\n\n\n\t");
	system("pause");

	{
		//进入系统主界面



		system("cls");
		printf("\t\t|******学生管理系统******|\n");
		printf("\t\t|.................|\n");
		printf("\t\t|******请选择菜单序列号（0-6）******|\n");
		printf("\t\t|.................|\n");
		printf("\t\t|1---学生信息录入|\n");
		printf("\t\t|2---学生信息排列|\n");
		printf("\t\t|3---学生信息查询|\n");
		printf("\t\t|4---学生分类查询|\n");
		printf("\t\t|5---学生信息删除|\n");
		printf("\t\t|6---学生信息修改|\n");
		printf("\t\t|0---退出|\n");
		printf("\t\t|.................|\n");
		printf("\t\t|************|\n");




		printf("\n\t请选择序号： ");
		scanf("%d", &menu_number);
		//选择 菜单项进入下一项
		system("cls");
		switch (menu_number)
		{
		case 0://退出系统
			printf("退出系统.....\n");
			printf("操作完毕，返回主菜单继续");
			break;
		case 1://学生信息录入 
			printf("学生信息录入.....\n");
			printf("操作完毕，返回主菜单继续");
			break;
		case 2://学生信息排序 
			printf("学生信息排序 .....\n");
			printf("操作完毕，返回主菜单继续");
			break;
		case 3://学生信息查询
			printf("学生信息查询.....\n");
			printf("操作完毕，返回主菜单继续");
			break;
		case 4://学生分类查询
			printf("学生分类查询.....\n");
			printf("操作完毕，返回主菜单继续");
			break;
		case 5://学生信息删除
			printf("退出系统.....\n");
			printf("操作完毕，返回主菜单继续");
			break;
		case 6://学生信息修改
			printf("学生信息修改.....\n");
			printf("操作完毕，返回主菜单继续");
			break;
		default:
			printf("\n\n\t\t输入错误.....\n");
			printf("操作完毕，返回主菜单继续");
			break;
		}
		system("pause");
	}
	return 0;
}
