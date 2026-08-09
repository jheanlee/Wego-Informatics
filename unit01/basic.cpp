#include <iostream> // 標頭檔 取得電腦需要的code

using namespace std; // 將std的所有成員提到全域 (看不懂的話就把他當魔法)    \
例如: std::string 可以直接用 string



// 用 "//" 開頭的是 C++中的單行註解 電腦不會去理註解
// C++中 註解也可以是多行 在"/*" 和 "*/"中間的就會是註解


// 這是註解

/* ← 這個是註解的開頭

這是貓貓
  ╱|、
 (˚ˎ 。7  
  |、˜〵          
  じしˍ,)ノ

註解到這裡結束 → */



//  你的程式會從 main() 開始跑
int main() {
  cout << "Hello, World!" << endl;    // 每一行程式結束都有一個 分號(;)
  cout << "Goodbye, World!" << endl; 

  return 0; //  return 0; 是個好習慣 他告訴電腦: "我的程式很順利的跑完了"
}