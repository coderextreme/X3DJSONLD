// Polyfill fixed in Node.js 22
// Polyfill From Google AI
if (!Set.prototype.difference) {
  Set.prototype.difference = function(otherSet) {
    const differenceSet = new Set();
    for (const element of this) {
      if (!otherSet.has(element)) {
        differenceSet.add(element);
      }
    }
    return differenceSet;
  };
}

// Polyfill From Claude AI
if (!Set.prototype.intersection) {
  Set.prototype.intersection = function(...sets) {
    // Convert all arguments to Sets, in case they aren't already
    const otherSets = sets.map(s => s instanceof Set ? s : new Set(s));

    // Create a new Set with elements that exist in this Set
    // and all other Sets
    return new Set(
      [...this].filter(element =>
        otherSets.every(set => set.has(element))
      )
    );
  };
}

// Polyfill From Claude AI
if (!Set.prototype.union) {
  Set.prototype.union = function(...sets) {
    // Create a new Set with all elements from this Set
    const unionSet = new Set(this);

    // Add all elements from the other Sets
    for (const set of sets) {
      for (const elem of set) {
        unionSet.add(elem);
      }
    }

    return unionSet;
  };
}

const LOG = function() {
    // console.log('SERVER', ...arguments);
};

export default class Multiplayer {
    constructor(io) {
        let mp = this;
            this.maxplayers = 1;
            this.players = {};
            this.oldplayers = {};
        if (io === null) {
            LOG("Couldn't start socket.io server, can't connect clients");
        }
        this.io = io;
        io.on('connection', function(socket) {
          console.log("Connection from", socket.client.id);
          // io.emit('serversearch', "rubik");
          socket.on('clientsearch', function() {
            //if (mp.getPlayer(socket)) {
          	console.log("Searching", socket.client.id, arguments[0]);
                io.emit('serversearch', arguments[0]);
          	console.log("Done searching", socket.client.id, arguments[0]);
            //} else {
                //socket.emit('html_servermessage', "You need to join before publishing documents");
	    //}
	  });
          socket.on('clientresults', function() {
            console.log("Results", socket.client.id, "files:", arguments[0]);
            io.emit('serverresults', arguments);
	  });
          socket.on('clientpublish', function() {
            if (mp.getPlayer(socket)) {
                mp.clientpublish(socket, arguments);
            } else {
                socket.emit('html_servermessage', "You need to join before publishing documents");
            }
          });
          socket.on('clientactivename', function() {
            if (mp.getPlayer(socket)) {
                mp.clientactivename(socket, arguments);
            } else {
                socket.emit('html_servermessage', "You need to join before sending username");
            }
          });
          socket.on('clientactivesession', function() {
            if (mp.getPlayer(socket)) {
                mp.clientactivesession(socket, arguments);
            } else {
                socket.emit('html_servermessage', "You need to join before sending room");
            }
          });
          socket.on('x3d_clientactivesession', function() {
            if (mp.getPlayer(socket)) {
                mp.clientactivesession(socket, arguments);
            } else {
                socket.emit('html_servermessage', "You need to join before sending room");
            }
          });
          socket.on('clientsessions', function() {
            if (mp.getPlayer(socket)) {
                mp.clientsessions(socket, arguments);
            } else {
                socket.emit('html_servermessage', "You need to join before sending sessions");
            }
          });
          socket.on('x3d_clientsessions', function() {
            if (mp.getPlayer(socket)) {
                mp.clientsessions(socket, arguments);
            } else {
                socket.emit('html_servermessage', "You need to join before sending sessions");
            }
          });
          socket.on('python_clientavatar', function() {
	    const dml = arguments[0].toString().split(" ");
            mp.python_clientavatar(socket, dml);
          });
          socket.on('clientsdp', function() {
            if (mp.getPlayer(socket)) {
                mp.clientsdp(socket, arguments);
            } else {
                socket.emit('html_servermessage', "You need to join before sending SDP");
            }
          });
          socket.on('clientmessage', function() {
            if (mp.getPlayer(socket)) {
                mp.clientmessage(socket, arguments);
            } else {
                socket.emit('html_servermessage', "You need to join before sending messages");
            }
          });
          socket.on('clientmove', function() {
            LOG(...arguments);
            if (mp.getPlayer(socket)) { // if joined
                mp.clientmove(socket, arguments[0], arguments[1]);
            } else {
                socket.emit('html_servermessage', "Something wrong with socket or player are you in a session?");
            }
          });
          socket.on('x3d_clientmove', function() {
            LOG(...arguments);
            if (mp.getPlayer(socket)) { // if joined
                mp.clientmove(socket, arguments[0], arguments[1]);
            } else {
                socket.emit('html_servermessage', "Something wrong with socket or player are you in a session?");
            }
          });
          socket.on('clientrejoin', function () {
            if (mp.getPlayer(socket)) {
                socket.emit('html_servermessage', "You're already joined, not rejoining");
            } else {
                mp.clientrejoin(socket, arguments);
            }
          });
	/*
          socket.on('x3d_clientjoin', function () {
            if (mp.getPlayer(socket)) {
                socket.emit('html_servermessage', "You're already joined");
            } else {
                mp.clientjoin(socket, "x3dbot");
            }
          });
	  */
          socket.on('clientjoin', function () {
            if (mp.getPlayer(socket)) {
                socket.emit('html_servermessage', "You're already joined");
            } else {
                mp.clientjoin(socket, "htmlbot");
            }
          });
          socket.on('error', function(e){
            LOG(e);
          });
          socket.on('disconnect', function(){
            console.log("Disconnecting", arguments);
            if (mp.getPlayer(socket)) {
                mp.disconnect(socket, arguments);
            } else {
                socket.emit('html_servermessage', "You need to connect before disconnecting");
            }
          });
        });
    }
    disconnect(socket, args) {
        let player = this.getPlayer(socket);
	let playerusername = player.username;
	let playernumber = player.playernumber;
        if (player) {
            LOG('html_servermessage', player.playernumber+" quit.");
            this.io.emit('html_servermessage', player.username+"#"+player.playernumber+" quit.");
            if (player.room) {
                // this.sendRoomMessage(player, player.username+"#"+player.playernumber+" quit.");
            	socket.leave(player.room);
            	this.sendPeersTo(player.room);
            } else {
		    LOG("No room");
	    }
            this.oldplayers[socket.client.id] = player;
            delete this.players[socket.client.id];
            this.reportPlayers(socket);
        }
        console.log("Disconnection from", socket.client.id, playerusername+"#"+playernumber);
    }
    sendPeersTo(room) {
        let names = [];
        for (var player in this.players) {
            if (this.players[player] !== null && this.players[player].room === room) {
                names.push(this.players[player].username+"#"+this.players[player].playernumber);
            }
        }
        this.sendApiMessageToRoom('serverpeers', names, room);
    }
    python_clientavatar(socket, dml) {
        let player = this.getPlayer(socket);
        this.io.emit('x3d_serveravatar', player.playernumber, dml, player.room);
    }
    clientsessions(socket, msg) {
        let player = this.getPlayer(socket);
        let oldsessions = player.sessions;
        // LOG("old session", oldsessions);
        try {
            player.sessions = msg[0];
        } catch (e) {
            LOG(e, msg[0]);
        }
        let newsessions = player.sessions;

        let oldset = new Set(oldsessions);
		if (!oldset) {
			oldset = new Set([]);
		}
        let newset = new Set(newsessions);
		if (!newset) {
			newset = new Set([]);
		}
        let diff = newset.difference(oldset);
        let inter = newset.intersection(oldset);
        let onlynew = diff.union(inter);
        let toremove = oldset.difference(newset);
    
        for (let og in toremove) {
            let oldsession = toremove[og];
            // LOG("old", session);
            let oldname = oldsession["Session Petname"];
            let oldtoken = oldsession["Session Token"];
            oldsession["Session Active?"] = false;
	    if (oldname) {
            	this.sendApiMessageToRoom('html_servermessage', player.username+"#"+player.playernumber+" left "+oldname+".", oldtoken);
		LOG(player.username, "from", oldname);
	    }
            socket.leave(oldtoken);
            this.sendPeersTo(oldtoken);
        }
        for (let ng in onlynew) {
            let newsession = onlynew[ng];
            let newname = newsession["Session Petname"];
            let newtoken = newsession["Session Token"];
            newsession["Session Active?"] = false;
            socket.join(newtoken);
            this.sendPeersTo(newtoken);
	    if (newname) {
            	this.sendApiMessageToRoom('html_servermessage', player.username+"#"+player.playernumber+"@"+newname+" joined.", newtoken);
		LOG(player.username, "to", newname);
            }
        }
	
        socket.emit("serversessions", newsessions);
    }
    clientactivesession(socket, msg) {
        let newroom = "common room";
        let player = this.getPlayer(socket);
        let oldroom = player.room;
        player.room = this.getRoom(player, msg[0]);
        if (player && player.room) {
            LOG("player", player.username, player.room);
        } else {
            LOG("Couldn't find player (not connected?)", player.username, player.room);
        }
        if (oldroom !== player.room) {
            if (this.getPetName(oldroom)) {
                this.io.to(oldroom).emit('html_servermessage', player.username+"#"+player.playernumber+"@"+this.getPetName(oldroom)+" went idle in "+oldroom);
                socket.leave(oldroom);
                this.sendPeersTo(oldroom);
            } else {
                LOG("Room", oldroom, "doesn't have a petname");
            }
            if (!player.room) {
                LOG("Oops", player.username+"#"+player.playernumber, "doesn't have a room setting to", msg[0]);
                player.room = msg[0];
            }
            if (player.room) {
                socket.join(player.room);
                this.sendPeersTo(player.room);
                for (let g in player.sessions) {
                    LOG("tokens", player.sessions[g]['Session Token'], player.room);
                    if (player.sessions[g]['Session Token'] === player.room) {
                        newroom = player.sessions[g]['Session Petname'];
                        player.sessions[g]['Session Active?'] = true;
                    } else {
                        player.sessions[g]['Session Active?'] = false;
                    }
                }
                // this.sendRoomMessage(player, player.username+"#"+player.playernumber+"@"+newroom+" became active.");
                LOG(player.username+"#"+player.playernumber+"@"+newroom+" became active.");
            }
        } else {
            LOG(oldroom, '===', player.room);
        }
    }
    clientactivename(socket, msg) {
        let player = this.getPlayer(socket);
        let oldusername = player.username;
        player.username = msg[0];
        if (oldusername !== player.username) {
            // LOG(oldusername, "!==", player.username);
            this.sendRoomMessage(player, oldusername+"#"+player.playernumber+" changed their name to "+player.username+"#"+player.playernumber+".");
            this.sendPeersTo(player.room);
        } else {
            // LOG(oldusername, "===", player.username);
        }
    }
    clientsdp(socket, sdp) {
        this.clientactivesession(socket, [sdp['0'].s]);
        this.clientactivename(socket, [sdp['0'].o[0]]);
    }
    clientmessage(socket, msg) {
        let player = this.getPlayer(socket);
	if (player && msg[0] && player.room) {
	    LOG("Sending", player.username, msg);
            this.sendRoomMessage(player, "<"+player.username+"#"+player.playernumber+"> "+msg[0]);
        } else if (player && player.room) {
	    LOG("No message to send", msg);
        } else if (!player.room) {
	    LOG("can't get player message through to room", player.username, msg);
	} else {
	    LOG("can't get message through to socket", socket, msg);
	}
    }
    clientpublish(socket, msg) {
        LOG("publishing to all", msg);
        let player = this.getPlayer(socket);
        if (player.room) {
            this.sendApiMessageToPlayerRoom('serverpublish', msg, player);
        }
    }
    clientmove(socket, position, orientation) {
        LOG("clientmove position", position);
        LOG("clientmove orientation", orientation);
        let player = this.getPlayer(socket);
        if (!player) {
            LOG("Couldn't find player on this socket");
            return;
        } else {
            player.position = position;
            player.orientation = orientation;
            LOG("Could find player on this socket");
        }
        /*
        if (typeof player.position !== 'undefined') {
            var newposition = position;
            var oldposition = player.position;
            var delta = [newposition[0] - oldposition[0], 
                newposition[1] - oldposition[1], 
                newposition[2] - oldposition[2]];
            var distance = Math.sqrt(delta[0]*delta[0]+delta[1]*delta[1]+delta[2]*delta[2]);
            if (distance > 1) { // maximum distance player can travel
                delta = [delta[0]/distance, delta[1]/distance, delta[2]/distance];
                player.position = [oldposition[0]+delta[0],
                    oldposition[1]+delta[1],
                    oldposition[2]+delta[2]];
            } else {
                player.position = newposition;
            }
            player.orientation = orientation;
        } else {
            player.position = [0,0,0];
            player.orientation = orientation;
        }
        // LOG('html_serverupdate', player);
        */
        if (player.room) {
            LOG("sending server update to room", player.room, player.username, player.playernumber, player.position, player.orientation);
            this.sendApiMessageToPlayerRoom('html_serverupdate', player, player);
            this.getRoomSend(player).emit('x3d_serverupdate', player.playernumber, player.position, player.orientation, player.room);
        } else {
            LOG("warning, room does not exist", player.username, "#", player.playernumber, "@", player.room);
        }
        function close(v1, v2) {
            return Math.abs(v1 - v2) < 0.01;
        }
        function inRange(p1, p2) {
            return (close(p1.position[0], p2.position[0]) &&
                close(p1.position[1], p2.position[1]) &&
                close(p1.position[2], p2.position[2]));
        }
        /*
        for (var p in this.players) {
            // test collisions
            if (p != socket.client.id) {
                if (typeof this.players[p].position !== 'undefined') {
                    // player has moved
                    if (inRange(this.players[p], player)) {
                        // COLLISION
                        // reset to beginning
                        this.players[p].position = [0,0,0];
                        player.score++;
                        if (typeof orientation[0] === 'number') {
                            //LOG('html_serverupdate', this.players[p]);
                            this.io.emit('html_serverupdate', this.players[p]);
                        }
                        this.io.emit('serverscore', player.playernumber, player.score);
                    }
                }
            }
        }
        */
    }
    clientrejoin(socket, msg) {
        var i = msg[0].indexOf("?");
        if (i >= 0) {
            var id = msg[0].substring(i+1);
            if (typeof this.oldplayers[id] !== 'undefined') {
                this.players[socket.client.id] = {
                    playernumber: this.oldplayers[id].playernumber,
                    id: socket.client.id,
                    score: this.oldplayers[id].score,
                    username:this.oldplayers[id].username,
                    room:this.oldplayers[id].room};
                //socket.emit('html_servermessage', 'Your previous id was '+id);
                //socket.emit('html_servermessage', 'Your current id is '+socket.client.id);
                //LOG(this.players[socket.client.id]);
                let player = this.getPlayer(socket);
                if (player.room) {
                    socket.join(player.room);
                    this.sendRoomMessage(player, player.username+"#"+player.playernumber+"@"+player.room+" rejoined.");
                    this.sendPeersTo(player.room);
                }
                this.reportPlayers(socket);
                socket.emit('servercapability', player, player.playernumber);
            } else {
                this.clientjoin(socket, getPlayer(socket).username);
            }
        } else {
            this.clientjoin(socket, getPlayer(socket).username);
            this.clientjoin(socket);
        }
    }
    clientjoin(socket, username) {
        // TODO reconnect SDP
        this.players[socket.client.id] = {playernumber: this.maxplayers, id: socket.client.id, score:0, username:username, room:"common room"};
        // LOG(this.players[socket.client.id]);
        this.maxplayers++;
        let player = this.getPlayer(socket);
        if (player.room) {
            socket.join(player.room);
            this.sendPeersTo(player.room);
            this.sendRoomMessage(player, player.playernumber+" joined.");
        }
        this.reportPlayers(socket);
        socket.emit('servercapability', player, player.playernumber);
    }

