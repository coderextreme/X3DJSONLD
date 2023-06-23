'use strict';
var X3D = require('./x3d.js');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.js');
var SFNode = require('./x3d.js');
var head = require('./x3d.js');
var component = require('./x3d.js');
var SFInt32 = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var NavigationInfo = require('./x3d.js');
var SFFloat = require('./x3d.js');
var MFFloat = require('./x3d.js');
var WorldInfo = require('./x3d.js');
var Viewpoint = require('./x3d.js');
var SFVec3f = require('./x3d.js');
var SFRotation = require('./x3d.js');
var ProtoDeclare = require('./x3d.js');
var ProtoInterface = require('./x3d.js');
var field = require('./x3d.js');
var ProtoBody = require('./x3d.js');
var Transform = require('./x3d.js');
var IS = require('./x3d.js');
var connect = require('./x3d.js');
var Shape = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var Sphere = require('./x3d.js');
var ProtoInstance = require('./x3d.js');
var fieldValue = require('./x3d.js');
var Anchor = require('./x3d.js');
var MFString = require('./x3d.js');
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
              content : new SFString("t4.x3d")}),

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
              content : new SFString("https://www.web3d.org/x3d/content/examples/license.html")})])})),
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

            new ProtoDeclare({
              name : new SFString("org"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("posi"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("col"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("posi")})])})),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("col")})])}))}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(5.10000002384186)}))})])})])}))}),

            new ProtoDeclare({
              name : new SFString("r"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("pos"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("org"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("col"),
                          value : new SFString("0 0.300000011920929 1")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("n"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("pos"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("org"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("col"),
                          value : new SFString("1 0 0.200000002980232")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("i"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("pos"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("org"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("col"),
                          value : new SFString("0.600000023841858 0 0.600000023841858")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])})])})])}))}),

            new Transform({
              translation : new SFVec3f([-468,0,315]),
              children : new MFNode([
                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("High Peak Community Arts"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("400 0.100000001490116 -385")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("People Express"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("429.899993896484 0.100000001490116 -319.600006103516")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("QArts/Studios"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("430 0.100000001490116 -335")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("First Movement"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("429.899993896484 0.100000001490116 -360.299987792969")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("City Arts"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("455.899993896484 0.100000001490116 -341.299987792969")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Indigo Dance Group (Salamanda Tandem)"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("456.100006103516 0.100000001490116 -341.5")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Watering Seeds"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("454 0.100000001490116 -361.299987792969")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Fased In The Arts"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("440 0.100000001490116 -350")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("27a Access Artspace"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("458.899993896484 0.100000001490116 -304.299987792969")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Bamboozle Theatre Company"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("457.100006103516 0.100000001490116 -300.799987792969")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Mantle Community Arts"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("442.399993896484 0.100000001490116 -314.5")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Artlink East"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("491.600006103516 0.100000001490116 -335.700012207031")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Creations"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("467 0.100000001490116 -243.899993896484")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("New Perspectives"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("457.399993896484 0.100000001490116 -262.700012207031")})])})])}),

                new Anchor({
                  url : new MFString([", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("UKan2"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("458.700012207031 0.100000001490116 -262.700012207031")})])})])})])})])}))});
console.log(X3D0.toXMLNode());
