// #include <iostream>
// #include <string>
// #include <cmath>
// #include <cstdio>
// #include <sstream>
// using namespace std;
// string missingpangram(string str)
// {
//     int arr[26] = {0};
//     int n = str.size();
//     for (int i = 0; i < n; i++)
//     {
//         arr[str[i] - 'a']++;
//     }
//     string ans = "";
//     for (int i = 0; i < 26; i++)
//     {
//         if (arr[i] == 0)
//         {
//             ans += "a" + i;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     string s;
//     getline(cin, s);
//     cout << missingpangram(s);
//     return 0;
// }

// #include <iostream>
// #include <cstdio>
// #include <cmath>
// #include <string>
// #include <sstream>
// using namespace std;
// string missingPangram(string str)
// {
//     int arr[26] = {0};
//     int n = str.size();
//     for (int i = 0; i < n; i++)
//     {
//         arr[str[i] - 'a']++;
//     }
//     string ans = "";
//     for (int i = 0; i < 26; i++)
//     {
//         if (arr[i] == 0)
//         {
//             ans += "a" + i;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     string s;
//     getline(cin, s);
//     cout << missingPangram(s);
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// #include <string>
// #include <cstdio>
// #include <sstream>
// using namespace std;
// string missingPangram(string str)
// {
//     int arr[26] = {0};
//     int n = str.size();
//     for (int i = 0; i < n; i++)
//     {
//         arr[str[i] - 'a']++;
//     }
//     string ans = "";
//     for (int i = 0; i < 26; i++)
//     {
//         if (arr[i] == 0)
//         {
//             ans += "a" + i;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     string s;
//     getline(cin, s);
//     cout << missingPangram(s);
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// #include <string.h>
// #include <cstdio>
// #include <sstream>
// using namespace std;
// string missingPangram(string str)
// {
//     int arr[26] = {0};
//     int n = str.size();
//     for (int i = 0; i < n; i++)
//     {
//         arr[str[i] - 'a']++;
//     }
//     string ans = "";

//     for (int i = 0; i < 26; i++)
//     {
//         if (arr[i] == 0)
//         {
//             ans += "a" + i;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     string s;
//     getline(cin, s);
//     cout << missingPangram(s);
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <cmath>
// #include <cstdio>
// #include <sstream>
// using namespace std;
// string missingPangram(string str)
// {
//     int arr[26] = {0};
//     int n = str.size();
//     for (int i = 0; i < n; i++)
//     {
//         arr[str[i] - 'a']++;
//     }

//     string ans = "";
//     for (int i = 0; i < 26; i++)
//     {
//         if (arr[i] == 0)
//         {
//             ans += 'a' + i;
//         }
//     }
//     return ans;
// }

// #include <iostream>
// using namespace std;
// string missingPangram(string str)
// {
//     int arr[26] = {0};
//     int n = str.size();
//     for (int i = 0; i < n; i++)
//     {
//         arr[str[i] - 'a']++;
//     }
//     string ans = "";
//     for (int i = 0; i < 26; i++)
//     {
//         ans += 'a' + i;
//     }
//     return ans;
// }

// #include<iostream>
// using namespace std;
// string missingPangram(string str)
// {
//     int arr[26]={0};
//     int n=str.size();
//     for(int i=0;i<n;i++)
//     {
//         arr[str[i]-'a']++;
//     }
//     string ans="";
//     for(int i=0;i<26;i++)
//     {
//         ans+='a'+i;
//     }
//     return ans;
// }

// #include <iostream>
// #include <cmath>
// #include <cstdio>
// #include <string>
// #include <sstream>
// using namespace std;
// string missingPangram(string str)
// {
//     int arr[26] = {0};
//     int n = str.size();
//     for (int i = 0; i < n; i++)
//     {
//         arr[str[i] - 'a']++;
//     }

//     string ans = "";
//     for (int i = 0; i < 26; i++)
//     {
//         ans += 'a' + i;
//     }
//     return ans;
// }
// int main()
// {
//     string s;
//     getline(cin, s);
//     cout << missingPangram(s);
//     return 0;
// }