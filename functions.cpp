
/* 
tavan __ revers number __ factorial __ count diviser __ print ary str __ linear search __ binary search 
print array __ sort bublle __ revers array __ input matrix __ print matrix __ max matrix __ sum matrix index
plus matrix __ subtraction matrix __ matrix star  __ mystrUpper __ mystrlower __

*/

#include<iostream>
#include<string>
using namespace std ;

//___________________________________________________________________________________________________

#define row 100
#define column 100


//_____________________________________________________________________________________________________

/// @brief عدد اول را به توان عدد دوم می رساند
/// @param پایه توان (عددی که می خوایم به توان برسانیم) 
/// @param مقدار توان 
/// @return حاصل نهایی
int tavan(int number , int tavan) ;

//------------------------------------------

/// @brief  عدد  ورودی را معکوس می کند
/// @param number 
/// @return  معکوس عدد
int revers_number(int number);

//-----------------------------------------

/// @brief عدد را دریافت کرده و فاکتوریل آن را حساب می کند
/// @param number 
/// @return number!
int factorial(int number) ;

//-----------------------------------------

/// @brief تعداد مقسوم علیه های عدد مورد نظر را چاپ می کند
/// @param number 
/// @return تعداد مقسوم علیه های عدد
int count_diviser( int number );

//-----------------------------------------

/// @brief چاپ اعضای رشته ای در آرایه
/// @param ary 
/// @param number_ary 
void print_ary_str( string ary[] , int number_ary );

//-------------------------------------------

/// @brief 
/// @param ary 
/// @param n_ary 
/// @param number 
/// @return شماره عضو آرایه ای که مقدار آن با عدد مورد نظر برابر است
int linear_search( float ary[] , int n_ary  , float number );

//---------------------------------------------


/// @brief  for search in sort array.
/// @param array 
/// @param N 
/// @param find 
/// @return array find or -1.
int binary_search( int array[] , int N , int find );

//---------------------------------------------

void print_array( int array[] , int number );

//---------------------------------------------

void sort_bublle( int array[] , int number );

//---------------------------------------------

void revers_array( int arr[] , int number );

//---------------------------------------------

void input_matrix( int matrix[ row ][column] ,  int n_row , int n_column );

//--------------------------------------------

void print_matrix( int matrix[ row ][column] ,  int n_row , int n_column );

//--------------------------------------------

int max_matrix( int matrix[ row ][column] , int n_row , int n_column );

//--------------------------------------------

int sum_matrix_index( int matrix[ row ][column] , int n_row , int n_column );

//--------------------------------------------

void plus_matrix( int matrix_1[ row ][column] ,int matrix_2[ row ][column] ,int sum_matrix[ row ][column] ,int n_row ,int n_column );

//--------------------------------------------

void subtraction_matrix( int matrix_1[ row ][column] ,int matrix_2[ row ][column] ,int sum_matrix[ row ][column] ,int n_row ,int n_column );

//--------------------------------------------

void matrix_star( int matrix[ row ][column] , int star_matrix [ row ][column] , int n_row , int n_column );

//--------------------------------------------

void matrix_star( int matrix[ row ][column] , int star_matrix[ row ][column] , int n_row , int n_column );

//-------------------------------------------

void myStrlower( string str );

//--------------------------------------------

void myStrUpper( string str );


//_______________________________________________________________________________________________________

int main ()
{
    int a ;
    int arr[5] = { 12 ,34 ,23 ,45 , 67} ;
    string ary_test[3] = { "mohammad" , "ali" , "majid"}; 

    // revers_number(567);
    // tavan(6 ,7 );
    // factorial(5);
    // a = count_diviser(6);
    // print_ary_str( ary_test , 3 );

    // a = linear_search( arr , 5 , 24 ) ;
    // cout << a ;
   
    sort_bublle ( arr , 5 ) ;
    revers_array( arr , 5 );
    print_array ( arr , 5);

    //cout << a ;
    return 0 ;
}




//_______________________________________________________________________________________________________

int tavan(int number , int tavan)
{
    int res = 1 ;

    for(int i = 1 ; i <= tavan ; i ++ )
    {
        res = res * number ;
    }

    return res ;
}