    reportPlayers(socket) {
        var numPlayers = 0;
        for (var p in this.players) {
            if (this.players[p] != null) {
                numPlayers++;
            }
        }
        this.io.emit('html_servermessage', "The server has "+numPlayers+" resident"+(numPlayers !== 1 ? "s." : "."));
        var uri = socket.handshake.headers.referer;
        if (typeof uri !== 'undefined') {
            var hostIndex = uri.indexOf("//")+2;
            var trailing = uri.indexOf("/", hostIndex)-hostIndex;
            var hostport = uri.substr(hostIndex, trailing);
            var portIndex = -1;
            portIndex = hostport.indexOf(":");
            var host = "localhost";
            var port = 51000;
            if (portIndex >= 0) {
                host = hostport.substr(0, portIndex);
                port = hostport.substr(portIndex+1);
            } else {
                host = hostport;
                port = 80;
            }
            var args = { path:{"host": host, port: port, players: numPlayers}};
        }
    }

    getPlayer(socket) {
        return this.players[socket.client.id];
    }

    getRoomTo(room) {
        LOG("1. Sending info to", room);
        return this.io.to(room);
    }

    getRoomSend(player) {
        LOG("2. Sending", player.username, "@", player.room);
        return this.getRoomTo(player.room);
    }

    sendRoomMessage(player, msg) {
        LOG("3. Sending html_servermessage '", msg, "' to", player.username);
        this.sendApiMessageToPlayerRoom('html_servermessage', msg, player);
    }
    getRoom(player, petName) {
        for (let g in player.sessions) {
            if (player.sessions[g]['Session Petname'] === petName) {
                return player.sessions[g]['Session Token'];
            }
        }
    }
    getPetName(player, token) {
        for (let g in player.sessions) {
            if (player.sessions[g]['Session Token'] === token) {
                LOG("returing petname", player.sessions[g]['Session Petname']);
                return player.sessions[g]['Session Petname'];
            }
        }
        LOG("couldn't find room", token);
    }
    sendApiMessageToRoom(api, msg, room) {
        LOG("4. Sending", api, "'", msg, "'", "@", room);
        this.getRoomTo(room).emit(api, msg);
    }
    sendApiMessageToPlayerRoom(api, msg, player) {
        if (player.room) {
            LOG("5. Sending", api, "'", msg, "'", player, "@", player.room);
            this.getRoomSend(player).emit(api, msg);
        } else {
            LOG("Attempted to send", msg, "to ", player.username, "but player is not in room");
        }
    }
}
