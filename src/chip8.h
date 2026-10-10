unsigned short opcode;
unsigned char memory[4096];
unsigned char V[16];
unsigned short I;
unsigned short pc;
unsigned short stack[16];
unsigned short sp;
unsigned char key[16];

void initialize()
{
 pc = 0x200; 
 opcode = 0;
 I = 0;
 pc = 0;
}

void emulateCycle()
{
  opcode = memory[pc] << 8 | memory[pc +1];
}
