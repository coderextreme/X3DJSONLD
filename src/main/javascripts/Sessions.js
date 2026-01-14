class Sessions {
	static LOG () {
	    console.log('SESSIONS', ...arguments);
	}
	get user() {
	    return this._user;
	}
	set user(value) {
	    this._user = value;
	}
	get sockets() {
	    return this._sockets;
	}
	set sockets(value) {
	    this._sockets = value;
	}
	constructor() {
	      this._user = this;
	      this._sockets = {};
	      this.reconnect();

	}
	operateOnSessions(callback) {
		let UserGlobalSessions = JSON.parse($('#sessionjson').val());
		if (UserGlobalSessions !== null && (typeof UserGlobalSessions === 'object') && UserGlobalSessions.length > 0 && typeof this._user !== 'undefined') {
			UserGlobalSessions = this.updateSessions();
			for (let g in UserGlobalSessions) {
				if (UserGlobalSessions.hasOwnProperty(g) && parseInt(g, 10) >= 0) {
					let session = UserGlobalSessions[g];
					let sessionname = session['Session Petname'];
					let socket = this._user._sockets[sessionname];
					if (socket) {
						Sessions.LOG("Loading", UserGlobalSessions);
						socket.emit('clientsessions', UserGlobalSessions);
					}
					callback(sessionname, session, this);
				}
			}
			$('#sessionjson').val(JSON.stringify(UserGlobalSessions, null, 2));
		}
	}
	updateSessions() {
		// try {
			let UserGlobalSessions = JSON.parse($('#sessionjson').val());
			let unpackedSessions = [];
			for (let g in UserGlobalSessions) {
				if (UserGlobalSessions.hasOwnProperty(g) && parseInt(g, 10) >= 0) {
					let session = UserGlobalSessions[g];
					let sessionnames = session['Session Petname'].split(":");
					let sessiontokens = session['Session Token'].split(":");
					if (sessionnames.length != sessiontokens.length) {
						alert("Corrupted sessions, see matching colons");
					} else {
						for (let us in sessiontokens) {
							let unpackedSession = {
								"Session Petname" :sessionnames[us],
								"Session Token" :sessiontokens[us],
								"Session Type" :session["Session Type"],
								"Session Link" :session["Session Link"]
							}
							unpackedSessions.push(unpackedSession);
						}
					}
				}
			}
			UserGlobalSessions = unpackedSessions;
		/*
			this.operateOnSessions(function (sessionname, session, user) {
				let socket = this._user._sockets[sessionname];
				if (socket) {
					Sessions.LOG("Loading", UserGlobalSessions);
					socket.emit('clientsessions', UserGlobalSessions);
				}
			});
			*/
			$('#sessionjson').val(JSON.stringify(UserGlobalSessions, null, 2));
			return UserGlobalSessions;
		/*
		} catch (e) {
			Sessions.LOG(e);
		}
		*/
	}
	disconnect() {
	    // try {
		for (let sn in this._sockets) {
			Sessions.LOG("disconnecting "+sn);
			let socket = this._sockets[sn];
			if (socket !== null) {
				socket.disconnect();
				delete this._sockets[sn];
			}
		}
		this._sockets = {};
		/*
            } catch (e) {
		    Sessions.LOG(e);
		    alert(e);
	    }
	    */
	}
	reconnect() {
		'use strict';
		// try {
			Sessions.LOG("Reconnecting");
			let username = $('#username').val();
			while (username.trim() === "") {
				username = prompt("Please specify a username:");
				$('#username').val(username);
			}
			this.disconnect();
			this.operateOnSessions(function (sessionname, session, user) {
				let sessiontoken = session['Session Token'];
				let sessionlink = session['Session Link'];
				let socket = user._sockets[sessionname];
				if (!socket) {
					if (sessionlink && typeof sessionlink === 'string') {
						try {
							socket = null;
							socket = io(sessionlink, {
								maxHttpBufferSize: 1e8, pingTimeout: 60000,
								transports: [ "polling" ]
							});
							Sessions.LOG('Connected to remote scene server', sessionlink);
						} catch (e) {
							Sessions.LOG(e);
						}
					} else {
						// Sessions.LOG('Session Link must be specificed in Session Description for scene collaboration');
					}
					if (socket === null || typeof socket === 'undefined') {
					     // if all else fails, connect back to same host
					     try {
						 socket = io({
							maxHttpBufferSize: 1e8, pingTimeout: 60000,
							transports: [ "polling" ]
						});
						Sessions.LOG('Connected to chat server');
					    } catch (e) {
						Sessions.LOG(e);
					    }
					}
					if (socket === null || typeof socket === 'undefined') {
					     // if all else fails, connect to localhost
					     try {
						 socket = io("http://localhost:8088", {
							maxHttpBufferSize: 1e8, pingTimeout: 60000,
							transports: [ "polling" ]
						});
						Sessions.LOG('Connected to chat server');
					    } catch (e) {
						Sessions.LOG(e);
					    }
					}
					if (socket === null || typeof socket === 'undefined') {
					     // if all else fails, connect to websocket
					     try {
						 socket = io("ws://localhost:8088", {
							maxHttpBufferSize: 1e8, pingTimeout: 60000,
							transports: [ "websocket" ]
						});
						Sessions.LOG('Connected to chat server');
					    } catch (e) {
						Sessions.LOG(e);
					    }
					}
					if (socket !== null) {
						user._sockets[sessionname] = socket;
						socket.on('html_servermessage', user.html_servermessage);
						socket.on('serverpeers', user.serverpeers);
						socket.on('serversessions', user.serversessions);
						socket.on('html_serverupdate', user.html_serverupdate);
						socket.on('servercapability', user.servercapability);
						socket.emit('clientjoin');
						// socket.emit("clientsessions", UserGlobalSessions);
						// socket.emit('clientrejoin', location.href);
						socket.emit("clientactivesession", sessiontoken);
						socket.emit('clientactivename', username);
						// socket.emit('clientmove', [0,0,0], [0,0,0]);
					} else {
						Sessions.LOG("Couldn't connect to", sessionlink);
					}
				}
			});
		/*
		} catch (e) {
			Sessions.LOG("ERROR RECONNECTING", e);
		}
		*/
	}
	serversessions(msg) {
		let oldsession = $('#session').val();
		$('#session').empty();
		let sessions = msg;
		// HTMLUser.LOG(sessions);
		let noop = $("<option>", {
		  value: "common room",
		  text: "common room"
		});
		$('#session').append(noop);

		$('#blocksessions').empty();

		for (let g in sessions) {
		    if (sessions.hasOwnProperty(g) && parseInt(g, 10) >= 0) {
			let session = sessions[g];
			// HTMLUser.LOG(session);
			let option = $("<option>", {
			  value: session['Session Token'],
			  text: session['Session Petname'] 
			});

			$('#session').append(option);
			$('#blocksessions').append(option);
		    }
		}
		$('#session').val(oldsession);
	}
	html_servermessage (msg) {
		$('#messages').append($('<li>').text(msg));
		HTMLUser.LOG("message from server", msg);
		scrollToBottom();
	}
	serverpeers(msg) {
		$('#score').empty();
		$('#score').append($('<li>').text("Session members:"));
		if (typeof msg === 'object') {
			for (let m in msg) {
				if (!msg[m].startsWith("x3dbot#")) {
					$('#score').append($('<li>').text(msg[m]));
				}
			}
		} else {
			$('#score').append($('<li>').text(msg));
		}
	}
	html_serverupdate(p) {
		if (p) {
			this.html_servermessage(p.username+"#"+p.usernumber+" at "+p.position+" turns "+p.orientation);
		}
	}
	servercapability() {
		if ( history.pushState ) {
			var href = location.href;
			var i = href.indexOf("?");
			if (i >= 0) {
				href = href.substring(0, i);
			}
			history.pushState( {}, document.title, href+"?"+arguments[0].id );
		}
	}
}

var usersessions = new Sessions();
