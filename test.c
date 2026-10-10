#include <stdio.h>

unsigned short pc;
unsigned short pc2;
unsigned short opcode;

int main() {
  pc = 0xA2;
  pc2 = 0xF0;
  opcode = pc << 8 | pc2;
  

  char buffer[50];

  sprintf(buffer, "%d", opcode);

  printf("%s", buffer);

  return 0;
}
