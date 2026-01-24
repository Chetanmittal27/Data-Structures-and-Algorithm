for(int i=2;i<=n;i++){

    while(n % i == 0  &&  n > 1){
        ans.push_back(i);
        n = n / i;
    }
}