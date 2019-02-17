int maxArea(int* height, int heightSize) {
    int front=0, end=heightSize-1, maxArea=0, Area;
    
    while(front<end){
        if(height[front]>height[end]){
            Area = height[end]*(end-front);
            if(Area>maxArea){
                maxArea = Area;
            }
            end--;
        }else{
            Area = height[front]*(end-front);
            if(Area>maxArea){
                maxArea = Area;
            }
            front++; 
        }
    }
    return maxArea;
}