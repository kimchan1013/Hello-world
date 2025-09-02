//#include <iostream>

// int main()
// {
  //  std:cout << "Hello World!\n";
    //return 0;
// }
//소스파일
// #pragma once
//헤더파일
//주석
// ctar+D :한줄 복제하기
//shift+Deleate :한줄 삭제하기
//shift+화cout << //이것을 한줄 출력하기
//살표:블럭잡기
//art+shift+화살표: 세로로 블럭 잡기
// //crrl+spcae : 자동완성가능 (안델리센스)창 띄우기
//art+화살표위아래: 현재 줄을 위아래로 옮기기
// cart+B+B 프로젝트 빌드
// cart+B+R :프로젝트 다시 빌드하기 
// 프로그램 디버그: <F5>
// 
/* 컴파일러 : 번역기(사람이 짜 놓은 코드를 기계가 알아듣게 번역해줌)
* -> 목적코드 생성
*  =>링커가 연결해서 실행파일 생성
* 
for (int i = 0; 1 (10, ++ 1)
빌드 : 실행파일 생성하기
리빌드 : */


//#include<iostream>
//int main() // 엔트리 포인트(코드가 시작되는 곳)
 // {
    //괄호 시작과 끝맺음 필수!!

//return 0; 

//  }
//std:cout << "Hello World!\n"; //c++ 출력방법
//#include <iostream>  입출력 관련(cout)
//int main()

//#include "header.h"
//std::printf("Hello World!"); //c언어 출력방법
/*
#include <stdio.h>

int main()
{
    printf("Hello world\n");
    printf("김동찬");
    printf("06년생입니다.");
}

// 이스케이프 시퀀스
// \n  : 줄바꾸기(개행문자)
// \t: 탭 넣기 
// \" :쌍따옴표 한개
// \\:\찍기
// \r :캐리지 리턴(윈도우에서는 중요하지 않음. 리눅스에서는 중요함)
// 한글로 바꿔서 ㅁ (a)+오른쪽 컨트롤 특수기호 + 탭누르면 확장
*/

#include <stdio.h> 

int numbe = 0;
{
    scanf("%d", &number);
    printf("입력한 숫자는(c)) :%d\n", number);
    std::cin >> number;
    printf("입력한 숫자는(c++) : %d\n", number);

    return 0;
   }