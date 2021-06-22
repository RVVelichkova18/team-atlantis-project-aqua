const auth = firebase.auth();
const login = document.querySelector('#login-button');
const logout = document.querySelector('#logout-button');
let provider = new firebase.auth.GoogleAuthProvider();

login.onclick = () => auth.signInWithPopup(provider);
logout.onclick = () => auth.signOut();

auth.onAuthStateChanged(user => {
    if (user) {
        // signed in
        logout.hidden = false;
    } else {
        // not signed in
        logout.hidden = true;
    }
});