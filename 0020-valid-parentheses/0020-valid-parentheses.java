class Solution {
    public boolean isValid(String s) {
        Map<Character,Character>mp = new HashMap<>(){{
            put( ')', '(') ;
            put( '}' ,'{') ; 
            put(']' , '[') ; 
        }} ; 
        Stack<Character>st = new Stack<>() ; 

        for(int i = 0 ; i<s.length() ; i++){
            if(!st.isEmpty() && st.peek().equals( mp.get(s.charAt(i)) ) ){
                   System.out.println("dd " + st.peek()) ; 
                st.pop() ; 
            }
            else{
                System.out.println(s.charAt(i)) ; 
                st.push(s.charAt(i)) ; 
            }
        }

        return st.isEmpty() ; 
    }
}