BoF-101  

假如不挟持EIP，只挟持EBP会怎么样？  

Project: main-mystrcpy  
   - Visual studio 2022中项目设置关掉DEP/ASLR（连接器 → 高级），关掉 /GS-（C/C++ → 代码生成 → 安全检查），禁止优化 /Od（C/C++ → 优化）  

Project: main-foo-victim-mystrcpy  
   - 与“Project: default-setting_main-foo-victim-mystrcpy”共享源码
   - Visual studio 2022中项目设置关掉DEP/ASLR（连接器 → 高级），关掉 /GS-（C/C++ → 代码生成 → 安全检查），禁止优化 /Od（C/C++ → 优化）  

Project: default-setting_main-foo-victim-mystrcpy  
   - 与“Project: main-foo-victim-mystrcpy”共享源码  
   - 使用 vs 2022默认项目设置，仅禁止优化 /Od（C/C++ → 优化）  

