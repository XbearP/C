
#include <iostream>  //Ԥ����

void Creatfunction1(int); //���庯��ԭ��

int Creatfunction2(int); //���庯��ԭ��

using namespace std;
/**
 * @Author XbearP
 * @FunctionName main
 * @CreateTime 2023/9/21 16:15
 * @brief ��ӡ����
 */
int main() {
    //cout��ӡ�ַ���;
    cout << "first c++";
    //\n����ƶ���һ��
    cout << "come up c++\n";
    //endl����ƶ���һ��
    cout << "bud guy"<<endl;
    cout << "isbud guy"<<endl;
    int nums;
    //��ֵ
    nums=25;
    cout<< nums;
    //����
    cout<<"����һ����";
    cin >>nums;
    //�ַ�ƴ��
    cout<<"�������"<< nums<<endl;
    //���ú���
    Creatfunction2(nums);
    //���ú������к���ֵ
    cout<<Creatfunction2(2);
    return 0;
}
/**
 * @Author XbearP
 * @brief �������������庯��
 * @FunctionName Creatfunction
 * @CreateTime 2023/9/21 16:44
 */
void Creatfunction1(int nums) { //�޷���
    cout<<nums;

}
int Creatfunction2(int nums) {  //�з���
    //������cout��using namespace std;����Ϊȫ��ʹ��
    cout<<nums;
    return nums;
}
