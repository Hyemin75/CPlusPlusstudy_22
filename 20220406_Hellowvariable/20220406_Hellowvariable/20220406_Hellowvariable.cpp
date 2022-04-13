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

 //  cout << "+ : " << left_value + right_value << endl;
 //  cout << "- : " << left_value - right_value << endl;
 //  cout << "% : " << left_value % right_value << endl;
 //  cout << "* : " << left_value * right_value << endl;
 //  cout << "/ : " << left_value / right_value << endl;
 //
 //  left_value = 14;
 //  right_value = 3;
 //
 //  left_value += right_value; //left_value = left_value + right_value + right_value;
 //  cout << "+= : " << left_value << endl; //17
 //
 //  left_value -= right_value;
 //  cout << "-= : " << left_value << endl; //14
 //
 //  left_value *= right_value;
 //  cout << "*= : " << left_value << endl; // 42
 //
 //  left_value /= right_value;
 //  cout << "/= : " << left_value << endl;  // 14
 //
 //  left_value %= right_value;
 //  cout << "%= : " << left_value << endl; // 2


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



      //cout << "나이를 입력하세요" << endl;
      //
      //int age = 0;
      //cin >> age;
      //
      //out << boolalpha;
      //out << "미성년자인가요? : " << (19 >= age) << endl;
      //out << "20세인가요?" << (20 == age) << endl;
      //out << "아홉수인가요?" << (age % 10 == 9) << endl;

        //실습 1. 3 ~ 7 랜덤 출력

       //int rand_num;
       //  
       ////입력 
       //
       ////처리 
       //srand(time(NULL))
       ////rand();  0 ~ 32767 % 5
       //rand_num = 3 + rand() % 5;
       ////3+0, 3+1 , 3+2 .... 3+4
       //cout << "실습1 : " << rand_num << endl;
       //
       ////출력 - 숫자 하나 출력
       //
       //
       //
       //
       //
       //
       ////실습 2. 임의의 랜덤값 사이값 출력
       //
       //// 입력
       //int input_min_number = 0;
       //int input_max_number = 0;
       //
       //cin >> input_min_number;
       //cin >> input_max_number;
       //
       //// 처리
       //rand_num = input_min_number + rnad() %  = 3 + rand() % (input_max_number - input_min_number + 1);
       //
       //
       //
       //// 출력
       //cout << "실습2 : " << rand_num << endl;
       //
       //
       //
       //// 처리
       //int correct_number = rand() % 9 + 1;
       //cout << "미리보는 정답 : " <<  correct_number >> endl;
       //
       //// 입력
       //int  input_quiz_number;
       //cin >> input_quiz_number;
       //
       //
       //// 출력 : true, false
       //(input_quiz_number == correct_number) ? cout << "true" << end1 : cout << "false" << endl;

        /*

          제어문  데이터(타입) / 연산자 / <제어구조>
          1. 조건문 : 특정 조건에 따라서 실행문을 실행할지 안할지 제어 : if / switch
          2. 반복문 : 특정 조건에 따라서 실행문을 일정 횟수만큼 반복 실행 제어 : while / for

          조건문
          1 1) if 문 실행문1이 실행되면 끝, 실행문1이 거짓이면 실행문2 실행, 실행되는 순서는 위에서부터

           if (조건식1)
           {
              실행문1;
           }
           else if (조건식2)
           {
              실행문3;
           }
           else
           {
               실행문2;
           }


           조건문 실습1.
           정수를 하나 입력 받아서
           입력 받은 숫자가 10보다 크면 "입력된 숫자가 10보다 큽니다." 출력
           10이하 9초과이면  "입력된 숫자가 9보다 큽니다." 출력
           9이하 6초과 "6보다 큽니다." 출력
           그 이외에는 "6보다 작거나 같습니다." 출력

           
           2)   switch 문                             // if보다 덜 디테일 ex) 스테이지표시

           switch (정수형 변수)
           {
                case 정수1:
                    실행문1;
                break;
                 case 정수2:
                    실행문2;
                break;
                 case 정수3:
                    실행문3;
                break;
                default:    // 해당하는 정수값이 없을 때
                    실행문4;
                break;
          }


              switch 실습
              당신의 고향은 어디입니까?
              1. 서울 2. 대구 3. 광주 4. 대전 5. 0
              _1

              안녕하세요. 밥은 드셨나요?
              안녕하세요. 밥은 묵읏나
              안녕하세요. 밥은 먹었는가?
              안녕하세요. 밥은 먹은겨?
              5개중에 선택해 주세요(defailt)


              반복문 
              2_1. while문

              //초기식
              while (조건식)
              {
                  실행문;
                  조건식을 바꾸는 실행문; // while문을 중단시키는 첫번째 방법
                  증감식;
                  if (조건식)
                  {
                     break;     //  while문을 중단시키는 두번째 방법
                  }
                  
               
              }


              do-while문  // while문은 한번도 실행되지 않을 수 있고 do-while문은 한번은 반드시 실행한다는 뜻

              do
              {
                  실행문;
              }
              while (조건식);

            
            2_2. for문

            for ( (1)초기식; (2)조건식; (3)증감식;)
            {
               (4)실행문;
            }

            (1) > (2) > (4) > (3) > (2) > (4) > (3) > ...조건식의 결과값이 0이 나올 때까지

           */


            // for문, 구구단 3줄 출력 복습 필수


   



    int input_number1 = 0;
    cout << "실습1 : " << endl;
    cin >> input_number1;

    if (input_number1 > 10)
    {
        cout << "입력된 숫자가 10보다 큽니다." << endl;
    }
    else if (9 < input_number1 ) //  같이 쓰고 싶으면  (~~ && 11 > input_number1) 쓰되 위 조건을 실행하지 못한 것으로 굳이 쓸 필요 x
                                 // 또는 (10 >= input_number1 && input_number1 > 9 )
                                // 사실 IF문에서 중괄호가 없어도 되지만 출력을 두줄 이상 하고싶을때 중괄호가 없으면 ;까지 한줄만 출력 

    {
        cout << "입력된 숫자가 9보다 큽니다." << endl;
    }
    else 
    {
        cout << "6보다 작거나 같습니다." << endl;
    }


    int hello = 0;
    cout << "당신의 고향은 어디입니까?" << endl;
    cout << "1. 서울 2. 광주 3. 대구 4. 대전 5. 제주도" << endl;
    cin >> hello;

    switch (hello)  //break가 없으면 아래 실행문 모두 실행됨
    {
    case 1:
          cout << "안녕하세요.밥은 드셨나요 ? " << endl;
        break;
    case 2:
        cout << "안녕하소.밥은 묵읏는가" << endl;
        break;
    case 3:
        cout << "안녕하신가. 밥은 먹었는가?" << endl;
        break;
    case 4:
        cout << " 안녕하셔유. 밥은 먹은겨?" << endl;
            break;
    case 5:
        cout << " 안녕하수꽝. 밥 먹언?" << endl;
        break;
    default:   
        cout << "5개중에 선택해 주세요" << endl;
        break;
    }


    int hello2 = 0;
        
    cout << "지역을 선택하세요" << endl; 
    cout << "1. 서울 2. 광주 3. 대구 4. 대전 5. 제주도" << endl;
    cin >> hello2;

    if (hello2 == 1)
    {
        cout << "안녕하세요.밥은 드셨나요 ? " << endl;
    }
    else if (hello2 == 2)
    {
        cout << "안녕하소.밥은 묵읏는가" << endl;
    }
    else if (hello2 == 3)
    {
        cout << "안녕하신가. 밥은 먹었는가?" << endl;
    }
    else if (hello2 == 4)
    {
        cout << "안녕하셔유. 밥은 먹은겨?" << endl;
    }
    else if (hello2 == 5)
    {
        cout << " 안녕하수꽝. 밥 먹언?" << endl;
    }
    if (hello2 > 5 && hello2 == 0)
    {
        cout << "5개중에 선택해 주세요" << endl;
    }
    // 입력

    // 처리

    // 출력

    
