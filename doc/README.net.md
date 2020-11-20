The idea for the networking SAI is to use REST:

https://en.wikipedia.org/wiki/Representational_state_transfer

get...() maps to GET in REST
set..() maps to PUT in REST
add...() maps to POST in REST
remove...() maps to DELETE in REST

The idea would be to send any portion of the scenegraph across the nework,
with a remote method invocation (RMI) happening at the top of the scenegraph.

Ideally, the server could send back updates to the client, but we don't know
how that looks yet.  Ideally we would be working in a peer to peer environment, so the server API would look like the client API.   I just don't know how the client receives the API calls from the server and the server receives API calls from the client.   I think there would be a REST server which would manipulate the scenegraph with a corresponding API on the server.

Think about doing pub/sub, not sure
