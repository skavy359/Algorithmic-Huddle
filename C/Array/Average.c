//User function Template for C

double posAverage(int numbers[], int size){
    
    
    //Write your code to find average of positive numbers in numbers array
    //return the answer
    double sum=0;
    double count=0;
    for(int i=0;i<size;i++){
        if(numbers[i]>=0){
        sum=sum+numbers[i];
        count=count+1;
        }
    }
    double average=sum/count;
    return average;
    
    
}
