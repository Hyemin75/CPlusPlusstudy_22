#include <iostream>
using namespace std;

int main()
{
    //변수
    /*
        1) 이름 testNum   2) 크기 4byte    3) 값 : 2.8    4) 메모리주소 : 000000C73AB9F5F8
    */

    //float testNum = 2.8f;
    //double testNum1 = 2.8;

    //cout << sizeof(testNum) << endl;
    //cout << &testNum1 << endl;
    //cout << testNum1 << endl;


    // 실습 1. 상대방 이름과 내 이름, 상대방 나이를 입력 받아서 생일축하메세지를 출력하는 프로그램을 만들어보자.

     /*
        예시)
             상대방 이름을 입력하세요.
             __000

             본인의 이름을 입력하세요.
             __ooo

             상대방 나이를 입력하세요.
             _00

             ooo : 000님 00살 생일을 축하합니다.

     */
    /* 
        변수명 이름 규칙
        
     */



    string otherName = "손님";
    string myName = "나";
    int age = 0;

    cout << "상대방의 이름을 입력하세요" << endl;
    cin >> otherName;

    cout << "\n본인의 이름을 입력하세요" << endl;
    cin >> myName;

    cout << "\n상대방의 나이를 입력하세요\n";
    cin >> age;

    cout << "\n" << myName << " : " << otherName << "님" << age << "살 생일을 축하합니다.";

}
