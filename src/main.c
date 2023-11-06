#include <stdio.h>
#include <stdlib.h>

#define MEMORY_SIZE 30000

//
//  참고 : BrainFuck
//
//  https://github.com/fabianishere/brainfuck
//

void runMyLang(char* code) {
    unsigned char memory[MEMORY_SIZE] = {0};
    int pointer = 0;
    int loop_stack[MEMORY_SIZE] = {0};
    int loop_level = 0;

    for (int i = 0; code[i]; i++) {
        char command = code[i];
        switch (command) {
            case '민수야':
                pointer++;
                break;
            case '앙':
                pointer--;
                break;
            case '형':
                memory[pointer]++;
                break;
            case '너무':
                memory[pointer]--;
                break;
            case '커':
                putchar(memory[pointer]);
                break;
            case '사랑해':
                memory[pointer] = getchar();
                break;
            case '응':
                if (memory[pointer] == 0) {
                    int count = 1;
                    while (count > 0) {
                        i++;
                        if (code[i] == '응') {
                            count++;
                        } else if (code[i] == '웅') {
                            count--;
                        }
                    }
                }
                break;
            case '웅':
                if (memory[pointer] != 0) {
                    int count = 1;
                    while (count > 0) {
                        i--;
                        if (code[i] == '웅') {
                            count++;
                        } else if (code[i] == '응') {
                            count--;
                        }
                    }
                }
                break;
            default:
                // 무시되는 문자
                break;
        }
    }
}