//-----------------------------------------

int revers_number( int number)
{
    int  revers_number = 0 , remainder ;

    while ( number > 0 )
    {
        remainder = number % 10 ;

        revers_number = revers_number * 10 + remainder ;

        number = number / 10 ;
    }

    return revers_number ;

}

//-----------------------------------------

int factorial(int number) 
{
    int res = 1 ; 

    for( int i = 1 ; i <= number ; i ++ )
    {
        res = res * i ;
    }
    return res ;
}

//----------------------------------------

int count_diviser( int number )
{
    int count = 0 ;

    for( int i = 1 ; i <= number ; i ++ )
    {
        if( number % i == 0 )
        {
            count += 1 ;
        }
    }

    return count ; 
}

//-----------------------------------------

void print_ary_str( string ary[] , int number_ary )
{
    for( int i = 0 ; i < number_ary ; i ++ )
    {
        cout << ary[i] << "\t" ;
    }
}

//-----------------------------------------

int linear_search( float ary[] , int n_ary  , float number )
{
    for ( int i = 0 ; i < n_ary ; i ++ )
    {
        if( ary[i] == number )
        {
            return i ;
        }
    }

    return -1 ;
}

//------------------------------------------

int binary_search( int array[] , int N , int find )
{
    int left = 0 , right = N - 1 , mid ;

    while( left <= right )
    {
        mid =( right + left )/2 ; 

        if (array[mid] == find )
        {
            return mid ;
        }
        else if( find < array[mid] )
        {
            right = mid - 1 ;
        }
        else
        {
            left = mid + 1 ;
        }
    }
    return -1 ;
}

//------------------------------------------

void print_array( int array[] , int number )
{
    for( int i = 0 ; i < number ; i++ )
    {
        cout << array[i] << "\t" ;
    }
}

//------------------------------------------

void sort_bublle( int array[] , int number )
{
    int temp ;
    for( int i = number - 1 ; i > 0 ; i-- )
    {
        for( int j = 0 ; j < i ; j ++ )
        {
            if( array[j] > array[j+1] )
            {
                temp = array[j+1] ;
                array[j+1] = array[j] ;
                array[j] = temp ;
            }
        }
    }
}

//-------------------------------------------

void revers_array( int arr[] , int number )
{
    int i = 0 , j = number - 1 , temp ;

    while( i < j )
    {
        temp = arr[i] ;
        arr[i]= arr[j] ; 
        arr[j] = temp ;
           
        j -= 1 ;
        i += 1 ;
    }

}

//------------------------------------------------

void input_matrix( int matrix[ row ][column] ,  int n_row , int n_column )
{
    for( int i = 0 ; i < n_row ; i +=1 )
    {
        for( int j = 0 ; j < n_column ; j += 1 )
        {
            cin >> matrix[i][j] ;
        }
    }
}

//-------------------------------------------------

void print_matrix( int matrix[ row ][column] ,  int n_row , int n_column )
{
    for( int i = 0 ; i < n_row ; i +=1 )
    {   
        cout << endl ;
        for( int j = 0 ; j < n_column ; j += 1 )
        {
            cout << matrix[i][j] <<"\t" ;
        }
    }
}

//---------------------------------------------------

int max_matrix( int matrix[ row ][column] , int n_row , int n_column )
{
    int max = matrix[0][0] ;

    for( int i = 0 ; i < n_row ; i++ )
    {
        for(int j = 0 ; j < n_column ; j++ )
        {
            if( matrix[i][j] > max )
            {
                max = matrix[i][j] ;
            }
        }
    }
    return max ;
}

//--------------------------------------------------

int sum_matrix_index( int matrix[ row ][column] , int n_row , int n_column )
{
    int sum ;
    for( int i = 0 ; i < n_row ; i++ )
    {
        for( int j = 0 ; j < n_column ; j++ )
        {
            sum += matrix[i][j] ;
        }
    }
    return sum ;
}

//---------------------------------------------------

