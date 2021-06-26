let myName = prompt("enter your name");

        const sendMessage =() =>{
            let message = document.getElementById("message").value;
            firebase.database().ref("messages").push().set({
                "sender": myName,
                "message": message
            })
            let message1 = document.getElementById("message");
            message1.value="";
            return false;
        }