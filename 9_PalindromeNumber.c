int isPalindrome(int x){
    if(x >= 0)
    {
        long int rev = 0;
        long int temp = x;
        while(temp != 0)
        {
            rev = (rev * 10) + temp % 10;
            temp = temp / 10;
        }
        if(rev == x)
        {
            return 1;
        }
    }
    return 0;
}