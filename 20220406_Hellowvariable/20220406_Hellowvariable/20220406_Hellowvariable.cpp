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



    //string otherName = "손님";
    //string myName = "나";
    //int age = 0;
    //
    //cout << "상대방의 이름을 입력하세요" << endl;
    //cin >> otherName;
    //
    //cout << "\n본인의 이름을 입력하세요" << endl;
    //cin >> myName;
    //
    //cout << "\n상대방의 나이를 입력하세요\n";
    //cin >> age;
    //
    //cout << "\n" << myName << " : " << otherName << "님" << age << "살 생일을 축하합니다.";

    /*
    연산자
    데이터를 가공(연산)하는 모든 명령에 필요한 것들
    1) 어떤 종류의 연산자들이 있는지?
    2) 우선 순위 : 어떤 순서로 연산이 진행되는지?
    3) 결합 순서 : 좌측부터 연산하는 연산자, 우측부터 연산하는 연산자

    1. 사칙연산 : 산술연산자 (좌측부터 연산)
    + : 더하기
    - : 빼기
    * : 곱하기
    / : 나누기    11 / 3 => 3
    % : 나머지    11 % 3 => 2

    *, /, % > +, -

    2. 대입연산자 (우측부터 연산)
    = : 왼쪽항에 오른쪽 항의 값을 대입한다.(복사한다)
   
    3. 복합대입연산자(우측부터 연산)   <- 값이 나오는게 아닌 좌측항에 씌워지는 것
    += : a(좌측항), b(우측항);  a += b; => a = a + b; 
    -= : a -= b;    => a = a - b;
    *= : a *= b;    => a = a * b;
    /= : a /= b;    => a = a / b;
    %= : a %= b;    => a = a % b; (a와 b는 정수형타입이여야 한다)

    4.증감연산자
    특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용한다.
    변수의 앞이나 뒤에 ++ or -- 를 붙여서 사용한다.(위치에따라 연산 순서가 바뀌어 결과값이 변할 수 있다.)

    5. 관계연산자
    두 값을 비교한 결과가 참(1(숫자), true)인지 거짓(0(제로), folse)인지 반환하는 연산자

    < : a < b : 왼쪽 항의 값이 오른쪽 항의 값보다 작으면 참을 반환한다.
    > : a > b : 왼쪽 항의 값이 오른쪽 항의 값보다 크면 참을 반환한다.
    <= : 왼쪽항의 값이  오른쪽 항의 값보다 작거나 같으면 참을 반환한다.
    >= : 왼쪽항의 값이  오른쪽 항의 값보다 크거나 같으면 참을 반환한다.
    == : 왼쪽항의 값과 오른쪽 항의 값이 같을 때, 참을 반환한다.
    != : 왼쪽항의 값과 오른쪽 항의 값이 다를 때, 참을 반환한다.

    */


    int left_value = 14;
    int right_value = 3;
    
    //left_value++;   // 15
    //cout << left_value << endl;
    //++left_value;   // 16
    //cout << left_value << endl;

    //left_value++;   // 15
    //cout << left_value++ << endl; // 출력 : 14 메모리 15
    //++left_value;   // 16
    //cout << ++left_value << endl; // 출력 : 16 메모리 16

    cout << "+ : " << left_value + right_value << endl;
    cout << "- : " << left_value - right_value << endl;
    cout << "% : " << left_value % right_value << endl;
    cout << "* : " << left_value * right_value << endl;
    cout << "/ : " << left_value / right_value << endl;

    left_value = 14;
    right_value = 3;

    left_value += right_value; //left_value = left_value + right_value + right_value;
    cout << "+= : " << left_value << endl; //17

    left_value -= right_value;
    cout << "-= : " << left_value << endl; //14

    left_value *= right_value;
    cout << "*= : " << left_value << endl; // 42

    left_value /= right_value;
    cout << "/= : " << left_value << endl;  // 14

    left_value %= right_value;
    cout << "%= : " << left_value << endl; // 2


    //내가 만든것
    //cout << "+= : " << (left_value += right_value) << endl;
    //left_value = ;
    //cout << "-= : " << (left_value -= right_value) << endl;
    //left_value = ;
    //cout << "*= : " << (left_value *= right_value) << endl;
    //left_value = ;
    //cout << "/= : " << (left_value /= right_value) << endl;
    //left_value = ;
    //cout << "%= : " << (left_value %= right_value) << endl;
    

    //변수를 바꾸고 싶어서 사용 변수를 바꾸고 싶지 않으면 대입연산자를 쓰면x 

   /* 
      int right_value = 0; 로 설정할 경우 0으로 나누는 것으로 런타임에러
   */

   /*

         실습
         고객의 나이를 입력받아서 미성년자(19세 이하)이면 true를 출력
         성인이면 false를 출력

         아까 입력 받은 나이를 기준으로, 주민등록증 발급대상(20살만)이면 true를 아니면
         false를 출력.

         +입력받은 나이가 아홉수(1의 자리가 9인수)인지 확인해서 true, false를 출력

      */

 

   cout << "나이를 입력하세요" << endl;

   int age = 0;
   cin >> age;

  cout << boolalpha;
  cout << "미성년자인가요? : " << (19 >= age) << endl;
  cout << "20세인가요?" << (20 == age) << endl;
  cout << "아홉수인가요?" << (age % 10 == 9) << endl;



   

}