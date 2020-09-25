# Peer-graded Assignment: Explaining Kerberos

<b>PROMPT</b></br>
Explain in detail what Kerberos tries to solve?</br>

Kerberos tries to allow entities such as clients and servers to prove their identity over insecure channels and it tries to provide mutual authentication.</br></br></br>


<b>PROMPT</b></br>
How does Kerberos solve the authentication issue?</br>
- When a user wants to authenticate his identity by enter their username and password on his machine, his Kerberos client software will take the password and generate a encryption key based of it.</br>

- Next, the Kerberos client software  will send a message to the  Authentication Server (AS) which includes the username (user ID). The AS uses the user ID to check if there is an account in its database. If so the AS will generate the secret key using the password stored. The AS will use the secret key to encrypt and send a message containing the client TGS session key. The AS also sends a second message with a Ticket Granting Ticket (TGT), which is encrypted using the TGS secret key. The TGT has information such as the client ID, ticket lifespan, and the client service session key. </br>

-The first message will be decrypted using the shared secret key sended by the AS. It then provides the secret key that can decrypt the second message giving the client a valid TGT.  Since the client has authenticated and received a valid TGT, he will request access to services.</br>


-The client will send a message to the TGS with the encrypted TGT received from the AS earlier along with the service name requesting access to. Also, the client will send a message with an authenticator which has the client ID and a time stamp that's encrypted with the client TGT session key from the AS. </br>

-The TGS decrypts the TGT using the TGS secret key, which provides the TGS with the client TGS session key. It then uses the key to decrypt the authenticator message. Next, it will check the client ID of these two messages to ensure they match. If they do, it sends two messages back to the client. The first one will contain the client ID, client address, ticket lifespan, and the client-server session key encrypted using the service's secret key. The second message will contain the client-server session key itself, and is encrypted using the client TGS session key. </br>

-The client has enough information to authenticate himself to the service server or SS. The client sends two messages to the SS. The first message is the encrypted client to server ticket received from the TGS. The second is a new authenticator with the client ID and time stamp encrypted using the client-server session key. The SS decrypts the first message using its secret key which provides it with the client-server session key. The key is then used to decrypt the second message, and it compares the client ID in the authenticator to the one included in the client to server ticket. If these IDs match, then the SS sends a message containing the time stamp from the client supplied authenticator encrypted using the client-server session key. </br>

-Finally, the client will decrypt the message, and check that the time stamp is correct authenticating the server. If this all succeeds, then the server grants access to the requested service on the client.</br></br></br>


<b>PROMPT</b></br>
How is Kerberos used today and why it is important?</br>

Kerberos authentication is used especially in environments where runs Microsoft Active Directory and it's very important because in enterprise environments there are several services and many users. In addition, Kerberos has multiple benefits ,for instance, mutual authentication and faster authentication.</br></br></br>


<b>PROMPT</b></br>
Explain why time is an important part of Kerberos </br>

The client and server clocks require to be synchronized or relatively closely synchronized because if not authentication will fail since the tickets expire before the client is authenticated.</br></br></br>


<b>PROMPT</b></br>

Diagram Kerberos authentication process. Label key components. Submission can be a picture or submitted in a Word document format
<img src="https://github.com/ShafayetB/Coursera/blob/master/Computer-Security-and-/Windows%20Server%20Management%20and%20Security/Peer-graded%20Assignment/Kerberos%20authentication%20process%20.PNG">
