#include"mylib.h"
//display
void display(){
    char text[]=" FUNCOES ";
    int top = 67, botton = 75, k = 0, x = 27, i;
    char* p[20] = {"[01]  LISTA 1A QUESTAO 5 "," [11]  LISTA 2A QUESTAO 1",
                   "[02]  LISTA 1B QUESTAO 2 "," [12]  LISTA 2A QUESTAO 3",
                   "[03]  LISTA 1B QUESTAO 6 "," [13]  LISTA 2A QUESTAO 4",
                   "[04]  LISTA 1B QUESTAO 8 "," [14]  LISTA 2B QUESTAO 1",
                   "[05]  LISTA 1B QUESTAO 9 "," [15]  LISTA 2B QUESTAO 3",
                   "[06]  LISTA 1B QUESTAO 10"," [16]  LISTA 2B QUESTAO 4",
                   "[07]  LISTA 1C QUESTAO 3 "," [17]  LISTA 2B QUESTAO 5",
                   "[08]  LISTA 1C QUESTAO 5 "," [18]  LISTA 2B QUESTAO 6",
                   "[09]  LISTA 1C QUESTAO 6 "," [19]  LISTA 2C QUESTAO 4",
                   "[10]  LISTA 1C QUESTAO 7 "," [20]  LISTA 2D QUESTAO 6"};
    cout << "\xC9";
    for(i=0;i<top;i++){
        if(i!=32)
            cout <<"\xCD";
        else
            cout << text;
    }
    cout << "\xBB";
    for(int j=0;j<10;j++){
        cout << "\n\xBA";
        for(i=0;i<x;i++){
            if(i==9||i==15){
                cout <<p[k];
                k++;
            }
            else
                cout <<' ';
        }
        cout << "\xBA";
    }
    cout << "\n\xC8";
    for(i=0;i<botton;i++) cout <<"\xCD";
    cout << "\xBC";
}
void dpy_begin(){
    int line = 14;
    char* q[] = {  "++++++++++++++  SEJA BEM VINDO A BIBLIOTECA DE FUNCOES  +++++++++++++++++",
                   "+                                                                       +",
                   "+ *******  *           *  *******      *     *******  *     *  *******  +",
                   "+ *        * *       * *  *     *     **     *     *  *     *  *     *  +",
                   "+ *        *  *     *  *  *     *    * *     *     *  *     *  *     *  +",
                   "+ *        *   *   *   *  *     *   *  *     *     *  *     *  *     *  +",
                   "+ *        *     *     *  *******  *   *     *     *  *******  *******  +",
                   "+ *        *           *  *            *     *     *        *  *     *  +",
                   "+ *        *           *  *            *     *     *        *  *     *  +",
                   "+ *        *           *  *            *     *     *        *  *     *  +",
                   "+ *        *           *  *            *     *     *        *  *     *  +",
                   "+ *******  *           *  *         *******  *******        *  *******  +",
                   "+                                                                       +",
                   "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\a\a\a"
               };
    for(int i=0;i<line;i++) cout << q[i]<< '\n';
}
void dpy_end(){
    int line = 7;
    string msg = ">> FINALIZANDO O PROGRAMA...\n\n";
        char* p[] = {
                         "*******  *    *  ******  **   *  *    *    *     *  ******  *    *",
                         "   *     *    *  *    *  * *  *  *   *      *   *   *    *  *    *",
                         "   *     *    *  *    *  *  * *  *  *        * *    *    *  *    *",
                         "   *     ******  ******  *   **  ***          *     *    *  *    *",
                         "   *     *    *  *    *  *    *  *  *        *      *    *  *    *",
                         "   *     *    *  *    *  *    *  *   *      *       *    *  *    *",
                         "   *     *    *  *    *  *    *  *    *    *        ******  ******",
                     };
  cout << msg;
  _sleep(5000);
  system("cls");
  for(int i=0;i<line;i++) cout << p[i] << '\n';
  cout <<"\n\n=> PROGRAMA FINALIZADO COM SUCESSO.\n";
}
void error(){
    cout <<"************************OPCAO INVALIDA!!!****************************\n";
    _sleep(2500);
}
