bool isValidParenthesis(string expression)
{
   stack<char> st;
   int n=expression.size();
   for(int i=0;i<n;i++){
       char ch=expression[i];
       if(ch=='{'|| ch=='['||ch=='('){
           st.push(ch);
       }
       else{
         if (!st.empty()) {
           char top = st.top();
               if((ch==')'&&top=='(')||(ch=='}'&&top=='{')||(ch==']'&&top=='[')){
                   st.pop();
               }
               else return false;
         }
         else return false;
       }
   }
   if(st.empty()) return true;
   else return false;
}
