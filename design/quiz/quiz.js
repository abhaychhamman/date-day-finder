 
// let student=document.getElementById("student");
let arr=["kanchan","ananya","naina","ayush","ritish","heena","khushbu"]
// console.log(student);
 






function myfunc() {
let a=0
    for (let index = 0; index < arr.length; index) {
        a++;
    rand=Math.floor( Math.random()*arr.length)
    console.log("here print rand",rand)
    const element = arr[rand];
    // console.log("element",element)
    console.log("splice element",arr.splice(rand,1))
    // console.log("here print avaliable element",arr)

    let ht=` <div class="student_list">
    <img src="profile pic/${element}.jpeg" alt="" class="profile">
    <h3 class="name"> ${element}<br><br>Quiz No  ${a} </h3>
   
    </div>
    
    </div>`
    
    
    
            document.getElementById("student").innerHTML+= ht;

    
}

 

    
}


 