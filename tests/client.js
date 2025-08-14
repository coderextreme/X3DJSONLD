import { io } from 'socket.io-client';

var socket = io("http://localhost:3000/", {
    cors: {
      origin: "*",
      methods: ["GET", "POST"]
    },
    maxHttpBufferSize: 1e9,
    pingTimeout: 60000,
    transports: [ "polling", "websocket" ]
});

function dosearch(data) {
        console.log("Got data", data)
        socket.emit('clientjoin', "SearchFeed");
        socket.emit('clientactivesession', "yottzumm");
        socket.emit('clientactivename', "SearchFeed");
	socket.emit("clientresults", 
          [
	    { name: "Search results", files: [
		"../data/rubikPly.json"
		    ]
	    }]);
}

function hurryupandwait() {
        // console.log("looping"I)
	setTimeout(hurryupandwait, 500);
}

function disconnect(reason) {
	console.log("Disconnected from server", reason);
}

socket.on("connect", () => {
	console.log("Connected to server!", socket.id);
	socket.on("serversearch", dosearch);
	socket.on("disconnect", disconnect);
	hurryupandwait();
});
