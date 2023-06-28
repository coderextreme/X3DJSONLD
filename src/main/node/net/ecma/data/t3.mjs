'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Networking"),
              level : new SFInt32(2)})),
          component : new SFNode(
            new component({
              name : new SFString("Core"),
              level : new SFInt32(2)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("t3.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("view3dscene, https://castle-engine.io/view3dscene.php")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Andreas Plesch and John Carlson")}),

            new meta({
              name : new SFString("source"),
              content : new SFString("t1.wrl")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Test Case for Proto Expander")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/license.html")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("12 May 2020")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              type : ["EXAMINE","FLY","WALK"],
              speed : new SFFloat(3),
              avatarSize : new MFFloat([200,200,120])}),

            new WorldInfo({
              title : new SFString("Arts Mapper")}),

            new Viewpoint({
              description : new SFString("looking North"),
              position : new SFVec3f([0,60,110]),
              orientation : new SFRotation([1,0,0,-0.699999988079071]),
              fieldOfView : new SFFloat(0.785398125648499)}),

            new Transform({
              translation : new SFVec3f([-468,0,315]),
              children : new MFNode([
                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("High Peak Community Arts"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0,0.300000011920929,1])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("People Express"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0.600000023841858,0,0.600000023841858])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("QArts/Studios"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0.600000023841858,0,0.600000023841858])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("First Movement"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([1,0,0.200000002980232])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("City Arts"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0.600000023841858,0,0.600000023841858])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Indigo Dance Group (Salamanda Tandem)"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0,0.300000011920929,1])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Watering Seeds"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0,0.300000011920929,1])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Fased In The Arts"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0,0.300000011920929,1])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("27a Access Artspace"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([1,0,0.200000002980232])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Bamboozle Theatre Company"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0,0.300000011920929,1])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Mantle Community Arts"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0,0.300000011920929,1])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Artlink East"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0,0.300000011920929,1])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Creations"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0,0.300000011920929,1])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("New Perspectives"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([1,0,0.200000002980232])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("UKan2"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  emissiveColor : new SFColor([0,0.300000011920929,1])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])})])})])}))});
console.log(X3D0.toXMLNode());
