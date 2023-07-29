int main(int argc, const char **argv, const char **envp)
{
  shell_initialize(_malloc(0x8840));
  main_loop(0);
  return 0;
}
