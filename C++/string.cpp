// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     // char arr[10];
//     // cin>>arr;
//     // arr[2]='\0';
//     // cout<<arr;
//     // string s;
//     // getline(cin,s);
//     // cout<<s;
//     // cout<<s.size();
//     // string s1="rohit",s2="mohit";
//     // // string s3=s1+s2;
//     // string s3=s1.append(s2);
//     // cout<<s3<<endl;
//     // s1.push_back('P');
//     // cout<<s1<<endl;
//     // s1.pop_back();
//     // cout<<s1;
//     string s="rohit negi is a \"good\" boy";
//     cout<<s;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
    // string s="rohit";
    // //reverse
    // int start=0,end=s.size()-1;
    // while(start<end)
    // {
    //     swap(s[start],s[end]);
    //     start++,end--;
    // }
    // cout<<s;
    // //size
    // int size=0;
    // while(s[size]!='\0')
    // {
    //     size++;
    // }
    // cout<<endl;
    // cout<<size<<endl;
    //palidrome or not
//     string a="naman";
//     int start=0,end=a.size()-1;
//     while(start<end)
//     {
//         if(a[start]!=a[end])
//         {
//             cout<<"not a palidrome";
//             return 0;
//         }
//         start++,end--;
//     }
//     cout<<"its a palidrome";
//     return 0;
// }


//defanging an ip address
// class Solution {
// public:
//     string defangIPaddr(string address) {
//         int index=0;
//         string ans;
//         while(index<address.size())
//         {
//             if (address[index]=='.')
//             {
//                 ans+="[.]";
//             }
//             else
//             ans+=address[index];
//             index++;
//         }
//         return ans;
//     }
// };


//string rotated by two places
// public:
//     //Function to check if a string can be obtained by rotating
//     //another string by exactly 2 places.
//     void rotateanticlockwise(string &s){
//         char c = s[0];
//         int index = 1;
//         while(index<s.size())
//         {
//             s[index-1]=s[index];
//             index++;
//         };
//         s[s.size()-1]=c;
//     }
//     void rotateclockwise(string &s){
//         char c = s[s.size()-1];
//         int index = s.size()-2;
//         while(index>=0)
//         {
//             s[index+1]=s[index];
//             index--;
//         };
//             s[0]=c;
//     }
//     bool isRotated(string str1, string str2)
//     {
//         if(str1.size()!=str2.size())
//         return 0;
//         string clockwise,anticlockwise;
//         clockwise = str1;
//         rotateclockwise(clockwise);
//         rotateclockwise(clockwise);
        
//         if(clockwise==str2)
//         return 1;
        
//         anticlockwise = str1;
//         rotateanticlockwise(anticlockwise);
//         rotateanticlockwise(anticlockwise);
        
//         if(anticlockwise==str2)
//         return 1;
        
//         return 0;
//     }

//check if the sentence is pangram
// class Solution {
// public:
//     bool checkIfPangram(string sentence) {
//        vector<bool>alpha(26,0);
//        for(int i=0;i<sentence.size();i++)
//        {
//         alpha[sentence[i]-'a']=1;
//        };
//        for(int i=0;i<26;i++)
//        {
//         if(alpha[i]==0)
//         return 0;
//        };
//        return 1;
//     }
// };

//sort string in asc
// string sort(string s){
//     vector<int>alpha(26.0);
//     for(int i=0;i<s.size();i++)
//     {
//         alpha[s[i]-'a']++;
//     }
//     string ans;
//     for(int i=0;i<26;i++)
//     {
//         char c='a'+i;
//         while(alpha[i])
//         {
//             ans+=c;
//             alpha[i]--;
//         }
//     }
//     return ans;
// }

//longest palidrome
// class Solution {
// public:
//     int longestPalindrome(string s) {
//         vector<int> lower(26, 0);
//         vector<int> upper(26, 0);

//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] >= 'a' && s[i] <= 'z') {
//                 lower[s[i] - 'a']++;
//             } else if (s[i] >= 'A' && s[i] <= 'Z') {
//                 upper[s[i] - 'A']++;
//             }
//         }

//         int count = 0;
//         bool odd = false;
//         for (int i = 0; i < 26; i++) {
//             if (lower[i] % 2 == 0) {
//                 count += lower[i];
//             } else {
//                 count += lower[i] - 1;
//                 odd = true;
//             }
//             if (upper[i] % 2 == 0) {
//                 count += upper[i];
//             } else {
//                 count += upper[i] - 1;
//                 odd = true;
//             }
//         }

//         return count + (odd ? 1 : 0);
//     }
// };