#pragma region while문 예제
   
   // while문 예제 hello world를 5번 출력하는 프로그램
   int repeat_count1 = 0;
   while (repeat_count1 < 5)
   {
       cout << "hellow world" << endl;
       repeat_count1++;
   
   }
   
   int repeat_count2 = 0;
   while (repeat_count2)
   {
       cout << "hellow world2" << endl;
       repeat_count2++;
   
       if (repeat_count2 >= 5)
       {
           break;
       }
   }
   
   int repeat_count3 = 0;
   while (0) 
   {
       cout << "hellow world3" << endl;
   }
   
   do
   {
       cout << "hellow world3" << endl;
       repeat_count3++; // 증감식
   } 
   while (repeat_count3 == 5);

    //while 문을 써서 정답을 맞출 때 까지 반복되는 프로그램으로 수정해보자

    //실습2 내용

   
   // 처리
   int rand_correct_number = rand() % 9 + 1;
   cout << "미리보는 정답 : " << rand_correct_number << endl;
   
   // 입력

   
   int  repeat_input_quiz_number = -1; // 초기식

   while (repeat_input_quiz_number != rand_correct_number) 
   {
       cout << "숫자를 맞춰 보세요 : ";
       cin >> repeat_input_quiz_number;
       
       (repeat_input_quiz_number == rand_correct_number) ? cout << "true" << endl :
           cout << "false" << endl;

   }

   for (int i = 0; i < 5; i += 2) //or i++ )  // for 문에서는 변수를 의미없이 써도 ㄱㅊ
   { 
       cout << "HellowWorld123" << endl;
   }


   /*
   
    for 문  실습1.
    10부터 1까지 차례대로 출력되는 코드를 작성해보자.
    10
    9
    8
    7
    6
    ...
    2
    1

    실습2. 
    100미만의 3의 배수를 차례대로 출력되는 코드를 작성해 보자.
    3
    6
    9
    ...
    99

    실습3.
    1000미만의 2의 승수를 차례대로 출력되는 코드를 작성해 보자.
    1
    2
    4
    8
    ...
    514
   */




   for (int a = 10; a > 0; a --)
   {
       cout << a << endl;
   }
  

   for (int b = 1; b < 100; b += 3)
   {
       cout << b << endl;
   }


   for (int c = 1; c < 1000; c *= 2)
   {
       cout << c << endl;
   }


   /*
   
   실습4. 
   구구단을 출력해보자.
   4_1. 구구단 2단을 차례대로 출력해보자.
   2 * 1 = 2
   2 * 2 = 4
   2 * 3 = 6
   2 * 4 = 8
   2 * 5 = 10
   2 * 6 = 12
   2 * 7 = 14
   2 * 8 = 16
   2 * 9 = 18

   4_2. 구구단 2~9단을 차례대로 출력해보자
   2단

   3단

   4단

   5단

   ...

   9단

   4_3. 구구단 2단~9단을 다음과 같은 형태로 출력해 보자.
   2단 3단 4단

   5단 6단 7단
    
   8단 9단

   과제 별찍기 
   1)
   *
   **
   ***
   ****
   *****
   
   2) 
       *
      **
     ***
    ****
   *****

   3)
   *****
   ****
   ***
   **
   * 

   4)
   *****
    ****
     ***
      **
       *

    5)
          *
         ***    
        *****
       *******
      *********

    6)
      *********
       *******
        *****
         ***
          *

    7)
          *
         ***
        *****
       *******
      *********
       *******
        *****
         ***
          *

   */


   //실습 4_1.
   int e = 2;
   cout << "2단" << endl;
   for (int d = 1; d < 10; d ++)
   {
       cout << e << "X" << d << " = " << e * d << endl;
   }


   //실습 4_2.

   int f = 0;
   int g = 0;

   for (f = 2; f < 10; f++)
   {
       cout << endl;
       cout << f << "단" << endl;
       for (g = 1; g < 10; g++)
       {
           cout << f << " * " << g << " = " << f * g << endl;

       }

   }

   // 실습 4_3

  for (int h = 1; h < 4; h++)
      for (int j = 1; j < 10; j++)
          for (k = 3 * h - 2; k < 3 * h  1; k++ )
      {
          cout << h << " 단" << endl;
          cout << h << " * " << j << " = " << h * j << endl;
  }



  for (int d = 2; d < 10; d ++ 1)
  {
      cout << d << "단" << endl;
      for (e = 1; e < 20; e += 2)
      { 
 
      }
  }
 









}






 



