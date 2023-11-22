#include<stdio.h>
#define MAX_SIZE 100
//FUNCTION TO FIND THE MAX OF NO
int max(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
//function for min
int min(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
//searching element
int search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
//insert element
int insert(int arr[],int *size,int position,int value){
    if(position>=0&&position<=*size){
        for(int i=*size;i>position;i--){
            arr[i]=arr[i-1];
        }
        arr[position]=value;
        (*size)++;
        printf("element inserted");
    }
    else{
        printf("not inserted");
    }
}//apending element
int append(int arr[],int *size,int value){
    if(*size<MAX_SIZE){
        arr[*size]=value;  
        (*size)++;
        printf("element successu=fu") ;
         }
         else{
            printf("array is full");
         }
}
int main(){
    int arr[MAX_SIZE];
    int size=0;
    printf("enter the size of the array:");
    scanf("%d",&size);
    printf("enter the elements of the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the choice\n1.maz2.min3.search4.insert5.append");
        int choice;
        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("the max element is %d",max(arr,size));
            break;
            case 2:printf("the min element is %d",min(arr,size));
            break;
            case 3:{int key;
                    printf("enter the element you want to search:");
                    scanf("%d",&key);
                    if(key!=-1){
                    printf("the search result is %d",search(arr,size,key));
                                } 
                                else{
                                    printf("element not found");
                                } 
                                break;}
            case 4:{int position, value; 
            printf("Enter the position and value to insert: ");
            scanf("%d %d", &position, &value);
            insert(arr,&size,position,value);
            break;
            }
            case 5: {
            int value;
            printf("Enter the value to append: ");
            scanf("%d", &value);
            append(arr, &size, value);
            break;
        }
        default:
            printf("Invalid choice.\n");
            break;
    }
}
    
