/*
        & << 주소접근

        boolean 타입
        bool is_alive = 5 > 3;  <1 출력될 것         ture or false; (참 거짓 둘중 하나) 1byte


       배열(자료구조)
       같은 데이터타입의 여려 변수를 하나의 묶음으로 나타낸 것.

       배열의 데이터타입에 대한 동일한 크기로 메모리상에 "연속된 공간"이 할당된다.
       배열명이 메모리 시작 주소이다.

       메모리는 1차원적이다

       2차원 배열 및 다차원배열
       배열이 (개념적으로) 2중으로, 다중으로 구성되어 있는 것.

       1차원 배열 : int student_nums[5];    // 5개의 int
         -> 5명의 학생이 있다
       2차원 배열 : int student_nums[3][5];  // 15개의 int
          -> 3개의 반에 각각 5명의 학생이 있다.
       3차원 배열 : int student_num[3][5][7]  //

       (엔터 없이) 문자 하나를 입력받는 방법
       _getch(); 

*/




#include <iostream>
using namespace std;
#include <string>
#include <conio.h>

int main()
{



    /*
   콘솔용 탈출게임
   10 * 10 크기의 맵을 구성한다.(2차원 배열)
   플레이어(0, 0)가 존재한다.
   탈출지점이 존재한다.
   WASD 키입력을 통해 플레이어를 이동시킨다.
   탈출지점은 (0, 0)을 제외하고 랜덤 설정
   0가 E에 도달하면 "탈출에 성공했습니다." 프로그램 종료


   #0########
   ##########
   ##########
   ##########
   ##########
   ##########
   ##########
   ######E###
   ##########
   ##########

   system("cls");

   */

    char map[10][10];
    int player_X = 0;  // 가로
    int player_Y = 0;  // 세로
    int exit_X = 0;
    int exit_Y = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            map[i][j] = '#';
        }
    }

    srand(time(NULL));
    exit_Y = rand() % 10;
    exit_X = rand() % 10;
   

    //1) 맵, 플레이어 위치, 탈출위치 세팅\

 
    while (_getch) {
        system("cls");
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                map[i][j] = '#';
            }
            cout << endl;
        }

        map[exit_Y][exit_X] = 'E';

        map[player_Y][player_X] = 'O';

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cout << map[i][j];
            }
            cout << endl;

        }

            //3) 키입력 처리

            switch (_getch())
            {
            case 'w':
                if (player_Y > 0) {
                    player_Y--;
                }
                break;
            case 'a':
                if (player_X > 0) {
                    player_X--;
                }
                break;
            case 's':
                if (player_Y < 10) {
                    player_Y++;
                }
                break;
            case 'd':
                if (player_X < 10) {
                    player_X++;
                }
                break;
            }



            //4)입력된 키에 따라 플레이어 위치 수정

            if (exit_Y == player_Y && exit_X == player_X) {
                system("cls");
                cout << "탈출에 성공하였습니다.";
                break;
            }
        
    }
}
    



     //5) 2)로 돌아가 반복

   


    


    //2) 세팅된 정보대로 출력
    

    
    
   
    
    
   



   


    // char map[10][10];
    // //맵 초기화
    // for (int i = 0; i < 10; i++)
    //     for (int j = 0; j < 10; j++)
    //         map[i][j] = '#';
    //
    // srand(time(NULL));
    // int exitX = -1, exitY = -1;
    // do { //탈출 위치 지정
    //     exitX = rand() % 10;
    //     exitY = rand() % 10;
    // } while (exitX == 0 && exitY == 0);
    // map[exitX][exitY] = 'E';
    //
    //
    // //플레이어 위치 초기값
    // int playerX = 0, playerY = 0;
    // do {
    //     //화면 초기화
    //     system("cls");
    //     map[playerX][playerY] = 'P';
    //     for (int i = 0; i < 10; i++) {
    //         for (int j = 0; j < 10; j++) {
    //             cout << map[i][j];
    //         }
    //         cout << endl;
    //     }
    //
    //     //입력 값에 의한 이동
    //     switch (_getch())
    //     {
    //     case 'W':
    //     case 'w':
    //         //위로 이동
    //         map[playerX][playerY] = '#';
    //         if (playerX > 0)
    //             playerX--;
    //         break;
    //     case 'A':
    //     case 'a':
    //         //왼쪽으로 이동
    //         map[playerX][playerY] = '#';
    //         if (playerY > 0)
    //             playerY--;
    //         break;
    //     case 'S':
    //     case 's':
    //         //아래로 이동
    //         map[playerX][playerY] = '#';
    //         if (playerX < 9)
    //             playerX++;
    //         break;
    //     case 'D':
    //     case 'd':
    //         //오른쪽으로 이동
    //         map[playerX][playerY] = '#';
    //         if (playerX < 9)
    //             playerY++;
    //         break;
    //     default:
    //         break;
    //     }
    //
    // } while (playerX != exitX || playerY != exitY);
    //
    // //탈출 성공 후처리: 플레이어가 출구로 나간 것을 표시
    // map[playerX][playerY] = '#';
    // map[exitX][exitY] = 'E';
    // system("cls");
    // for (int i = 0; i < 10; i++) {
    //     for (int j = 0; j < 10; j++) {
    //         cout << map[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << "탈출에 성공했습니다." << endl;



































 ///int student_nums[3][5] = { {1, 2, 3, 4, 5,},
 ///                           {6, 7, 8, 9, 10},
 ///                           {11, 12, 13, 14, 15} };
 ///
 ///
 /////cout << student_nums[0][0] << endl;
 /////cout << &(student_nums[0][0]) << endl;
 ///
 /////순서대로 출력하는 코드
 ///for (int j = 0; j < 3; j++)  // for (int j = 1; j < 4; j++)로 할 경우 출력이 다른 메모리에서
 ///{
 ///    for (int i = 0; i < 5; i++)
 ///    {
 ///        cout << student_nums[j][i] << endl;
 ///    }
 ///}
 ///
 ///int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 12 };
 ///
 /////cout << nums << endl; 
 /////// cout << nums[10] << endl;    < 런타임에러
 /////cout << &(nums[1]) << endl;
 /////cout << &(nums[2]) << endl;
 /////cout << &(nums[3]) << endl;       
 ///
 ///for (int i = 0; i < 10; i++)
 ///{
 ///    cout << &(nums[i]) << endl;
 ///}
 ///
 ///
 ////*
 ///     실습1. string형 배열변수 5개짜리를 선언하고
 ///     반복문을 통해 학생의 이름을 입력 받는다.
 ///
 ///     입력을 다 받고나서 1~5사이의 값을 입력하면 해당학생의 이름이 출력된다
 ///
 ///     예시 )
 ///            1번째 학생의 이름을 입력하세요 :
 ///            2번째 학생의 이름을 입력하세요 :
 ///            3번째 학생의 이름을 입력하세요 :
 ///            4번째 학생의 이름을 입력하세요 :
 ///            5번째 학생의 이름을 입력하세요 :
 ///
 ///            1 ~ 5 사이의 번호를 입력하세요 : _3
 ///            3번째 학생의 이름은 ...입니다.
 ///
 ///*/
 ///int i;
 ///
 ///string stu_name[5];
 ///    for(i = 0; i < 5; i++)
 ///    {
 ///        cout << i + 1 << "번째 학생의 이름을 입력하세요 : ";
 ///            cin >> stu_name[1];
 ///    }
 ///
 ///int stu_num;
 ///cout << "\n 1~ 5 사이의 번호를 입력하세요" << endl;
 ///cin >> stu_num;
 ///cout << stu_num << "번째 학생의 이름은 " << stu_name[stu_num - 1] << "입니다." << endl;;
 ///
 /// /*
 ///    실습.
 ///    구구단의 결과를 저장하는 2차원의 배열을 하나 선언하고
 ///    2 * 1 = 2
 ///
 ///    이중 for문을 이용해서 배열 변수에 구구단의 결과값을 저장하고,
 ///
 ///    두 수를 입력받아서 적합한 결과값을 출력해보자.
 ///
 ///    예시)
 ///          (결과 저장 완료)
 ///          몇 단을 볼까요? : _4
 ///          몇을 곱할까요? : _7
 ///
 ///          4 * 7 = 28  <<집적 계산이 아니라 저장한 값을 불러오는 것
 ///
 ///
 ///int gugudan[8][9] = { 0 };
 ///for (int i = 2; i < 10; i++) 
 ///    for (int j = 1; j < 10; j++) 
 ///        gugudan[i - 2][j - 1] = i * j;
 /////dan은 2단부터 시작하니 -2로 시작
 ///
 ///int dan;
 ///int num;
 ///cout << "(결과 저장 완료) ";
 ///cout << "몇 단을 볼까요? : ";
 ///cin >> dan; 
 ///cout << "몇을 곱할까요? : ";
 ///cin >> num;
 ///
 ///cout << "\n" << dan << " * " << num << " = " << gugudan[dan - 2][num - 1] << endl;
 ///
 //// //교수님 코드
 //// int gugudan[8][9] = { 0 };
 //// for (int i = 0; i < 9; i++)
 ////     for (int j = 1; j < 10; j++)
 ////         gugudan[i + 2][j + 1] = i * j;
 ////
 ///
 ///
 /////ascll table 아스키코드표
 /////int input_key = _getch();
 ///char input_key_char = _getch();
 ///cout << input_key_char << endl;
 ///
 ////*
 ///실습
 ///A ~ Z 키 중에 하나를 정답으로 설정한다.
 ///유저는 한 개의 키를 입력해서 설정된 값을 맞춘다.
 ///유저가 입력한 키와 설정된 값이 맞으면 승리, 프로그램 종료
 ///틀리면 남은 기회를 보여주고, 5번 틀리면 정답을 알려주고 게임오버
 ///
 ///+틀릴 때 마다 정답 알파벳이 입력된 알파벳 앞에 있는지, 뒤에 있는지 힌트를 준다
 ///
 ///+입력된 값이 대소문자 구분없이 처리될 수 있도록 수정 해보자.
 ///
 ///
 ///*/
 ////
 //// srand(time(NULL));
 //// int answer = rand() % ('Z' - 'A' + 1) + 'A';
 //// cout << "정답은 " << (char)answer << endl;
 //// int chance = 5;
 //// char input_alphabet;
 ////
 //// while (chance > 0)
 //// {
 ////     cout << "\n대문자 알파벳을 입력해주세요: \n";
 ////     input_alphabet = _getch();
 ////
 ////     //+ 입력된 값이 대소문자 구분없이 처리될 수 있도록 수정해 보자.
 ////     if (input_alphabet >= 97 && input_alphabet < 123)
 ////         input_alphabet -= 32;
 ////
 ////     if ((int)input_alphabet == answer) {
 ////         cout << "##승리!!\n프로그램이 종료됩니다." << endl;
 ////         break;
 ////     }
 ////     else {
 ////         //+ 틀릴 때마다 정답 알파벳이 입력된 알파벳 앞에 있는지, 뒤에 있는지 힌트를 준다.
 ////         (input_alphabet > answer) ?
 ////             cout << input_alphabet << " 보다 앞에 있는 알파벳입니다." << endl :
 ////             cout << input_alphabet << " 보다 뒤에 있는 알파벳입니다." << endl;
 ////         cout << "#남은 기회 " << --chance << "번" << endl;
 ////     }
 //// }
 ////
 //// if (chance == 0)
 ////
 ////     cout << "##정답은 " << (char)answer << "였습니다.\n게임 오버" << endl;





  


    









        
   
   



     
    






