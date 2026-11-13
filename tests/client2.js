import { io } from 'socket.io-client';
import { globSync } from 'node:fs';
import { glob } from 'node:fs/promises';

// The URL is correct. The options are simplified.
// We have REMOVED the `transports: ["polling"]` option.
const socket = io("http://127.0.0.1:3000", {
    cors: {
      origin: "*",
      methods: ["GET", "POST"]
    },
    maxHttpBufferSize: 1e9,
    pingTimeout: 60000,
    transports: [ "polling", "websocket" ]
});

async function dosearch(data) {
    console.log("✅ Server sent a search request with data:", data);
    
    // It's good practice to ensure you're connected before emitting.
    if (socket.connected) {
        console.log("-> Emitting clientjoin...");
        socket.emit('clientjoin', "SearchFeed");

        console.log("-> Emitting clientactivesession...");
        socket.emit('clientactivesession', "yottzumm");
        
        console.log("-> Emitting clientactivename...");
        socket.emit('clientactivename', "SearchFeed");
	var json = [];
	let dirs = [
		'src/main/data/**',
		'src/main/personal/**',
		'src/main/ply/**',
		'src/main/stl/**',
		'src/main/wrl/**',
		'www.web3d.org/x3d/content/examples/Basic/**',
		'www.web3d.org/x3d/content/examples/ConformanceNist/**',
		'www.web3d.org/x3d/content/examples/HumanoidAnimation/**',
		'www.web3d.org/x3d/content/examples/Vrml2Sourcebook/**',
		'www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/**',
		'www.web3d.org/x3d/content/examples/X3dForWebAuthors/**',
	];
	for (let dir in dirs) {
		for await (let file of glob(dirs[dir]+'/*'+data+'*.{x3d,x3dj,json,stl,ply}')) {
			file = file.replace(/\\/g, '/');
			file = file.replace(/^www.web3d.org/, '/www.web3d.org');
			file = file.replace(/^src.main.html/, '/');
			file = file.replace(/^src.main.data/, '/src/main/data');
			// file = file.replace(/^data/, '../data');
			console.log("returning", file);
			json.push(file);
		}
	}
	console.log("Sending ", json.length, "files");

        const results = [ { name: "Search results", files: json } ];
        // console.log("-> Emitting clientresults...", results);
	socket.emit("clientresults", results);
    } else {
        console.log("⚠️ Cannot emit, socket is not connected.");
    }
}

function hurryupandwait() {
	setTimeout(hurryupandwait, 5000); // Increased timeout to reduce console spam
}

function disconnect(reason) {
	console.log(`🔌 Disconnected from server. Reason: ${reason}`);
}

function html_servermessage(data) {
	console.log(`Message from server. ${data}`);
}

socket.on("connect", () => {
	console.log(`🚀 SUCCESS! Connected to server with ID: ${socket.id}`);
	console.log("connect to server through potentially this port: http://127.0.0.1:3000/src/main/html/main_viewer.html");
	// socket.emit("clientsearch", [{ files: ["../data/bubs2.json", "../data/bubs3.json" ]}]);
	socket.on("serversearch", dosearch);
	// socket.on("clientsearch", dosearch);
	socket.on("disconnect", disconnect);
	socket.on("html_servermessage", html_servermessage);
	hurryupandwait(); // This can be commented out.
	// dosearch(["../data/rubikPly.json"]);
});

// It's crucial to also handle connection errors for debugging.
socket.on("connect_error", (err) => {
    console.error(`❌ FAILED to connect. Reason: ${err.message}`);
    console.error("   Please ensure the server at http://127.0.0.1:3000 is running.");
});

console.log("Attempting to connect to the server...");