//sorting the sentence
// class Solution {
// public:
//     string sortSentence(string s) {
//         vector<string> ans(10);
//         string temp;
//         int count = 0, index = 0;
//         while (index < s.size()) {
//             if (s[index] == ' ') {
//                 int pos = temp[temp.size() - 1] - '0';
//                 temp.pop_back();
//                 ans[pos - 1] = temp; // subtract 1 because vector indices start from 0
//                 temp.clear();
//                 count++;
//                 index++; // increment index to skip the space
//             } else {
//                 temp += s[index];
//                 index++;
//             }
//         }
//         // handle the last word
//         int pos = temp[temp.size() - 1] - '0';
//         temp.pop_back();
//         ans[pos - 1] = temp;
        
//         // construct the sorted sentence
//         string result;
//         for (int i = 0; i < ans.size(); i++) {
//             if (!ans[i].empty()) {
//                 result += ans[i] + " ";
//             }
//         }
//         result.pop_back(); // remove the trailing space
//         return result;
//     }
// };



//sort vowel in a string

// class Solution {
// public:
//     string sortVowels(string s) {
//         vector<int>lower(26,0);
//         vector<int>upper(26,0);
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
//                 lower[s[i]-'a']++;
//                 s[i]='#';
//             }
//             else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
//                 upper[s[i]-'A']++;
//                 s[i]='#';
//             };
//         }

//         string vowel;

//         for(int i=0;i<26;i++)
//         {
//             char c='A'+i;
//             while(upper[i])
//             {
//              vowel+=c;
//              upper[i]--;
//             }
//         }

//         for(int i=0;i<26;i++)
//         {
//             char c='a'+i;
//             while(lower[i])
//             {
//              vowel+=c;
//              lower[i]--;
//             }
//         }

//         int first=0,second=0;
//         while(second<vowel.size())
//         {
//             if(s[first]=='#')
//             {
//                 s[first]=vowel[second];
//                 second++;
//             }
//             first++;
//         }
//         return s;
//     }
// };



//add two string

// class Solution {
// public:
//     string add(string num1, string num2)
//     {
//         string ans;
//         int index1=num1.size()-1,index2=num2.size()-1;
//         int sum,carry=0;
//         while(index2>=0)
//         {
//             sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
//             carry=sum/10;
//             char c='0'+sum%10;
//             ans+=c;
//             index2--,index1--;
//         }
//           while(index1>=0)
//         {
//             sum=(num1[index1]-'0')+carry;
//             carry=sum/10;
//             char c='0'+sum%10;
//             ans+=c;
//             index1--;
//         }
//         if(carry)
//         ans+='1';
        
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
//     string addStrings(string num1,string num2){
//         if(num1.size()<num2.size())
//         return add(num2,num1);
//         else
//         return add(num1,num2);
//     }
// };



//roman to integer


// class Solution {
// public:
// int num ( char c)
// {
//     if(c=='I')
//     return 1;
//     else if(c=='V')
//     return 5;
//     else if(c=='X')
//     return 10;
//     else if(c=='L')
//     return 50;
//     else if(c=='C')
//     return 100;
//     else if(c=='D')
//     return 500;
//     else 
//     return 1000;
// }
//     int romanToInt(string s) {
//         int sum=0,index=0;
//         while(index<s.size()-1){
//             if(num(s[index])<num(s[index+1]))
//             sum-=num(s[index]);
//             else
//             sum+=num(s[index]);
//                index++;
//         }

//         sum+=num(s[index]);
     
//         return sum;
//     }
// };



//factorial of a large number

// class Solution {
// public:
//     vector<int> factorial(int N){
//         // code here
//         vector<int> ans(1,1);
//         while(N>1)
//         {
//             int carry=0,res,size=ans.size();
//             for(int i=0;i<size;+i++)
//             {
//                 res=ans[i]*N+carry;
//                 ans[i]=res%10;
//                 carry=res/10;
//             }
//             while(carry)
//             {
//                 ans.push_back(carry%10);
//                 carry/=10;
//             }
//             N--;
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;   
//     }



//longest substring without repeating character



// int lengthOfLongestSubstring(string s) {

//         vector<bool>count(256,0);
//         int first=0,second=0,len=0;
//         while(second<s.size())
//         {
//             while(count[s[second]])
//             {
//                 count[s[first]]=0;
//                 first++;
//             }
//             count[s[second]]=1;
//             len=max(len,second-first+1);
//             second++;
//         }
//             return len;


//smallest distinct window


// int findSubString(string str)
//     {
//         vector<int>count(256,0);
//         int first=0,second=0,len=str.size(),diff=0;
//         while(first<str.size())
//         {
//             if(count[str[first]]==0)
//             diff++;
//             count[str[first]]++;
//             first++;
//         };
        
