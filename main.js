function pot(n, w){

    var a = 1;

    for (let i; i<w; ++i){

        a = a*n;

    }

    return a

}

(pot(3, 2))