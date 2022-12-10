/* MD.TAHSIN HASIB

    Implement Selection Sort and also print the number of comparisons and exchanges used.

    Input:
    [92, 82, 21, 16, 18, 95]

    Output:
    [16, 18, 21, 82, 92, 95]


    Mechanism:      i executes <size-1 times, j executes <size times

    --------------1st--------------
    index -> 00  01  02  03  04  05
    arr   -> 92  82  21  16  18  95

    when i=0, indexmin=0, j=(0+1)=1

        arr[j]<arr[indexmin]
        arr[1]<arr[0]           -> 82<92 (if block) indexmin=j=1    -> j++ -> j=2
        arr[2]<arr[1]           -> 21<82 (if block) indexmin=j=2    -> j++ -> j=3
        arr[3]<arr[2]           -> 16<21 (if block) indexmin=j=3    -> j++ -> j=4
        arr[4]<arr[3]           -> 18<16 (none)                     -> j++ -> j=5
        arr[5]<arr[3]           -> 95<16 (none)                     -> j++ then break!

        *** here indexmin=3 (i=0 phase)

        temp = arr[i]           -> temp=arr[0]    -> temp=92
        arr[i] = arr[indexmin]  -> arr[0]=arr[3]  -> arr[0]=16
        arr[indexmin] = temp    -> arr[3]=92      -> arr[3]=92

        SHIFT OCCURS!                             ->i++ ->i=1

        the array : 16 82 21 92 18 95





        --------------2nd--------------
        index -> 00  01  02  03  04  05
        arr   -> 16  82  21  92  18  95

    when i=1, indexmin=1, j=(1+1)=2

        arr[j]<arr[indexmin]
        arr[2]<arr[1]           -> 21<82 (if block) indexmin=j=2    -> j++ -> j=3
        arr[3]<arr[2]           -> 92<21 (none)                     -> j++ -> j=4
        arr[4]<arr[2]           -> 18<21 (if block) indexmin=j=4    -> j++ -> j=5
        arr[5]<arr[4]           -> 95<18 (none)                     -> j++ then break!

        *** here indexmin=4 (i=1 phase)

        temp = arr[i]           -> temp=arr[1]    -> temp=82
        arr[i] = arr[indexmin]  -> arr[1]=arr[4]  -> arr[1]=18
        arr[indexmin] = temp    -> arr[4]=temp    -> arr[4]=82

        SHIFT OCCURS!                             ->i++ -> i=2

        the array : 16 18 21 92 82 95





        --------------3rd--------------
        index -> 00  01  02  03  04  05
        arr   -> 16  18  21  92  82  95
    
    when i=2, indexmin=2, j=(2+1)=3

        arr[j]<arr[indexmin]
        arr[3]<arr[2]           -> 92<21 (none)                     -> j++ -> j=4
        arr[4]<arr[2]           -> 82<21 (none)                     -> j++ -> j=5
        arr[5]<arr[2]           -> 92<21 (none)                     -> j++ then break!

        *** here indexmin=2 (i=2 phase)

        temp = arr[i]           -> temp=arr[2]    -> temp=21
        arr[i] = arr[indexmin]  -> arr[2]=arr[2]  -> arr[2]=21       
        arr[indexmin] = temp    -> arr[2]=21      -> arr[2]=21

        SHIFT OCCURS BUT SAME ELEMENT SAME SPOT!  -> i++ -> i=3

        the array : 16 18 21 92 82 95





        --------------4th--------------
        index -> 00  01  02  03  04  05
        arr   -> 16  18  21  92  82  95

    when i=3, indexmin=3, j=(3+1)=4

        arr[j]<arr[indexmin]
        arr[4]<arr[3]           -> 82<92 (if block) indexmin=4      -> j++ -> j=5
        arr[5]<arr[4]           -> 95<82 (none)                     -> j++ then break!
        
        *** here indexmin=4 (i=3 phase)

        temp = arr[i]           -> temp=arr[3]    -> temp=92
        arr[i] = arr[indexmin]  -> arr[3]=arr[4]  -> arr[3]=82       
        arr[indexmin] = temp    -> arr[4]=temp    -> arr[4]=92

        SHIFT OCCURS!  -> i++ -> i=4

        the array : 16 18 21 82 92 95





        --------------5th--------------
        index -> 00  01  02  03  04  05
        arr   -> 16  18  21  82  92  95
    
    when i=4, indexmin=4, j=(4+1)=5

        arr[j]<arr[indexmin]
        arr[5]<arr[4]           -> 95<92 (none)                     -> j++ then break!

        temp = arr[i]           -> temp=arr[4]    -> temp=92
        arr[i] = arr[indexmin]  -> arr[4]=arr[4]  -> arr[4]=92       
        arr[indexmin] = temp    -> arr[4]=temp    -> arr[4]=92

        SHIFT OCCURS BUT SAME ELEMENT SAME SPOT!  -> i++ -> i=5 break!!!

        the array : 16 18 21 82 92 95
*/

#include<iostream>
using namespace std;
int main()
{
    cout << "\n";
    int size;
    int temp;
    int j;

    cout << "Enter size: ";
    cin >> size;

    int arr[size];

    cout << "Input: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout <<"\n----------- Selection Sort ----------------";

    cout << "\n";
    cout << "\nUnsorted array       : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    int indexmin;
    int count=0;
    int swaps=0;
    int flag=0;

    for(int i=0; i<size-1; i++){
        indexmin=i;
        for(j=i+1; j<size; j++){
            if(arr[j]<arr[indexmin]){
                indexmin=j;

                //exchange count identifier
                flag=1;
            }
            count++;
        }
        //swapping arr[i] with arr[indexmin]

        if(flag==1){
            //each identification swap counter
            swaps++;
            flag=0;
        }
        temp = arr[i];
        arr[i] = arr[indexmin];
        arr[indexmin] = temp;
    }

    cout << "\nSorted array         : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << "\nNumber of comparisons: " << count;
    cout << "\nNumber of swaps      : " << swaps;

    cout << "\n\n";
    return 0;
}
