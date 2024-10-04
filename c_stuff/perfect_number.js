
function isPerfectNumber(num){

    let s;
    for (var i=0; i<num; i++) {

        if ((num % i) == 0){
            s = s + i;
        }

    }

    if (s == num ){
        return true;
    } else{
        return false;
    }

}
