void main_loop(int param_1)
{
  while(1) {
    while (*(int *)(param_1 + 0x24) != 0) {
      FUN_000659c0();
      FUN_00145ca6(0x10);
    }
    FUN_00013a80(param_1);
  }
}
