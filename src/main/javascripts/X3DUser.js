function LOG () {
    Browser.print('X3D Scene', ...arguments);
}

hAnimJoints = {};
linksShapes = {};
nodes = [];


class X3DUser {
	static LOG () {
	    Browser.print('X3D Browser', ...arguments);
	}
	get sockets() {
	    return this._sockets;
	}
	set sockets(value) {
	    this._sockets = value;
	}
	constructor(sessions) {
	      let x3duser = this;
	      this._x3duser = this;
	      this._sessions = sessions;
	      this._sockets = this._sessions._sockets;
	}
	emit(api, UserGlobalSessions) {
        	this.socket.emit(api, UserGlobalSessions);
	}
	updateSessions() {
		try {
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
			$('#sessionjson').val(JSON.stringify(UserGlobalSessions, null, 2));
			return UserGlobalSessions;
		} catch (e) {
			X3DUser.LOG(e);
		}
	}
	loadX3D(selector, x3d) {
        try {
            if (typeof Browser !== 'undefined') {
			   // Import the X3D scene and handle the Promise
			   Browser.createX3DFromString(x3d)
			       .then(function(importedScene) {
					   // Replace the current world with the imported scene
					   Browser.replaceWorld(importedScene);
			       })
			       .catch(function(error) {
				 	   X3DUser.LOG('Error importing X3D scene:', error);
			       });
			} else {
				alert("X_ITE could not replaceWorld in loadX3D()");
				X3DUser.LOG("X_ITE could not replaceWorld in loadX3D()", selector, x3d);
			}
		} catch (e) {
			X3DUser.LOG(e);
		}
	}

	loadURL(selector, url) {
		try {
			if (typeof Browser !== 'undefined') {
				   // Import the X3D scene and handle the Promise
				   Browser.loadURL(new X3D.MFString (url))
				       .then(() => {
					       X3DUser.LOG('Success importing URL:', url);
					   })
					   .catch(function(error) {
					       X3DUser.LOG('Error importing URL:', error);
					   });
			} else {
				X3DUser.LOG("X_ITE could not load URL in loadURL()", selector, url);
			}
		} catch (e) {
			X3DUser.LOG(e);
		}
	}
	serverpublish(msg) {
		x3duser = new X3DUser(usersessions);
		X3DUser.LOG("Receiving publish", msg);
		if (msg[0].startsWith("http://") || msg[0].startsWith("https://")) {
			x3duser.loadURL("#scene", msg[0]);
		} else {
			x3duser.loadX3D("#scene", msg[0]);
		}
		reconnect(x3duser);
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

const x3d_serverupdate =  function (usernumber, position, orientation, allowedToken) {
    'use strict';
    X3DUser.LOG("Called x3d_serverupdate with", usernumber, position, orientation, allowedToken);
    X3DUser.LOG("Relevant extra info", allowedToken, token_test(allowedToken));
    if (position !== null && orientation !== null && token_test(allowedToken) && position[0] ===  protoParameterName) {
        orientation[0] = parseFloat(orientation[0]);
        let ps = Browser.currentScene.getNamedNode("protoSensor");
        let t = Browser.currentScene.getNamedNode("protoTransform");
        let txt = Browser.currentScene.getNamedNode("protoText");
        if (shader) {
            X3DUser.LOG("old", shader.getField(protoParameterName).getValue());
            shader.getField(protoParameterName).setValue(orientation[0] * protoScale);
            X3DUser.LOG("new", shader.getField(protoParameterName).getValue());
        } else {
            X3DUser.LOG('ComposedShader not found');
        }
        if (txt) {
            let stringField = txt.getField("string");
            X3DUser.LOG("old", stringField.getValue());
            let label = protoParameterName;
            stringField.setValue(new MFString(label+"="+(orientation[0] * protoScale).toFixed(2)));
            X3DUser.LOG("new", stringField.getValue());
        } else {
            X3DUser.LOG('ComposedShader not found');
        }
        if (ps) {
            ps.offset = new SFVec3f(orientation[0], ps.offset[1], ps.offset[2]);
        } else {
            X3DUser.LOG("Not found protoSensor");
        }
        if (t) {
            t.translation = new SFVec3f(orientation[0], t.translation[1], t.translation[2]);
        } else {
            X3DUser.LOG("Not found protoTransform");
        }
    }
};

const reconnect = function (x3duser) {
    'use strict';
	try {
	        x3duser._sockets = x3duser._sessions._sockets;
		X3DUser.LOG("reconnect!");
		let UserGlobalSessions = x3duser.updateSessions();
		for (let g in UserGlobalSessions) {
			let session = UserGlobalSessions[g];
			let sessionname = session['Session Petname'];
			let sessiontoken = session['Session Token'];
			let socket = x3duser._sockets[sessionname];
			if (socket !== null) {
				// socket.emit('x3d_clientjoin');
				socket.emit("x3d_clientsessions", UserGlobalSessions);
				socket.emit("x3d_clientactivesession", sessiontoken);
				if (x3d_serverupdate !== null) {
					x3duser._sockets[sessionname].on('x3d_serverupdate', x3d_serverupdate);
				} else {
					X3DUser.LOG("FATAL skeleton reconnect Can't service x3d_serverupdate", sessionname, sessiontoken);
				}
				$('#session').on("change",function(){
					reconnect(x3duser);
				 });
				 socket.on('serverpublish', X3DUser.prototype.serverpublish);
				 socket.on('servercapability', X3DUser.prototype.servercapability);
				 // No need to rejoin, since Sessions.js does
				 // socket.emit('clientrejoin', location.href);
				 // socket.emit('clientmove', [0,0,0], [0,0,0]);
				 // socket.emit('clientjoin');
			} else {
				X3DUser.LOG("Couldn't connect to", sessionlink);
			}
		}
	} catch (e) {
		X3DUser.LOG("ERROR RECONNECTING", e);
	}
};

const token_test = function(test_token) {
        'use strict';
        let UserGlobalSessions = x3duser.updateSessions();
        for (let g in UserGlobalSessions) {
            let session = UserGlobalSessions[g];
            let sessiontoken = session['Session Token'];
            if (test_token === sessiontoken) {
                return true;
            }
        }
	x3duser.emit("x3d_clientsessions", UserGlobalSessions);
	return false;
};

const initialize = function () {
    'use strict';
    X3DUser.LOG("Called intialize");
    reconnect(x3duser);
};

const newTranslation = function(Value) {
    'use strict';
    for (let p in petNames) {
        let petName = petNames[p];
        if (x3duser._sockets[petName] !== null && typeof x3duser._sockets[petName] !== 'undefined') {
            protoValue_changed = Value.x * protoScale;
            protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));
            x3duser._sockets[petName].emit("x3d_clientmove", [protoParameterName],[Value.x]);
        } else {
            X3DUser.LOG("No socket for ", petName);
        }
    }
};

x3duser = new X3DUser(usersessions);
reconnect(x3duser);