//         for(int i=0;i<256;i++)
//         count[i]=0;
//         first=0;
//         while(second<str.size())
//         {
//             while(diff&&second<str.size())
//             {
//                 if(count[str[second]]==0)
//                 diff--;
                
//                 count[str[second]]++;
//                 second++;
//             }
//             len=min(len,second-first);
            
//             while(diff!=1)
//             {
//                 len=min(len,second-first);
//                 count[str[first]]--;
                
//                 if(count[str[first]]==0)
//                 diff++;
                
//                 first++;
//             }
//         }
//          return len;
//     }



//longest prefix suffix

// public:
//     int lps(string s) {
//         // Your code goes here
//         vector<int>lps(s.size(),0);
//         int pre=0,suf=1;
//         while(suf<s.size())
//         {
//             if(s[pre]==s[suf])
//             {
//                 lps[suf]=pre+1;
//                 suf++,pre++;
//             }
//             else{
//                 if(pre==0)
//                 {
//                     lps[suf]=0;
//                     suf++;
//                 }
//                 else{
//                     pre=lps[pre-1];
//                 }
//             }
//         }
//         return lps[s.size()-1];
//     }




//find the index of the first occurence of a string

// class Solution {
// public:
// void lpsfind(vector<int>&lps,string s){
//     int pre=0,suf=1;
//     while(suf<s.size())
//     {
//         if(s[pre]==s[suf])
//         {
//             lps[suf]=pre+1;
//             suf++,pre++;
//         }
//         else{
//             if(pre==0)
//             {
//                 lps[suf]=0;
//                 suf++;
//             }
//             else{
//                 pre=lps[pre-1];
//             }
//         }
//     }
// }
//     int strStr(string haystack, string needle) {
//         vector<int>lps(needle.size(),0);
//         lpsfind(lps,needle);
//         int first =0,second=0;
//         while(first<haystack.size()&&second<needle.size())
//         {
//             if(haystack[first]==needle[second])
//             {
//                 first++,second++;
//             }
//             else
//            {
//             if(second==0)
//             first++;
//             else
//             second=lps[second-1];
//            } 
//         }

//         if(second==needle.size())
//         return first - second;
//         return -1;
//     }
// };


//make a string palidrome


//  public:
//     int minChar(string& str) {
        
//         //string reverse
        
//         string rev = str;
//         reverse(rev.begin(),rev.end());
//         int size = str.size();
//         str+='$';      //seperator
//         str+=rev;       //reverse
        
//         //longest prefix nikalna hai
        
//         int n = str.size();
//         vector<int>lps(n,0);
        
//         int pre=0, suf=1;
        
//         while(suf<str.size())
//         {
            
//             //matched
//             if(str[pre]==str[suf])
//             {
//                 lps[suf]=pre+1;
//                 pre++,suf++;
//             }
//             //not matched
            
//             else
//             {
//                 if(pre==0)
//                 suf++;
//                 else
//                 {
//                     pre=lps[pre-1];
//                 }
//             }
//         }
//         //answer dena hae
//         return size-lps[n-1];
//     }



//repeated string  match


// void lpsfind(vector<int>&lps,string s){
//     int pre=0,suf=1;
//     while(suf<s.size())
//     {
//         if(s[pre]==s[suf])
//         {
//             lps[suf]=pre+1;
//             suf++,pre++;
//         }
//         else{
//             if(pre==0)
//             {
//                 lps[suf]=0;
//                 suf++;
//             }
//             else{
//                 pre=lps[pre-1];
//             }
//         }
//     }
// }
//     int KMP_MATCH(string haystack, string needle) {
//         vector<int>lps(needle.size(),0);
//         lpsfind(lps,needle);
//         int first =0,second=0;
//         while(first<haystack.size()&&second<needle.size())
//         {
//             if(haystack[first]==needle[second])
//             {
//                 first++,second++;
//             }
//             else
//            {
//             if(second==0)
//             first++;
//             else
//             second=lps[second-1];
//            } 
//         }

//         if(second==needle.size())
//         return 1;
//         return 0;
//     }
//     int repeatedStringMatch(string a, string b) {
        
//         if(a==b)
//         return 1;

//         int repeat = 1;
//         string temp = a;

//         while(temp.size()<b.size())
//         {
//             temp+=a;
//             repeat++;
//         }

//         //KMP pattern search

//         if(KMP_MATCH(temp,b)==1)
//         return repeat;

//         //Temp+a,KMP search

//         if(KMP_MATCH(temp+a,b)==1)
//         return repeat+1;

//         return -1;
//     }