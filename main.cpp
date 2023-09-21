
#include <iostream>  //预处理

void Creatfunction1(int); //定义函数原型

int Creatfunction2(int); //定义函数原型

using namespace std;
/**
 * @Author XbearP
 * @FunctionName main
 * @CreateTime 2023/9/21 16:15
 * @brief 打印方法
 */
int main() {
    //cout打印字符串;
    cout << "first c++";
    //\n光标移动下一行
    cout << "come up c++\n";
    //endl光标移动下一行
    cout << "bud guy"<<endl;
    cout << "isbud guy"<<endl;
    int nums;
    //赋值
    nums=25;
    cout<< nums;
    //输入
    cout<<"输入一个数";
    cin >>nums;
    //字符拼接
    cout<<"输入参数"<< nums<<endl;
    //调用函数
    Creatfunction2(nums);
    //调用函数且有函数值
    cout<<Creatfunction2(2);
    return 0;
}
/**
 * @Author XbearP
 * @brief 创建函数，定义函数
 * @FunctionName Creatfunction
 * @CreateTime 2023/9/21 16:44
 */
void Creatfunction1(int nums) { //无返回
    cout<<nums;

}
int Creatfunction2(int nums) {  //有返回
    //采用了cout将using namespace std;设置为全局使用
    cout<<nums;
    return nums;
}
