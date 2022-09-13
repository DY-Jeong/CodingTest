#include <stdio.h>

int main()
{
    // \n은 개행, \t는 탭, \c는 캐리지 리턴(커서를 앞으로)
    // 따옴표는 \', \", % 기호가 앞에 붙는 문자를 형식 지정자(format specifier)라고 하며, 그 위치에서 지정한 형식으로 값을 출력해 준다.
    //*은 % 안붙여도됨
    printf("\u250C\u252C\u2510\n\u251C\u253C\u2524\n\u2514\u2534\u2518");
    return 0;
}
