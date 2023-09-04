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
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("generator"),
              content : new SFString("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("school"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("pos")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.5,0,1]),
                                  transparency : new SFFloat(0.2)}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              coordIndex : new MFInt32([0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.35,-0.35,0.35,0.35,-0.35,0.35,0.35,-0.35,-0.35,-0.35,-0.35,-0.35,0,0.35,0])}))}))})),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("pos")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("institute"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("pos")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,0]),
                                  transparency : new SFFloat(0.2)}))})),
                          geometry : new SFNode(
                            new Box({
                              size : new SFVec3f([0.7,0.7,0.7])}))})),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("pos")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("disart_org"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("pos")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,0])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.7)}))})),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("pos")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("org"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("posi")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("col")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  transparency : new SFFloat(0.4),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("col")})])}))}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(1.1)}))})),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("posi")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("l"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("pos")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("org"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("col"),
                          value : new SFString("0 0.6 0")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("r"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("pos")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("org"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("col"),
                          value : new SFString("0 0.3 1")}),
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
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("pos")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("org"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("col"),
                          value : new SFString("1 0 0.2")}),
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
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("pos")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("org"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("col"),
                          value : new SFString("0.6 0 0.6")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])})])})])}))}),

            new NavigationInfo({
              type : ["EXAMINE","FLY","WALK"],
              avatarSize : new MFFloat([200,200,120]),
              speed : new SFFloat(3)}),

            new WorldInfo({
              title : new SFString("Arts Mapper")}),

            new Viewpoint({
              description : new SFString("looking North"),
              position : new SFVec3f([0,60,110]),
              orientation : new SFRotation([1,0,0,-0.699999988079071]),
              fieldOfView : new SFFloat(0.7853981)}),

            new Viewpoint({
              description : new SFString("looking East"),
              position : new SFVec3f([-140,30,0]),
              orientation : new SFRotation([0,0.400000005960465,0,-1.39999997615814]),
              fieldOfView : new SFFloat(0.7853981)}),

            new Viewpoint({
              description : new SFString("Overhead"),
              position : new SFVec3f([0,150,0]),
              orientation : new SFRotation([1,0,0,-1.57000005245209]),
              fieldOfView : new SFFloat(0.7853981)}),

            new Transform({
              translation : new SFVec3f([-468,0,315]),
              children : new MFNode([
                new Inline({
                  global : new SFBool(true),
                  url : new MFString(["t.wrl"])}),

                new Anchor({
                  description : new SFString("Derby Women's Centre"),
                  url : new MFString(["javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("435.3 0.1 -335.6")})])})])}),

                new Anchor({
                  description : new SFString("High Peak Community Arts"),
                  url : new MFString(["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("400 0.1 -385")})])})])}),

                new Anchor({
                  description : new SFString("Charlesworth Primary School"),
                  url : new MFString(["javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("400.6 0.1 -392.9")})])})])}),

                new Anchor({
                  description : new SFString("Hope Valley College"),
                  url : new MFString(["javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("416.7 0.1 -383.4")})])})])}),

                new Anchor({
                  description : new SFString("People Express"),
                  url : new MFString(["javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("429.9 0.1 -319.6")})])})])}),

                new Anchor({
                  description : new SFString("QArts/Studios"),
                  url : new MFString(["javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("430 0.1 -335")})])})])}),

                new Anchor({
                  description : new SFString("Stroke Unit, Derbyshire Royal Infirmary"),
                  url : new MFString(["javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("435.8 0.1 -335.3")})])})])}),

                new Anchor({
                  description : new SFString("Park View Primary, Derby"),
                  url : new MFString(["javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("438.3 0.1 -338.6")})])})])}),

                new Anchor({
                  description : new SFString("First Movement"),
                  url : new MFString(["javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("429.9 0.1 -360.3")})])})])}),

                new Anchor({
                  description : new SFString("St. Benedict R.C. School, Visual Impairment Unit"),
                  url : new MFString(["javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.6 0.1 -338.6")})])})])}),

                new Anchor({
                  description : new SFString("Beckett Primary, Derby"),
                  url : new MFString(["javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.8 0.1 -336")})])})])}),

                new Anchor({
                  description : new SFString("Brackensdale Junior School, Communty Unit"),
                  url : new MFString(["javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("432.7 0.1 -336.6")})])})])}),

                new Anchor({
                  description : new SFString("Moorhead Primary, Derby"),
                  url : new MFString(["javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("437.6 0.1 -332.6")})])})])}),

                new Anchor({
                  description : new SFString("Derby Deaf Club"),
                  url : new MFString(["javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.7 0.1 -336.9")})])})])}),

                new Anchor({
                  description : new SFString("Nightingale Junior, Derby"),
                  url : new MFString(["javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("436.3 0.1 -333.4")})])})])}),

                new Anchor({
                  description : new SFString("St Mary's Primary, Derby"),
                  url : new MFString(["javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("435.2 0.1 -336.8")})])})])}),

                new Anchor({
                  description : new SFString("Griffe Field Primary, Derby"),
                  url : new MFString(["javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("432.5 0.1 -332.5")})])})])}),

                new Anchor({
                  description : new SFString("Leicester Road Day Centre, Melton Mowbray"),
                  url : new MFString(["javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("474.7 0.1 -318.8")})])})])}),

                new Anchor({
                  description : new SFString("Ivy House Special School, Derby"),
                  url : new MFString(["javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("436.1 0.1 -334.9")})])})])}),

                new Anchor({
                  description : new SFString("Oakham Day Centre, Rutland"),
                  url : new MFString(["javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("485.6 0.1 -309")})])})])}),

                new Anchor({
                  description : new SFString("Parkwood School, Alfreton"),
                  url : new MFString(["javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("440.5 0.1 -355.5")})])})])}),

                new Anchor({
                  description : new SFString("Ash Green, Specialist Learning Disability Resource"),
                  url : new MFString(["javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.8 0.1 -371.5")})])})])}),

                new Anchor({
                  description : new SFString("Ashgate Croft School, Chesterfield"),
                  url : new MFString(["javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("436.3 0.1 -371.7")})])})])}),

                new Anchor({
                  description : new SFString("Highfields School, Matlock"),
                  url : new MFString(["javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("431.2 0.1 -361.2")})])})])}),

                new Anchor({
                  description : new SFString("City Arts"),
                  url : new MFString(["javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("455.9 0.1 -341.3")})])})])}),

                new Anchor({
                  description : new SFString("Indigo Dance Group (Salamanda Tandem)"),
                  url : new MFString(["javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("456.1 0.1 -341.5")})])})])}),

                new Anchor({
                  description : new SFString("Watering Seeds"),
                  url : new MFString(["javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("454 0.1 -361.3")})])})])}),

                new Anchor({
                  description : new SFString("Red oaks"),
                  url : new MFString(["javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("457.4 0.1 -359.6")})])})])}),

                new Anchor({
                  description : new SFString("West Notts College"),
                  url : new MFString(["javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("454.2 0.1 -358.6")})])})])}),

                new Anchor({
                  description : new SFString("Willow Wood Day Centre"),
                  url : new MFString(["javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("450.6 0.1 -358.6")})])})])}),

                new Anchor({
                  description : new SFString("Fased In The Arts"),
                  url : new MFString(["javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("440 0.1 -350")})])})])}),

                new Anchor({
                  description : new SFString("27a Access Artspace"),
                  url : new MFString(["javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("458.9 0.1 -304.3")})])})])}),

                new Anchor({
                  description : new SFString("Roman Way Day Centre, Market Harborough"),
                  url : new MFString(["javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("473.5 0.1 -287.5")})])})])}),

                new Anchor({
                  description : new SFString("Mosaic, Leicester Disability Services"),
                  url : new MFString(["javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("458 0.1 -304.5")})])})])}),

                new Anchor({
                  description : new SFString("Bamboozle Theatre Company"),
                  url : new MFString(["javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("457.1 0.1 -300.8")})])})])}),

                new Anchor({
                  description : new SFString("Ellesmere College, Leicester"),
                  url : new MFString(["javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("456.8 0.1 -302.6")})])})])}),

                new Anchor({
                  description : new SFString("Ashmount School, Loughborough"),
                  url : new MFString(["javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("453.3 0.1 -318.6")})])})])}),

                new Anchor({
                  description : new SFString("Mantle Community Arts"),
                  url : new MFString(["javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("442.4 0.1 -314.5")})])})])}),

                new Anchor({
                  description : new SFString("Forrest Way School"),
                  url : new MFString(["javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("444.6 0.1 -313.7")})])})])}),

                new Anchor({
                  description : new SFString("Ibstock Community College"),
                  url : new MFString(["javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("440.6 0.1 -310.4")})])})])}),

                new Anchor({
                  description : new SFString("Artlink East"),
                  url : new MFString(["javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("491.6 0.1 -335.7")})])})])}),

                new Anchor({
                  description : new SFString("United Hospitals and NHS Trust Lincolnshire"),
                  url : new MFString(["javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("491.4 0.1 -336.8")})])})])}),

                new Anchor({
                  description : new SFString("Ancaster Day Centre"),
                  url : new MFString(["javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("496.9 0.1 -368.9")})])})])}),

                new Anchor({
                  description : new SFString("Creations"),
                  url : new MFString(["javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("467 0.1 -243.9")})])})])}),

                new Anchor({
                  description : new SFString("Nene Day Centre, Northamtpon"),
                  url : new MFString(["javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("477.1 0.1 -260")})])})])}),

                new Anchor({
                  description : new SFString("Delapre Middle School, Northampton"),
                  url : new MFString(["javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("474.7 0.1 -259.1")})])})])}),

                new Anchor({
                  description : new SFString("The Links, Brackley"),
                  url : new MFString(["javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("459 0.1 -236.4")})])})])}),

                new Anchor({
                  description : new SFString("New Perspectives"),
                  url : new MFString(["javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("457.4 0.1 -262.7")})])})])}),

                new Anchor({
                  description : new SFString("UKan2"),
                  url : new MFString(["javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("458.7 0.1 -262.7")})])})])}),

                new Anchor({
                  description : new SFString("Silverstone County Infants School"),
                  url : new MFString(["javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("466.9 0.1 -243.8")})])})])}),

                new Anchor({
                  description : new SFString("Riverside Resource Centre, Towcester"),
                  url : new MFString(["javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("469.5 0.1 -249.8")})])})])}),

                new Anchor({
                  description : new SFString("Daventry Tertiary College"),
                  url : new MFString(["javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("456.7 0.1 -261.8")})])})])}),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          emissiveColor : new SFColor([1,0,0]),
                          transparency : new SFFloat(0.2)}))})),
                  geometry : new SFNode(
                    new IndexedLineSet({
                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([430,0.02,-335,435.8,0.1,-335.3,430,0.02,-335,434.6,0.1,-338.6,430,0.02,-335,432.7,0.1,-336.6,430,0.02,-335,434.7,0.1,-336.9,429.9,0.02,-360.3,474.7,0.1,-318.8,429.9,0.02,-360.3,485.6,0.1,-309,429.9,0.02,-360.3,434.8,0.1,-371.5,454,0.02,-361.3,457.4,0.1,-359.6,454,0.02,-361.3,454.2,0.1,-358.6,454,0.02,-361.3,450.6,0.1,-358.6,458.9,0.02,-304.3,473.5,0.1,-287.5,458.9,0.02,-304.3,458,0.1,-304.5,491.6,0.02,-335.7,491.4,0.1,-336.8,491.6,0.02,-335.7,496.9,0.1,-368.9,467,0.02,-243.9,477.1,0.1,-260,467,0.02,-243.9,459,0.1,-236.4,458.7,0.02,-262.7,469.5,0.1,-249.8,458.7,0.02,-262.7,456.7,0.1,-261.8])}))}))})]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          emissiveColor : new SFColor([0,1,0]),
                          transparency : new SFFloat(0.2)}))})),
                  geometry : new SFNode(
                    new IndexedLineSet({
                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([400,0.02,-385,400.6,0.1,-392.9,400,0.02,-385,416.7,0.1,-383.4,430,0.02,-335,438.3,0.1,-338.6,430,0.02,-335,434.8,0.1,-336,430,0.02,-335,437.6,0.1,-332.6,430,0.02,-335,436.3,0.1,-333.4,430,0.02,-335,435.2,0.1,-336.8,430,0.02,-335,432.5,0.1,-332.5,429.9,0.02,-360.3,436.1,0.1,-334.9,429.9,0.02,-360.3,440.5,0.1,-355.5,429.9,0.02,-360.3,436.3,0.1,-371.7,429.9,0.02,-360.3,431.2,0.1,-361.2,457.1,0.02,-300.8,456.8,0.1,-302.6,457.1,0.02,-300.8,453.3,0.1,-318.6,442.4,0.02,-314.5,444.6,0.1,-313.7,442.4,0.02,-314.5,440.6,0.1,-310.4,467,0.02,-243.9,474.7,0.1,-259.1,457.4,0.02,-262.7,466.9,0.1,-243.8])}))}))})),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          emissiveColor : new SFColor([1,0,1]),
                          transparency : new SFFloat(0.2)}))})),
                  geometry : new SFNode(
                    new IndexedLineSet({
                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([430,0.02,-335,429.9,0.1,-360.3,442.4,0.02,-314.5,429.9,0.1,-319.6,457.4,0.02,-262.7,467,0.1,-243.9,458.7,0.02,-262.7,457.4,0.1,-262.7,458.7,0.02,-262.7,467,0.1,-243.9])}))}))}))})])}))});
console.log(X3D0.toXMLNode());