void plus_matrix( int matrix_1[ row ][column] ,int matrix_2[ row ][column] ,int sum_matrix[ row ][column] ,int n_row ,int n_column )
{
    for( int i = 0 ; i < n_row ; i++ )
    {
        for( int j = 0 ; j < n_column ; j++ )
        {
            sum_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j] ;
        }
    }
}

//----------------------------------------------------

void subtraction_matrix( int matrix_1[ row ][column] ,int matrix_2[ row ][column] ,int sum_matrix[ row ][column] ,int n_row ,int n_column )
{
    for( int i = 0 ; i < n_row ; i++ )
    {
        for( int j = 0 ; j < n_column ; j++ )
        {
            sum_matrix[i][j] = matrix_1[i][j] - matrix_2[i][j] ;
        }
    }
}

//----------------------------------------------------

void matrix_star( int matrix[ row ][column] , int star_matrix[ row ][column] , int n_row , int n_column )
{
    
    for( int i = 0 ; i < n_row ; i++ )
    {
        for( int j = 0 ; j < n_column ; j++ )
        {
            star_matrix[j][i] = matrix[i][j] ;
        }
    }
}

//-----------------------------------------------------

void multiplication_matrix( int matrix_1[row][column] ,int matrix_2[row][column] ,int matrix_3[row][column] ,int a ,int b ,int c )
{
   
    for( int i = 0 ; i <  a ; i++ )
    {
        for( int j = 0 ; j < c ; j++ )
        {
            matrix_3[i][j] = 0 ;
            for( int k = 0 ; k < b ; k++ )
            {
                matrix_3[i][j] += matrix_1[i][k] * matrix_2[k][j] ;
            }
        }
    }
}

//---------------------------------------------------


void matrix_func( int choice )
{
    int matrix_1[row][column] , matrix_2[row][column] , matrix_3[row][column] ;
    int M , N , C ;
    switch ( choice )
    {
    case 1 :
        cin >> M >> N ;
        input_matrix( matrix_1 , M , N ) ;
        cout << sum_matrix_index( matrix_1 , M , N ) ;
        break;

    case 2 :
        cin >> M >> N ;
        input_matrix( matrix_1 , M , N ) ;
        cout << max_matrix( matrix_1 , M , N ) ;
        break;

    case 3 :
        cin >> M >> N ;
        input_matrix( matrix_1 , M , N ) ;
        matrix_star( matrix_1 , matrix_2 , M , N ) ;
        print_matrix( matrix_2 , N , M ) ;
        break;  

    case 4 :
        cin >> M >> N ;
        input_matrix( matrix_1 , M , N ) ;
        input_matrix( matrix_2 , M , N ) ;
        plus_matrix( matrix_1 , matrix_2 , matrix_3 , M , N ) ;
        print_matrix( matrix_3 , M , N ) ;
        break;

    case 5 :
        cin >> M >> N ;
        input_matrix( matrix_1 , M , N ) ;
        input_matrix( matrix_2 , M , N ) ;
        subtraction_matrix( matrix_1 , matrix_2 , matrix_3 , M , N ) ;
        print_matrix( matrix_3 , M , N ) ;
        break;

    case 6 :
        cin >> M >> C >> N ;
        input_matrix( matrix_1 , M , C ) ;
        input_matrix( matrix_2 , C , N ) ;
        multiplication_matrix( matrix_1 ,  matrix_2 , matrix_3 , M , C , N ) ;
        print_matrix( matrix_3 , M , N ) ;
        break;


    default:
        cout << "invalid input!" ;
        break;
    }
}

//--------------------------------------------------

void myStrUpper( string str )
{
    int i = 0 ;
    while( str[i] != '\0' )
    {
        if( str[i] >= 'a' && str[i] <= 'z' )
        {
            str[i] = str[i] + 'A' - 'a' ;
        }
        cout << str[i] ;

        i += 1 ;
    }
}

//-------------------------------------------------------

void myStrlower( string str )
{
    int i = 0 ;
    while( str[i] != '\0' )
    {
        if( str[i] >= 'A' && str[i] <= 'Z' )
        {
            str[i] = str[i] - 'A' + 'a' ;
        }
        cout << str[i] ;

        i += 1 ;
    }
}

//---------------------------------------------------------
