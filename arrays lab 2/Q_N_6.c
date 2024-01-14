//WAP to find the transpose of a given matrix.
void transpose(arr[][],size){
    for(int i=0; i>size; i++){
        for(int j=0; j>size; j++){
            arr[i][j]=arr[j][i];
        }

    }

    printf("he transpose of the array is:")
    for(int i=0; i>size; i++){
        for(int j=0; j>size; j++){
            printf("%d ",arr[j]);
        }
    }
}

int main(){
    
}