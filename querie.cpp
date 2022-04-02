// friend bool operator < ( Box&A,Box& B){
//         if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
//             return true;
//         }else{
//             return false;
//         }
//     };

    
//     friend ostream& operator<< (ostream& output, const Box& B){
//         output << B.l << " " << B.b << " " << B.h;
//         return output;
//     }