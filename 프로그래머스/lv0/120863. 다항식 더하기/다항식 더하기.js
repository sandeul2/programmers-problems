function solution(polynomial) {
    const polyArr = polynomial.split(" + ");
    
    let xNum = 0;
    let num = 0;
    
    polyArr.forEach((item) => {
        if(item.includes("x")){
            const xArr = item.split("x");
            
            if(xArr[0] === ""){
                xNum += 1;
            }
            
            if(xArr[0] !== ""){
                xNum += Number(xArr[0]);
            }
        }
        
        if(!item.includes("x")){
            num += Number(item);
        }
    })
    
    if(xNum !== 0 && num !== 0){
        if(xNum === 1){
            return `x + ${num}`;        
        }
        
        return `${xNum}x + ${num}`;    
    }
    
    if(xNum !== 0 && num === 0){
        if(xNum === 1){
            return "x";
        }
        
        return `${xNum}x`;
    }
    
    if(xNum === 0 && num !== 0){
        return `${num}`;
    }
    
    if(xNum === 0 && num === 0){
        return "0";
    }
}