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
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var PlaneSensor = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var PixelTexture = require('./x3d.mjs');
var SFImage = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Wed, 22 Apr 2015 09:14:06 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.1.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 28 Sep 2015 05:19:18 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("Pong")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("X"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("T"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("S"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("C"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("E"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("P"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("Z"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("img"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("G"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new IndexedFaceSet({
                          DEF : new SFString("_1"),
                          coordIndex : new MFInt32([3,2,1,0,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,-1,0,-1,1,0,1,1,0,1,-1,0])}))})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("T")}),

                            new connect({
                              nodeField : new SFString("rotation"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("scale"),
                              protoField : new SFString("S")})])})),
                      children : new MFNode([
                        new Shape({
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("geometry"),
                                  protoField : new SFString("G")})])})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  shininess : new SFFloat(0.5),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("diffuseColor"),
                                          protoField : new SFString("C")}),

                                        new connect({
                                          nodeField : new SFString("specularColor"),
                                          protoField : new SFString("P")}),

                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("E")}),

                                        new connect({
                                          nodeField : new SFString("transparency"),
                                          protoField : new SFString("Z")})])}))})),
                              texture : new SFNode(
                                new ImageTexture({
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("url"),
                                          protoField : new SFString("img")})])}))}))}))})])})])}))}),

            new ProtoDeclare({
              name : new SFString("Y"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("T"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("S"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("H"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Transform"),
                      children : new MFNode([
                        new Transform({
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("translation"),
                                  protoField : new SFString("T")}),

                                new connect({
                                  nodeField : new SFString("rotation"),
                                  protoField : new SFString("R")}),

                                new connect({
                                  nodeField : new SFString("children"),
                                  protoField : new SFString("H")})])}))})])}),

                    new Script({
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("S"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("t"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Transform")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("S"),
                              protoField : new SFString("S")})])})]),
                      vrmlscript:
, function initialize ()
{
	t .addChildren = new MFNode (S);
})})])}))}),

            new WorldInfo({
              info : new MFString(["Cosmo Worlds Clipart (c)1997 pioneer@sgi.com"])}),

            new ProtoInstance({
              name : new SFString("Y"),
              DEF : new SFString("HUD"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("H"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Y"),
                      DEF : new SFString("_2"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("T"),
                          value : new SFString("0 0 -10")}),

                        new fieldValue({
                          name : new SFString("H"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Y"),
                              DEF : new SFString("Player0"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("T"),
                                  value : new SFString("0 0.617632 0")}),

                                new fieldValue({
                                  name : new SFString("S"),
                                  children : new MFNode([
                                    new PlaneSensor({
                                      DEF : new SFString("Drag0"),
                                      offset : new SFVec3f([0,0.617632,0]),
                                      minPosition : new SFVec2f([0,-4]),
                                      maxPosition : new SFVec2f([0,4])})])}),

                                new fieldValue({
                                  name : new SFString("H"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("X"),
                                      DEF : new SFString("_3"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("T"),
                                          value : new SFString("-5 0 0")}),

                                        new fieldValue({
                                          name : new SFString("S"),
                                          value : new SFString("0.1 1 1")})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Y"),
                              DEF : new SFString("Player1"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("T"),
                                  value : new SFString("0 0.858697 0")}),

                                new fieldValue({
                                  name : new SFString("H"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("X"),
                                      DEF : new SFString("_4"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("T"),
                                          value : new SFString("5 0 0")}),

                                        new fieldValue({
                                          name : new SFString("S"),
                                          value : new SFString("0.1 1 1")})])})])})])}),

                            new Switch({
                              DEF : new SFString("PuckSwitch"),
                              whichChoice : new SFInt32(0),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("X"),
                                  DEF : new SFString("Puck"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("T"),
                                      value : new SFString("1.04829 1.7715 0")}),

                                    new fieldValue({
                                      name : new SFString("S"),
                                      value : new SFString("0.2 0.2 1")})])}),

                                new ProtoInstance({
                                  name : new SFString("Y")})])}),

                            new Switch({
                              DEF : new SFString("ScoreSwitch"),
                              whichChoice : new SFInt32(1),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("Y")}),

                                new ProtoInstance({
                                  name : new SFString("Y"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("H"),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("_5"),
                                          translation : new SFVec3f([-3.5,3,-0.2]),
                                          scale : new SFVec3f([0.5,0.5,0.5]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new PixelTexture({
                                                      DEF : new SFString("Score0"),
                                                      image : new SFImage([3,5,2,65535,65535,65535,65535,0,65535,65535,0,65535,65535,0,65535,65535,65535,65535]),
                                                      repeatS : new SFBool(false),
                                                      repeatT : new SFBool(false)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([3,2,1,0,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-1,-1,0,-1,1,0,1,1,0,1,-1,0])}))}))})])}),

                                        new Transform({
                                          DEF : new SFString("_6"),
                                          translation : new SFVec3f([3.5,3,-0.2]),
                                          scale : new SFVec3f([0.5,0.5,0.5]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  texture : new SFNode(
                                                    new PixelTexture({
                                                      DEF : new SFString("Score1"),
                                                      image : new SFImage([3,5,2,0,0,65535,0,0,65535,65535,65535,65535,65535,0,65535,65535,0,65535]),
                                                      repeatS : new SFBool(false),
                                                      repeatT : new SFBool(false)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([3,2,1,0,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-1,-1,0,-1,1,0,1,1,0,1,-1,0])}))}))})])})])})])})])})])})])})])})])}),

            new NavigationInfo({
              type : ["NONE"],
              DEF : new SFString("Nav0"),
              speed : new SFFloat(5),
              headlight : new SFBool(false)}),

            new DirectionalLight({
              DEF : new SFString("Light0"),
              direction : new SFVec3f([0,-1,0])}),

            new ProtoInstance({
              name : new SFString("Y"),
              DEF : new SFString("BG0X"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("R"),
                  value : new SFString("1 0 0 0.347657")}),

                new fieldValue({
                  name : new SFString("H"),
                  children : new MFNode([
                    new Background({
                      DEF : new SFString("BG0"),
                      skyAngle : new MFFloat([1.7]),
                      skyColor : new MFColor([1,1,0,0,0,1])})])})])}),

            new TimeSensor({
              DEF : new SFString("BGTime"),
              cycleInterval : new SFTime(300),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new OrientationInterpolator({
              DEF : new SFString("BGSpin"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFRotation([0,0,1,0,1,0,0,3.14,1,0,0,6.28002])}),

            new Viewpoint({
              DEF : new SFString("ViewX"),
              description : new SFString("vong"),
              position : new SFVec3f([0,0,0])}),

            new ProximitySensor({
              DEF : new SFString("Proximity0"),
              size : new SFVec3f([200,200,200])}),

            new TimeSensor({
              DEF : new SFString("TimeX"),
              cycleInterval : new SFTime(1.1),
              loop : new SFBool(true),
              startTime : new SFTime(1443414448.83668),
              stopTime : new SFTime(1443414447.83668)}),

            new PositionInterpolator({
              DEF : new SFString("MovePlayer1"),
              key : new MFFloat([0,1]),
              keyValue : new MFVec3f([0,1,0,0,-1,0])}),

            new PositionInterpolator({
              DEF : new SFString("MovePuck"),
              key : new MFFloat([0,1]),
              keyValue : new MFVec3f([4.8,5.48778,0,-4.8,2.26548,0])}),

            new Script({
              DEF : new SFString("Script0"),
              directOutput : new SFBool(true),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("bouncepuck"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("bounceplayer1"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("puckdirection"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("setpuckswitch"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("p"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("Player0")}),

                    new ProtoInstance({
                      USE : new SFString("Player1")}),

                    new ProtoInstance({
                      USE : new SFString("Puck")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("timex"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new TimeSensor({
                      USE : new SFString("TimeX")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("moveplayer1"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new PositionInterpolator({
                      USE : new SFString("MovePlayer1")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("movepuck"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new PositionInterpolator({
                      USE : new SFString("MovePuck")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("ps"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Switch({
                      USE : new SFString("PuckSwitch")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("sw"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Switch({
                      USE : new SFString("ScoreSwitch")})])}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("score"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new PixelTexture({
                      USE : new SFString("Score1")}),

                    new PixelTexture({
                      USE : new SFString("Score0")})])}),

                new field({
                  type : field.TYPE_MFVEC3F,
                  name : new SFString("moveplayer1keyval"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("0 0 0 0 0 0")}),

                new field({
                  type : field.TYPE_MFVEC3F,
                  name : new SFString("movepuckkeyval"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("4.8 5.48778 0 -4.8 2.26548 0")}),

                new field({
                  type : field.TYPE_SFIMAGE,
                  name : new SFString("zero"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("3 5 2 65535 65535 65535 65535 0 65535 65535 0 65535 65535 0 65535 65535 65535 65535")}),

                new field({
                  type : field.TYPE_SFIMAGE,
                  name : new SFString("one"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("3 5 2 65535 65535 65535 0 65535 0 0 65535 0 0 65535 0 65535 65535 0")}),

                new field({
                  type : field.TYPE_SFIMAGE,
                  name : new SFString("two"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("3 5 2 65535 65535 65535 65535 0 0 65535 65535 65535 0 0 65535 65535 65535 65535")}),

                new field({
                  type : field.TYPE_SFIMAGE,
                  name : new SFString("three"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("3 5 2 65535 65535 65535 0 0 65535 65535 65535 65535 0 0 65535 65535 65535 65535")}),

                new field({
                  type : field.TYPE_SFIMAGE,
                  name : new SFString("four"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("3 5 2 0 0 65535 0 0 65535 65535 65535 65535 65535 0 65535 65535 0 65535")}),

                new field({
                  type : field.TYPE_SFIMAGE,
                  name : new SFString("five"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("3 5 2 65535 65535 65535 0 0 65535 65535 65535 65535 65535 0 0 65535 65535 65535")}),

                new field({
                  type : field.TYPE_SFIMAGE,
                  name : new SFString("six"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("3 5 2 65535 65535 65535 65535 0 65535 65535 65535 65535 65535 0 0 65535 65535 65535")}),

                new field({
                  type : field.TYPE_SFIMAGE,
                  name : new SFString("seven"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("3 5 2 0 0 65535 0 0 65535 0 0 65535 0 0 65535 65535 65535 65535")}),

                new field({
                  type : field.TYPE_SFIMAGE,
                  name : new SFString("eight"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("3 5 2 65535 65535 65535 65535 0 65535 65535 65535 65535 65535 0 65535 65535 65535 65535")}),

                new field({
                  type : field.TYPE_SFIMAGE,
                  name : new SFString("nine"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("3 5 2 0 0 65535 0 0 65535 65535 65535 65535 65535 0 65535 65535 65535 65535")}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("count"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("skill"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("4")}),

                new field({
                  type : field.TYPE_MFINT32,
                  name : new SFString("scores"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("4 0")}),
              ]),vrmlscript:
  , function bouncepuck(v){
   v[1] = (6-Math.abs(6-Math.abs((v[1]+3)%12)))-3;
   p[2].set_T = v;
  }
  , function bounceplayer1(v){
   v[1] = p[2].T[1]*(.3+skill*.05);
   p[1].set_T = v;
  }
  , function setpuckswitch(v){
  }
  , function puckdirection(v){
   if(Math.abs(p[2].T[1]-p[count].T[1])>1.5){
    ps.whichChoice = 1;
    //p[2].set_img = new MFString(imgs[imgcount]);
    timex.set_stopTime = timex.time;
    timex.set_startTime = timex.time+1;
    movepuckkeyval[0][1] = 0;
    movepuckkeyval[1][1] = 0;
    movepuck.set_keyValue = movepuckkeyval;
    timex.set_cycleInterval = 2-(.3*skill);
    skill = (skill+1)%6;
    //imgcount = (imgcount+1)%imgs.length;
    scores[count]++;
    score[count].set_image = numpix[scores[count]%10];
   }else{
    ps.whichChoice = 0;
    movepuckkeyval[0] = movepuck.keyValue[1];
    movepuckkeyval[1] = movepuck.keyValue[0];
    movepuckkeyval[1][1] = 10*(p[2].T[1]-p[count].T[1]);
    movepuck.set_keyValue = movepuckkeyval;
    count = (count+1)%2;
   }
  }
  , function initialize(){
   numpix = new Array(zero,one,two,three,four,five,six,seven,eight,nine);
   score[0].set_image = score[1].set_image = numpix[0];
  })}),

            new ROUTE({
              fromNode : new SFString("BGTime"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BGSpin"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("BGSpin"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BG0X"),
              toField : new SFString("set_R")}),

            new ROUTE({
              fromNode : new SFString("Proximity0"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("Proximity0"),
              toField : new SFString("set_center")}),

            new ROUTE({
              fromNode : new SFString("Proximity0"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("HUD"),
              toField : new SFString("set_T")}),

            new ROUTE({
              fromNode : new SFString("Proximity0"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("HUD"),
              toField : new SFString("set_R")}),

            new ROUTE({
              fromNode : new SFString("Drag0"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("Player0"),
              toField : new SFString("set_T")}),

            new ROUTE({
              fromNode : new SFString("TimeX"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("MovePuck"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeX"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("MovePlayer1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("MovePuck"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Script0"),
              toField : new SFString("bouncepuck")}),

            new ROUTE({
              fromNode : new SFString("MovePlayer1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Script0"),
              toField : new SFString("bounceplayer1")}),

            new ROUTE({
              fromNode : new SFString("TimeX"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("Script0"),
              toField : new SFString("puckdirection")})])}))});
console.log(X3D0.toXMLNode());
