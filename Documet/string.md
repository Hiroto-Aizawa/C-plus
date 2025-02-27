# 文字列

## 初期化

```
// 初期化
string str;
string str = "Hello World";

char c;
char c = 'a';
```

## 配列

```
// 初期化
vector<string> s;
vector<string> s(4); //長さが4の配列を作成
vector<string> s = {"apple", "bus", "cat", "dice"};
```

## 並び替え

```
// 初期化
vector<string> s = {"dice", "apple", "cat", "bus"};

// 【昇順】
sort(s.begin(), s.end()); // "apple", "bus", "cat", "dice"

// 【降順】
sout(s.rbegin(), s.rend()) // "dice", "cat", "bus", "apple"

// 【文字数の昇順】
// 昇順用比較関数
bool compareLess(string& s1, string& s2) {return s1.size() < s2.size();}
sort(s.begin(), s.end(), compareLess); // "cat", "bus", "dice", "apple"

// 降順用比較関数
bool compareGreater(string& s1, string& s2) {return s2.size() < s1.size();}
sort(s.begin(), s.end(), comparGreater); // "apple", "dice", "cat", "bus"
```
