const auth = firebase.auth();
const login = document.querySelector('#login-button');
const logout = document.querySelector('#logout-button');
const forum = document.querySelector('#wrapper');
let provider = new firebase.auth.GoogleAuthProvider();

login.onclick = () => auth.signInWithPopup(provider);
logout.onclick = () => auth.signOut();

auth.onAuthStateChanged(user => {
    if (user) {
        // signed in
        logout.style.display = '';
        forum.style.display = '';
        login.style.display = 'none';
    } else {
        // not signed in
        logout.style.display = 'none';
        forum.style.display = 'none';
        login.style.display = '';
    }
});

let myName = prompt("Enter your name here");
    console.log(myName);
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

    function deleteMessage(self) {
        var messageId = self.getAttribute("data-id");
        firebase.database().ref("messages").child(messageId).remove();
    }