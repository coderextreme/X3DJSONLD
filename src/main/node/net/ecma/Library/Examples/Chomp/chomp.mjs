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
var WorldInfo = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Fog = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var ColorInterpolator = require('./x3d.mjs');
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
              content : new SFString("Mon, 09 Nov 2015 13:19:34 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Tue, 10 Nov 2015 08:03:08 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("chomp"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("NavigationInfo"),
                      DEF : new SFString("NavigationInfo"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFString(["EXAMINE"])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Viewpoint"),
                      DEF : new SFString("Viewpoint"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("position"),
                          DEF : new SFString("position"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,-3.14299988746643,5.71950006484985])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([1,0,0,0.0134963877499104])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))}))})])}),

            new Sound({
              intensity : new SFFloat(0.5),
              spatialize : new SFBool(false),
              maxBack : new SFFloat(10000),
              maxFront : new SFFloat(10000),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("bubbleSound"),
                  url : new MFString(["bubble.wav"]),
                  startTime : new SFTime(1447142588.57546),
                  stopTime : new SFTime(1447142588.57546)}))}),

            new Sound({
              intensity : new SFFloat(0.5),
              spatialize : new SFBool(false),
              maxBack : new SFFloat(10000),
              maxFront : new SFFloat(10000),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("bubbleSound2"),
                  url : new MFString(["bubble2.wav"])}))}),

            new Sound({
              DEF : new SFString("Sound1"),
              spatialize : new SFBool(false),
              maxBack : new SFFloat(10000),
              maxFront : new SFFloat(10000),
              priority : new SFFloat(1),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("chompSound"),
                  url : new MFString(["chomp.wav"])}))}),

            new Sound({
              DEF : new SFString("Sound2"),
              spatialize : new SFBool(false),
              maxBack : new SFFloat(10000),
              maxFront : new SFFloat(10000),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("boomSound"),
                  url : new MFString(["boom.wav"])}))}),

            new Sound({
              DEF : new SFString("Sound3"),
              spatialize : new SFBool(false),
              maxBack : new SFFloat(10000),
              maxFront : new SFFloat(10000),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("burpSound"),
                  url : new MFString(["burp.wav"])}))}),

            new Sound({
              DEF : new SFString("Sound4"),
              spatialize : new SFBool(false),
              maxBack : new SFFloat(10000),
              maxFront : new SFFloat(10000),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("oopsSound"),
                  url : new MFString(["oops.wav"])}))}),

            new TimeSensor({
              DEF : new SFString("BubbleTimer"),
              cycleInterval : new SFTime(0.005),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new Script({
              DEF : new SFString("BubbleScript"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("inputFraction"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("playSound"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("playSound2"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:
		, function inputFraction(f, time){
			if (f > .8) {
				if (f > .9) {
					playSound=time;
				} else {
					playSound2=time;
				}
			}
		})}),

            new DirectionalLight({
              ambientIntensity : new SFFloat(0.3),
              direction : new SFVec3f([-1,-1,-1])}),

            new DirectionalLight({
              direction : new SFVec3f([54,-14,-7])}),

            new DirectionalLight({
              color : new SFColor([0,0.3765,0.4588]),
              direction : new SFVec3f([-43,7,90])}),

            new Inline({
              url : new MFString(["canyonv.x3d"])}),

            new Viewpoint({
              DEF : new SFString("The_Start"),
              description : new SFString("The Start"),
              position : new SFVec3f([0,-3.143,5.7195]),
              orientation : new SFRotation([1,0,0,0.0134964])}),

            new Viewpoint({
              DEF : new SFString("Hoffa_cam"),
              description : new SFString("Hoffa cam"),
              position : new SFVec3f([-123.2,-8.351,-300.2]),
              orientation : new SFRotation([-0.615097,0.785295,0.0704796,0.2898])}),

            new NavigationInfo({
              type : ["FLY","WALK","EXAMINE"],
              DEF : new SFString("NavInfo01"),
              avatarSize : new MFFloat([1.4,1,0.75]),
              speed : new SFFloat(7.5),
              headlight : new SFBool(false),
              visibilityLimit : new SFFloat(50)}),

            new Background({
              DEF : new SFString("Background01"),
              skyColor : new MFColor([0.007843,0.3922,0.6157])}),

            new Fog({
              DEF : new SFString("Fog01"),
              color : new SFColor([0.007843,0.3922,0.6157]),
              visibilityRange : new SFFloat(50)}),

            new TimeSensor({
              DEF : new SFString("EatTimer"),
              cycleInterval : new SFTime(4)}),

            new TimeSensor({
              DEF : new SFString("KillTimer"),
              cycleInterval : new SFTime(0.65)}),

            new Collision({
              enabled : new SFBool(false),
              proxy : new SFNode(
                new Transform({
                  DEF : new SFString("Inline_seaweed01-ROOT"),
                  translation : new SFVec3f([-5.15,-13.29,-28.52]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["seaweed.x3d"])})])})),
              proxy : new SFNode(
                new Transform({
                  DEF : new SFString("Inline_seaweed02-ROOT"),
                  translation : new SFVec3f([8.169,-13.02,-83.63]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["seaweed.x3d"])})])})),
              proxy : new SFNode(
                new Transform({
                  DEF : new SFString("Inline_seaweed03-ROOT"),
                  translation : new SFVec3f([-10.84,-13.97,-229.5]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["seaweed.x3d"])})])})),
              proxy : new SFNode(
                new Transform({
                  DEF : new SFString("Inline_seaweed04-ROOT"),
                  translation : new SFVec3f([-115.2,-13.97,-265.9]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["seaweed.x3d"])})])})),
              proxy : new SFNode(
                new Transform({
                  DEF : new SFString("Inline_seaweed05-ROOT"),
                  translation : new SFVec3f([-133.7,-13.16,-352]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["seaweed.x3d"])})])})),
              proxy : new SFNode(
                new Transform({
                  DEF : new SFString("Inline_seaweed06-ROOT"),
                  translation : new SFVec3f([-71.63,-14.04,-477.2]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["seaweed.x3d"])})])})),
              proxy : new SFNode(
                new Transform({
                  DEF : new SFString("Inline_seaweed07-ROOT"),
                  translation : new SFVec3f([-7.091,-13.35,-514.6]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["seaweed.x3d"])})])})),
              proxy : new SFNode(
                new Transform({
                  DEF : new SFString("Inline_seaweed08-ROOT"),
                  translation : new SFVec3f([3.819,-13.82,-597.6]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["seaweed.x3d"])})])}))}),

            new Transform({
              DEF : new SFString("Inline_skeleton-ROOT"),
              translation : new SFVec3f([-125.2,-14.99,-311.4]),
              children : new MFNode([
                new Collision({
                  proxy : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([4,20,10])}))})),
                  proxy : new SFNode(
                    new VisibilitySensor({
                      DEF : new SFString("skeletonVisible"),
                      size : new SFVec3f([1,20,1])})),
                  proxy : new SFNode(
                    new Inline({
                      url : new MFString(["skeleton.x3d"])}))})])}),

            new Transform({
              DEF : new SFString("Inline_bubble01-ROOT"),
              translation : new SFVec3f([8.131,-15.99,3.069]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble02-ROOT"),
              translation : new SFVec3f([6.463,-15.99,-24.57]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble03-ROOT"),
              translation : new SFVec3f([-4.104,-15.99,-68.02]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble04-ROOT"),
              translation : new SFVec3f([-5.198,-15.99,-112.3]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble05-ROOT"),
              translation : new SFVec3f([8.249,-15.99,-141.4]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble06-ROOT"),
              translation : new SFVec3f([-4.603,-15.99,-167.7]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble07-ROOT"),
              translation : new SFVec3f([-1.222,-15.99,-213.5]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble08-ROOT"),
              translation : new SFVec3f([-16.28,-15.99,-214.4]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble09-ROOT"),
              translation : new SFVec3f([-55.46,-15.99,-252]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble10-ROOT"),
              translation : new SFVec3f([-100.7,-15.99,-249.8]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble11-ROOT"),
              translation : new SFVec3f([-131.4,-15.99,-303.5]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble12-ROOT"),
              translation : new SFVec3f([-121.8,-15.99,-358.8]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble13-ROOT"),
              translation : new SFVec3f([-126.2,-15.99,-440.1]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble14-ROOT"),
              translation : new SFVec3f([-86.44,-15.99,-462.5]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble15-ROOT"),
              translation : new SFVec3f([-48.94,-15.99,-483.8]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble16-ROOT"),
              translation : new SFVec3f([-14.27,-15.99,-497.2]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble17-ROOT"),
              translation : new SFVec3f([-4.255,-15.99,-537.4]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble18-ROOT"),
              translation : new SFVec3f([7.987,-15.99,-584.9]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble19-ROOT"),
              translation : new SFVec3f([-3.237,-15.99,-621.2]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble201-ROOT"),
              translation : new SFVec3f([-15.15,-15.99,-6.77]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble202-ROOT"),
              translation : new SFVec3f([3.51,-15.99,-31.52]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble203-ROOT"),
              translation : new SFVec3f([-6.846,-15.99,-62.02]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble204-ROOT"),
              translation : new SFVec3f([11.8,-15.99,-94.4]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble205-ROOT"),
              translation : new SFVec3f([-6.296,-15.99,-122.9]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble206-ROOT"),
              translation : new SFVec3f([-12.13,-15.99,-146.1]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble207-ROOT"),
              translation : new SFVec3f([8.454,-15.99,-180.3]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble208-ROOT"),
              translation : new SFVec3f([-6.417,-15.99,-198.3]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble209-ROOT"),
              translation : new SFVec3f([-6.454,-15.99,-226.6]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble210-ROOT"),
              translation : new SFVec3f([-30.97,-15.99,-242.6]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble211-ROOT"),
              translation : new SFVec3f([-76.67,-15.99,-241.7]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble212-ROOT"),
              translation : new SFVec3f([-101.7,-15.99,-257.1]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble213-ROOT"),
              translation : new SFVec3f([-126.8,-15.99,-284]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble214-ROOT"),
              translation : new SFVec3f([-122.2,-15.99,-310.8]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble215-ROOT"),
              translation : new SFVec3f([-126,-15.99,-361.9]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble216-ROOT"),
              translation : new SFVec3f([-141.4,-15.99,-400.1]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble217-ROOT"),
              translation : new SFVec3f([-133.6,-15.99,-337]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble218-ROOT"),
              translation : new SFVec3f([-116.2,-15.99,-429.3]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble219-ROOT"),
              translation : new SFVec3f([-105.8,-15.99,-457.6]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble220-ROOT"),
              translation : new SFVec3f([-85.19,-15.99,-467.2]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble221-ROOT"),
              translation : new SFVec3f([-46.54,-15.99,-478.8]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble222-ROOT"),
              translation : new SFVec3f([-7.292,-15.99,-494.2]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble223-ROOT"),
              translation : new SFVec3f([-3.522,-15.99,-519.8]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble224-ROOT"),
              translation : new SFVec3f([-6.843,-15.99,-544.2]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble225-ROOT"),
              translation : new SFVec3f([17.6,-15.99,-564.2]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble226-ROOT"),
              translation : new SFVec3f([3.365,-15.99,-590]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new Transform({
              DEF : new SFString("Inline_bubble227-ROOT"),
              translation : new SFVec3f([17.49,-15.99,-628.7]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["bubble2.x3d"])})])}),

            new PositionInterpolator({
              DEF : new SFString("SharkEat-POS-INTERP"),
              key : new MFFloat([0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429]),
              keyValue : new MFVec3f([0.001881,-0.2842,-1.188,0.002397,-0.2545,-1.211,0.002762,-0.2227,-1.226,0.002945,-0.1925,-1.231,0.00294,-0.168,-1.228,0.002767,-0.1531,-1.217,0.002685,-0.15,-1.212,0.002685,-0.15,-1.212,0.002767,-0.1531,-1.217,0.002513,-0.1692,-1.229,0.001648,-0.1962,-1.235,0.0007906,-0.228,-1.23,0.0006205,-0.2586,-1.214,0.001867,-0.2842,-1.188,0.009928,-0.2819,-1.195,0.02599,-0.277,-1.198,0.04685,-0.2713,-1.199,0.06942,-0.2667,-1.197,0.09061,-0.265,-1.196,0.1088,-0.2673,-1.196,0.1193,-0.2725,-1.194,0.1143,-0.279,-1.192,0.0874,-0.2847,-1.187,0.02086,-0.2839,-1.188,-0.06119,-0.284,-1.188,-0.09799,-0.285,-1.187,-0.03127,-0.2837,-1.188,0.08074,-0.2835,-1.188,0.1228,-0.2847,-1.187,0.006802,-0.2832,-1.188,-0.09799,-0.285,-1.187,-0.007522,-0.2832,-1.188,0.0874,-0.2847,-1.187,0.004102,-0.2831,-1.188,-0.09799,-0.285,-1.187,-0.0861,-0.2844,-1.188,-0.02842,-0.2841,-1.188,0.001881,-0.2842,-1.188,0.002219,-0.2842,-1.188,0.003149,-0.2842,-1.188,0.004503,-0.2843,-1.188,0.006065,-0.2843,-1.188,0.007599,-0.2844,-1.188,0.00888,-0.2844,-1.188,0.00978,-0.2844,-1.188,0.01034,-0.2844,-1.188,0.01063,-0.2844,-1.188,0.01071,-0.2843,-1.188,0.01065,-0.2843,-1.188,0.01051,-0.2843,-1.188,0.01014,-0.2843,-1.188,0.009422,-0.2843,-1.188,0.00845,-0.2843,-1.188,0.007312,-0.2842,-1.188,0.0061,-0.2842,-1.188,0.004883,-0.2842,-1.188,0.003741,-0.2842,-1.188,0.002783,-0.2842,-1.188,0.002125,-0.2842,-1.188,0.001881,-0.2842,-1.188])}),

            new OrientationInterpolator({
              DEF : new SFString("SharkEat-ROT-INTERP"),
              key : new MFFloat([0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429]),
              keyValue : new MFRotation([-0.999941,0.00659827,-0.00861635,4.167,-0.999944,0.00604627,-0.00869538,4.075,-0.999946,0.00550426,-0.00877241,3.98,-0.999948,0.00499124,-0.00884443,3.887,-0.99995,0.00452577,-0.00890956,3.799,-0.999951,0.0041228,-0.00896756,3.722,-0.999952,0.00399481,-0.00898557,3.696,-0.999952,0.00399481,-0.00898557,3.696,-0.999951,0.0041228,-0.00896756,3.722,-0.99995,0.00457123,-0.00890444,3.808,-0.999948,0.00513225,-0.00882442,3.913,-0.999945,0.00572426,-0.0087404,4.019,-0.999943,0.00625127,-0.00866537,4.109,-0.999941,0.00659827,-0.00861635,4.167,-0.999947,0.00489023,-0.00903943,4.179,-0.99995,0.00122694,-0.00991551,4.158,-0.999943,-0.00157007,-0.0105705,4.122,-0.999946,-0.000831738,-0.0103705,4.087,-0.999944,0.00602127,-0.00869838,4.071,-0.999521,0.0308406,-0.00273806,4.081,-0.997532,0.0699022,0.00664321,4.105,-0.994669,0.102097,0.0144496,4.132,-0.994277,0.105698,0.0155096,4.152,-0.999277,0.0380191,-0.000154996,4.161,-0.997328,-0.0686719,-0.0249207,4.156,-0.991604,-0.123701,-0.0376702,4.148,-0.99763,-0.0644919,-0.0239907,4.153,-0.998929,0.0462413,0.00168605,4.156,-0.994277,0.105698,0.0155096,4.152,-0.999896,-0.00915896,-0.01117,4.156,-0.991604,-0.123701,-0.0376702,4.148,-0.999896,-0.00915896,-0.01117,4.156,-0.994277,0.105698,0.0155096,4.152,-0.999942,-0.00419117,-0.00996641,4.155,-0.991604,-0.123701,-0.0376702,4.148,-0.996334,-0.0806727,-0.028481,4.157,-0.999921,-0.00509411,-0.0114702,4.166,-0.999941,0.00659827,-0.00861635,4.167,-0.999937,0.00754128,-0.00832831,4.167,-0.99992,0.0101602,-0.00749615,4.167,-0.999885,0.0138398,-0.00621691,4.167,-0.999833,0.0176706,-0.00464215,4.168,-0.999784,0.0205897,-0.00295795,4.168,-0.999766,0.0215893,-0.00136895,4.168,-0.999796,0.0202099,-0.000141899,4.168,-0.999853,0.0171092,0.00064827,4.168,-0.999913,0.0131702,0.00109701,4.168,-0.999956,0.0092616,0.00129994,4.168,-0.999979,0.00627387,0.00135097,4.168,-0.999986,0.00508293,0.00134698,4.168,-0.999986,0.00513293,0.00101599,4.168,-0.999986,0.00526993,0.000118798,4.167,-0.999984,0.00547091,-0.00120398,4.167,-0.99998,0.00571488,-0.00280994,4.167,-0.999972,0.00598083,-0.00455787,4.167,-0.999962,0.00622076,-0.00613477,4.167,-0.999953,0.0063967,-0.00729466,4.167,-0.999946,0.0065133,-0.00805837,4.167,-0.999942,0.00657828,-0.00848236,4.167,-0.999941,0.00659827,-0.00861635,4.167])}),

            new PositionInterpolator({
              DEF : new SFString("SharkEat-SCALE-INTERP"),
              key : new MFFloat([0,0.01429,0.02857,0.04286,0.05714,0.07143,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143]),
              keyValue : new MFVec3f([0.001994,0.001994,0.001994,0.003883,0.003883,0.003883,0.005543,0.005543,0.005543,0.006863,0.006863,0.006863,0.007735,0.007735,0.007735,0.00805,0.00805,0.00805,0.00805,0.00805,0.00805,0.007735,0.007735,0.007735,0.006862,0.006862,0.006862,0.005541,0.005541,0.005541,0.003881,0.003881,0.003881,0.00199,0.00199,0.00199,0.002115,0.002115,0.002115,0.002209,0.002209,0.002209,0.002272,0.002272,0.002272,0.002303,0.002303,0.002303,0.002304,0.002304,0.002304,0.002273,0.002273,0.002273,0.002211,0.002211,0.002211,0.002118,0.002118,0.002118,0.001994,0.001994,0.001994])}),

            new PositionInterpolator({
              DEF : new SFString("SharkEat_Eyeball_R-POS-INTERP"),
              key : new MFFloat([0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1571,0.1714,0.1857,0.2,0.2143,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429,0.8714,0.8857]),
              keyValue : new MFVec3f([55.09,1.822,-6.84,55.09,1.822,-6.84,55.09,1.822,-6.84,55.09,1.822,-6.84,48.07,2.931,-6.466,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,55.09,1.822,-6.84])}),

            new OrientationInterpolator({
              DEF : new SFString("SharkEat_Eyeball_R-ROT-INTERP"),
              key : new MFFloat([0,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429,0.8571,0.8714,0.8857]),
              keyValue : new MFRotation([-0.682571,0.661772,-0.310087,2.578,-0.682571,0.661772,-0.310087,2.578,0.390293,-0.920184,-0.0305395,3.013,0.151105,-0.958234,-0.242808,2.595,0.139597,-0.957581,-0.252095,2.577,0.128799,-0.95679,-0.260697,2.561,0.118698,-0.955884,-0.268695,2.547,0.109401,-0.95491,-0.276003,2.533,0.1008,-0.953898,-0.282699,2.521,0.0929768,-0.952867,-0.28879,2.51,0.0858359,-0.951855,-0.294286,2.5,0.0793787,-0.950884,-0.299195,2.491,0.0736136,-0.949947,-0.303615,2.483,0.0684887,-0.949082,-0.307494,2.476,0.064019,-0.948286,-0.310895,2.47,0.0601689,-0.947583,-0.313794,2.465,0.0569273,-0.946955,-0.316285,2.461,0.0542718,-0.946432,-0.318311,2.457,0.0521807,-0.946012,-0.319904,2.454,0.0506212,-0.945723,-0.321008,2.452,0.0495804,-0.945508,-0.321803,2.451,0.04903,-0.945401,-0.3222,2.45,0.0489586,-0.945374,-0.322291,2.45,0.0493179,-0.945459,-0.321986,2.45,0.0501108,-0.945615,-0.321405,2.451,0.051298,-0.945863,-0.320487,2.453,0.0528589,-0.946181,-0.319293,2.455,0.0547622,-0.946537,-0.317913,2.458,0.0569789,-0.946982,-0.316194,2.461,0.0595032,-0.947451,-0.314317,2.464,0.0622884,-0.947975,-0.312192,2.468,0.0653214,-0.94852,-0.309907,2.472,0.0685683,-0.949077,-0.307492,2.476,0.0720071,-0.949662,-0.304888,2.481,0.0756279,-0.950274,-0.302092,2.486,0.0793787,-0.950884,-0.299195,2.491,0.0832567,-0.951463,-0.296288,2.496,0.087227,-0.952067,-0.29319,2.502,0.091273,-0.952631,-0.290109,2.508,0.0953503,-0.953203,-0.286901,2.513,0.099454,-0.953738,-0.283711,2.519,0.103605,-0.954243,-0.280512,2.525,0.107601,-0.954709,-0.277403,2.531,0.111696,-0.955167,-0.27419,2.537,0.115598,-0.955586,-0.271096,2.542,0.119494,-0.955955,-0.268087,2.548,0.123202,-0.956316,-0.265105,2.553,0.126806,-0.956643,-0.262212,2.559,0.130302,-0.956912,-0.259503,2.564,0.133497,-0.957175,-0.256893,2.568,0.136597,-0.957379,-0.254494,2.573,0.139398,-0.957583,-0.252196,2.577,0.141905,-0.957736,-0.250209,2.581,0.144199,-0.957891,-0.248298,2.584,0.146298,-0.957986,-0.246696,2.587,0.1479,-0.958099,-0.2453,2.59,0.149305,-0.958134,-0.244309,2.592,0.150298,-0.958186,-0.243496,2.593,0.150902,-0.958216,-0.243004,2.594,0.151105,-0.958234,-0.242808,2.595,-0.682571,0.661772,-0.310087,2.578])}),

            new PositionInterpolator({
              DEF : new SFString("SharkEat_Eyeball_L-POS-INTERP"),
              key : new MFFloat([0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286]),
              keyValue : new MFVec3f([-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-47.14,4.268,-4.764,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257])}),

            new OrientationInterpolator({
              DEF : new SFString("SharkEat_Eyeball_L-ROT-INTERP"),
              key : new MFFloat([0,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8]),
              keyValue : new MFRotation([-0.374592,0.400391,-0.836282,1.719,-0.374592,0.400391,-0.836282,1.719,-0.040862,0.303215,-0.952046,0.4171,0.718259,-0.445474,0.534469,0.4786,0.699612,-0.445407,0.558709,0.5163,0.68429,-0.444994,0.577692,0.5512,0.671532,-0.444521,0.592828,0.5833,0.660917,-0.444011,0.605015,0.6126,0.651993,-0.443495,0.614993,0.6391,0.644498,-0.442998,0.623198,0.663,0.638269,-0.442579,0.62987,0.6842,0.632971,-0.44218,0.635471,0.7028,0.628684,-0.441789,0.639984,0.719,0.625093,-0.441495,0.643693,0.7328,0.622169,-0.441278,0.646668,0.7442,0.619913,-0.441009,0.649014,0.7535,0.618208,-0.440906,0.650708,0.7607,0.61697,-0.440778,0.651968,0.7658,0.616179,-0.440685,0.652778,0.7691,0.615873,-0.44068,0.653071,0.7705,0.615913,-0.440709,0.653014,0.7702,0.616384,-0.440688,0.652583,0.7683,0.617174,-0.440782,0.651773,0.765,0.61831,-0.440907,0.65061,0.7602,0.619811,-0.441008,0.649112,0.7541,0.621526,-0.441218,0.647327,0.7469,0.623602,-0.441401,0.645202,0.7385,0.625975,-0.441583,0.642775,0.7292,0.628684,-0.441789,0.639984,0.719,0.631624,-0.442017,0.636924,0.708,0.634784,-0.442289,0.633584,0.6964,0.638269,-0.442579,0.62987,0.6842,0.642004,-0.442803,0.625904,0.6715,0.645889,-0.443092,0.621689,0.6585,0.649987,-0.443391,0.617188,0.6453,0.654382,-0.443588,0.612383,0.6319,0.658897,-0.443898,0.607297,0.6184,0.663573,-0.444182,0.601975,0.605,0.668324,-0.444416,0.596521,0.5918,0.67323,-0.44462,0.590826,0.5789,0.678137,-0.444824,0.585032,0.5663,0.683058,-0.444973,0.579164,0.5541,0.687902,-0.445101,0.573302,0.5426,0.692676,-0.445285,0.567381,0.5317,0.697239,-0.445325,0.561732,0.5215,0.701516,-0.44541,0.556313,0.5122,0.705492,-0.445495,0.551194,0.5039,0.709116,-0.44551,0.546512,0.4965,0.712198,-0.445499,0.542499,0.4903,0.714786,-0.445492,0.53909,0.4853,0.716675,-0.445485,0.536582,0.4817,0.717873,-0.445483,0.53498,0.4794,0.718259,-0.445474,0.534469,0.4786,-0.374592,0.400391,-0.836282,1.719])}),

            new TimeSensor({
              DEF : new SFString("TimeSensor_inline-TIMER"),
              cycleInterval : new SFTime(9.533),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new Script({
              DEF : new SFString("TimeSensor_inline-SCRIPT"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fractionIn"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fractionOut"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:
    , function fractionIn(i) {
    fractionOut = 0.9931 * i + 0.006944;
  })}),

            new Switch({
              DEF : new SFString("SittingSeagull"),
              whichChoice : new SFInt32(0),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("SittingSeagullCollisionMover"),
                      translation : new SFVec3f([4.242,0,-50.32]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("SittingSeagullCollisionSpinner"),
                          rotation : new SFRotation([1,0,0,0.0134964]),
                          children : new MFNode([
                            new ProximitySensor({
                              DEF : new SFString("EatSittingSeagull"),
                              size : new SFVec3f([5,4,4]),
                              center : new SFVec3f([0,0,4])})])})])}),

                    new Transform({
                      DEF : new SFString("Inline_Gull_sit-ROOT"),
                      translation : new SFVec3f([4.242,0,-50.32]),
                      children : new MFNode([
                        new VisibilitySensor({
                          DEF : new SFString("sittingSeagullVisible"),
                          size : new SFVec3f([1,1,1])}),

                        new Inline({
                          url : new MFString(["gullswim.x3d"])})])})])})])}),

            new TimeSensor({
              DEF : new SFString("TimeSensor_gullswim-TIMER"),
              cycleInterval : new SFTime(9.6),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new PositionInterpolator({
              DEF : new SFString("Inline_Gullswim-POS-INTERP"),
              key : new MFFloat([0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]),
              keyValue : new MFVec3f([-8.996,0,-185.5,-8.956,0,-186.4,-8.816,0,-187.3,-8.523,0,-188.1,-8.102,0,-188.8,-7.58,0,-189.5,-6.987,0,-190.1,-6.337,0,-190.7,-5.645,0,-191.2,-4.919,0,-191.6,-4.165,0,-192,-3.387,0,-192.4,-2.587,0,-192.7,-1.768,0,-192.9,-0.9306,0,-193.1,-0.07939,0,-193.1,0.7576,0,-193,1.426,0,-192.4,1.902,0,-191.7,2.281,0,-190.9,2.602,0,-190,2.879,0,-189.2,3.121,0,-188.3,3.333,0,-187.5,3.516,0,-186.6,3.671,0,-185.7,3.797,0,-184.8,3.891,0,-184,3.947,0,-183.1,3.956,0,-182.2,3.89,0,-181.3,3.702,0,-180.4,3.222,0,-179.7,2.314,0,-179.4,1.357,0,-179.3,0.395,0,-179.3,-0.5648,0,-179.4,-1.519,0,-179.5,-2.465,0,-179.7,-3.4,0,-179.9,-4.32,0,-180.2,-5.22,0,-180.5,-6.089,0,-180.9,-6.914,0,-181.4,-7.667,0,-182,-8.303,0,-182.8,-8.751,0,-183.6,-8.946,0,-184.5,-8.996,0,-185.5])}),

            new OrientationInterpolator({
              DEF : new SFString("Inline_Gullswim-ROT-INTERP"),
              key : new MFFloat([0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]),
              keyValue : new MFRotation([0,0,1,0,0,-1,0,0.146499,0,-1,0,0.3004,0,-1,0,0.4543,0,-1,0,0.6008,0,-1,0,0.7324,0,-1,0,0.8419,0,-1,0,0.9194,0,-1,0,0.9686,0,-1,0,1.002,0,-1,0,1.031,0,-1,0,1.07,0,-1,0,1.13,0,-1,0,1.223,0,-1,0,1.368,0,-1,0,1.616,0,-1,0,1.937,0,-1,0,2.273,0,-1,0,2.569,0,-1,0,2.768,0,-1,0,2.878,0,-1,0,2.949,0,-1,0,2.992,0,-1,0,3.017,0,-1,0,3.033,0,-1,0,3.051,0,-1,0,3.08,0,-1,0,3.131,0,-1,0,3.214,0,-1,0,3.341,0,-1,0,3.523,0,-1,0,3.742,0,-1,0,3.979,0,1,0,2.068,0,1,0,1.85,0,1,0,1.669,0,1,0,1.537,0,1,0,1.437,0,1,0,1.36,0,1,0,1.298,0,1,0,1.241,0,1,0,1.18,0,1,0,1.108,0,1,0,1.015,0,1,0,0.8902,0,1,0,0.7053,0,1,0,0.4765,0,1,0,0.2319,0,0,1,0])}),

            new Switch({
              DEF : new SFString("Seagull"),
              whichChoice : new SFInt32(0),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("SeagullCollisionMover"),
                      translation : new SFVec3f([-1.33807,0,-179.481]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("SeagullCollisionSpinner"),
                          rotation : new SFRotation([1,0,0,0.0134964]),
                          children : new MFNode([
                            new ProximitySensor({
                              DEF : new SFString("EatSeagull"),
                              size : new SFVec3f([3,3,2]),
                              center : new SFVec3f([0,0,4])})])})])}),

                    new Transform({
                      DEF : new SFString("Inline_Gullswim-ROOT"),
                      translation : new SFVec3f([-1.33807,0,-179.481]),
                      rotation : new SFRotation([0,1,0,1.45596]),
                      children : new MFNode([
                        new VisibilitySensor({
                          DEF : new SFString("seagullVisible"),
                          size : new SFVec3f([1,1,1])}),

                        new Inline({
                          url : new MFString(["gullswim.x3d"])})])})])})])}),

            new TimeSensor({
              DEF : new SFString("TimeSensor_Fishswim-TIMER"),
              cycleInterval : new SFTime(9.6),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new PositionInterpolator({
              DEF : new SFString("Inline_Fishswim-POS-INTERP"),
              key : new MFFloat([0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]),
              keyValue : new MFVec3f([1.603,-5.208,-121.5,1.378,-4.873,-121.5,1.174,-4.566,-121.4,0.9889,-4.287,-121.4,0.8242,-4.036,-121.3,0.6794,-3.813,-121.3,0.5545,-3.619,-121.2,0.4495,-3.453,-121.2,0.3644,-3.315,-121.1,0.2992,-3.205,-121.1,0.254,-3.124,-121,0.2287,-3.07,-121,0.2232,-3.045,-120.9,0.2377,-3.048,-120.8,0.2722,-3.079,-120.8,0.3265,-3.139,-120.7,0.4007,-3.226,-120.7,0.5204,-3.371,-120.6,0.6953,-3.595,-120.5,0.9022,-3.885,-120.4,1.118,-4.231,-120.3,1.318,-4.621,-120.2,1.481,-5.042,-120.1,1.582,-5.484,-120,1.598,-5.935,-119.9,1.527,-6.383,-119.8,1.386,-6.817,-119.7,1.199,-7.224,-119.6,0.9874,-7.594,-119.5,0.7722,-7.915,-119.5,0.5753,-8.174,-119.5,0.4186,-8.362,-119.5,0.3236,-8.465,-119.5,0.3071,-8.498,-119.5,0.3628,-8.486,-119.6,0.4779,-8.432,-119.8,0.6395,-8.339,-119.9,0.8349,-8.209,-120.1,1.051,-8.045,-120.3,1.275,-7.851,-120.5,1.495,-7.63,-120.7,1.697,-7.384,-120.9,1.869,-7.116,-121.1,1.997,-6.83,-121.2,2.069,-6.528,-121.4,2.073,-6.213,-121.5,1.995,-5.889,-121.5,1.825,-5.557,-121.5,1.603,-5.208,-121.5])}),

            new OrientationInterpolator({
              DEF : new SFString("Inline_Fishswim-ROT-INTERP"),
              key : new MFFloat([0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]),
              keyValue : new MFRotation([0,0,1,0,0,-1,0,0.0907388,0,-1,0,0.165701,0,-1,0,0.2249,0,-1,0,0.2682,0,-1,0,0.2958,0,-1,0,0.3076,0,-1,0,0.3036,0,-1,0,0.2838,0,-1,0,0.2467,0,-1,0,0.177299,0,-1,0,0.0818187,0,1,0,0.0265027,0,1,0,0.134501,0,1,0,0.229101,0,1,0,0.297,0,1,0,0.3326,0,1,0,0.3414,0,1,0,0.3272,0,1,0,0.2939,0,1,0,0.2452,0,1,0,0.184899,0,1,0,0.116801,0,1,0,0.0447313,0,-1,0,0.0275438,0,-1,0,0.0961895,0,-1,0,0.157501,0,-1,0,0.207501,0,-1,0,0.2426,0,-1,0,0.2589,0,-1,0,0.2526,0,-1,0,0.2238,0,-1,0,0.176501,0,-1,0,0.1153,0,-1,0,0.0444908,0,1,0,0.0313569,0,1,0,0.107801,0,1,0,0.1805,0,1,0,0.2449,0,1,0,0.2965,0,1,0,0.331,0,1,0,0.3438,0,1,0,0.3316,0,1,0,0.3045,0,1,0,0.2661,0,1,0,0.2164,0,1,0,0.1555,0,1,0,0.0833692,0,0,1,0])}),

            new Switch({
              DEF : new SFString("FishSwim"),
              whichChoice : new SFInt32(0),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("FishSwimCollisionMover"),
                      translation : new SFVec3f([0.797849,-8.23365,-120.062]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("FishSwimCollisionSpinner"),
                          rotation : new SFRotation([1,0,0,0.0134964]),
                          children : new MFNode([
                            new ProximitySensor({
                              DEF : new SFString("EatFishSwim"),
                              size : new SFVec3f([5,5,6]),
                              center : new SFVec3f([0,2,6])})])})])}),

                    new Transform({
                      DEF : new SFString("Inline_Fishswim-ROOT"),
                      translation : new SFVec3f([0.797849,-8.23365,-120.062]),
                      rotation : new SFRotation([0,1,0,0.166717]),
                      children : new MFNode([
                        new VisibilitySensor({
                          DEF : new SFString("fishSwimVisible"),
                          size : new SFVec3f([1,1,1])}),

                        new Inline({
                          url : new MFString(["fishswim.x3d"])})])})])})])}),

            new TimeSensor({
              DEF : new SFString("TimeSensor_Fishbott-TIMER"),
              cycleInterval : new SFTime(12.6),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new Switch({
              DEF : new SFString("Fish"),
              whichChoice : new SFInt32(0),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("FishCollisionMover"),
                      translation : new SFVec3f([-70.8306,-13.977,-248.981]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("FishCollisionSpinner"),
                          rotation : new SFRotation([1,0,0,0.0134964]),
                          children : new MFNode([
                            new ProximitySensor({
                              DEF : new SFString("EatFish"),
                              size : new SFVec3f([5,5,6]),
                              center : new SFVec3f([0,1,5])})])})])}),

                    new Transform({
                      DEF : new SFString("Inline_Fishbott-ROOT"),
                      translation : new SFVec3f([-70.8306,-13.977,-248.981]),
                      rotation : new SFRotation([-0.176036,-0.979666,-0.0962573,1.28339]),
                      children : new MFNode([
                        new VisibilitySensor({
                          DEF : new SFString("fishVisible"),
                          size : new SFVec3f([1,1,1])}),

                        new Inline({
                          url : new MFString(["fishswim.x3d"])})])})])})])}),

            new PositionInterpolator({
              DEF : new SFString("Inline_Fishbott-POS-INTERP"),
              key : new MFFloat([0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]),
              keyValue : new MFVec3f([-62.58,-13.97,-248,-60.3,-14.04,-247.6,-58.11,-14.04,-247.1,-55.99,-13.95,-246.6,-53.96,-13.75,-246.3,-51.9,-13.44,-246.8,-49.87,-13.01,-247.8,-48.1,-12.48,-248.6,-46.81,-11.84,-248.6,-45.92,-10.87,-247.7,-45.4,-9.861,-246.5,-45.29,-9.219,-245.2,-45.68,-9.32,-244,-46.62,-10.06,-242.7,-47.84,-11.03,-241.6,-49.03,-11.85,-241.2,-50.1,-12.42,-241.7,-51.19,-12.93,-243,-52.35,-13.37,-244.5,-53.66,-13.71,-245.9,-55.17,-13.94,-246.6,-56.86,-14.05,-247,-58.68,-14.07,-247.2,-60.58,-14.05,-247.4,-62.51,-14.04,-247.6,-64.51,-14.08,-248,-66.61,-14.12,-248.5,-68.71,-14.12,-248.9,-70.74,-13.99,-249,-72.69,-13.71,-248.6,-74.65,-13.3,-247.7,-76.41,-12.79,-246.9,-77.76,-12.21,-246.7,-78.71,-11.37,-247.3,-79.34,-10.45,-248.4,-79.65,-9.759,-249.5,-79.64,-9.58,-250.5,-79.25,-9.961,-251.7,-78.54,-10.67,-252.9,-77.62,-11.44,-253.7,-76.57,-12.07,-253.7,-75.34,-12.68,-252.7,-73.93,-13.29,-251.2,-72.37,-13.79,-249.7,-70.71,-14.08,-248.9,-68.95,-14.19,-248.5,-67.04,-14.16,-248.4,-64.93,-14.09,-248.3,-62.58,-13.97,-248])}),

            new OrientationInterpolator({
              DEF : new SFString("Inline_Fishbott-ROT-INTERP"),
              key : new MFFloat([0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1]),
              keyValue : new MFRotation([0,1,0,1.387,0.00527826,0.999949,-0.00860442,1.438,0.0117406,0.999748,-0.0191409,1.487,0.00633917,0.999927,-0.0103303,1.565,-0.0381515,0.997539,0.0588223,1.796,-0.0955276,0.983175,0.155696,2.056,-0.0739823,0.97673,0.201306,1.8,-0.150297,0.961083,0.231796,1.416,-0.496611,0.840718,0.215805,1.105,-0.726613,0.631211,0.271305,0.7756,-0.772669,0.179593,0.608875,0.3776,0.154501,-0.788506,0.595305,0.4326,0.441097,-0.838395,0.320198,0.8782,0.424126,-0.876454,0.227914,1.286,0.306211,-0.933535,0.186407,1.683,0.1735,-0.971601,0.1609,2.041,0.0748678,-0.987571,0.138196,2.282,0.0367917,-0.992947,0.112705,2.326,0.0194807,-0.996435,0.0820829,2.199,0.0117394,-0.998751,0.0485676,1.995,0.00634929,-0.999846,0.0163708,1.807,-0.00395491,-0.999976,-0.00565387,1.724,-0.0128301,-0.999806,-0.0149601,1.725,-0.0190897,-0.999683,-0.0163897,1.763,-0.0255789,-0.999558,-0.0151694,1.809,-0.0353514,-0.99924,-0.0163907,1.833,-0.0518221,-0.998341,-0.025081,1.804,-0.0966312,-0.994312,-0.0447905,1.578,-0.174097,-0.980385,-0.0923886,1.284,-0.215302,-0.960611,-0.175702,1.275,-0.2139,-0.9346,-0.2842,1.495,-0.196103,-0.911712,-0.361005,1.821,-0.173506,-0.907133,-0.383414,2.174,-0.150394,-0.926666,-0.344487,2.476,-0.112299,-0.967188,-0.227897,2.741,-0.0677372,-0.995058,-0.072597,3.012,-0.0339284,-0.997152,0.0673568,3.314,-0.0273792,-0.98917,0.144196,3.668,-0.0533996,-0.981792,0.182299,4.122,0.110004,0.974634,-0.194907,1.666,0.196598,0.963988,-0.179098,1.217,0.290908,0.946526,-0.139504,0.8946,0.282509,0.954231,-0.0981432,0.8004,0.140801,0.989108,-0.0428904,0.9928,0.0340686,0.99936,-0.0108996,1.276,-0.00788971,0.999964,0.00326288,1.419,-0.0138898,0.999887,0.00574493,1.436,-0.00617586,0.999978,0.00255394,1.409,0,1,0,1.387])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer_L_Toe03-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer_L_Toe02-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer_L_Toe01-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer_Heel_L-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([-0.57735,-0.57735,0.57735,4.189,0.582283,0.597983,-0.550784,2.034,0.58791,0.621811,-0.517409,1.978,0.590506,0.639406,-0.492405,1.915,0.587206,0.642207,-0.492705,1.835,0.560618,0.590119,-0.580919,1.687,0.511601,0.498401,-0.699901,1.554,0.497316,0.473715,-0.726823,1.526,0.502616,0.482816,-0.717123,1.537,0.518613,0.510313,-0.686018,1.573,0.538528,0.545928,-0.641833,1.627,0.561276,0.609974,-0.559376,1.712,0.5838,0.6697,-0.459,1.847,0.622537,0.651739,-0.433226,2.021,-0.677261,-0.52567,0.51477,4.052,-0.67519,-0.521493,0.521693,4.046,-0.672327,-0.51902,0.527821,4.043,-0.668882,-0.517986,0.533186,4.043,-0.664822,-0.518217,0.538018,4.045,-0.660277,-0.519582,0.542281,4.05,-0.655201,-0.522001,0.546101,4.057,-0.649736,-0.525329,0.54943,4.066,-0.643894,-0.529395,0.552395,4.076,-0.637715,-0.534012,0.555113,4.087,-0.631307,-0.539006,0.557606,4.099,-0.624605,-0.544404,0.559904,4.111,-0.617696,-0.549897,0.562197,4.124,-0.610806,-0.555405,0.564306,4.137,-0.603802,-0.560702,0.566602,4.149,-0.596914,-0.565713,0.568913,4.161,-0.590112,-0.570312,0.571412,4.171,-0.5836,-0.5742,0.5742,4.181,-0.57735,-0.57735,0.57735,4.189])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer_Leg_L-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([0,0,1,3.142,0.000821696,-0.00309498,0.999995,3.192,0.00332404,-0.0127602,0.999913,3.351,0.00700607,-0.0270303,0.99961,3.582,0.0107701,-0.0407205,0.999112,3.784,0.0132596,-0.0434686,0.998967,3.791,0.0155599,-0.0526197,0.998493,3.718,0.0165896,-0.0645684,0.997775,3.702,0.0102599,-0.0574796,0.998294,3.782,0.00440881,-0.0475979,0.998857,3.839,0.00522582,-0.0451585,0.998966,3.767,0.00814869,-0.0448183,0.998962,3.653,0.0101904,-0.0448718,0.998941,3.577,0.00985537,-0.0450317,0.998937,3.593,0.0086892,-0.045581,0.998923,3.647,0.00849517,-0.0456709,0.99892,3.656,0.0101904,-0.0448718,0.998941,3.577,0.0121606,-0.0442321,0.998947,3.49,0.0142906,-0.0437019,0.998942,3.397,0.0161808,-0.0429021,0.998948,3.307,0.0174198,-0.0414495,0.998989,3.229,0.01753,-0.0385601,0.999103,3.163,0.0167693,-0.0347285,0.999256,3.112,0.0158196,-0.0315393,0.999377,3.086,0.0150105,-0.0302309,0.99943,3.102,0.0140195,-0.0295689,0.999464,3.142,0.0125805,-0.0274812,0.999543,3.169,0.01006,-0.02224,0.999702,3.171,0.00726731,-0.0161507,0.999843,3.165,0.00434319,-0.00963743,0.999944,3.155,0.00190098,-0.00419096,0.999989,3.147,0.0004681,-0.001025,0.999999,3.143,0,0,1,3.142])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer_R_Toe03-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]),
              keyValue : new MFRotation([0,0,1,0,-0.0562295,0.986392,-0.154499,0.187401,-0.0728275,0.977066,-0.200093,0.3857,-0.0560588,0.98648,-0.153997,0.5628,0,1,0,0.6981,0.142793,0.85996,0.489978,0.8999,0.285794,0.549088,0.785382,1.171,0.561875,0.160693,0.811464,0.9919,0.691169,-0.66357,0.286287,1.33,0.189701,0.640102,0.744502,1.29,0.230101,0.603802,0.763202,1.279,0.724797,-0.302099,0.619197,1.053,0.726196,-0.533997,0.432998,1.025,0.713763,-0.595869,0.368081,0.8367,0.711498,-0.604299,0.358599,0.564,0.72098,-0.564084,0.402489,0.265,0,0,1,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer_R_Toe02-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]),
              keyValue : new MFRotation([0,0,1,0,-0.0464815,0.993932,-0.0996932,0.2327,-0.0605004,0.989706,-0.129701,0.4765,-0.0462991,0.99398,-0.099298,0.6987,0,1,0,0.8727,0.131006,0.930039,0.343314,1.037,0.295794,0.714185,0.634386,1.157,0.643701,0.29,0.708201,0.8382,0.747609,-0.587507,0.309704,0.9851,0.192391,0.786564,0.586773,1.337,0.252005,0.746916,0.615313,1.268,0.800285,-0.190096,0.568689,0.8336,0.774871,-0.508881,0.374986,0.8172,0.746207,-0.590906,0.306603,0.6754,0.741562,-0.601569,0.296985,0.4561,0.762483,-0.548488,0.343192,0.212401,0,0,1,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer_R_Toe01-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]),
              keyValue : new MFRotation([0,0,1,0,0.0180505,0.999829,0.00400112,0.3708,0.0225907,0.999732,0.00500716,0.7852,0.0176406,0.999837,0.00391014,1.112,0,1,0,1.222,-0.130404,0.990629,-0.0406012,0.6596,-0.543577,-0.830665,-0.120495,0.3144,-0.164797,-0.985885,0.0295396,1.106,-0.319013,-0.947339,-0.0279112,0.5513,-0.128699,0.981993,-0.138299,0.9589,-0.177695,0.971771,-0.155195,0.7804,-0.534196,-0.837295,-0.116499,0.3328,-0.297808,-0.954426,-0.0195305,0.5258,-0.255103,-0.96691,-0.00284103,0.4767,-0.249893,-0.968273,-0.000794078,0.3257,-0.276816,-0.960856,-0.0113107,0.143199,0,0,1,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer_Heel_R-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([-0.57735,-0.57735,0.57735,4.189,0.52398,0.558479,-0.643076,2.023,0.516485,0.582783,-0.627382,2.077,-0.516498,-0.612397,0.598498,4.132,-0.503005,-0.623807,0.598206,4.114,0.432401,0.573002,-0.696202,2.004,0.363802,0.511903,-0.778205,1.869,0.467284,0.59648,-0.652578,2.074,-0.554128,-0.660433,0.506725,3.946,-0.504221,-0.624626,0.596325,4.111,0.43959,0.576487,-0.688784,2.016,0.360095,0.514993,-0.77789,1.878,0.335011,0.487116,-0.806527,1.826,0.43501,0.545712,-0.716216,1.93,-0.558075,-0.611073,0.561375,4.143,-0.609804,-0.623004,0.489903,4.043,0.577384,0.577284,-0.577384,2.094,0.563695,0.563095,-0.604295,2.054,0.549596,0.549596,-0.629196,2.018,0.54071,0.54071,-0.644412,1.997,0.550128,0.554928,-0.624031,2.019,0.564424,0.573925,-0.593326,2.058,0.57735,0.57735,-0.57735,2.094,-0.597196,-0.526397,0.605196,4.137,-0.59339,-0.489992,0.638589,4.138,0.527405,0.555905,-0.642506,1.995,0.426798,0.649096,-0.629696,1.817,0.387612,0.660321,-0.643221,1.749,0.478007,0.520108,-0.707811,1.871,0.518783,0.495484,-0.696677,1.946,0.542926,0.516925,-0.661831,1.996,0.561276,0.550076,-0.618373,2.042,0.578483,0.576783,-0.576783,2.093])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer_Leg_R-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([0,0,1,2.967,-0.00809825,-0.0259208,0.999631,2.901,-0.0343386,-0.111596,0.99316,2.688,-0.07042,-0.2289,0.9709,2.416,-0.100705,-0.319416,0.942248,2.23,-0.105306,-0.300816,0.94785,2.293,-0.0995772,-0.260693,0.960273,2.389,-0.101795,-0.307286,0.946157,2.199,-0.00988315,-0.368906,0.929414,2.206,-0.000357718,-0.347318,0.937747,2.266,-0.0196202,-0.327604,0.944611,2.335,-0.0215906,-0.269608,0.962728,2.439,-0.0169906,-0.198606,0.979932,2.559,-0.0106197,-0.125997,0.991974,2.685,-0.00438084,-0.0587478,0.998263,2.808,-0.000939975,-0.00724781,0.999973,2.916,0,0,1,2.967,0.0158996,0.000673982,0.999873,2.976,0.03461,-0.001994,0.999399,2.971,0.0436218,-0.00381516,0.999041,2.967,0.00681684,-0.000594886,0.999977,2.967,0.0191603,-0.00167503,0.999815,2.967,0.0436218,-0.00381516,0.999041,2.967,-0.0277603,0.00253303,0.999611,2.962,-0.087147,0.00762574,0.996166,2.968,-0.0517575,0.00374382,0.998653,3.004,0.0135001,-0.00287401,0.999905,3.045,0.0495177,-0.00611372,0.998755,3.048,0.0493285,-0.00495285,0.99877,2.99,0.0387118,-0.00303014,0.999246,2.941,0.0234605,-0.00165704,0.999723,2.942,0.00599589,-0.000444992,0.999982,2.962,0,0,1,2.967])}),

            new PositionInterpolator({
              DEF : new SFString("Surfer_Leg_R-POS-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688]),
              keyValue : new MFVec3f([-1.012,-0.06006,-1.719,-1.039,-0.05002,-1.719,-1.1,-0.02683,-1.719,-1.169,-0.0008667,-1.719,-1.218,0.01748,-1.719,-1.24,0.0259,-1.719,-1.25,0.02954,-1.719,-1.249,0.02921,-1.719,-1.24,0.0257,-1.719,-1.224,0.01982,-1.719,-1.199,0.01044,-1.719,-1.155,-0.006231,-1.719,-1.102,-0.02614,-1.719,-1.053,-0.04468,-1.719,-1.019,-0.05726,-1.719,-1.012,-0.06006,-1.719])}),

            new PositionInterpolator({
              DEF : new SFString("Surfer__Boolean-POS-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFVec3f([0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0])}),

            new Switch({
              DEF : new SFString("Surfer"),
              whichChoice : new SFInt32(0),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("SurferCollisionMover"),
                      translation : new SFVec3f([-126.6,0,-384.3]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("SurferCollisionSpinner"),
                          rotation : new SFRotation([1,0,0,0.0134964]),
                          children : new MFNode([
                            new ProximitySensor({
                              DEF : new SFString("EatSurfer"),
                              size : new SFVec3f([4,4,4]),
                              center : new SFVec3f([0,0,4])})])})])}),

                    new Transform({
                      DEF : new SFString("Inline_Surfer01-ROOT"),
                      translation : new SFVec3f([-126.6,0,-384.3]),
                      rotation : new SFRotation([0,-1,0,0.6981]),
                      children : new MFNode([
                        new ProximitySensor({
                          DEF : new SFString("ScareSurfer"),
                          size : new SFVec3f([23,5,23]),
                          center : new SFVec3f([0,0,-6])}),

                        new VisibilitySensor({
                          DEF : new SFString("surferVisible"),
                          size : new SFVec3f([1,1,1])}),

                        new TimeSensor({
                          DEF : new SFString("TimeSensor_Surfer-TIMER"),
                          cycleInterval : new SFTime(6.4),
                          loop : new SFBool(true),
                          startTime : new SFTime(1)}),

                        new Transform({
                          DEF : new SFString("Surfer__Boolean-ROOT"),
                          translation : new SFVec3f([0,0.221774,0]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0,0,0]),
                                      emissiveColor : new SFColor([0.007843,0.3922,0.6157]),
                                      shininess : new SFFloat(0)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("Surfer__Boolean-FACES"),
                                  coordIndex : new MFInt32([0,2,3,-1,3,1,0,-1,4,5,7,-1,7,6,4,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      DEF : new SFString("Surfer__Boolean-COORD"),
                                      point : new MFVec3f([-5.98,0,5.451,5.98,0,5.451,-5.98,0,-5.451,5.98,0,-5.451,-5.98,3,5.451,5.98,3,5.451,-5.98,3,-5.451,5.98,3,-5.451])}))}))}),

                            new Transform({
                              DEF : new SFString("Surfer_Board-ROOT"),
                              translation : new SFVec3f([-0.0417,-0.0001604,0.9788]),
                              rotation : new SFRotation([0,0,1,3.142]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("SurferAv_Board-POS-INTERP"),
                                  key : new MFFloat([0,0.1875,0.375,0.5625,0.75,0.9375,1]),
                                  keyValue : new MFVec3f([-0.0417,-0.0001604,0.9788,-0.0417,0.07741,0.9807,-0.0417,-0.02425,0.9775,-0.0417,-0.2906,0.9381,-0.0417,0.07953,0.9807,-0.0417,-0.06991,0.974,-0.0417,-0.0001608,0.9788])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("SurferAv_Board-ROT-INTERP"),
                                  key : new MFFloat([0,0.1875,0.375,0.5625,0.75,0.9375,1]),
                                  keyValue : new MFRotation([0,0,1,3.142,0,0.0242102,0.999707,3.142,0,-0.00752679,0.999972,3.142,0,-0.0915005,0.995805,3.142,0,0.0248698,0.999691,3.142,0,-0.0218092,0.999762,3.142,0,0,1,3.142])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0.9882,0]),
                                          shininess : new SFFloat(0.25)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("Surfer_Board-FACES"),
                                      coordIndex : new MFInt32([25,26,27,-1,28,29,30,-1,31,32,33,-1,34,25,27,-1,34,27,35,-1,34,35,36,-1,37,34,36,-1,38,31,33,-1,33,28,30,-1,33,30,39,-1,38,33,39,-1,38,39,37,-1,40,38,37,-1,41,42,43,-1,44,45,40,-1,44,40,37,-1,46,44,37,-1,43,46,37,-1,41,43,37,-1,47,41,37,-1,47,37,36,-1,48,47,36,-1,48,36,49,-1,19,20,26,-1,26,25,19,-1,20,21,27,-1,27,26,20,-1,13,14,29,-1,29,28,13,-1,14,15,30,-1,30,29,14,-1,10,11,32,-1,32,31,10,-1,11,12,33,-1,33,32,11,-1,18,19,25,-1,25,34,18,-1,21,22,35,-1,35,27,21,-1,22,23,36,-1,36,35,22,-1,17,18,34,-1,34,37,17,-1,9,10,31,-1,31,38,9,-1,12,13,28,-1,28,33,12,-1,15,16,39,-1,39,30,15,-1,16,17,37,-1,37,39,16,-1,8,9,38,-1,38,40,8,-1,2,3,42,-1,42,41,2,-1,3,4,43,-1,43,42,3,-1,6,7,45,-1,45,44,6,-1,7,8,40,-1,40,45,7,-1,5,6,44,-1,44,46,5,-1,4,5,46,-1,46,43,4,-1,1,2,41,-1,41,47,1,-1,0,1,47,-1,47,48,0,-1,23,24,49,-1,49,36,23,-1,24,0,48,-1,48,49,24,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("Surfer_Board-COORD"),
                                          point : new MFVec3f([0.1657,0,1.216,0.06499,0,1.079,0.08306,0,0.8577,0.1982,0,0.7584,0.08321,0,0.5542,0.09455,0,0.4045,0.2046,0,0.2595,0.4192,0,0.2487,0.4933,0,0.07054,0.611,0,0.005771,0.7443,0,0.02052,0.8736,0,0.1151,1.001,0,-0.9694,0.5954,0,-2.897,0.01121,0,-4.026,-0.5899,0,-2.87,-0.9896,0,-0.9747,-0.8437,0,0.5138,-0.4811,0,2.019,0.5406,0,2.023,0.6324,0,1.543,0.5527,0,1.594,0.406,0,1.551,0.3175,0,1.475,0.2886,0,1.288,0.5152,0.1,1.879,0.6324,0.1,1.543,0.5527,0.1,1.594,0.5674,0.1,-2.807,0.01095,0.1,-3.882,-0.5615,0.1,-2.781,0.7443,0.1,0.02052,0.8736,0.1,0.1151,0.9539,0.1,-0.971,-0.4579,0.1,1.875,0.406,0.1,1.551,0.3175,0.1,1.475,-0.8032,0.1,0.4417,0.611,0.1,0.005771,-0.9422,0.1,-0.976,0.4933,0.1,0.07054,0.08306,0.1,0.8577,0.1982,0.1,0.7584,0.08321,0.1,0.5542,0.2046,0.1,0.2595,0.4192,0.1,0.2487,0.09455,0.1,0.4045,0.06499,0.1,1.079,0.1657,0.1,1.216,0.2886,0.1,1.288])}))}))}),

                                new Transform({
                                  DEF : new SFString("Surfer_Leg_R-ROOT"),
                                  translation : new SFVec3f([-1.012,-0.06006,-1.719]),
                                  rotation : new SFRotation([0.0167852,-0.00146719,0.999858,2.967]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SurferAv_Leg_R-POS-INTERP"),
                                      key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                      keyValue : new MFVec3f([-1.015,-0.03887,-1.643,-1.015,-0.183,-1.643,-1.131,-0.6489,-1.327,-1.119,-1.619,-0.7108,-1.038,-0.64,-0.1306])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("SurferAv_Leg_R-ROT-INTERP"),
                                      key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                      keyValue : new MFRotation([-0.0126894,0.0231689,0.999651,2.981,0.00260013,-0.282214,0.959348,2.971,-0.122899,0.00777991,0.992389,3.061,-0.230396,0.368594,0.900586,3.257,0.137796,-0.71608,-0.684281,3.233])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("Surfer_Leg_R-FACES"),
                                          creaseAngle : new SFFloat(3),
                                          coordIndex : new MFInt32([0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,1,8,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,16,15,-1,7,8,16,-1,8,9,16,-1,8,1,9,-1,17,9,10,-1,17,10,11,-1,17,11,12,-1,17,12,13,-1,17,13,14,-1,17,14,15,-1,17,15,16,-1,17,16,9,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("Surfer_Leg_R-COORD"),
                                              point : new MFVec3f([0,0,0,0.1413,0,0,0.0999,0,0.0999,0,0,0.1413,-0.0999,0,0.0999,-0.1413,0,0,-0.0999,0,-0.0999,0,0,-0.1413,0.0999,0,-0.0999,0.1413,-1.496,0,0.0999,-1.496,0.0999,0,-1.496,0.1413,-0.0999,-1.496,0.0999,-0.1413,-1.496,0,-0.0999,-1.496,-0.0999,0,-1.496,-0.1413,0.0999,-1.496,-0.0999,0,-1.496,0])}))}))}),

                                    new Transform({
                                      DEF : new SFString("Surfer_Calf_R-ROOT"),
                                      translation : new SFVec3f([0.02795,-0.3406,0.07907]),
                                      rotation : new SFRotation([-1,0,0,0.0872687]),
                                      scale : new SFVec3f([1,1.958,0.8]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("Surfer_Calf_R-FACES"),
                                              creaseAngle : new SFFloat(3),
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("Surfer_Calf_R-COORD"),
                                                  point : new MFVec3f([0,0.278,0,0,0.1966,-0.1966,-0.139,0.1966,-0.139,-0.1966,0.1966,0,-0.139,0.1966,0.139,0,0.1966,0.1966,0.139,0.1966,0.139,0.1966,0.1966,0,0.139,0.1966,-0.139,0,0,-0.278,-0.1966,0,-0.1966,-0.278,0,0,-0.1966,0,0.1966,0,0,0.278,0.1966,0,0.1966,0.278,0,0,0.1966,0,-0.1966,0,-0.1966,-0.1966,-0.139,-0.1966,-0.139,-0.1966,-0.1966,0,-0.139,-0.1966,0.139,0,-0.1966,0.1966,0.139,-0.1966,0.139,0.1966,-0.1966,0,0.139,-0.1966,-0.139,0,-0.278,0])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("Surfer_Heel_R-ROOT"),
                                      translation : new SFVec3f([0.00156,-1.517,-0.02254]),
                                      rotation : new SFRotation([0.561764,0.570371,-0.599248,2.05039]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("Surfer_Heel_R-FACES"),
                                              creaseAngle : new SFFloat(3),
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("Surfer_Heel_R-COORD"),
                                                  point : new MFVec3f([0,0.1824,0,0,0.0912,-0.158,-0.1368,0.0912,-0.07898,-0.1368,0.0912,0.07898,0,0.0912,0.158,0.1368,0.0912,0.07898,0.1368,0.0912,-0.07898,0,-0.0912,-0.158,-0.1368,-0.0912,-0.07898,-0.1368,-0.0912,0.07898,0,-0.0912,0.158,0.1368,-0.0912,0.07898,0.1368,-0.0912,-0.07898,0,-0.1824,0])}))}))}),

                                        new Transform({
                                          DEF : new SFString("Surfer_Foot_R-ROOT"),
                                          translation : new SFVec3f([0.2704,0,-0.02074]),
                                          rotation : new SFRotation([1,0,0,0.2618]),
                                          scale : new SFVec3f([2.05,1,0.4436]),
                                          children : new MFNode([
                                            new PositionInterpolator({
                                              DEF : new SFString("SurferAv_Foot_R-POS-INTERP"),
                                              key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                              keyValue : new MFVec3f([0.2884,0.08679,0.0007157,0.2509,0.1126,0.1181,0.1482,0.1242,0.2566,0.0839,0.1066,0.3088,0.06327,0.0714,0.3248])}),

                                            new OrientationInterpolator({
                                              DEF : new SFString("SurferAv_Foot_R-ROT-INTERP"),
                                              key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                              keyValue : new MFRotation([-0.967379,-0.253195,0.00832282,0.3729,-0.70973,-0.704429,0.00795233,0.5513,-0.46399,-0.88358,-0.0632386,0.8957,-0.346388,-0.931667,-0.109596,1.043,-0.250092,-0.955768,-0.154795,1.064])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                      shininess : new SFFloat(0.25)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  DEF : new SFString("Surfer_Foot_R-FACES"),
                                                  creaseAngle : new SFFloat(3),
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      DEF : new SFString("Surfer_Foot_R-COORD"),
                                                      point : new MFVec3f([0,0.2224,0,0,0.1573,-0.1573,-0.1112,0.1573,-0.1112,-0.1573,0.1573,0,-0.1112,0.1573,0.1112,0,0.1573,0.1573,0.1112,0.1573,0.1112,0.1573,0.1573,0,0.1112,0.1573,-0.1112,0,0,-0.2224,-0.1573,0,-0.1573,-0.2224,0,0,-0.1573,0,0.1573,0,0,0.2224,0.1573,0,0.1573,0.2224,0,0,0.1573,0,-0.1573,0,-0.1573,-0.1573,-0.1112,-0.1573,-0.1112,-0.1573,-0.1573,0,-0.1112,-0.1573,0.1112,0,-0.1573,0.1573,0.1112,-0.1573,0.1112,0.1573,-0.1573,0,0.1112,-0.1573,-0.1112,0,-0.2224,0])}))}))}),

                                            new Transform({
                                              DEF : new SFString("Surfer_R_Toe02-ROOT"),
                                              translation : new SFVec3f([0.2303,0.006877,-0.04773]),
                                              scaleOrientation : new SFRotation([-0.0943647,0.793154,-0.601665,0.3048]),
                                              children : new MFNode([
                                                new PositionInterpolator({
                                                  DEF : new SFString("SurferAv_R_Toe02-POS-INTERP"),
                                                  key : new MFFloat([0,0.1875,0.375]),
                                                  keyValue : new MFVec3f([0.2303,0.006877,-0.04773,0.2298,0.006892,-0.1269,0.2311,0.006852,0.08421])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      DEF : new SFString("Surfer_R_Toe02-FACES"),
                                                      creaseAngle : new SFFloat(3),
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          DEF : new SFString("Surfer_R_Toe02-COORD"),
                                                          point : new MFVec3f([0,0.0624,0,0,0.0312,-0.05404,-0.0468,0.0312,-0.02702,-0.0468,0.0312,0.02702,0,0.0312,0.05404,0.0468,0.0312,0.02702,0.0468,0.0312,-0.02702,0,-0.0312,-0.05404,-0.0468,-0.0312,-0.02702,-0.0468,-0.0312,0.02702,0,-0.0312,0.05404,0.0468,-0.0312,0.02702,0.0468,-0.0312,-0.02702,0,-0.0624,0])}))}))})])}),

                                            new Transform({
                                              DEF : new SFString("Surfer_R_Toe03-ROOT"),
                                              translation : new SFVec3f([0.1815,0.1298,-0.01264]),
                                              scale : new SFVec3f([0.6226,1.016,2.312]),
                                              scaleOrientation : new SFRotation([-0.225302,0.706107,-0.671306,0.4788]),
                                              children : new MFNode([
                                                new PositionInterpolator({
                                                  DEF : new SFString("SurferAv_R_Toe03-POS-INTERP"),
                                                  key : new MFFloat([0,0.1875,0.375]),
                                                  keyValue : new MFVec3f([0.1815,0.1298,-0.01264,0.1818,0.1315,-0.09173,0.1811,0.1269,0.1192])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      DEF : new SFString("Surfer_R_Toe03-FACES"),
                                                      creaseAngle : new SFFloat(3),
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          DEF : new SFString("Surfer_R_Toe03-COORD"),
                                                          point : new MFVec3f([0,0.0524,0,0,0.0262,-0.04538,-0.0393,0.0262,-0.02269,-0.0393,0.0262,0.02269,0,0.0262,0.04538,0.0393,0.0262,0.02269,0.0393,0.0262,-0.02269,0,-0.0262,-0.04538,-0.0393,-0.0262,-0.02269,-0.0393,-0.0262,0.02269,0,-0.0262,0.04538,0.0393,-0.0262,0.02269,0.0393,-0.0262,-0.02269,0,-0.0524,0])}))}))})])}),

                                            new Transform({
                                              DEF : new SFString("Surfer_R_Toe01-ROOT"),
                                              translation : new SFVec3f([0.2213,-0.1486,0.02582]),
                                              scale : new SFVec3f([0.7877,1.009,2.394]),
                                              scaleOrientation : new SFRotation([0.477093,0.832788,-0.280796,0.5705]),
                                              children : new MFNode([
                                                new PositionInterpolator({
                                                  DEF : new SFString("SurferAv_R_Toe01-POS-INTERP"),
                                                  key : new MFFloat([0,0.1875,0.375]),
                                                  keyValue : new MFVec3f([0.2213,-0.1486,0.02582,0.2217,-0.16,-0.04911,0.2207,-0.1297,0.1507])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      DEF : new SFString("Surfer_R_Toe01-FACES"),
                                                      creaseAngle : new SFFloat(3),
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          DEF : new SFString("Surfer_R_Toe01-COORD"),
                                                          point : new MFVec3f([0,0.0724,0,0,0.0362,-0.0627,-0.0543,0.0362,-0.03135,-0.0543,0.0362,0.03135,0,0.0362,0.0627,0.0543,0.0362,0.03135,0.0543,0.0362,-0.03135,0,-0.0362,-0.0627,-0.0543,-0.0362,-0.03135,-0.0543,-0.0362,0.03135,0,-0.0362,0.0627,0.0543,-0.0362,0.03135,0.0543,-0.0362,-0.03135,0,-0.0724,0])}))}))})])})])})])})])}),

                                new Transform({
                                  DEF : new SFString("Surfer_Leg_L-ROOT"),
                                  translation : new SFVec3f([1.032,-0.004764,-1.719]),
                                  rotation : new SFRotation([0.0175088,-0.0391158,0.999081,3.1757]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SurferAv_Leg_L-POS-INTERP"),
                                      key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                      keyValue : new MFVec3f([1.032,0.0148,-1.708,1.032,-0.08853,-1.708,1.056,-0.5187,-1.727,1.15,-2.219,-1.381,1.026,-0.6396,0.09846])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("SurferAv_Leg_L-ROT-INTERP"),
                                      key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                      keyValue : new MFRotation([0.001255,0,0.999999,3.116,0.000456082,-0.198692,0.980062,3.022,0.04641,-0.2029,0.978099,2.956,0.145703,0.332107,0.93192,3.061,-0.0862392,-0.720193,-0.688393,3.155])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("Surfer_Leg_L-FACES"),
                                          creaseAngle : new SFFloat(3),
                                          coordIndex : new MFInt32([0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,1,8,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,16,15,-1,7,8,16,-1,8,9,16,-1,8,1,9,-1,17,9,10,-1,17,10,11,-1,17,11,12,-1,17,12,13,-1,17,13,14,-1,17,14,15,-1,17,15,16,-1,17,16,9,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("Surfer_Leg_L-COORD"),
                                              point : new MFVec3f([0,0,0,0.1413,0,0,0.0999,0,0.0999,0,0,0.1413,-0.0999,0,0.0999,-0.1413,0,0,-0.0999,0,-0.0999,0,0,-0.1413,0.0999,0,-0.0999,0.1413,-1.496,0,0.0999,-1.496,0.0999,0,-1.496,0.1413,-0.0999,-1.496,0.0999,-0.1413,-1.496,0,-0.0999,-1.496,-0.0999,0,-1.496,-0.1413,0.0999,-1.496,-0.0999,0,-1.496,0])}))}))}),

                                    new Transform({
                                      DEF : new SFString("Surfer_Calf_L-ROOT"),
                                      translation : new SFVec3f([-0.03083,-0.4032,0.05773]),
                                      rotation : new SFRotation([-1,0,0,0.0872687]),
                                      scale : new SFVec3f([1,1.958,0.8]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("Surfer_Calf_L-FACES"),
                                              creaseAngle : new SFFloat(3),
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("Surfer_Calf_L-COORD"),
                                                  point : new MFVec3f([0,0.278,0,0,0.1966,-0.1966,-0.139,0.1966,-0.139,-0.1966,0.1966,0,-0.139,0.1966,0.139,0,0.1966,0.1966,0.139,0.1966,0.139,0.1966,0.1966,0,0.139,0.1966,-0.139,0,0,-0.278,-0.1966,0,-0.1966,-0.278,0,0,-0.1966,0,0.1966,0,0,0.278,0.1966,0,0.1966,0.278,0,0,0.1966,0,-0.1966,0,-0.1966,-0.1966,-0.139,-0.1966,-0.139,-0.1966,-0.1966,0,-0.139,-0.1966,0.139,0,-0.1966,0.1966,0.139,-0.1966,0.139,0.1966,-0.1966,0,0.139,-0.1966,-0.139,0,-0.278,0])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("Surfer_Heel_L-ROOT"),
                                      translation : new SFVec3f([0.001562,-1.517,-0.02254]),
                                      rotation : new SFRotation([-0.650792,-0.524689,0.54879,4.06427]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("Surfer_Heel_L-FACES"),
                                              creaseAngle : new SFFloat(3),
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("Surfer_Heel_L-COORD"),
                                                  point : new MFVec3f([0,0.1824,0,0,0.0912,-0.158,-0.1368,0.0912,-0.07898,-0.1368,0.0912,0.07898,0,0.0912,0.158,0.1368,0.0912,0.07898,0.1368,0.0912,-0.07898,0,-0.0912,-0.158,-0.1368,-0.0912,-0.07898,-0.1368,-0.0912,0.07898,0,-0.0912,0.158,0.1368,-0.0912,0.07898,0.1368,-0.0912,-0.07898,0,-0.1824,0])}))}))}),

                                        new Transform({
                                          DEF : new SFString("Surfer_Foot_L-ROOT"),
                                          translation : new SFVec3f([0.2704,0,-0.02074]),
                                          rotation : new SFRotation([-1,0,0,0.3491]),
                                          scale : new SFVec3f([2.05,1,0.4436]),
                                          children : new MFNode([
                                            new PositionInterpolator({
                                              DEF : new SFString("SurferAv_Foot_L-POS-INTERP"),
                                              key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                              keyValue : new MFVec3f([0.2704,0,-0.02074,0.2453,0.02323,0.09197,0.1736,0.06152,0.2113,0.04483,0.109,0.3067,-0.1263,0.1462,0.3438])}),

                                            new OrientationInterpolator({
                                              DEF : new SFString("SurferAv_Foot_L-ROT-INTERP"),
                                              key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                              keyValue : new MFRotation([-1,0,0,0.3491,-0.801627,-0.597821,0.00195907,0.4735,-0.557019,-0.830128,0.0248308,0.7583,-0.403795,-0.91329,0.0533994,1.13,-0.297683,-0.951147,0.0818755,1.539])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                      shininess : new SFFloat(0.25)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  DEF : new SFString("Surfer_Foot_L-FACES"),
                                                  creaseAngle : new SFFloat(3),
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      DEF : new SFString("Surfer_Foot_L-COORD"),
                                                      point : new MFVec3f([0,0.2224,0,0,0.1573,-0.1573,-0.1112,0.1573,-0.1112,-0.1573,0.1573,0,-0.1112,0.1573,0.1112,0,0.1573,0.1573,0.1112,0.1573,0.1112,0.1573,0.1573,0,0.1112,0.1573,-0.1112,0,0,-0.2224,-0.1573,0,-0.1573,-0.2224,0,0,-0.1573,0,0.1573,0,0,0.2224,0.1573,0,0.1573,0.2224,0,0,0.1573,0,-0.1573,0,-0.1573,-0.1573,-0.1112,-0.1573,-0.1112,-0.1573,-0.1573,0,-0.1112,-0.1573,0.1112,0,-0.1573,0.1573,0.1112,-0.1573,0.1112,0.1573,-0.1573,0,0.1112,-0.1573,-0.1112,0,-0.2224,0])}))}))}),

                                            new Transform({
                                              DEF : new SFString("Surfer_L_Toe01-ROOT"),
                                              translation : new SFVec3f([0.2209,0.1316,0.1773]),
                                              rotation : new SFRotation([0,1,0,0.521445]),
                                              scaleOrientation : new SFRotation([-0.522691,0.780787,0.342294,0.5581]),
                                              children : new MFNode([
                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      DEF : new SFString("Surfer_L_Toe01-FACES"),
                                                      creaseAngle : new SFFloat(3),
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          DEF : new SFString("Surfer_L_Toe01-COORD"),
                                                          point : new MFVec3f([0,0.0724,0,0,0.0362,-0.0627,-0.0543,0.0362,-0.03135,-0.0543,0.0362,0.03135,0,0.0362,0.0627,0.0543,0.0362,0.03135,0.0543,0.0362,-0.03135,0,-0.0362,-0.0627,-0.0543,-0.0362,-0.03135,-0.0543,-0.0362,0.03135,0,-0.0362,0.0627,0.0543,-0.0362,0.03135,0.0543,-0.0362,-0.03135,0,-0.0724,0])}))}))})])}),

                                            new Transform({
                                              DEF : new SFString("Surfer_L_Toe02-ROOT"),
                                              translation : new SFVec3f([0.2165,-0.01985,0.1629]),
                                              rotation : new SFRotation([0,-1,0,0.487246]),
                                              scaleOrientation : new SFRotation([-0.0953681,-0.782984,0.614688,0.4729]),
                                              children : new MFNode([
                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      DEF : new SFString("Surfer_L_Toe02-FACES"),
                                                      creaseAngle : new SFFloat(3),
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          DEF : new SFString("Surfer_L_Toe02-COORD"),
                                                          point : new MFVec3f([0,0.0624,0,0,0.0312,-0.05404,-0.0468,0.0312,-0.02702,-0.0468,0.0312,0.02702,0,0.0312,0.05404,0.0468,0.0312,0.02702,0.0468,0.0312,-0.02702,0,-0.0312,-0.05404,-0.0468,-0.0312,-0.02702,-0.0468,-0.0312,0.02702,0,-0.0312,0.05404,0.0468,-0.0312,0.02702,0.0468,-0.0312,-0.02702,0,-0.0624,0])}))}))})])}),

                                            new Transform({
                                              DEF : new SFString("Surfer_L_Toe03-ROOT"),
                                              translation : new SFVec3f([0.1743,-0.1208,0.1519]),
                                              rotation : new SFRotation([0,-1,0,1.21168]),
                                              scaleOrientation : new SFRotation([-0.0780288,-0.882186,0.464392,0.5791]),
                                              children : new MFNode([
                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      DEF : new SFString("Surfer_L_Toe03-FACES"),
                                                      creaseAngle : new SFFloat(3),
                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          DEF : new SFString("Surfer_L_Toe03-COORD"),
                                                          point : new MFVec3f([0,0.0524,0,0,0.0262,-0.04538,-0.0393,0.0262,-0.02269,-0.0393,0.0262,0.02269,0,0.0262,0.04538,0.0393,0.0262,0.02269,0.0393,0.0262,-0.02269,0,-0.0262,-0.04538,-0.0393,-0.0262,-0.02269,-0.0393,-0.0262,0.02269,0,-0.0262,0.04538,0.0393,-0.0262,0.02269,0.0393,-0.0262,-0.02269,0,-0.0524,0])}))}))})])})])})])})])})])})])})])})])})])}),

            new PositionInterpolator({
              DEF : new SFString("SurferFloat__Boolean-POS-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFVec3f([0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0])}),

            new TimeSensor({
              DEF : new SFString("TimeSensor_Surfer_Av01-TIMER")}),

            new TimeSensor({
              DEF : new SFString("TimeSensor_SurferFloat-TIMER"),
              cycleInterval : new SFTime(3.2),
              loop : new SFBool(true)}),

            new Script({
              DEF : new SFString("SurferCollide"),
              mustEvaluate : new SFBool(true),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("runAway"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("inputFraction"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("allSafe"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("beingEaten"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("scared"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("switcher"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startAnim"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("outputFraction"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("eatEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startAnimLoop"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("stopAnimLoop"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startFloating"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("stopFloating"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("playOops"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("avoidEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:
		, function beingEaten(input) {
			if (input == TRUE) {
				avoidEnabled = FALSE;
				eatEnabled = FALSE;
			}
		}	
		, function runAway(input, time){
			switcher = 1;
			scared = 1;
			eatEnabled = FALSE;
			startAnim = time;
			playOops = time;
			stopAnimLoop = time;
			//Browser.loadURL(new MFString('oops1.htm'), new MFString('target=helpertext'));
		}
	  , function allSafe(input, time) {
			scared = 0;
			stopFloating = time;
			startAnim = time;
		}
		, function inputFraction(input, time) {
			if (scared == 1) {
				outputFraction = input;
				if (input == 1.0) {
					startFloating = time;
				}
			} else {
				outputFraction = 1.0 - input;
				if (input == 1.0) {
					switcher = 0;
					eatEnabled = TRUE;
					startAnimLoop = time;
				}
			}
		})}),

            new TimeSensor({
              DEF : new SFString("TimeSensor_Surfer2-TIMER"),
              cycleInterval : new SFTime(6.4),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer2_L_Toe03-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer2_L_Toe02-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer2_L_Toe01-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer2_Heel_L-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([-0.57735,-0.57735,0.57735,4.189,0.582283,0.597983,-0.550784,2.034,0.58791,0.621811,-0.517409,1.978,0.590506,0.639406,-0.492405,1.915,0.587206,0.642207,-0.492705,1.835,0.560618,0.590119,-0.580919,1.687,0.511601,0.498401,-0.699901,1.554,0.497316,0.473715,-0.726823,1.526,0.502616,0.482816,-0.717123,1.537,0.518613,0.510313,-0.686018,1.573,0.538528,0.545928,-0.641833,1.627,0.561276,0.609974,-0.559376,1.712,0.5838,0.6697,-0.459,1.847,0.622537,0.651739,-0.433226,2.021,-0.677261,-0.52567,0.51477,4.052,-0.67519,-0.521493,0.521693,4.046,-0.672327,-0.51902,0.527821,4.043,-0.668882,-0.517986,0.533186,4.043,-0.664822,-0.518217,0.538018,4.045,-0.660277,-0.519582,0.542281,4.05,-0.655201,-0.522001,0.546101,4.057,-0.649736,-0.525329,0.54943,4.066,-0.643894,-0.529395,0.552395,4.076,-0.637715,-0.534012,0.555113,4.087,-0.631307,-0.539006,0.557606,4.099,-0.624605,-0.544404,0.559904,4.111,-0.617696,-0.549897,0.562197,4.124,-0.610806,-0.555405,0.564306,4.137,-0.603802,-0.560702,0.566602,4.149,-0.596914,-0.565713,0.568913,4.161,-0.590112,-0.570312,0.571412,4.171,-0.5836,-0.5742,0.5742,4.181,-0.57735,-0.57735,0.57735,4.189])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer2_Leg_L-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([0,0,1,3.142,0.000821696,-0.00309498,0.999995,3.192,0.00332404,-0.0127602,0.999913,3.351,0.00700607,-0.0270303,0.99961,3.582,0.0107701,-0.0407205,0.999112,3.784,0.0132596,-0.0434686,0.998967,3.791,0.0155599,-0.0526197,0.998493,3.718,0.0165896,-0.0645684,0.997775,3.702,0.0102599,-0.0574796,0.998294,3.782,0.00440881,-0.0475979,0.998857,3.839,0.00522582,-0.0451585,0.998966,3.767,0.00814869,-0.0448183,0.998962,3.653,0.0101904,-0.0448718,0.998941,3.577,0.00985537,-0.0450317,0.998937,3.593,0.0086892,-0.045581,0.998923,3.647,0.00849517,-0.0456709,0.99892,3.656,0.0101904,-0.0448718,0.998941,3.577,0.0121606,-0.0442321,0.998947,3.49,0.0142906,-0.0437019,0.998942,3.397,0.0161808,-0.0429021,0.998948,3.307,0.0174198,-0.0414495,0.998989,3.229,0.01753,-0.0385601,0.999103,3.163,0.0167693,-0.0347285,0.999256,3.112,0.0158196,-0.0315393,0.999377,3.086,0.0150105,-0.0302309,0.99943,3.102,0.0140195,-0.0295689,0.999464,3.142,0.0125805,-0.0274812,0.999543,3.169,0.01006,-0.02224,0.999702,3.171,0.00726731,-0.0161507,0.999843,3.165,0.00434319,-0.00963743,0.999944,3.155,0.00190098,-0.00419096,0.999989,3.147,0.0004681,-0.001025,0.999999,3.143,0,0,1,3.142])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer2_R_Toe03-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]),
              keyValue : new MFRotation([0,0,1,0,-0.0562295,0.986392,-0.154499,0.187401,-0.0728275,0.977066,-0.200093,0.3857,-0.0560588,0.98648,-0.153997,0.5628,0,1,0,0.6981,0.142793,0.85996,0.489978,0.8999,0.285794,0.549088,0.785382,1.171,0.561875,0.160693,0.811464,0.9919,0.691169,-0.66357,0.286287,1.33,0.189701,0.640102,0.744502,1.29,0.230101,0.603802,0.763202,1.279,0.724797,-0.302099,0.619197,1.053,0.726196,-0.533997,0.432998,1.025,0.713763,-0.595869,0.368081,0.8367,0.711498,-0.604299,0.358599,0.564,0.72098,-0.564084,0.402489,0.265,0,0,1,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer2_R_Toe02-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]),
              keyValue : new MFRotation([0,0,1,0,-0.0464815,0.993932,-0.0996932,0.2327,-0.0605004,0.989706,-0.129701,0.4765,-0.0462991,0.99398,-0.099298,0.6987,0,1,0,0.8727,0.131006,0.930039,0.343314,1.037,0.295794,0.714185,0.634386,1.157,0.643701,0.29,0.708201,0.8382,0.747609,-0.587507,0.309704,0.9851,0.192391,0.786564,0.586773,1.337,0.252005,0.746916,0.615313,1.268,0.800285,-0.190096,0.568689,0.8336,0.774871,-0.508881,0.374986,0.8172,0.746207,-0.590906,0.306603,0.6754,0.741562,-0.601569,0.296985,0.4561,0.762483,-0.548488,0.343192,0.212401,0,0,1,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer2_R_Toe01-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5]),
              keyValue : new MFRotation([0,0,1,0,0.0180505,0.999829,0.00400112,0.3708,0.0225907,0.999732,0.00500716,0.7852,0.0176406,0.999837,0.00391014,1.112,0,1,0,1.222,-0.130404,0.990629,-0.0406012,0.6596,-0.543577,-0.830665,-0.120495,0.3144,-0.164797,-0.985885,0.0295396,1.106,-0.319013,-0.947339,-0.0279112,0.5513,-0.128699,0.981993,-0.138299,0.9589,-0.177695,0.971771,-0.155195,0.7804,-0.534196,-0.837295,-0.116499,0.3328,-0.297808,-0.954426,-0.0195305,0.5258,-0.255103,-0.96691,-0.00284103,0.4767,-0.249893,-0.968273,-0.000794078,0.3257,-0.276816,-0.960856,-0.0113107,0.143199,0,0,1,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer2_Heel_R-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([-0.57735,-0.57735,0.57735,4.189,0.52398,0.558479,-0.643076,2.023,0.516485,0.582783,-0.627382,2.077,-0.516498,-0.612397,0.598498,4.132,-0.503005,-0.623807,0.598206,4.114,0.432401,0.573002,-0.696202,2.004,0.363802,0.511903,-0.778205,1.869,0.467284,0.59648,-0.652578,2.074,-0.554128,-0.660433,0.506725,3.946,-0.504221,-0.624626,0.596325,4.111,0.43959,0.576487,-0.688784,2.016,0.360095,0.514993,-0.77789,1.878,0.335011,0.487116,-0.806527,1.826,0.43501,0.545712,-0.716216,1.93,-0.558075,-0.611073,0.561375,4.143,-0.609804,-0.623004,0.489903,4.043,0.577384,0.577284,-0.577384,2.094,0.563695,0.563095,-0.604295,2.054,0.549596,0.549596,-0.629196,2.018,0.54071,0.54071,-0.644412,1.997,0.550128,0.554928,-0.624031,2.019,0.564424,0.573925,-0.593326,2.058,0.57735,0.57735,-0.57735,2.094,-0.597196,-0.526397,0.605196,4.137,-0.59339,-0.489992,0.638589,4.138,0.527405,0.555905,-0.642506,1.995,0.426798,0.649096,-0.629696,1.817,0.387612,0.660321,-0.643221,1.749,0.478007,0.520108,-0.707811,1.871,0.518783,0.495484,-0.696677,1.946,0.542926,0.516925,-0.661831,1.996,0.561276,0.550076,-0.618373,2.042,0.578483,0.576783,-0.576783,2.093])}),

            new OrientationInterpolator({
              DEF : new SFString("Surfer2_Leg_R-ROT-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFRotation([0,0,1,2.967,-0.00809825,-0.0259208,0.999631,2.901,-0.0343386,-0.111596,0.99316,2.688,-0.07042,-0.2289,0.9709,2.416,-0.100705,-0.319416,0.942248,2.23,-0.105306,-0.300816,0.94785,2.293,-0.0995772,-0.260693,0.960273,2.389,-0.101795,-0.307286,0.946157,2.199,-0.00988315,-0.368906,0.929414,2.206,-0.000357718,-0.347318,0.937747,2.266,-0.0196202,-0.327604,0.944611,2.335,-0.0215906,-0.269608,0.962728,2.439,-0.0169906,-0.198606,0.979932,2.559,-0.0106197,-0.125997,0.991974,2.685,-0.00438084,-0.0587478,0.998263,2.808,-0.000939975,-0.00724781,0.999973,2.916,0,0,1,2.967,0.0158996,0.000673982,0.999873,2.976,0.03461,-0.001994,0.999399,2.971,0.0436218,-0.00381516,0.999041,2.967,0.00681684,-0.000594886,0.999977,2.967,0.0191603,-0.00167503,0.999815,2.967,0.0436218,-0.00381516,0.999041,2.967,-0.0277603,0.00253303,0.999611,2.962,-0.087147,0.00762574,0.996166,2.968,-0.0517575,0.00374382,0.998653,3.004,0.0135001,-0.00287401,0.999905,3.045,0.0495177,-0.00611372,0.998755,3.048,0.0493285,-0.00495285,0.99877,2.99,0.0387118,-0.00303014,0.999246,2.941,0.0234605,-0.00165704,0.999723,2.942,0.00599589,-0.000444992,0.999982,2.962,0,0,1,2.967])}),

            new PositionInterpolator({
              DEF : new SFString("Surfer2_Leg_R-POS-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688]),
              keyValue : new MFVec3f([-1.012,-0.06006,-1.719,-1.039,-0.05002,-1.719,-1.1,-0.02683,-1.719,-1.169,-0.0008667,-1.719,-1.218,0.01748,-1.719,-1.24,0.0259,-1.719,-1.25,0.02954,-1.719,-1.249,0.02921,-1.719,-1.24,0.0257,-1.719,-1.224,0.01982,-1.719,-1.199,0.01044,-1.719,-1.155,-0.006231,-1.719,-1.102,-0.02614,-1.719,-1.053,-0.04468,-1.719,-1.019,-0.05726,-1.719,-1.012,-0.06006,-1.719])}),

            new PositionInterpolator({
              DEF : new SFString("Surfer2__Boolean-POS-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFVec3f([0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0])}),

            new Switch({
              DEF : new SFString("Surfer2"),
              whichChoice : new SFInt32(0),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Surfer2CollisionMover"),
                      translation : new SFVec3f([-30.65,0,-483.6]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Surfer2CollisionSpinner"),
                          rotation : new SFRotation([1,0,0,0.0134964]),
                          children : new MFNode([
                            new ProximitySensor({
                              DEF : new SFString("EatSurfer2"),
                              size : new SFVec3f([4,4,4]),
                              center : new SFVec3f([0,0,4])})])})])}),

                    new Transform({
                      DEF : new SFString("Inline_Surfer02-ROOT"),
                      translation : new SFVec3f([-30.65,0,-483.6]),
                      rotation : new SFRotation([0,-1,0,0.6981]),
                      children : new MFNode([
                        new ProximitySensor({
                          DEF : new SFString("ScareSurfer2"),
                          size : new SFVec3f([23,5,23]),
                          center : new SFVec3f([0,0,-6])}),

                        new VisibilitySensor({
                          DEF : new SFString("surfer2Visible"),
                          size : new SFVec3f([1,1,1])}),

                        new Transform({
                          DEF : new SFString("Surfer2__Boolean-ROOT"),
                          translation : new SFVec3f([0,0.221774,0]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0,0,0]),
                                      emissiveColor : new SFColor([0.007843,0.3922,0.6157]),
                                      shininess : new SFFloat(0)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Surfer__Boolean-FACES")}))}),

                            new Transform({
                              DEF : new SFString("Surfer2_Board-ROOT"),
                              translation : new SFVec3f([-0.0417,-0.0001604,0.9788]),
                              rotation : new SFRotation([0,0,1,3.142]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Surfer2Av_Board-POS-INTERP"),
                                  key : new MFFloat([0,0.1875,0.375,0.5625,0.75,0.9375,1]),
                                  keyValue : new MFVec3f([-0.0417,-0.0001604,0.9788,-0.0417,0.07741,0.9807,-0.0417,-0.02425,0.9775,-0.0417,-0.2906,0.9381,-0.0417,0.07953,0.9807,-0.0417,-0.06991,0.974,-0.0417,-0.0001608,0.9788])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("Surfer2Av_Board-ROT-INTERP"),
                                  key : new MFFloat([0,0.1875,0.375,0.5625,0.75,0.9375,1]),
                                  keyValue : new MFRotation([0,0,1,3.142,0,0.0242102,0.999707,3.142,0,-0.00752679,0.999972,3.142,0,-0.0915005,0.995805,3.142,0,0.0248698,0.999691,3.142,0,-0.0218092,0.999762,3.142,0,0,1,3.142])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0.9882,0]),
                                          shininess : new SFFloat(0.25)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      USE : new SFString("Surfer_Board-FACES")}))}),

                                new Transform({
                                  DEF : new SFString("Surfer2_Leg_R-ROOT"),
                                  translation : new SFVec3f([-1.012,-0.06006,-1.719]),
                                  rotation : new SFRotation([0.0167852,-0.00146719,0.999858,2.967]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("Surfer2Av_Leg_R-POS-INTERP"),
                                      key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                      keyValue : new MFVec3f([-1.015,-0.03887,-1.643,-1.015,-0.183,-1.643,-1.131,-0.6489,-1.327,-1.119,-1.619,-0.7108,-1.038,-0.64,-0.1306])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("Surfer2Av_Leg_R-ROT-INTERP"),
                                      key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                      keyValue : new MFRotation([-0.0126894,0.0231689,0.999651,2.981,0.00260013,-0.282214,0.959348,2.971,-0.122899,0.00777991,0.992389,3.061,-0.230396,0.368594,0.900586,3.257,0.137796,-0.71608,-0.684281,3.233])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          USE : new SFString("Surfer_Leg_R-FACES")}))}),

                                    new Transform({
                                      DEF : new SFString("Surfer2_Calf_R-ROOT"),
                                      translation : new SFVec3f([0.02795,-0.3406,0.07907]),
                                      rotation : new SFRotation([-1,0,0,0.0872687]),
                                      scale : new SFVec3f([1,1.958,0.8]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              USE : new SFString("Surfer_Calf_R-FACES")}))})])}),

                                    new Transform({
                                      DEF : new SFString("Surfer2_Heel_R-ROOT"),
                                      translation : new SFVec3f([0.00156,-1.517,-0.02254]),
                                      rotation : new SFRotation([0.561764,0.570371,-0.599248,2.05039]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              USE : new SFString("Surfer_Heel_R-FACES")}))}),

                                        new Transform({
                                          DEF : new SFString("Surfer2_Foot_R-ROOT"),
                                          translation : new SFVec3f([0.2704,0,-0.02074]),
                                          rotation : new SFRotation([1,0,0,0.2618]),
                                          scale : new SFVec3f([2.05,1,0.4436]),
                                          children : new MFNode([
                                            new PositionInterpolator({
                                              DEF : new SFString("Surfer2Av_Foot_R-POS-INTERP"),
                                              key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                              keyValue : new MFVec3f([0.2884,0.08679,0.0007157,0.2509,0.1126,0.1181,0.1482,0.1242,0.2566,0.0839,0.1066,0.3088,0.06327,0.0714,0.3248])}),

                                            new OrientationInterpolator({
                                              DEF : new SFString("Surfer2Av_Foot_R-ROT-INTERP"),
                                              key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                              keyValue : new MFRotation([-0.967379,-0.253195,0.00832282,0.3729,-0.70973,-0.704429,0.00795233,0.5513,-0.46399,-0.88358,-0.0632386,0.8957,-0.346388,-0.931667,-0.109596,1.043,-0.250092,-0.955768,-0.154795,1.064])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                      shininess : new SFFloat(0.25)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  USE : new SFString("Surfer_Foot_R-FACES")}))}),

                                            new Transform({
                                              DEF : new SFString("Surfer2_R_Toe02-ROOT"),
                                              translation : new SFVec3f([0.2303,0.006877,-0.04773]),
                                              scaleOrientation : new SFRotation([-0.0943647,0.793154,-0.601665,0.3048]),
                                              children : new MFNode([
                                                new PositionInterpolator({
                                                  DEF : new SFString("Surfer2Av_R_Toe02-POS-INTERP"),
                                                  key : new MFFloat([0,0.1875,0.375]),
                                                  keyValue : new MFVec3f([0.2303,0.006877,-0.04773,0.2298,0.006892,-0.1269,0.2311,0.006852,0.08421])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      USE : new SFString("Surfer_R_Toe02-FACES")}))})])}),

                                            new Transform({
                                              DEF : new SFString("Surfer2_R_Toe03-ROOT"),
                                              translation : new SFVec3f([0.1815,0.1298,-0.01264]),
                                              scale : new SFVec3f([0.6226,1.016,2.312]),
                                              scaleOrientation : new SFRotation([-0.225302,0.706107,-0.671306,0.4788]),
                                              children : new MFNode([
                                                new PositionInterpolator({
                                                  DEF : new SFString("Surfer2Av_R_Toe03-POS-INTERP"),
                                                  key : new MFFloat([0,0.1875,0.375]),
                                                  keyValue : new MFVec3f([0.1815,0.1298,-0.01264,0.1818,0.1315,-0.09173,0.1811,0.1269,0.1192])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      USE : new SFString("Surfer_R_Toe03-FACES")}))})])}),

                                            new Transform({
                                              DEF : new SFString("Surfer2_R_Toe01-ROOT"),
                                              translation : new SFVec3f([0.2213,-0.1486,0.02582]),
                                              scale : new SFVec3f([0.7877,1.009,2.394]),
                                              scaleOrientation : new SFRotation([0.477093,0.832788,-0.280796,0.5705]),
                                              children : new MFNode([
                                                new PositionInterpolator({
                                                  DEF : new SFString("Surfer2Av_R_Toe01-POS-INTERP"),
                                                  key : new MFFloat([0,0.1875,0.375]),
                                                  keyValue : new MFVec3f([0.2213,-0.1486,0.02582,0.2217,-0.16,-0.04911,0.2207,-0.1297,0.1507])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      USE : new SFString("Surfer_R_Toe01-FACES")}))})])})])})])})])}),

                                new Transform({
                                  DEF : new SFString("Surfer2_Leg_L-ROOT"),
                                  translation : new SFVec3f([1.032,-0.004764,-1.719]),
                                  rotation : new SFRotation([0.0175088,-0.0391158,0.999081,3.1757]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("Surfer2Av_Leg_L-POS-INTERP"),
                                      key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                      keyValue : new MFVec3f([1.032,0.0148,-1.708,1.032,-0.08853,-1.708,1.056,-0.5187,-1.727,1.15,-2.219,-1.381,1.026,-0.6396,0.09846])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("Surfer2Av_Leg_L-ROT-INTERP"),
                                      key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                      keyValue : new MFRotation([0.001255,0,0.999999,3.116,0.000456082,-0.198692,0.980062,3.022,0.04641,-0.2029,0.978099,2.956,0.145703,0.332107,0.93192,3.061,-0.0862391,-0.720193,-0.688393,3.155])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          USE : new SFString("Surfer_Leg_L-FACES")}))}),

                                    new Transform({
                                      DEF : new SFString("Surfer2_Calf_L-ROOT"),
                                      translation : new SFVec3f([-0.03083,-0.4032,0.05773]),
                                      rotation : new SFRotation([-1,0,0,0.0872687]),
                                      scale : new SFVec3f([1,1.958,0.8]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              USE : new SFString("Surfer_Calf_L-FACES")}))})])}),

                                    new Transform({
                                      DEF : new SFString("Surfer2_Heel_L-ROOT"),
                                      translation : new SFVec3f([0.001562,-1.517,-0.02254]),
                                      rotation : new SFRotation([-0.650792,-0.524689,0.54879,4.06427]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              USE : new SFString("Surfer_Heel_L-FACES")}))}),

                                        new Transform({
                                          DEF : new SFString("Surfer2_Foot_L-ROOT"),
                                          translation : new SFVec3f([0.2704,0,-0.02074]),
                                          rotation : new SFRotation([-1,0,0,0.3491]),
                                          scale : new SFVec3f([2.05,1,0.4436]),
                                          children : new MFNode([
                                            new PositionInterpolator({
                                              DEF : new SFString("Surfer2Av_Foot_L-POS-INTERP"),
                                              key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                              keyValue : new MFVec3f([0.2704,0,-0.02074,0.2453,0.02323,0.09197,0.1736,0.06152,0.2113,0.04483,0.109,0.3067,-0.1263,0.1462,0.3438])}),

                                            new OrientationInterpolator({
                                              DEF : new SFString("Surfer2Av_Foot_L-ROT-INTERP"),
                                              key : new MFFloat([0,0.1875,0.375,0.5625,0.75]),
                                              keyValue : new MFRotation([-1,0,0,0.3491,-0.801627,-0.597821,0.00195907,0.4735,-0.557019,-0.830128,0.0248308,0.7583,-0.403795,-0.91329,0.0533994,1.13,-0.297683,-0.951147,0.0818755,1.539])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                      shininess : new SFFloat(0.25)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  USE : new SFString("Surfer_Foot_L-FACES")}))}),

                                            new Transform({
                                              DEF : new SFString("Surfer2_L_Toe01-ROOT"),
                                              translation : new SFVec3f([0.2209,0.1316,0.1773]),
                                              rotation : new SFRotation([0,1,0,0.521445]),
                                              scaleOrientation : new SFRotation([-0.522691,0.780787,0.342294,0.5581]),
                                              children : new MFNode([
                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      USE : new SFString("Surfer_L_Toe01-FACES")}))})])}),

                                            new Transform({
                                              DEF : new SFString("Surfer2_L_Toe02-ROOT"),
                                              translation : new SFVec3f([0.2165,-0.01985,0.1629]),
                                              rotation : new SFRotation([0,-1,0,0.487246]),
                                              scaleOrientation : new SFRotation([-0.0953681,-0.782984,0.614688,0.4729]),
                                              children : new MFNode([
                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      USE : new SFString("Surfer_L_Toe02-FACES")}))})])}),

                                            new Transform({
                                              DEF : new SFString("Surfer2_L_Toe03-ROOT"),
                                              translation : new SFVec3f([0.1743,-0.1208,0.1519]),
                                              rotation : new SFRotation([0,-1,0,1.21168]),
                                              scaleOrientation : new SFRotation([-0.0780288,-0.882186,0.464392,0.5791]),
                                              children : new MFNode([
                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0.702,0.6,0.3843]),
                                                          shininess : new SFFloat(0.25)}))})),
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      USE : new SFString("Surfer_L_Toe03-FACES")}))})])})])})])})])})])})])})])})])})])}),

            new Script({
              DEF : new SFString("Surfer2Collide"),
              mustEvaluate : new SFBool(true),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("runAway"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("inputFraction"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("allSafe"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("beingEaten"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("scared"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("switcher"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startAnim"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("outputFraction"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("eatEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startAnimLoop"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("stopAnimLoop"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startFloating"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("stopFloating"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("playOops"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("avoidEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:
		, function beingEaten(input) {
			if (input == TRUE) {
				avoidEnabled = FALSE;
				eatEnabled = FALSE;
			}
		}	
		, function runAway(input, time){
			switcher = 1;
			scared = 1;
			eatEnabled = FALSE;
			startAnim = time;
			playOops = time;
			stopAnimLoop = time;
			//Browser.loadURL(new MFString('oops1.htm'), new MFString('target=helpertext'));
		}
	  , function allSafe(input, time) {
			scared = 0;
			stopFloating = time;
			startAnim = time;
		}
		, function inputFraction(input, time) {
			if (scared == 1) {
				outputFraction = input;
				if (input == 1.0) {
					startFloating = time;
				}
			} else {
				outputFraction = 1.0 - input;
				if (input == 1.0) {
					switcher = 0;
					eatEnabled = TRUE;
					startAnimLoop = time;
				}
			}
		})}),

            new PositionInterpolator({
              DEF : new SFString("Surfer2Float__Boolean-POS-INTERP"),
              key : new MFFloat([0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1]),
              keyValue : new MFVec3f([0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0])}),

            new TimeSensor({
              DEF : new SFString("TimeSensor_Surfer2_Av01-TIMER")}),

            new TimeSensor({
              DEF : new SFString("TimeSensor_Surfer2Float-TIMER"),
              cycleInterval : new SFTime(3.2),
              loop : new SFBool(true)}),

            new TimeSensor({
              DEF : new SFString("TimeSensor_Innertube-TIMER"),
              cycleInterval : new SFTime(3),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new TimeSensor({
              DEF : new SFString("TimeSensor_InnertubeFast-TIMER"),
              enabled : new SFBool(false),
              loop : new SFBool(true)}),

            new Switch({
              DEF : new SFString("Tuber"),
              whichChoice : new SFInt32(0),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("TuberCollisionMover"),
                      translation : new SFVec3f([-100.8,0,-451.9]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("TuberCollisionSpinner"),
                          rotation : new SFRotation([1,0,0,0.0134964]),
                          children : new MFNode([
                            new ProximitySensor({
                              DEF : new SFString("EatTuber"),
                              size : new SFVec3f([6,6,4]),
                              center : new SFVec3f([0,0,4])})])})])}),

                    new Transform({
                      DEF : new SFString("Inline_Tube01-ROOT"),
                      translation : new SFVec3f([-100.8,0,-451.9]),
                      rotation : new SFRotation([0,-1,0,3.944]),
                      children : new MFNode([
                        new ProximitySensor({
                          DEF : new SFString("ScareTuber"),
                          size : new SFVec3f([15,5,17])}),

                        new VisibilitySensor({
                          DEF : new SFString("tuberVisible"),
                          size : new SFVec3f([1,1,1])}),

                        new Transform({
                          DEF : new SFString("Innertube_boolean-ROOT"),
                          translation : new SFVec3f([-0.05191,0,-0.05077]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0,0,0]),
                                      emissiveColor : new SFColor([0.007843,0.3922,0.6157]),
                                      shininess : new SFFloat(0)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("Innertube_boolean-FACES"),
                                  colorIndex : new MFInt32([0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1]),
                                  coordIndex : new MFInt32([0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1]),
                                  color : new SFNode(
                                    new Color({
                                      color : new MFColor([0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      DEF : new SFString("Innertube_boolean-COORD"),
                                      point : new MFVec3f([-2.523,0,2.66,2.605,0,2.66,-2.523,0,-5.753,2.605,0,-5.753,-2.523,1.182,2.66,2.605,1.182,2.66,-2.523,1.182,-5.753,2.605,1.182,-5.753])}))}))}),

                            new Transform({
                              DEF : new SFString("Innertube-ROOT"),
                              translation : new SFVec3f([0.05259,-0.002682,0.04626]),
                              rotation : new SFRotation([-0.0180521,0.999674,0.0180521,1.57099]),
                              scaleOrientation : new SFRotation([0.834748,-0.4924,-0.24645,0.00573601]),
                              children : new MFNode([
                                new OrientationInterpolator({
                                  DEF : new SFString("Innertube-ROT-INTERP"),
                                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                  keyValue : new MFRotation([-0.00217899,0.999995,0.00217899,1.571,-0.01416,0.999799,0.01416,1.571,-0.021251,0.999548,0.021251,1.571,-0.0153195,0.999765,0.0153195,1.571,-0.00403993,0.999984,0.00403993,1.571,0.00724634,0.999947,-0.00724634,1.571,0.0164405,0.99973,-0.0164405,1.571,0.0214309,0.999541,-0.0214309,1.571,0.0196902,0.999612,-0.0196902,1.571,0.0104999,0.99989,-0.0104999,1.571,-0.00217899,0.999995,0.00217899,1.571])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                          shininess : new SFFloat(0.25)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("Innertube-FACES"),
                                      creaseAngle : new SFFloat(3),
                                      colorIndex : new MFInt32([0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1]),
                                      coordIndex : new MFInt32([0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1]),
                                      color : new SFNode(
                                        new Color({
                                          color : new MFColor([0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("Innertube-COORD"),
                                          point : new MFVec3f([0,0,-2.37,0,0.4114,-2.237,0,0.4114,-1.104,0,0,-0.9704,0,-0.4114,-1.104,0,-0.6657,-1.454,0,-0.6657,-1.887,0,-0.4114,-2.237,1.676,0,-1.676,1.582,0.4114,-1.582,0.7807,0.4114,-0.7807,0.6862,0,-0.6862,0.7807,-0.4114,-0.7807,1.028,-0.6657,-1.028,1.334,-0.6657,-1.334,1.582,-0.4114,-1.582,2.37,0,0,2.237,0.4114,0,1.104,0.4114,0,0.9704,0,0,1.104,-0.4114,0,1.454,-0.6657,0,1.887,-0.6657,0,2.237,-0.4114,0,1.676,0,1.676,1.582,0.4114,1.582,0.7807,0.4114,0.7807,0.6862,0,0.6862,0.7807,-0.4114,0.7807,1.028,-0.6657,1.028,1.334,-0.6657,1.334,1.582,-0.4114,1.582,0,0,2.37,0,0.4114,2.237,0,0.4114,1.104,0,0,0.9704,0,-0.4114,1.104,0,-0.6657,1.454,0,-0.6657,1.887,0,-0.4114,2.237,-1.676,0,1.676,-1.582,0.4114,1.582,-0.7807,0.4114,0.7807,-0.6862,0,0.6862,-0.7807,-0.4114,0.7807,-1.028,-0.6657,1.028,-1.334,-0.6657,1.334,-1.582,-0.4114,1.582,-2.37,0,0,-2.237,0.4114,0,-1.104,0.4114,0,-0.9704,0,0,-1.104,-0.4114,0,-1.454,-0.6657,0,-1.887,-0.6657,0,-2.237,-0.4114,0,-1.676,0,-1.676,-1.582,0.4114,-1.582,-0.7807,0.4114,-0.7807,-0.6862,0,-0.6862,-0.7807,-0.4114,-0.7807,-1.028,-0.6657,-1.028,-1.334,-0.6657,-1.334,-1.582,-0.4114,-1.582])}))}))}),

                                new Transform({
                                  DEF : new SFString("Innertube_L_leg-ROOT"),
                                  translation : new SFVec3f([3.1493,-0.334482,-0.816699]),
                                  rotation : new SFRotation([-0.00159022,-0.0416662,0.99913,0.596085]),
                                  scaleOrientation : new SFRotation([0,-0.0296788,-0.99956,0.0631516]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("Innertube_L_leg-POS-INTERP"),
                                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                      keyValue : new MFVec3f([2.832,-0.4993,-0.8342,2.897,-0.4733,-0.8304,3.104,-0.3649,-0.8174,3.188,-0.3085,-0.8161,3.216,-0.2875,-0.8233,3.222,-0.2834,-0.8288,3.199,-0.3004,-0.8233,3.167,-0.3234,-0.8193,3.079,-0.3805,-0.8225,2.937,-0.4554,-0.8298,2.832,-0.4993,-0.8342])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("Innertube_L_leg-ROT-INTERP"),
                                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                      keyValue : new MFRotation([0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,0,0,1,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.9804,0.7686,0.7255]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("Innertube_L_leg-FACES"),
                                          creaseAngle : new SFFloat(3),
                                          colorIndex : new MFInt32([0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1]),
                                          coordIndex : new MFInt32([0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1]),
                                          color : new SFNode(
                                            new Color({
                                              color : new MFColor([0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("Innertube_L_leg-COORD"),
                                              point : new MFVec3f([0.2432,0,0,0.172,0,-0.172,0,0,-0.2432,-0.172,0,-0.172,-0.2432,0,0,-0.172,0,0.172,0,0,0.2432,0.172,0,0.172,0.2432,1.5,0,0.172,1.5,-0.172,0,1.5,-0.2432,-0.172,1.5,-0.172,-0.2432,1.5,0,-0.172,1.5,0.172,0,1.5,0.2432,0.172,1.5,0.172])}))}))}),

                                    new Transform({
                                      DEF : new SFString("Innertube_L_flipper-ROOT"),
                                      translation : new SFVec3f([-0.304026,-0.965158,-0.0556783]),
                                      rotation : new SFRotation([-0.603271,-0.529571,-0.596338,2.01785]),
                                      scale : new SFVec3f([1,1.343,0.9976]),
                                      scaleOrientation : new SFRotation([-0.317708,0.946024,-0.0640316,0.2952]),
                                      children : new MFNode([
                                        new PositionInterpolator({
                                          DEF : new SFString("Innertube_L_flipper-POS-INTERP"),
                                          key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                          keyValue : new MFVec3f([-0.05453,-1.021,-0.05153,-0.2899,-0.9813,-0.05595,-0.46,-0.915,-0.05577,-0.1708,-1.008,-0.0556,0.4498,-0.9173,-0.02782,0.7328,-0.7119,0.0002907,0.6523,-0.7863,-0.009747,0.5533,-0.8589,-0.0198,0.3896,-0.9445,-0.03199,0.1714,-1.007,-0.04351,-0.05453,-1.021,-0.05153])}),

                                        new OrientationInterpolator({
                                          DEF : new SFString("Innertube_L_flipper-ROT-INTERP"),
                                          key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                          keyValue : new MFRotation([-0.549493,-0.637292,-0.540293,1.897,-0.599003,-0.538203,-0.592903,2.012,-0.629609,-0.461607,-0.624909,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378898,1.701,-0.255398,-0.938192,-0.233598,1.627,-0.302699,-0.910597,-0.281399,1.644,-0.352683,-0.874758,-0.332284,1.668,-0.420293,-0.813087,-0.402794,1.72,-0.491279,-0.728069,-0.47808,1.801,-0.549493,-0.637292,-0.540293,1.897])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.8941,0.8392,0.6])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("Innertube_L_flipper-FACES"),
                                              colorIndex : new MFInt32([8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1]),
                                              coordIndex : new MFInt32([8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1]),
                                              color : new SFNode(
                                                new Color({
                                                  color : new MFColor([0.6588,0.451,0,0.6588,0.451,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,0.6588,0.451,0,0.6588,0.451,0,0.6588,0.451,0])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("Innertube_L_flipper-COORD"),
                                                  point : new MFVec3f([-0.3059,0,1.228,0.3059,0,1.228,-0.7598,0.07611,-1.079,0.7598,0.07611,-1.079,-0.3059,0.1522,1.228,0.3059,0.1522,1.228,0,0.07611,-1.258,0,0.1522,1.374,0,0,1.374,0.3598,0.07611,-1.037,-0.4,0.07611,-1.037])}))}))}),

                                        new Transform({
                                          DEF : new SFString("Innertube_foot_L-ROOT"),
                                          translation : new SFVec3f([0.009344,0.2285,1.015]),
                                          rotation : new SFRotation([0.548102,0.543802,-0.635502,2.018]),
                                          scale : new SFVec3f([1.002,1,0.7445]),
                                          scaleOrientation : new SFRotation([-0.0369916,0.178508,-0.983243,0.2825]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([0.9804,0.7686,0.7255]),
                                                      shininess : new SFFloat(0.25)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  DEF : new SFString("Innertube_foot_L-FACES"),
                                                  creaseAngle : new SFFloat(3),
                                                  colorIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]),
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]),
                                                  color : new SFNode(
                                                    new Color({
                                                      color : new MFColor([0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      DEF : new SFString("Innertube_foot_L-COORD"),
                                                      point : new MFVec3f([0,0.2454,0,0.003793,0.1584,-0.1692,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,0.003793,-0.05973,-0.219,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0,-0.2395,0])}))}))})])})])})])}),

                                new Transform({
                                  DEF : new SFString("Innertube_R_leg-ROOT"),
                                  translation : new SFVec3f([3.11954,-0.354196,0.821474]),
                                  rotation : new SFRotation([0.000625451,-0.0344513,0.999406,0.571893]),
                                  scaleOrientation : new SFRotation([0,-0.00266799,0.999996,0.7854]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("Innertube_R_leg-POS-INTERP"),
                                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                      keyValue : new MFVec3f([3.222,-0.2834,0.8137,3.199,-0.3004,0.8192,3.167,-0.3234,0.8232,3.079,-0.3805,0.82,2.937,-0.4554,0.8127,2.832,-0.4993,0.8083,2.897,-0.4733,0.8121,3.104,-0.3649,0.8251,3.188,-0.3085,0.8264,3.216,-0.2875,0.8192,3.222,-0.2835,0.8144])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("Innertube_R_leg-ROT-INTERP"),
                                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                      keyValue : new MFRotation([0,0,1,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,-0.0001246,-0.001844,0.999998,0.6544])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.9804,0.7686,0.7255]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          USE : new SFString("Innertube_L_leg-FACES")}))}),

                                    new Transform({
                                      DEF : new SFString("Innertube_R_flipper-ROOT"),
                                      translation : new SFVec3f([0.414497,-0.929076,-0.0268408]),
                                      rotation : new SFRotation([-0.41021,-0.823318,-0.392271,1.71108]),
                                      scale : new SFVec3f([1,1.343,0.9976]),
                                      scaleOrientation : new SFRotation([-0.317708,0.946024,-0.0640316,0.2952]),
                                      children : new MFNode([
                                        new PositionInterpolator({
                                          DEF : new SFString("Innertube_R_flipper-POS-INTERP"),
                                          key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                          keyValue : new MFVec3f([0.7328,-0.7119,0.00338,0.6326,-0.8022,-0.008813,0.5071,-0.8869,-0.02059,0.3354,-0.9651,-0.03218,0.1384,-1.013,-0.04181,-0.06012,-1.021,-0.04859,-0.2865,-0.9823,-0.05284,-0.4595,-0.9153,-0.05269,-0.1708,-1.008,-0.05251,0.4498,-0.9173,-0.02473,0.7328,-0.7119,0.00338])}),

                                        new OrientationInterpolator({
                                          DEF : new SFString("Innertube_R_flipper-ROT-INTERP"),
                                          key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                          keyValue : new MFRotation([-0.255398,-0.938192,-0.233598,1.627,-0.313304,-0.903613,-0.292104,1.648,-0.373312,-0.857628,-0.353712,1.682,-0.439697,-0.792194,-0.423197,1.739,-0.500608,-0.715011,-0.488008,1.814,-0.550788,-0.634986,-0.541688,1.9,-0.598382,-0.539684,-0.592182,2.01,-0.629501,-0.461901,-0.624801,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378898,1.701,-0.255398,-0.938192,-0.233598,1.627])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.8941,0.8392,0.6])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              USE : new SFString("Innertube_L_flipper-FACES")}))}),

                                        new Transform({
                                          DEF : new SFString("Innertube_foot_R-ROOT"),
                                          translation : new SFVec3f([0.000116,0.2244,0.9932]),
                                          rotation : new SFRotation([0.552227,0.536026,-0.638531,2.029]),
                                          scale : new SFVec3f([1.002,1,0.7445]),
                                          scaleOrientation : new SFRotation([-0.102804,0.168407,-0.980342,0.2838]),
                                          children : new MFNode([
                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([0.9804,0.7686,0.7255]),
                                                      shininess : new SFFloat(0.25)}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  DEF : new SFString("Innertube_foot_R-FACES"),
                                                  creaseAngle : new SFFloat(3),
                                                  colorIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]),
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1]),
                                                  color : new SFNode(
                                                    new Color({
                                                      color : new MFColor([0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      DEF : new SFString("Innertube_foot_R-COORD"),
                                                      point : new MFVec3f([0,0.2454,0,-0.04862,0.1547,-0.1776,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,-0.04862,-0.06344,-0.2273,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0,-0.2395,0])}))}))})])})])})])}),

                                new Transform({
                                  DEF : new SFString("Innertube_Dummy-ROOT"),
                                  translation : new SFVec3f([-0.004756,-0.7784,0.073]),
                                  rotation : new SFRotation([0.565059,-0.565059,0.601179,2.05904]),
                                  scaleOrientation : new SFRotation([0.745084,-0.0868981,0.661286,0.1436]),
                                  children : new MFNode([
                                    new OrientationInterpolator({
                                      DEF : new SFString("Innertube_Dummy-ROT-INTERP"),
                                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                      keyValue : new MFRotation([0.554691,-0.554691,0.62019,2.031,0.550539,-0.550539,0.627545,2.021,0.559636,-0.559636,0.61124,2.044,0.569582,-0.569582,0.592581,2.072,0.578481,-0.578481,0.575081,2.098,0.584818,-0.584818,0.562117,2.117,0.587209,-0.587209,0.557109,2.125,0.583712,-0.583712,0.564412,2.114,0.575075,-0.575075,0.581875,2.088,0.564197,-0.564197,0.602797,2.057,0.554691,-0.554691,0.62019,2.031])}),

                                    new Transform({
                                      DEF : new SFString("Innertube_L_butt-ROOT"),
                                      translation : new SFVec3f([-0.4121,0.006308,-0.3326]),
                                      rotation : new SFRotation([-0.999991,0.00291315,0.00291315,1.5707]),
                                      scale : new SFVec3f([1.47,1.55,1.893]),
                                      children : new MFNode([
                                        new OrientationInterpolator({
                                          DEF : new SFString("Innertube_L_butt-ROT-INTERP"),
                                          key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                                          keyValue : new MFRotation([-0.992815,-0.0846113,-0.0846113,1.578,-0.997238,-0.052522,-0.052522,1.574,-0.999752,-0.0157592,-0.0157592,1.571,-0.999644,0.0188608,0.0188608,1.571,-0.998018,0.0445008,0.0445008,1.573,-0.997025,0.0545014,0.0545014,1.574,-0.998395,0.0400498,0.0400498,1.572,-0.99997,0.00546484,0.00546484,1.571,-0.998715,-0.0358305,-0.0358305,1.572,-0.995052,-0.0702566,-0.0702566,1.576,-0.992815,-0.0846113,-0.0846113,1.578])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.6902,0.102,0.102])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("Innertube_L_butt-FACES"),
                                              creaseAngle : new SFFloat(3),
                                              colorIndex : new MFInt32([0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1]),
                                              coordIndex : new MFInt32([0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1]),
                                              color : new SFNode(
                                                new Color({
                                                  color : new MFColor([1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("Innertube_L_butt-COORD"),
                                                  point : new MFVec3f([-0.003811,0.1463,-0.4831,-0.3454,0.1463,-0.3416,-0.4869,0.1463,0,-0.3454,0.1463,0.3416,-0.003811,0.1463,0.4831,0.3378,0.1463,0.3416,0.4793,0.1463,0,0.3378,0.1463,-0.3416,0,-0.3416,-0.3416,-0.2415,-0.3416,-0.2415,-0.3416,-0.3416,0,-0.2415,-0.3416,0.2415,0,-0.3416,0.3416,0.2415,-0.3416,0.2415,0.3416,-0.3416,0,0.2415,-0.3416,-0.2415,0,-0.4831,0])}))}))})])}),

                                    new Transform({
                                      DEF : new SFString("Innertube_R_butt-ROOT"),
                                      translation : new SFVec3f([0.3298,0.006308,-0.3294]),
                                      rotation : new SFRotation([-0.999996,-0.00210999,-0.00210999,1.571]),
                                      scale : new SFVec3f([1.47,1.55,1.893]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.6902,0.102,0.102])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              USE : new SFString("Innertube_L_butt-FACES")}))})])})])})])})])})])})])})])}),

            new ScalarInterpolator({
              DEF : new SFString("Mapper"),
              key : new MFFloat([0,1]),
              keyValue : new MFFloat([0,1])}),

            new Script({
              DEF : new SFString("TubeCollide"),
              mustEvaluate : new SFBool(true),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("finishedRunning"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("finishedRunning2"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("runAway"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("beingEaten"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("tubePosition"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("tubeHit"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("tubeRun"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("tubeRun2"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enableHit"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enableRun"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("kickFaster"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("kickSlower"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("kickStart"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:
		, function beingEaten (input){
			if (input == TRUE) {
				enableRun = FALSE;
				enableHit = FALSE;
			}
		}
		, function runAway (input, time) {
			enableHit = FALSE;
			kickSlower = FALSE;
			kickFaster = TRUE;
			//Browser.loadURL(new MFString('oops2.htm'), new MFString('target=helpertext'));
			if (tubePosition == 0) {
				tubeRun = time;
			} else {
				tubeRun2 = time;
			}
		}
		, function finishedRunning (input, time) {
			if (input == FALSE) {
				tubePosition = 1;
				enableHit = TRUE;
				kickFaster = FALSE;
				kickSlower = TRUE;
				kickStart = time;
			}
		}
		, function finishedRunning2 (input, time) {
			if (input == FALSE) {
				tubePosition = 0;
				enableHit = TRUE;
				kickFaster = FALSE;
				kickSlower = TRUE;
				kickStart = time;
			}
		})}),

            new TimeSensor({
              DEF : new SFString("TuberRun"),
              cycleInterval : new SFTime(2)}),

            new TimeSensor({
              DEF : new SFString("TuberRun2"),
              cycleInterval : new SFTime(2)}),

            new PositionInterpolator({
              DEF : new SFString("Inline_Tube01_avoid01-POS-INTERP"),
              key : new MFFloat([0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]),
              keyValue : new MFVec3f([-100.8,0,-451.9,-100.7,0,-452.1,-100.4,0,-452.8,-99.9,0,-453.9,-99.31,0,-455.4,-98.93,0,-457.2,-99,0,-459,-99.67,0,-460.9,-101.1,0,-462.8,-102.9,0,-464.3,-104.8,0,-465,-106.6,0,-465.1,-108.4,0,-464.8,-110,0,-464.3,-111.1,0,-463.8,-111.8,0,-463.5,-112,0,-463.4])}),

            new OrientationInterpolator({
              DEF : new SFString("Inline_Tube01_avoid01-ROT-INTERP"),
              key : new MFFloat([0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]),
              keyValue : new MFRotation([0,-1,0,3.944,0,-1,0,3.92,0,-1,0,3.845,0,-1,0,3.72,0,-1,0,3.546,0,-1,0,3.322,0,-1,0,3.048,0,-1,0,2.725,0,-1,0,2.351,0,-1,0,1.978,0,-1,0,1.654,0,-1,0,1.381,0,-1,0,1.157,0,-1,0,0.9823,0,-1,0,0.8578,0,-1,0,0.7831,0,-1,0,0.7582])}),

            new PositionInterpolator({
              DEF : new SFString("Inline_Tube01_avoid02-POS-INTERP"),
              key : new MFFloat([0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]),
              keyValue : new MFVec3f([-112,0,-463.4,-112,0,-463.4,-112.1,0,-463.2,-112.5,0,-462.6,-113.1,0,-461.5,-113.8,0,-460,-114.3,0,-458.3,-114.3,0,-456.5,-113.7,0,-454.7,-112.3,0,-452.8,-110.4,0,-451.3,-108.5,0,-450.5,-106.6,0,-450.4,-104.7,0,-450.6,-103,0,-451.1,-101.8,0,-451.5,-101.1,0,-451.8,-100.8,0,-451.9])}),

            new OrientationInterpolator({
              DEF : new SFString("Inline_Tube01_avoid02-ROT-INTERP"),
              key : new MFFloat([0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]),
              keyValue : new MFRotation([0,-1,0,0.7582,0,-1,0,0.7582,0,-1,0,0.7341,0,-1,0,0.6615,0,-1,0,0.5405,0,-1,0,0.3711,0,-1,0,0.1534,0,1,0,0.112801,0,1,0,0.4273,0,1,0,0.7902,0,1,0,1.153,0,1,0,1.468,0,1,0,1.734,0,1,0,1.952,0,-1,0,4.162,0,-1,0,4.041,0,-1,0,3.969,0,-1,0,3.944])}),

            new VisibilitySensor({
              DEF : new SFString("SeeEnd"),
              size : new SFVec3f([1,1,1]),
              center : new SFVec3f([7,0,-650])}),

            new TimeSensor({
              DEF : new SFString("Tuber2Run"),
              cycleInterval : new SFTime(2)}),

            new TimeSensor({
              DEF : new SFString("Tuber2Run2"),
              cycleInterval : new SFTime(2)}),

            new Switch({
              DEF : new SFString("Tuber2"),
              whichChoice : new SFInt32(0),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Tuber2CollisionMover"),
                      translation : new SFVec3f([6.848,0,-554.5]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Tuber2CollisionSpinner"),
                          rotation : new SFRotation([1,0,0,0.0134964]),
                          children : new MFNode([
                            new ProximitySensor({
                              DEF : new SFString("EatTuber2"),
                              size : new SFVec3f([6,6,4]),
                              center : new SFVec3f([0,0,4])})])})])}),

                    new Transform({
                      DEF : new SFString("Inline_Tube02-ROOT"),
                      translation : new SFVec3f([6.848,0,-554.5]),
                      rotation : new SFRotation([0,-1,0,3.944]),
                      children : new MFNode([
                        new ProximitySensor({
                          DEF : new SFString("ScareTuber2"),
                          size : new SFVec3f([15,5,17])}),

                        new VisibilitySensor({
                          DEF : new SFString("tuber2Visible"),
                          size : new SFVec3f([1,1,1])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Innertube_boolean-ROOT")})])})])})])})])}),

            new Script({
              DEF : new SFString("TubeCollide2"),
              mustEvaluate : new SFBool(true),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("finishedRunning"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("finishedRunning2"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("runAway"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("beingEaten"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("tubePosition"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("tubeHit"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("tubeRun"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("tubeRun2"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enableHit"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enableRun"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("kickFaster"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("kickSlower"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("kickStart"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:
		, function beingEaten (input){
			if (input == TRUE) {
				enableRun = FALSE;
				enableHit = FALSE;
			}
		}
		, function runAway (input, time) {
			enableHit = FALSE;
			kickSlower = FALSE;
			kickFaster = TRUE;
			//Browser.loadURL(new MFString('oops2.htm'), new MFString('target=helpertext'));
			if (tubePosition == 0) {
				tubeRun = time;
			} else {
				tubeRun2 = time;
			}
		}
		, function finishedRunning (input, time) {
			if (input == FALSE) {
				tubePosition = 1;
				enableHit = TRUE;
				kickFaster = FALSE;
				kickSlower = TRUE;
				kickStart = time;
			}
		}
		, function finishedRunning2 (input, time) {
			if (input == FALSE) {
				tubePosition = 0;
				enableHit = TRUE;
				kickFaster = FALSE;
				kickSlower = TRUE;
				kickStart = time;
			}
		})}),

            new PositionInterpolator({
              DEF : new SFString("Inline_Tube02_avoid01-POS-INTERP"),
              key : new MFFloat([0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]),
              keyValue : new MFVec3f([6.848,0,-554.5,6.955,0,-554.7,7.276,0,-555.4,7.783,0,-556.5,8.374,0,-558,8.759,0,-559.8,8.69,0,-561.6,8.017,0,-563.5,6.588,0,-565.4,4.741,0,-566.9,2.912,0,-567.6,1.097,0,-567.8,-0.7067,0,-567.4,-2.279,0,-566.9,-3.4,0,-566.4,-4.072,0,-566.1,-4.296,0,-566])}),

            new OrientationInterpolator({
              DEF : new SFString("Inline_Tube02_avoid01-ROT-INTERP"),
              key : new MFFloat([0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]),
              keyValue : new MFRotation([0,-1,0,3.944,0,-1,0,3.92,0,-1,0,3.845,0,-1,0,3.72,0,-1,0,3.546,0,-1,0,3.322,0,-1,0,3.048,0,-1,0,2.725,0,-1,0,2.351,0,-1,0,1.978,0,-1,0,1.654,0,-1,0,1.381,0,-1,0,1.157,0,-1,0,0.9823,0,-1,0,0.8578,0,-1,0,0.7831,0,-1,0,0.7582])}),

            new PositionInterpolator({
              DEF : new SFString("Inline_Tube02_avoid02-POS-INTERP"),
              key : new MFFloat([0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]),
              keyValue : new MFVec3f([-4.296,0,-566,-4.296,0,-566,-4.423,0,-565.8,-4.798,0,-565.2,-5.394,0,-564.1,-6.103,0,-562.6,-6.608,0,-560.9,-6.635,0,-559.1,-6.026,0,-557.3,-4.62,0,-555.4,-2.75,0,-553.9,-0.857,0,-553.2,1.053,0,-553,2.977,0,-553.2,4.668,0,-553.7,5.879,0,-554.1,6.605,0,-554.4,6.848,0,-554.5])}),

            new OrientationInterpolator({
              DEF : new SFString("Inline_Tube02_avoid02-ROT-INTERP"),
              key : new MFFloat([0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1]),
              keyValue : new MFRotation([0,-1,0,0.7582,0,-1,0,0.7582,0,-1,0,0.7341,0,-1,0,0.6615,0,-1,0,0.5405,0,-1,0,0.3711,0,-1,0,0.1534,0,1,0,0.112801,0,1,0,0.4273,0,1,0,0.7902,0,1,0,1.153,0,1,0,1.468,0,1,0,1.734,0,1,0,1.952,0,-1,0,4.162,0,-1,0,4.041,0,-1,0,3.969,0,-1,0,3.944])}),

            new TimeSensor({
              DEF : new SFString("frameRateTimer"),
              cycleInterval : new SFTime(3),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new TimeSensor({
              DEF : new SFString("TimeSensor01-TIMER"),
              cycleInterval : new SFTime(1.6),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new Script({
              DEF : new SFString("TimeSensor01-SCRIPT"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fractionIn"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fractionOut"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:
    , function fractionIn(i) {
    fractionOut = 0.48 * i;
  })}),

            new TimeSensor({
              DEF : new SFString("TimeSensor02-TIMER"),
              cycleInterval : new SFTime(3.333),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new Transform({
              DEF : new SFString("SharkHead"),
              translation : new SFVec3f([0,-3.143,5.7195]),
              rotation : new SFRotation([1,0,0,0.0134964]),
              children : new MFNode([
                new Collision({
                  enabled : new SFBool(false),
                  proxy : new SFNode(
                    new Group({
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Shark-ROOT"),
                          translation : new SFVec3f([-0.01057,-0.2844,-1.188]),
                          rotation : new SFRotation([-0.998454,-0.0414381,0.0370383,4.165]),
                          scale : new SFVec3f([0.001994,0.001994,0.001994]),
                          scaleOrientation : new SFRotation([0.0561707,-0.194402,-0.979312,0.8002]),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Shark-TIMER"),
                              cycleInterval : new SFTime(3.333)}),

                            new PositionInterpolator({
                              DEF : new SFString("Shark-POS-INTERP"),
                              key : new MFFloat([0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]),
                              keyValue : new MFVec3f([-0.01057,-0.2844,-1.188,-0.03506,-0.2843,-1.188,-0.05755,-0.2843,-1.188,-0.07656,-0.2843,-1.188,-0.09057,-0.2842,-1.188,-0.09815,-0.2842,-1.188,-0.09812,-0.2842,-1.188,-0.09068,-0.2842,-1.188,-0.07758,-0.2843,-1.188,-0.05998,-0.2843,-1.188,-0.03892,-0.2843,-1.188,-0.01543,-0.2843,-1.188,0.009348,-0.2843,-1.188,0.0341,-0.2843,-1.188,0.05732,-0.2843,-1.188,0.07724,-0.2843,-1.188,0.09202,-0.2842,-1.188,0.09988,-0.2842,-1.188,0.09939,-0.2842,-1.188,0.09103,-0.2842,-1.188,0.07713,-0.2843,-1.188,0.05904,-0.2843,-1.188,0.03776,-0.2843,-1.188,0.01421,-0.2844,-1.188,-0.01057,-0.2844,-1.188,-0.03506,-0.2843,-1.188,-0.05755,-0.2843,-1.188,-0.07656,-0.2843,-1.188,-0.09057,-0.2842,-1.188,-0.09815,-0.2842,-1.188,-0.09812,-0.2842,-1.188,-0.09068,-0.2842,-1.188,-0.07758,-0.2843,-1.188,-0.05998,-0.2843,-1.188,-0.03892,-0.2843,-1.188,-0.01543,-0.2843,-1.188,0.009348,-0.2843,-1.188,0.0341,-0.2843,-1.188,0.05732,-0.2843,-1.188,0.07724,-0.2843,-1.188,0.09202,-0.2842,-1.188,0.09988,-0.2842,-1.188,0.09939,-0.2842,-1.188,0.09103,-0.2842,-1.188,0.07713,-0.2843,-1.188,0.05904,-0.2843,-1.188,0.03776,-0.2843,-1.188,0.01421,-0.2844,-1.188,-0.01057,-0.2844,-1.188,-0.03506,-0.2843,-1.188,-0.05755,-0.2843,-1.188])}),

                            new OrientationInterpolator({
                              DEF : new SFString("Shark-ROT-INTERP"),
                              key : new MFFloat([0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]),
                              keyValue : new MFRotation([-0.998454,-0.0414381,0.0370383,4.165,-0.998536,-0.0403614,0.0360213,4.165,-0.998779,-0.0369492,0.0327793,4.166,-0.999163,-0.0307989,0.026919,4.166,-0.999608,-0.0214202,0.0180201,4.166,-0.999944,-0.00871439,0.00593626,4.167,-0.999941,0.00659827,-0.00861635,4.167,-0.999568,0.0201093,-0.0214593,4.166,-0.99915,0.0286786,-0.0295985,4.166,-0.998876,0.0331692,-0.0338692,4.166,-0.998756,0.0349584,-0.0355684,4.166,-0.998726,0.0353909,-0.0359809,4.166,-0.998724,0.0354208,-0.0360108,4.166,-0.998727,0.0353809,-0.035961,4.166,-0.998771,0.034739,-0.035349,4.166,-0.998943,0.0321214,-0.0328714,4.166,-0.99931,0.0257303,-0.0267903,4.166,-0.999778,0.0140597,-0.0157096,4.166,-0.999995,-0.00301499,0.000521898,4.167,-0.999658,-0.0200892,0.0167493,4.166,-0.999108,-0.0317503,0.0278402,4.166,-0.998697,-0.0381399,0.0339099,4.165,-0.998506,-0.0407602,0.0363902,4.165,-0.998457,-0.0413982,0.0369984,4.165,-0.998454,-0.0414381,0.0370383,4.165,-0.998536,-0.0403614,0.0360213,4.165,-0.998779,-0.0369492,0.0327793,4.166,-0.999163,-0.0307989,0.026919,4.166,-0.999608,-0.0214202,0.0180201,4.166,-0.999944,-0.00871439,0.00593626,4.167,-0.999941,0.00659827,-0.00861635,4.167,-0.999568,0.0201093,-0.0214593,4.166,-0.99915,0.0286786,-0.0295985,4.166,-0.998876,0.0331692,-0.0338692,4.166,-0.998756,0.0349584,-0.0355684,4.166,-0.998726,0.0353909,-0.0359809,4.166,-0.998724,0.0354208,-0.0360108,4.166,-0.998727,0.0353809,-0.035961,4.166,-0.998771,0.034739,-0.035349,4.166,-0.998943,0.0321214,-0.0328714,4.166,-0.99931,0.0257303,-0.0267903,4.166,-0.999778,0.0140597,-0.0157096,4.166,-0.999995,-0.00301499,0.000521898,4.167,-0.999658,-0.0200892,0.0167493,4.166,-0.999108,-0.0317503,0.0278402,4.166,-0.998697,-0.0381399,0.0339099,4.165,-0.998506,-0.0407602,0.0363902,4.165,-0.998457,-0.0413982,0.0369984,4.165,-0.998454,-0.0414381,0.0370383,4.165,-0.998536,-0.0403614,0.0360213,4.165,-0.998779,-0.0369492,0.0327793,4.166])}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                      shininess : new SFFloat(0.25)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("Shark-FACES"),
                                  creaseAngle : new SFFloat(3),
                                  colorIndex : new MFInt32([0,2,1,-1,0,3,2,-1,0,4,3,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,8,7,-1,3,4,8,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,12,11,-1,7,8,12,-1]),
                                  coordIndex : new MFInt32([0,2,1,-1,0,3,2,-1,0,4,3,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,8,7,-1,3,4,8,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,12,11,-1,7,8,12,-1]),
                                  color : new SFNode(
                                    new Color({
                                      color : new MFColor([0.5333,0.5333,0.5333,0.5333,0.5333,0.5333,0.2353,0.2353,0.2353,0.2353,0.2353,0.2353,0.5333,0.5333,0.5333,0.5333,0.5333,0.5333,0.2353,0.2353,0.2353,0.2353,0.2353,0.2353,0.5333,0.5333,0.5333,0.5333,0.5333,0.5333,0.2353,0.2353,0.2353,0.2353,0.2353,0.2353,0.5333,0.5333,0.5333])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      DEF : new SFString("Shark-COORD"),
                                      point : new MFVec3f([0,-89.63,0,38.19,-45.09,-0.4825,15.62,-19.32,-23.37,-16.02,-19.32,-23.37,-37.67,-45.09,-0.4825,59.07,11.28,0,29.53,18.3,-33.92,-29.54,18.3,-33.92,-59.07,11.28,0,75.19,183.2,0.2692,34.67,186.3,-38.64,-35.03,186.3,-38.64,-75.37,183.2,0.2692])}))}))}),

                            new Transform({
                              DEF : new SFString("Shark_Eyeball_R-ROOT"),
                              translation : new SFVec3f([55.09,1.822,-6.84]),
                              rotation : new SFRotation([-0.682571,0.661772,-0.310087,2.578]),
                              scale : new SFVec3f([1.042,1.042,1.042]),
                              scaleOrientation : new SFRotation([0.225199,0.944898,0.237599,0.6613]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("Shark_Eyeball_R-FACES"),
                                      creaseAngle : new SFFloat(3),
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("Shark_Eyeball_R-COORD"),
                                          point : new MFVec3f([0,8.453,0,5.977,5.977,0,4.226,5.977,-4.226,0,5.977,-5.977,-4.226,5.977,-4.226,-5.977,5.977,0,-4.226,5.977,4.226,0,5.977,5.977,4.226,5.977,4.226,8.453,0,0,5.977,0,-5.977,0,0,-8.453,-5.977,0,-5.977,-8.453,0,0,-5.977,0,5.977,0,0,8.453,5.977,0,5.977,5.977,-5.977,0,4.226,-5.977,-4.226,0,-5.977,-5.977,-4.226,-5.977,-4.226,-5.977,-5.977,0,-4.226,-5.977,4.226,0,-5.977,5.977,4.226,-5.977,4.226,0,-8.453,0])}))}))}),

                                new Transform({
                                  DEF : new SFString("Shark_Pupil_R-ROOT"),
                                  translation : new SFVec3f([0.00001311,0,8.714]),
                                  scaleOrientation : new SFRotation([-0.6563,0,-0.7545,0.2488]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      DEF : new SFString("eyeClick")}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.102,0.102,0.102]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("Shark_Pupil_R-FACES"),
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("Shark_Pupil_R-COORD"),
                                              point : new MFVec3f([0,2.536,0,2.196,1.268,0,1.098,1.268,-1.902,-1.098,1.268,-1.902,-2.196,1.268,0,-1.098,1.268,1.902,1.098,1.268,1.902,2.196,-1.268,0,1.098,-1.268,-1.902,-1.098,-1.268,-1.902,-2.196,-1.268,0,-1.098,-1.268,1.902,1.098,-1.268,1.902,0,-2.536,0])}))}))})])})])}),

                            new Transform({
                              DEF : new SFString("Shark_Eyeball_L-ROOT"),
                              translation : new SFVec3f([-54.37,2.848,-8.257]),
                              rotation : new SFRotation([-0.374592,0.400391,-0.836282,1.719]),
                              scale : new SFVec3f([1.048,1.048,1.048]),
                              scaleOrientation : new SFRotation([-0.756681,-0.653784,0,0.5694]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      USE : new SFString("Shark_Eyeball_R-FACES")}))}),

                                new Transform({
                                  DEF : new SFString("Shark_Pupil_L-ROOT"),
                                  translation : new SFVec3f([0,0,-9.028]),
                                  scaleOrientation : new SFRotation([0,-0.415701,0.909501,0.2019]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      DEF : new SFString("eyeClick2")}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.102,0.102,0.102]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          USE : new SFString("Shark_Pupil_R-FACES")}))})])})])}),

                            new Transform({
                              DEF : new SFString("Shark_Gill_L01-ROOT"),
                              translation : new SFVec3f([-49.99,54.17,-2.679]),
                              rotation : new SFRotation([0.645888,-0.686787,0.333394,3.713]),
                              scale : new SFVec3f([21.15,23.8704,21.15]),
                              scaleOrientation : new SFRotation([0.770007,-0.632706,-0.0823007,0.2026]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Shark_Gill_L01-SCALE-INTERP"),
                                  key : new MFFloat([0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]),
                                  keyValue : new MFVec3f([21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15])}),

                                new Transform({
                                  translation : new SFVec3f([0,0.1148,0]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.102,0.102,0.102]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.2295,0.2295,1.071])}))})])})])}),

                            new Transform({
                              DEF : new SFString("Shark_Gill_L03-ROOT"),
                              translation : new SFVec3f([-51.44,81.59,-3.382]),
                              rotation : new SFRotation([0.645888,-0.686787,0.333394,3.713]),
                              scale : new SFVec3f([21.15,23.8704,21.15]),
                              scaleOrientation : new SFRotation([0.770007,-0.632706,-0.0823007,0.2026]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Shark_Gill_L03-SCALE-INTERP"),
                                  key : new MFFloat([0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]),
                                  keyValue : new MFVec3f([21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15])}),

                                new Transform({
                                  translation : new SFVec3f([0,0.1148,0]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.102,0.102,0.102]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.2295,0.2295,1.071])}))})])})])}),

                            new Transform({
                              DEF : new SFString("Shark_Gill_R02-ROOT"),
                              translation : new SFVec3f([48.9,67.81,-5.426]),
                              rotation : new SFRotation([-0.316607,0.318407,-0.89352,1.764]),
                              scale : new SFVec3f([21.15,23.8704,21.15]),
                              scaleOrientation : new SFRotation([0.536701,-0.840101,-0.0786301,0.347]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Shark_Gill_R02-SCALE-INTERP"),
                                  key : new MFFloat([0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]),
                                  keyValue : new MFVec3f([21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15])}),

                                new Transform({
                                  translation : new SFVec3f([0,0.1148,0]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.102,0.102,0.102]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.2295,0.2295,1.071])}))})])})])}),

                            new Transform({
                              DEF : new SFString("Shark_Gill_R01-ROOT"),
                              translation : new SFVec3f([47.87,53.67,-5.074]),
                              rotation : new SFRotation([-0.316607,0.318407,-0.89352,1.764]),
                              scale : new SFVec3f([21.15,23.8704,21.15]),
                              scaleOrientation : new SFRotation([0.536701,-0.840101,-0.0786301,0.347]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Shark_Gill_R01-SCALE-INTERP"),
                                  key : new MFFloat([0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]),
                                  keyValue : new MFVec3f([21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15])}),

                                new Transform({
                                  translation : new SFVec3f([0,0.1148,0]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.102,0.102,0.102]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.2295,0.2295,1.071])}))})])})])}),

                            new Transform({
                              DEF : new SFString("Shark_Gill_R03-ROOT"),
                              translation : new SFVec3f([49.86,81.06,-5.755]),
                              rotation : new SFRotation([-0.316607,0.318407,-0.89352,1.764]),
                              scale : new SFVec3f([21.15,23.8704,21.15]),
                              scaleOrientation : new SFRotation([0.536701,-0.840101,-0.0786301,0.347]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Shark_Gill_R03-SCALE-INTERP"),
                                  key : new MFFloat([0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]),
                                  keyValue : new MFVec3f([21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15])}),

                                new Transform({
                                  translation : new SFVec3f([0,0.1148,0]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.102,0.102,0.102]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.2295,0.2295,1.071])}))})])})])}),

                            new Transform({
                              DEF : new SFString("Shark_Gill_L02-ROOT"),
                              translation : new SFVec3f([-50.64,67.65,-3.755]),
                              rotation : new SFRotation([0.646034,-0.686736,0.333217,3.713]),
                              scale : new SFVec3f([21.15,23.8704,21.15]),
                              scaleOrientation : new SFRotation([0.927626,0,-0.37351,0.187601]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Shark_Gill_L02-SCALE-INTERP"),
                                  key : new MFFloat([0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]),
                                  keyValue : new MFVec3f([21.15,40.58,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.52,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.58,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.52,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.58,21.15,21.15,37.34,21.15,21.15,34.1,21.15])}),

                                new Transform({
                                  translation : new SFVec3f([0,0.1148,0]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.102,0.102,0.102]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.2295,0.2295,1.071])}))})])})])}),

                            new Transform({
                              DEF : new SFString("Shark_Fin_L-ROOT"),
                              translation : new SFVec3f([-68.62,84.59,15.82]),
                              rotation : new SFRotation([-0.775069,0.451282,-0.442282,1.789]),
                              scale : new SFVec3f([253.3,501.6,779.7]),
                              scaleOrientation : new SFRotation([0,1,0,0.719]),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0,0.005132,0]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.1078,0.01026,0.1052])}))})])})])}),

                            new Transform({
                              DEF : new SFString("Shark_Fin_R-ROOT"),
                              translation : new SFVec3f([72.39,86.19,16.73]),
                              rotation : new SFRotation([-0.903272,0.305291,-0.301491,1.64]),
                              scale : new SFVec3f([253.3,501.6,779.7]),
                              scaleOrientation : new SFRotation([0,1,0,0.719]),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0,0.005132,0]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new Box({
                                          size : new SFVec3f([0.1078,0.01026,0.1052])}))})])})])}),

                            new Transform({
                              DEF : new SFString("Shark_Fin_T-ROOT"),
                              translation : new SFVec3f([-3.415,141.4,-20.76]),
                              rotation : new SFRotation([-0.105105,-0.112805,-0.988042,1.578]),
                              scale : new SFVec3f([372.2,501.6,895.7]),
                              scaleOrientation : new SFRotation([-0.000692,0.999999,-0.0007271,0.7108]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                          shininess : new SFFloat(0.25)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("Shark_Fin_T-FACES"),
                                      coordIndex : new MFInt32([0,7,2,-1,6,8,3,-1,7,1,4,-1,6,5,2,-1,9,0,3,-1,8,4,1,-1,5,6,3,-1,4,6,7,-1,9,1,7,-1,2,7,6,-1,6,4,8,-1,3,8,9,-1,1,9,8,-1,0,9,7,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("Shark_Fin_T-COORD"),
                                          point : new MFVec3f([-0.07286,-0.0002971,0.02072,-0.09155,-0.002948,-0.02931,0.06054,0.00003569,-0.05069,-0.07286,0.006703,0.02072,-0.09155,0.004052,-0.02931,0.06054,0.007036,-0.05069,-0.02512,0.007556,-0.0462,-0.02512,0.0005558,-0.0462,-0.07472,0.005046,-0.01182,-0.07472,-0.001954,-0.01182])}))}))})])})])}),

                        new TimeSensor({
                          DEF : new SFString("SharkDeathTimer"),
                          cycleInterval : new SFTime(15)}),

                        new TimeSensor({
                          DEF : new SFString("SharkBoomTimer"),
                          cycleInterval : new SFTime(5.6)}),

                        new TimeSensor({
                          DEF : new SFString("FishBurpTimer"),
                          cycleInterval : new SFTime(11)}),

                        new PositionInterpolator({
                          DEF : new SFString("SharkDeath-POS-INTERP"),
                          key : new MFFloat([0,0.01333,0.02667,0.04,0.05333,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28,0.2933,0.3067,0.32,0.3333,0.3467,0.36,0.3733,0.3867]),
                          keyValue : new MFVec3f([0.001881,-0.2842,-1.188,-0.006575,-0.2482,-1.068,0.0003181,-0.2849,-1.189,0.0008941,-0.2852,-1.189,0.0009147,-0.2853,-1.189,0.0006456,-0.2852,-1.189,0.0003574,-0.285,-1.189,0.0003181,-0.2849,-1.189,0.0006044,-0.2844,-1.188,0.001038,-0.2836,-1.188,0.001502,-0.2833,-1.188,0.001881,-0.2842,-1.188,0.001798,-0.2354,-0.8653,0.0004518,-0.2849,-1.189,0.0004518,-0.2849,-1.189,0.001798,-0.2733,-0.9422,0.0004518,-0.2849,-1.189,0.02244,-0.2735,-0.9417,0.0004518,-0.2849,-1.189,0.002354,-0.2591,-0.9724,0.001798,-0.2733,-0.9422,0.002354,-0.2591,-1.05,0.002118,-0.2651,-1.094,0.003038,-0.2415,-1.159,0.002682,-0.2506,-1.178,0.0009442,-0.2082,-1.348,0.001113,-0.1891,-1.58,0.0012,-0.1793,-1.676,0.001513,-0.1439,-1.656,0.001513,-2.072,-1.656])}),

                        new OrientationInterpolator({
                          DEF : new SFString("SharkDeath-ROT-INTERP"),
                          key : new MFFloat([0,0.01333,0.02667,0.04,0.05333,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.32,0.3333]),
                          keyValue : new MFRotation([-0.999941,0.00659827,-0.00861636,4.167,-0.995366,0.0222392,0.0935568,4.139,-0.999992,-0.000109199,-0.00407597,4.174,-0.999891,-0.00264198,-0.0145299,4.177,-0.999872,-0.00318291,-0.0156896,4.178,-0.99993,-0.00245707,-0.0116103,4.177,-0.999979,-0.00118997,-0.00638587,4.175,-0.999992,-0.000109199,-0.00407597,4.174,-0.999987,0.00111799,-0.00492194,4.169,-0.999976,0.00296893,-0.00619885,4.16,-0.999959,0.0049528,-0.00754669,4.157,-0.999941,0.00659827,-0.00861636,4.167,0.999946,-0.0065003,0.00814537,2.013,-0.99999,0.000493395,-0.00441496,4.174,-0.99999,0.000493395,-0.00441496,4.174,0.999946,-0.0065013,0.00814537,2.013,-0.99999,0.000493395,-0.00441496,4.174,0.998106,-0.0500803,0.0357302,2.015,-0.99999,0.000493495,-0.00441496,4.174,0.999946,-0.0065013,0.00814537,2.013,0.999946,-0.0065013,0.00814537,2.013,-0.99999,0.000493395,-0.00441496,4.174])}),

                        new PositionInterpolator({
                          DEF : new SFString("SharkDeath-SCALE-INTERP"),
                          key : new MFFloat([0,0.24,0.2533,0.2667,0.28,0.2933,0.3067,0.32,0.3333,0.3467,0.36,0.3733,0.3734]),
                          keyValue : new MFVec3f([0.001994,0.001994,0.001994,0.001994,0.001994,0.001994,0.002592,0.002592,0.002592,0.001994,0.001994,0.001994,0.002592,0.002592,0.002592,0.002339,0.002339,0.002339,0.003329,0.003329,0.003329,0.002946,0.002946,0.002946,0.003939,0.003939,0.003939,0.004608,0.004608,0.004608,0.00495,0.00495,0.00495,0.006188,0.006188,0.006188,0.000001,0.000001,0.000001])}),

                        new Transform({
                          DEF : new SFString("SharkDeath-ROOT"),
                          translation : new SFVec3f([0.001881,-0.2842,-1.188]),
                          rotation : new SFRotation([-0.999941,0.00659827,-0.00861635,4.167]),
                          scale : new SFVec3f([0.001994,0.001994,0.001994]),
                          scaleOrientation : new SFRotation([-0.00414896,0.999991,0,0.3366]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("SharkDeath_Eyeball_R-ROOT"),
                              translation : new SFVec3f([55.09,1.822,-6.84]),
                              rotation : new SFRotation([-0.682571,0.661772,-0.310087,2.578]),
                              scale : new SFVec3f([1.042,1.042,1.042]),
                              scaleOrientation : new SFRotation([-0.859288,-0.0939287,0.502793,0.2111]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("SharkDeath_Eyeball_R-POS-INTERP"),
                                  key : new MFFloat([0]),
                                  keyValue : new MFVec3f([55.09,1.822,-6.84])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("SharkDeath_Eyeball_R-ROT-INTERP"),
                                  key : new MFFloat([0,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28,0.2933]),
                                  keyValue : new MFRotation([-0.682571,0.661772,-0.310087,2.578,-0.682571,0.661772,-0.310087,2.578,-0.711681,0.699782,-0.0617684,3.069,-0.706442,0.700642,0.100206,3.397,-0.703618,0.698918,0.128203,3.452,-0.702038,0.697837,0.142008,3.479,-0.701805,0.697705,0.143801,3.483,-0.702782,0.698382,0.135497,3.466,-0.704594,0.699494,0.119399,3.435,-0.706684,0.700785,0.0974579,3.391,-0.708719,0.701819,0.0718819,3.34,-0.710388,0.702388,0.0447192,3.285,-0.711647,0.702446,0.0113307,3.218,-0.712116,0.701315,-0.0323707,3.129,-0.711003,0.698203,-0.0835904,3.025,-0.707543,0.692742,-0.139609,2.912,-0.70152,0.684619,-0.197906,2.796,-0.693003,0.674103,-0.255601,2.683,-0.682571,0.661772,-0.310087,2.578])}),

                                new PositionInterpolator({
                                  DEF : new SFString("SharkDeath_Eyeball_R-SCALE-INTERP"),
                                  key : new MFFloat([0,0.01333,0.02667,0.1467,0.16,0.1733,0.2933,0.3067,0.32]),
                                  keyValue : new MFVec3f([1.042,1.042,1.042,2.454,2.454,2.454,1.042,1.042,1.042,1.042,1.042,1.042,1.938,1.938,1.937,1.042,1.042,1.042,1.042,1.042,1.042,1.583,1.583,1.583,1.042,1.042,1.042])})])}),

                            new Transform({
                              DEF : new SFString("SharkDeath_Eyeball_L-ROOT"),
                              translation : new SFVec3f([-54.37,2.848,-8.257]),
                              rotation : new SFRotation([-0.374592,0.400391,-0.836282,1.719]),
                              scale : new SFVec3f([1.048,1.048,1.048]),
                              scaleOrientation : new SFRotation([0.682806,-0.223402,-0.695606,0.2779]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("SharkDeath_Eyeball_L-POS-INTERP"),
                                  key : new MFFloat([0]),
                                  keyValue : new MFVec3f([-54.37,2.848,-8.257])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("SharkDeath_Eyeball_L-ROT-INTERP"),
                                  key : new MFFloat([0,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28,0.2933,0.3067]),
                                  keyValue : new MFRotation([-0.374592,0.400391,-0.836282,1.719,-0.374592,0.400391,-0.836282,1.719,-0.113603,0.148104,-0.982425,1.57,0.0838699,-0.04633,-0.995399,1.564,0.119496,-0.0817271,-0.989465,1.571,0.138505,-0.100604,-0.985239,1.576,0.143596,-0.105697,-0.983976,1.578,0.137193,-0.0993252,-0.985552,1.576,0.121495,-0.0836666,-0.98906,1.572,0.0985271,-0.0608682,-0.993271,1.567,0.0705967,-0.0331684,-0.996953,1.562,0.0399898,-0.00286899,-0.999196,1.559,0.00276406,0.0338807,-0.999422,1.557,-0.0448909,0.0807816,-0.99572,1.559,-0.100001,0.134802,-0.985813,1.567,-0.159306,0.192708,-0.968238,1.583,-0.219304,0.251004,-0.942816,1.607,-0.276809,0.30651,-0.91073,1.639,-0.329115,0.356916,-0.874239,1.677,-0.374592,0.400391,-0.836282,1.719])}),

                                new PositionInterpolator({
                                  DEF : new SFString("SharkDeath_Eyeball_L-SCALE-INTERP"),
                                  key : new MFFloat([0,0.01333,0.02667,0.1867,0.2,0.2133,0.3067,0.32,0.3333]),
                                  keyValue : new MFVec3f([1.048,1.048,1.048,2.548,2.548,2.548,1.048,1.048,1.048,1.048,1.048,1.048,1.928,1.928,1.928,1.048,1.048,1.048,1.048,1.048,1.048,1.582,1.582,1.582,1.048,1.048,1.048])})])})])}),

                        new Group({
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("Dummy_SharkDeath_explode-ROOT"),
                              translation : new SFVec3f([-0.000025,-1.738,-1.326]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Dummy_SharkDeath_explode-POS-INTERP"),
                                  key : new MFFloat([0,0.3733,0.3867]),
                                  keyValue : new MFVec3f([-0.000025,-1.738,-1.326,-0.000025,-1.738,-1.326,-0.000025,-0.2489,-1.326])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode_Eyeball_L-ROOT"),
                                  translation : new SFVec3f([-0.3353,0.1388,-0.2908]),
                                  rotation : new SFRotation([0.520301,0.852102,-0.0566501,1.925]),
                                  scale : new SFVec3f([0.006484,0.006484,0.006484]),
                                  scaleOrientation : new SFRotation([-0.710431,0.595526,0.375016,0.0659083]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode_Eyeball_L-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([-0.3353,0.1388,-0.2908,-0.3353,0.1388,-0.2908,-0.8877,0.6117,-0.2908,-1.44,1.085,-0.2908])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode_Eyeball_L-FACES"),
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode_Eyeball_L-COORD"),
                                              point : new MFVec3f([0,8.453,0,0,4.226,-7.32,-6.34,4.226,-3.66,-6.34,4.226,3.66,0,4.226,7.32,6.34,4.226,3.66,6.34,4.226,-3.66,0,-4.226,-7.32,-6.34,-4.226,-3.66,-6.34,-4.226,3.66,0,-4.226,7.32,6.34,-4.226,3.66,6.34,-4.226,-3.66,0,-8.453,0])}))}))}),

                                    new Transform({
                                      DEF : new SFString("SharkDeath_explode_Pupil_L-ROOT"),
                                      translation : new SFVec3f([0,0,-9.027]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.102,0.102,0.102]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              DEF : new SFString("SharkDeath_explode_Pupil_L-FACES"),
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  DEF : new SFString("SharkDeath_explode_Pupil_L-COORD"),
                                                  point : new MFVec3f([0,2.536,0,0,1.268,-2.196,-1.902,1.268,-1.098,-1.902,1.268,1.098,0,1.268,2.196,1.902,1.268,1.098,1.902,1.268,-1.098,0,-1.268,-2.196,-1.902,-1.268,-1.098,-1.902,-1.268,1.098,0,-1.268,2.196,1.902,-1.268,1.098,1.902,-1.268,-1.098,0,-2.536,0])}))}))})])})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode_Eyeball_R-ROOT"),
                                  translation : new SFVec3f([0.3421,0.1366,-0.2959]),
                                  rotation : new SFRotation([-0.119501,0.808308,0.576505,1.566]),
                                  scale : new SFVec3f([0.006446,0.006446,0.006446]),
                                  scaleOrientation : new SFRotation([-0.315206,0.144103,-0.938019,0.524]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode_Eyeball_R-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([0.3421,0.1366,-0.2959,0.3421,0.1366,-0.2959,0.8428,0.5922,-0.2959,1.343,1.048,-0.2959])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          USE : new SFString("SharkDeath_explode_Eyeball_L-FACES")}))}),

                                    new Transform({
                                      DEF : new SFString("SharkDeath_explode_Pupil_R-ROOT"),
                                      translation : new SFVec3f([0,-0.0000144,8.714]),
                                      children : new MFNode([
                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([0.102,0.102,0.102]),
                                                  shininess : new SFFloat(0.25)}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              USE : new SFString("SharkDeath_explode_Pupil_L-FACES")}))})])})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode00-ROOT"),
                                  translation : new SFVec3f([-0.4308,-0.2435,0.06649]),
                                  rotation : new SFRotation([0.445898,0.858995,0.251599,1.161]),
                                  scale : new SFVec3f([1.567,3.104,4.824]),
                                  scaleOrientation : new SFRotation([0,1,0,0.719]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode00-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([-0.4308,-0.2435,0.06649,-0.4308,-0.2435,0.06649,-0.8008,-0.09703,0.06649,-1.171,0.04949,0.06649])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode00-FACES"),
                                          coordIndex : new MFInt32([2,1,0,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode00-COORD"),
                                              point : new MFVec3f([-0.05388,0.01026,0.0526,-0.05388,0.01026,-0.0526,0.05388,0.01026,-0.0526])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode01-ROOT"),
                                  translation : new SFVec3f([0.4502,-0.2508,0.07826]),
                                  rotation : new SFRotation([0.650419,0.728922,0.213606,0.8453]),
                                  scale : new SFVec3f([1.567,3.104,4.824]),
                                  scaleOrientation : new SFRotation([0,1,0,0.719]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode01-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([0.4502,-0.2508,0.07826,0.4502,-0.2508,0.07826,0.7577,-0.08718,0.07826,1.065,0.07641,0.07826])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode01-FACES"),
                                          coordIndex : new MFInt32([0,1,2,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode01-COORD"),
                                              point : new MFVec3f([-0.05388,0.01026,0.0526,0.05388,0.01026,0.0526,0.05388,0.01026,-0.0526])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode02-ROOT"),
                                  translation : new SFVec3f([-0.03068,0.05687,-0.3348]),
                                  rotation : new SFRotation([-0.99999,0.000493995,-0.00441496,4.174]),
                                  scale : new SFVec3f([0.006236,0.006236,0.006236]),
                                  scaleOrientation : new SFRotation([-0.0063492,0.0223107,0.999731,0.7856]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode02-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([-0.03068,0.05687,-0.3348,-0.03068,0.05687,-0.3348,-0.2365,0.6657,0.016,-0.4852,1.238,0.3554])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("SharkDeath_explode02-ROT-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFRotation([-0.99999,0.000493995,-0.00441496,4.174,-0.99999,0.000493995,-0.00441496,4.174,-0.929108,0.294703,0.223402,4.018,-0.748303,0.526602,0.403402,3.76])}),

                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode02-SCALE-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([0.006236,0.006236,0.006236,0.006236,0.006236,0.006236,0.002989,0.002989,0.002989,0.0002585,0.0002585,0.0002585])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode02-FACES"),
                                          coordIndex : new MFInt32([0,1,2,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode02-COORD"),
                                              point : new MFVec3f([29.53,18.3,-33.92,-29.54,18.3,-33.92,-35.03,186.3,-38.64])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode03-ROOT"),
                                  translation : new SFVec3f([0.0338,0.09924,-0.1897]),
                                  rotation : new SFRotation([-0.99999,0.000493995,-0.00441496,4.174]),
                                  scale : new SFVec3f([0.004872,0.004872,0.004872]),
                                  scaleOrientation : new SFRotation([0.314787,-0.949162,0,0.2634]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode03-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([0.0338,0.09924,-0.1897,0.0338,0.09924,-0.1897,0.2199,0.713,0.08534,0.4266,1.263,0.3428])}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("SharkDeath_explode03-ROT-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFRotation([-0.99999,0.000493995,-0.00441496,4.174,-0.99999,0.000493995,-0.00441496,4.174,-0.985139,0.109404,0.132405,4.044,-0.943824,0.208205,0.256607,3.892])}),

                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode03-SCALE-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([0.004872,0.004872,0.004872,0.004872,0.004872,0.004872,0.002364,0.002364,0.002364,0.0001437,0.0001437,0.0001437])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode03-FACES"),
                                          coordIndex : new MFInt32([0,2,1,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode03-COORD"),
                                              point : new MFVec3f([29.53,18.3,-33.92,34.67,186.3,-38.64,-35.03,186.3,-38.64])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode04-ROOT"),
                                  translation : new SFVec3f([-0.1079,0.03875,-0.1554]),
                                  rotation : new SFRotation([-0.99999,0.000493995,-0.00441496,4.174]),
                                  scale : new SFVec3f([0.004288,0.004288,0.004288]),
                                  scaleOrientation : new SFRotation([-0.098672,0,0.99512,0.369]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode04-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([-0.1079,0.03875,-0.1554,-0.1079,0.03875,-0.1554,-0.4529,0.3377,-0.1004,-0.7978,0.6366,-0.04533])}),

                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode04-SCALE-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([0.004288,0.004288,0.004288,0.004288,0.004288,0.004288,0.003688,0.003688,0.003688,0.003088,0.003088,0.003088])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode04-FACES"),
                                          coordIndex : new MFInt32([0,1,2,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode04-COORD"),
                                              point : new MFVec3f([-29.54,18.3,-33.92,-59.07,11.28,0,-75.37,183.2,0.2692])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode05-ROOT"),
                                  translation : new SFVec3f([0.04049,0.01028,-0.3648]),
                                  rotation : new SFRotation([-0.99999,0.000493995,-0.00441496,4.174]),
                                  scale : new SFVec3f([0.008663,0.008663,0.008663]),
                                  scaleOrientation : new SFRotation([0.999889,-0.0148998,0,0.7854]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode05-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([0.04049,0.01028,-0.3648,0.04049,0.01028,-0.3648,-0.08023,0.5155,-0.3648,-0.201,1.021,-0.3648])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode05-FACES"),
                                          coordIndex : new MFInt32([0,1,2,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode05-COORD"),
                                              point : new MFVec3f([15.62,-19.32,-23.37,-16.02,-19.32,-23.37,-29.54,18.3,-33.92])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode06-ROOT"),
                                  translation : new SFVec3f([-0.02379,0.1379,-0.3297]),
                                  rotation : new SFRotation([-0.99999,0.000493995,-0.00441496,4.174]),
                                  scale : new SFVec3f([0.006188,0.006188,0.006188]),
                                  scaleOrientation : new SFRotation([-0.176294,0.0335388,-0.983766,0.797]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode06-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([-0.02379,0.1379,-0.3297,-0.02379,0.1379,-0.3297,0.2675,0.5166,-0.3297,0.5589,0.8954,-0.3297])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode06-FACES"),
                                          coordIndex : new MFInt32([0,2,1,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode06-COORD"),
                                              point : new MFVec3f([38.19,-45.09,-0.4825,59.07,11.28,0,29.53,18.3,-33.92])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode07-ROOT"),
                                  translation : new SFVec3f([0.006222,0.1048,-0.3297]),
                                  rotation : new SFRotation([-0.99999,0.000493995,-0.00441496,4.174]),
                                  scale : new SFVec3f([0.006188,0.006188,0.006188]),
                                  scaleOrientation : new SFRotation([-0.176294,0.0335388,-0.983766,0.797]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode07-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([0.006222,0.1048,-0.3297,0.006222,0.1048,-0.3297,0.3083,0.5231,-0.3297,0.6104,0.9414,-0.3297])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode07-FACES"),
                                          coordIndex : new MFInt32([0,2,1,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode07-COORD"),
                                              point : new MFVec3f([0,-89.63,0,38.19,-45.09,-0.4825,15.62,-19.32,-23.37])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode08-ROOT"),
                                  translation : new SFVec3f([-0.002922,0.1146,-0.3297]),
                                  rotation : new SFRotation([-0.99999,0.000493995,-0.00441496,4.174]),
                                  scale : new SFVec3f([0.006188,0.006188,0.006188]),
                                  scaleOrientation : new SFRotation([-0.176294,0.0335388,-0.983766,0.797]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode08-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([-0.002922,0.1146,-0.3297,-0.002922,0.1146,-0.3297,-0.2865,0.5781,-0.3297,-0.5701,1.042,-0.3297])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode08-FACES"),
                                          coordIndex : new MFInt32([0,2,1,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode08-COORD"),
                                              point : new MFVec3f([0,-89.63,0,-16.02,-19.32,-23.37,-37.67,-45.09,-0.4825])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode09-ROOT"),
                                  translation : new SFVec3f([-0.009646,0.1135,-0.3297]),
                                  rotation : new SFRotation([-0.99999,0.000493995,-0.00441496,4.174]),
                                  scale : new SFVec3f([0.006188,0.006188,0.006188]),
                                  scaleOrientation : new SFRotation([-0.176294,0.0335388,-0.983766,0.797]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode09-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([-0.009646,0.1135,-0.3297,-0.009646,0.1135,-0.3297,0.02514,0.574,-0.3297,0.05992,1.034,-0.3297])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode09-FACES"),
                                          coordIndex : new MFInt32([0,2,1,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode09-COORD"),
                                              point : new MFVec3f([0,-89.63,0,15.62,-19.32,-23.37,-16.02,-19.32,-23.37])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode10-ROOT"),
                                  translation : new SFVec3f([-0.01117,0.1097,-0.3297]),
                                  rotation : new SFRotation([-0.99999,0.000493995,-0.00441496,4.174]),
                                  scale : new SFVec3f([0.006188,0.006188,0.006188]),
                                  scaleOrientation : new SFRotation([-0.176294,0.0335388,-0.983766,0.797]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode10-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([-0.01117,0.1097,-0.3297,-0.01117,0.1097,-0.3297,-0.2838,0.4991,-0.3297,-0.5564,0.8885,-0.3297])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode10-FACES"),
                                          coordIndex : new MFInt32([0,1,2,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode10-COORD"),
                                              point : new MFVec3f([-16.02,-19.32,-23.37,-37.67,-45.09,-0.4825,-59.07,11.28,0])}))}))})])}),

                                new Transform({
                                  DEF : new SFString("SharkDeath_explode11-ROOT"),
                                  translation : new SFVec3f([0.01048,0.1126,-0.3297]),
                                  rotation : new SFRotation([-0.99999,0.000493995,-0.00441496,4.174]),
                                  scale : new SFVec3f([0.006188,0.006188,0.006188]),
                                  scaleOrientation : new SFRotation([-0.176294,0.0335388,-0.983766,0.797]),
                                  children : new MFNode([
                                    new PositionInterpolator({
                                      DEF : new SFString("SharkDeath_explode11-POS-INTERP"),
                                      key : new MFFloat([0,0.3867,0.4,0.4133]),
                                      keyValue : new MFVec3f([0.01048,0.1126,-0.3297,0.01048,0.1126,-0.3297,0.3472,0.398,-0.3297,0.684,0.6834,-0.3297])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0.2353,0.2353,0.2353]),
                                              shininess : new SFFloat(0.25)}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("SharkDeath_explode11-FACES"),
                                          coordIndex : new MFInt32([0,1,2,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              DEF : new SFString("SharkDeath_explode11-COORD"),
                                              point : new MFVec3f([59.07,11.28,0,29.53,18.3,-33.92,34.67,186.3,-38.64])}))}))})])})])}),

                            new Transform({
                              DEF : new SFString("Inline_fishswim-ROOT"),
                              translation : new SFVec3f([-0.02236,-0.6315,-0.8669]),
                              rotation : new SFRotation([0,-0.965929,-0.258808,3.142]),
                              scale : new SFVec3f([0.1238,0.1238,0.1238]),
                              scaleOrientation : new SFRotation([-0.240894,-0.763981,-0.598585,0.113899]),
                              children : new MFNode([
                                new TimeSensor({
                                  DEF : new SFString("Inline_fishswim-TIMER"),
                                  cycleInterval : new SFTime(15)}),

                                new PositionInterpolator({
                                  DEF : new SFString("Inline_fishswim-POS-INTERP"),
                                  key : new MFFloat([0,0.36,0.3733,0.3867,0.4,0.4133,0.4267,0.44,0.4533,0.4667,0.48,0.4933,0.5067,0.52,0.5333,0.5467,0.56,0.5733,0.5867,0.6,0.6133,0.6267,0.64,0.6533,0.6667,0.68,0.6933,0.7067,0.72,0.7333,0.7467,0.76,0.7733,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1]),
                                  keyValue : new MFVec3f([-0.02236,-0.6315,-0.8669,-0.02236,-0.6315,-0.8669,-0.03172,-0.5782,-0.9776,-0.02413,-0.5193,-1.097,0.01141,-0.452,-1.231,0.04188,-0.3847,-1.364,0.01603,-0.3309,-1.47,-0.0004942,-0.2725,-1.589,0.0637,-0.1885,-1.783,0.1401,-0.1018,-1.967,0.1695,-0.03244,-2.04,0.1668,0.02534,-2.023,0.1427,0.07361,-1.948,0.1081,0.1145,-1.845,0.0737,0.1499,-1.748,0.05022,0.1822,-1.69,0.03484,0.2085,-1.666,0.01801,0.2257,-1.652,0.0003233,0.2354,-1.647,-0.01759,0.2388,-1.648,-0.03511,0.2373,-1.655,-0.05163,0.2322,-1.665,-0.06653,0.225,-1.677,-0.07919,0.217,-1.689,-0.089,0.2096,-1.7,-0.09534,0.2042,-1.707,-0.09759,0.2021,-1.71,-0.09414,0.2021,-1.708,-0.08552,0.2021,-1.704,-0.07431,0.2021,-1.698,-0.06311,0.2021,-1.692,-0.05449,0.2021,-1.687,-0.05104,0.2021,-1.685,-0.05356,0.1989,-1.679,-0.06107,0.1894,-1.661,-0.07347,0.1739,-1.63,-0.09068,0.1526,-1.589,-0.1126,0.1257,-1.537,-0.1391,0.09354,-1.475,-0.1702,0.05628,-1.404,-0.2057,0.01418,-1.323,-0.2456,-0.03252,-1.234,-0.2897,-0.08359,-1.137,-0.338,-0.1388,-1.032,-0.3903,-0.1979,-0.9198,-0.4467,-0.2606,-0.8014,-0.5069,-0.3268,-0.6769,-0.571,-0.3961,-0.547,-0.6387,-0.4684,-0.4121,-0.7101,-0.5434,-0.2727])}),

                                new OrientationInterpolator({
                                  DEF : new SFString("Inline_fishswim-ROT-INTERP"),
                                  key : new MFFloat([0,0.36,0.3733,0.3867,0.4,0.4133,0.4267,0.44,0.4533,0.4667,0.48,0.4933,0.5067,0.52,0.5333,0.5467,0.56,0.5733,0.5867,0.6,0.6133,0.6267,0.64,0.6533,0.6667,0.68,0.6933,0.7067,0.72,0.7333,0.7467,0.76,0.7733,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1]),
                                  keyValue : new MFRotation([0,-0.965929,-0.258808,3.142,0,-0.965929,-0.258808,3.142,0.0044542,-0.851138,-0.524923,3.078,-0.0149201,0.678005,0.734906,3.353,-0.0268292,0.451886,0.891672,3.519,-0.0355304,0.173402,0.98421,3.637,-0.0370716,-0.141506,0.989243,3.658,-0.0299285,-0.454477,0.890255,3.562,-0.0161206,-0.720828,0.692927,3.37,0,-0.909965,0.414684,3.142,0.0261693,-0.883877,0.466988,2.783,0.0719675,-0.853571,0.515982,2.22,0.145901,-0.825508,0.545205,1.562,0.289898,-0.793695,0.534797,0.9193,0.648467,-0.662367,0.375181,0.4311,0.993662,-0.0487281,-0.101296,0.2808,0.864109,0.399904,-0.305603,0.3186,0.720988,0.57609,-0.385093,0.3746,0.646913,0.635612,-0.421308,0.4089,0.622901,0.644301,-0.443701,0.4159,0.634714,0.620613,-0.46041,0.4001,0.675089,0.566491,-0.472592,0.3693,0.737495,0.477996,-0.477096,0.3325,0.809589,0.354195,-0.468094,0.2985,0.871798,0.211199,-0.441999,0.274,0.90905,0.0905749,-0.406723,0.2608,0.923058,0.043598,-0.382183,0.2563,0.92601,0.0466705,-0.374604,0.2557,0.946623,0.0688317,-0.314908,0.2533,0.984594,0.113399,-0.133099,0.2547,0.993376,0.104397,0.0480188,0.2684,0.992771,0.0511185,0.108597,0.2792,0.992865,0.0235492,0.116896,0.2828,0.992866,0.0164294,0.118096,0.2837,0.992604,-0.00492202,0.1213,0.2863,0.991218,-0.0404507,0.125902,0.291,0.987349,-0.0897645,0.130707,0.2983,0.97923,-0.151805,0.134404,0.3088,0.965042,-0.22441,0.135406,0.3235,0.943302,-0.304301,0.1326,0.3434,0.913488,-0.386995,0.125598,0.3695,0.876874,-0.466886,0.114497,0.4026,0.83878,-0.534888,0.101698,0.4396,0.801628,-0.591221,0.0886031,0.4797,0.766688,-0.63749,0.0761388,0.5221,0.734643,-0.67534,0.0649238,0.5663,0.705725,-0.706325,0.055292,0.6115,0.679934,-0.731736,0.0474623,0.6573,0.657291,-0.75249,0.0415594,0.703,0.637514,-0.769517,0.0376609,0.7482])}),

                                new Inline({
                                  url : new MFString(["fishswim.x3d"])})])}),

                            new Transform({
                              DEF : new SFString("burp-ROOT"),
                              translation : new SFVec3f([-0.09553,-10.3051,-1.28]),
                              rotation : new SFRotation([1,0,0,1.571]),
                              children : new MFNode([
                                new TimeSensor({
                                  DEF : new SFString("burp-TIMER"),
                                  cycleInterval : new SFTime(15)}),

                                new PositionInterpolator({
                                  DEF : new SFString("burp-POS-INTERP"),
                                  key : new MFFloat([0,0.01333,0.02667,0.04,0.05333,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28]),
                                  keyValue : new MFVec3f([-0.09553,-10.3051,-1.28,-0.08801,-0.3051,-1.28,-0.0803,-0.2393,-1.28,-0.08052,-0.156,-1.28,-0.1039,-0.1078,-1.28,-0.1264,-0.06574,-1.28,-0.119,-0.01489,-1.28,-0.112,0.03499,-1.28,-0.1388,0.07693,-1.28,-0.1615,0.1175,-1.28,-0.1386,0.1606,-1.28,-0.1143,0.2069,-1.28,-0.1326,0.2585,-1.28,-0.1535,0.3143,-1.28,-0.1401,0.3757,-1.28,-0.1276,0.4379,-1.28,-0.1525,0.4961,-1.28,-0.1739,0.5516,-1.28,-0.1464,0.6022,-1.28,-0.1195,0.6542,-1.28,-0.1321,0.714,-1.28,-0.1712,0.7796,-1.28])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.4745,0.6784,0.7961]),
                                          emissiveColor : new SFColor([0.1,0.1,0.1]),
                                          shininess : new SFFloat(0.25)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("burp-FACES"),
                                      creaseAngle : new SFFloat(3),
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("burp-COORD"),
                                          point : new MFVec3f([0,0.03649,0,0,0.002896,-0.01732,-0.015,0.002896,-0.00866,-0.015,0.002896,0.00866,0,0.002896,0.01732,0.015,0.002896,0.00866,0.015,0.002896,-0.00866])}))}))})])}),

                            new Transform({
                              DEF : new SFString("fish_burp-ROOT"),
                              translation : new SFVec3f([-0.05316,1.028,-1.539]),
                              rotation : new SFRotation([0.999799,0.01741,0.00989699,1.991]),
                              scale : new SFVec3f([1.24,1.24,1.24]),
                              scaleOrientation : new SFRotation([0.358393,-0.0232395,0.933282,0.58]),
                              children : new MFNode([
                                new TimeSensor({
                                  DEF : new SFString("fish_burp-TIMER"),
                                  cycleInterval : new SFTime(15)}),

                                new PositionInterpolator({
                                  DEF : new SFString("fish_burp-POS-INTERP"),
                                  key : new MFFloat([0,0.7732,0.7733,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1]),
                                  keyValue : new MFVec3f([-0.05316,1.028,-1.539,-0.05316,1.028,-1.539,-0.05316,0.1777,-1.539,-0.02811,0.2511,-1.539,-0.01774,0.3112,-1.539,-0.03321,0.3522,-1.539,-0.06465,0.3798,-1.539,-0.08247,0.4118,-1.539,-0.06718,0.4562,-1.539,-0.03827,0.5048,-1.539,-0.02458,0.5506,-1.539,-0.0474,0.5896,-1.539,-0.08545,0.6256,-1.539,-0.1037,0.6634,-1.539,-0.07577,0.7016,-1.539,-0.02804,0.7414,-1.539,-0.00471,0.7913,-1.539,-0.02052,0.8543,-1.539,-0.06074,0.9273,-1.539,-0.1254,1.01,-1.539])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.4745,0.6784,0.7961]),
                                          emissiveColor : new SFColor([0.1,0.1,0.1]),
                                          shininess : new SFFloat(0.25)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("fish_burp-FACES"),
                                      creaseAngle : new SFFloat(3),
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("fish_burp-COORD"),
                                          point : new MFVec3f([0,0.03649,0,0,0.002896,-0.01732,-0.015,0.002896,-0.00866,-0.015,0.002896,0.00866,0,0.002896,0.01732,0.015,0.002896,0.00866,0.015,0.002896,-0.00866])}))}))})])}),

                            new Transform({
                              DEF : new SFString("fish_burp02-ROOT"),
                              translation : new SFVec3f([-0.04055,1.031,-1.526]),
                              rotation : new SFRotation([0.999799,0.01741,0.00989699,1.991]),
                              scale : new SFVec3f([0.6944,0.6944,0.6944]),
                              scaleOrientation : new SFRotation([0.995277,0.089008,0.0387391,0.3357]),
                              children : new MFNode([
                                new TimeSensor({
                                  DEF : new SFString("fish_burp02-TIMER"),
                                  cycleInterval : new SFTime(15)}),

                                new PositionInterpolator({
                                  DEF : new SFString("fish_burp02-POS-INTERP"),
                                  key : new MFFloat([0,0.7867,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1]),
                                  keyValue : new MFVec3f([-0.04055,1.031,-1.526,-0.04055,1.031,-1.526,-0.04185,0.1809,-1.526,-0.0155,0.2542,-1.526,-0.005125,0.3143,-1.526,-0.02059,0.3553,-1.526,-0.05204,0.383,-1.526,-0.06986,0.4149,-1.526,-0.05457,0.4593,-1.526,-0.02566,0.508,-1.526,-0.01197,0.5537,-1.526,-0.03479,0.5927,-1.526,-0.07284,0.6288,-1.526,-0.0911,0.6665,-1.526,-0.05885,0.6992,-1.526,-0.006807,0.7334,-1.526,0.007901,0.7945,-1.526,-0.03376,0.8907,-1.526,-0.1128,1.014,-1.526])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.4745,0.6784,0.7961]),
                                          emissiveColor : new SFColor([0.1,0.1,0.1]),
                                          shininess : new SFFloat(0.25)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("fish_burp02-FACES"),
                                      creaseAngle : new SFFloat(3),
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("fish_burp02-COORD"),
                                          point : new MFVec3f([0,0.03649,0,0,0.002896,-0.01732,-0.015,0.002896,-0.00866,-0.015,0.002896,0.00866,0,0.002896,0.01732,0.015,0.002896,0.00866,0.015,0.002896,-0.00866])}))}))})])})])})])}))})])}),

            new ProximitySensor({
              DEF : new SFString("WorldProx"),
              size : new SFVec3f([10000,10000,10000])}),

            new Script({
              DEF : new SFString("SharkSwim"),
              mustEvaluate : new SFBool(true),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("position_changed"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("time"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("eatingSeagull"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("eatingSittingSeagull"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("eatingFishSwim"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("eatingFish"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("eatingSurfer"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("eatingSurfer2"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("eatingTuber"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("eatingTuber2"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("doneEating"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("killObject"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("testEnd"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("animating"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("eating"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("position"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("oldTime"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("0.601192")}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("timeDelta"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("0.0121604")}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("eatingWhichObject"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("numEatenObjects"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("seagullSwitcher"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("sittingSeagullSwitcher"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("fishSwimSwitcher"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("fishSwitcher"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("surferSwitcher"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("surfer2Switcher"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("tuberSwitcher"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("tuber2Switcher"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("animation_timer"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("playChompSound"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("killTrigger"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:
		, function testEnd(input){
			if (numEatenObjects == 8) {
				killTrigger = 1;
			}
		}	
		, function doneEating(done){
			if(done == FALSE){
			 eating=FALSE;
			}
		}
		, function killObject(i, time) {
			if (i==FALSE) {
				playChompSound = time;
				if (eatingWhichObject == 1) {numEatenObjects = numEatenObjects + 1; seagullSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score3'));Browser.loadURL(new MFString('chomp3.htm'), new MFString('target=helpertext'));*/return;}
				if (eatingWhichObject == 2) {numEatenObjects = numEatenObjects + 1; sittingSeagullSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score1'));Browser.loadURL(new MFString('chomp1.htm'), new MFString('target=helpertext'));*/return;}
				if (eatingWhichObject == 3) {numEatenObjects = numEatenObjects + 1; fishSwimSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score2'));Browser.loadURL(new MFString('chomp2.htm'), new MFString('target=helpertext'));*/return;}
				if (eatingWhichObject == 4) {numEatenObjects = numEatenObjects + 1; fishSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score4'));Browser.loadURL(new MFString('chomp4.htm'), new MFString('target=helpertext'));*/return;}
				if (eatingWhichObject == 5) {numEatenObjects = numEatenObjects + 1; surferSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score5'));Browser.loadURL(new MFString('chomp5.htm'), new MFString('target=helpertext'));*/return;}
				if (eatingWhichObject == 6) {numEatenObjects = numEatenObjects + 1; surfer2Switcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score7'));Browser.loadURL(new MFString('chomp7.htm'), new MFString('target=helpertext'));*/return;}				
				if (eatingWhichObject == 7) {numEatenObjects = numEatenObjects + 1; tuberSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score6'));Browser.loadURL(new MFString('chomp6.htm'), new MFString('target=helpertext'));*/return;}
				if (eatingWhichObject == 8) {numEatenObjects = numEatenObjects + 1; tuber2Switcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score8'));Browser.loadURL(new MFString('chomp8.htm'), new MFString('target=helpertext'));*/return;}
			}
		}
		, function eatingSeagull() {
			eatingWhichObject = 1;
			eating = TRUE;
		}
		, function eatingSittingSeagull() {
			eatingWhichObject = 2;
			eating = TRUE;
		}
		, function eatingFishSwim() {
			eatingWhichObject = 3;
			eating = TRUE;
		}
		, function eatingFish() {
			eatingWhichObject = 4;
			eating = TRUE;
		}
		, function eatingSurfer() {
			eatingWhichObject = 5;
			eating = TRUE;
		}
		, function eatingSurfer2() {
			eatingWhichObject = 6;
			eating = TRUE;
		}
		, function eatingTuber() {
			eatingWhichObject = 7;
			eating = TRUE;
		}
		, function eatingTuber2() {
			eatingWhichObject = 8;
			eating = TRUE;
		}
		, function position_changed(pos, time) {
			if (eating == FALSE) {
				animating = TRUE;
				animation_timer = (animation_timer + timeDelta) % 1.01;
			}
		}
		, function time(currentTime) {
			timeDelta = currentTime - oldTime;
			oldTime = currentTime;
			if (timeDelta < 0.0){timeDelta += 1.0;}
			if (animating == TRUE || eating == TRUE) {
				animating = FALSE;
				return;
			}
			if (animation_timer > .99) {
				animation_timer = 1.0
			} else {
				animation_timer = animation_timer + (1.3 - animation_timer) * timeDelta;
			}
		})}),

            new TimeSensor({
              DEF : new SFString("FadeTimer"),
              cycleInterval : new SFTime(3)}),

            new ScalarInterpolator({
              DEF : new SFString("FadeInterp"),
              key : new MFFloat([0,1]),
              keyValue : new MFFloat([50,0.01])}),

            new ColorInterpolator({
              DEF : new SFString("FadeColorInterp"),
              key : new MFFloat([0,1]),
              keyValue : new MFColor([0.007843,0.3922,0.6157,0,0,0])}),

            new Script({
              DEF : new SFString("TextDisplay"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("endVisible"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("seagullVisible"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("sittingSeagullVisible"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("fishVisible"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("fishSwimVisible"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("surferVisible"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("surfer2Visible"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("tuberVisible"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("tuber2Visible"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("skeletonVisible"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichVisible"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("4")}),
              ]),javascript:
		, function endVisible() {
			whichVisible = 0;
		}
		, function skeletonVisible() {
		if (whichVisible != 9) {
			whichVisible = 9;
			//Browser.loadURL(new MFString('text9.htm'), new MFString('target=helpertext'));
		}
		}
		, function seagullVisible() {
		if (whichVisible != 1) {
			whichVisible = 1;
			//Browser.loadURL(new MFString('text3.htm'), new MFString('target=helpertext'));
		}
		}
		, function sittingSeagullVisible() {
		if (whichVisible != 2) {
			whichVisible = 2;
			//Browser.loadURL(new MFString('text1.htm'), new MFString('target=helpertext'));
		}
		}
		, function fishVisible() {
			if (whichVisible != 3) {
			whichVisible = 3;
			//Browser.loadURL(new MFString('text4.htm'), new MFString('target=helpertext'));
			}
		}
		, function fishSwimVisible() {
		if (whichVisible != 4) {
			whichVisible = 4;
			//Browser.loadURL(new MFString('text2.htm'), new MFString('target=helpertext'));
		}
		}
		, function surferVisible() {
		if (whichVisible != 5) {
			whichVisible = 5;
			//Browser.loadURL(new MFString('text5.htm'), new MFString('target=helpertext'));
		}
		}
		, function surfer2Visible() {
		if (whichVisible != 6) {
			whichVisible = 6;
			//Browser.loadURL(new MFString('text7.htm'), new MFString('target=helpertext'));
		}
		}
		, function tuberVisible() {
		if (whichVisible != 7) {
			whichVisible = 7;
			//Browser.loadURL(new MFString('text6.htm'), new MFString('target=helpertext'));
		}
		}
		, function tuber2Visible() {
		if (whichVisible != 8) {
			whichVisible = 8;
			//Browser.loadURL(new MFString('text8.htm'), new MFString('target=helpertext'));
		}})}),

            new Script({
              DEF : new SFString("BoomScript"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("startBoom"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("playBoom"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:
		, function startBoom(boom, time){
			if (boom == FALSE) {
				playBoom = time;
			}
		})}),

            new Script({
              DEF : new SFString("KillShark"),
              mustEvaluate : new SFBool(true),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("canyonEnd"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("Kill"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("deathAnimation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("inputSkyColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("fadeDone"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("fishBurp"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("readyToKill"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("beenToEnd"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("true")}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startDeath"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("sharkSwitcher"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startFade"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFCOLOR,
                  name : new SFString("outputSkyColor"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("navInfoControl"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("burp"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:
		, function fishBurp(input, time) {
			if(!input) {
				burp = time;
			}
		}
		, function fadeDone(input) {
			if (input == FALSE) {
				//Browser.loadURL(new MFString('end.htm'), new MFString('target=_parent'));
			}
		}
		, function Kill(input, time) {
			readyToKill = input;
			if (beenToEnd == TRUE) {
				//Browser.loadURL(new MFString('whoa.htm'), new MFString('target=helpertext'));
				startDeath = time;
				sharkSwitcher = 0;
				navInfoControl[0] = 'NONE';
			}
		}
		, function canyonEnd(input, t) {
			if (input == TRUE && readyToKill == 1) {
				//Browser.loadURL(new MFString('whoa.htm'), new MFString('target=helpertext'));
				startDeath = t;
				sharkSwitcher = 0;
				navInfoControl[0] = 'NONE';
			} else {
				//Browser.loadURL(new MFString('noend.htm'), new MFString('target=helpertext'));
				beenToEnd = TRUE;
			}
		}
		, function deathAnimation(input, t) {
			if (input == FALSE) {
				startFade = t;
				sharkSwitcher = -1;
			}
		}
		, function inputSkyColor(input) {
			outputSkyColor[0] = input;
		})}),

            new Script({
              DEF : new SFString("JumpToEnd"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("eyeClick"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("eyeClick2"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("LClick"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("RClick"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("endGame"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("endGame2"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),javascript:
		, function eyeClick() {
			if (LClick == TRUE) {
				endGame = 1;
				endGame2 = TRUE;
			}				
			RClick = TRUE;
		}
		, function eyeClick2() {
			if (RClick == TRUE) {
				endGame = 1;
				endGame2 = TRUE;
			}				
			LClick = TRUE;
		})}),

            new ROUTE({
              fromNode : new SFString("BubbleTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BubbleScript"),
              toField : new SFString("inputFraction")}),

            new ROUTE({
              fromNode : new SFString("BubbleScript"),
              fromField : new SFString("playSound"),
              toNode : new SFString("bubbleSound"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("BubbleScript"),
              fromField : new SFString("playSound"),
              toNode : new SFString("bubbleSound"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("BubbleScript"),
              fromField : new SFString("playSound2"),
              toNode : new SFString("bubbleSound2"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("BubbleScript"),
              fromField : new SFString("playSound2"),
              toNode : new SFString("bubbleSound2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("EatTimer"),
              fromField : new SFString("startTime_changed"),
              toNode : new SFString("KillTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("EatSeagull"),
              fromField : new SFString("isActive"),
              toNode : new SFString("EatSeagull"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Gullswim-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_gullswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Gullswim-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Inline_Gullswim-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Gullswim-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Gullswim-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Gullswim-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("EatFishSwim"),
              fromField : new SFString("isActive"),
              toNode : new SFString("EatFishSwim"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Fishswim-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Fishswim-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Inline_Fishswim-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Fishswim-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Fishswim-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Fishswim-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Fishbott-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Fishbott-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishbott-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Fishbott-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Inline_Fishbott-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Fishbott-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Fishbott-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Fishbott-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("EatSurfer"),
              fromField : new SFString("isActive"),
              toNode : new SFString("SurferCollide"),
              toField : new SFString("beingEaten")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("avoidEnabled"),
              toNode : new SFString("ScareSurfer"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("startFloating"),
              toNode : new SFString("TimeSensor_SurferFloat-TIMER"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("stopFloating"),
              toNode : new SFString("TimeSensor_SurferFloat-TIMER"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_SurferFloat-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SurferFloat__Boolean-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferFloat__Boolean-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer__Boolean-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_Board-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Board-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_Board-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_Board-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Board-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_Board-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_Leg_R-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Leg_R-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_Leg_R-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_Leg_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Leg_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_Leg_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_Foot_R-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Foot_R-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_Foot_R-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_Foot_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Foot_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_Foot_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_R_Toe02-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_R_Toe02-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_R_Toe02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_R_Toe03-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_R_Toe03-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_R_Toe03-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_R_Toe01-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_R_Toe01-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_R_Toe01-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_Leg_L-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Leg_L-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_Leg_L-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_Leg_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Leg_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_Leg_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_Foot_L-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Foot_L-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_Foot_L-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferAv_Foot_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Foot_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Surfer__Boolean-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer__Boolean-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer__Boolean-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer_Leg_R-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Leg_R-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer_Leg_R-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer_Leg_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Leg_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer_Leg_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer_Heel_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Heel_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer_Heel_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer_R_Toe01-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_R_Toe01-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer_R_Toe01-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer_R_Toe02-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_R_Toe02-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer_R_Toe02-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer_R_Toe03-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_R_Toe03-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer_R_Toe03-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer_Leg_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Leg_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer_Leg_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer_Heel_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_Heel_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer_Heel_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer_L_Toe01-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_L_Toe01-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer_L_Toe01-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer_L_Toe02-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_L_Toe02-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer_L_Toe02-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer_L_Toe03-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer_L_Toe03-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer_L_Toe03-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("SurferAv_Foot_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("eatEnabled"),
              toNode : new SFString("EatSurfer"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("ScareSurfer"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("SurferCollide"),
              toField : new SFString("runAway")}),

            new ROUTE({
              fromNode : new SFString("ScareSurfer"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("SurferCollide"),
              toField : new SFString("allSafe")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("startAnim"),
              toNode : new SFString("TimeSensor_Surfer_Av01-TIMER"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("playOops"),
              toNode : new SFString("oopsSound"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("playOops"),
              toNode : new SFString("oopsSound"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("stopAnimLoop"),
              toNode : new SFString("TimeSensor_Surfer-TIMER"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("SurferCollide"),
              fromField : new SFString("startAnimLoop"),
              toNode : new SFString("TimeSensor_Surfer-TIMER"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer_Av01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SurferCollide"),
              toField : new SFString("inputFraction")}),

            new ROUTE({
              fromNode : new SFString("EatSurfer2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Surfer2Collide"),
              toField : new SFString("beingEaten")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("avoidEnabled"),
              toNode : new SFString("ScareSurfer2"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("startFloating"),
              toNode : new SFString("TimeSensor_Surfer2Float-TIMER"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("stopFloating"),
              toNode : new SFString("TimeSensor_Surfer2Float-TIMER"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2Float-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2Float__Boolean-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Float__Boolean-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2__Boolean-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_Board-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Board-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_Board-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_Board-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Board-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_Board-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_Leg_R-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Leg_R-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_Leg_R-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_Leg_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Leg_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_Leg_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_Foot_R-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Foot_R-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_Foot_R-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_Foot_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Foot_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_Foot_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_R_Toe02-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_R_Toe02-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_R_Toe02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_R_Toe03-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_R_Toe03-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_R_Toe03-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_R_Toe01-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_R_Toe01-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_R_Toe01-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_Leg_L-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Leg_L-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_Leg_L-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_Leg_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Leg_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_Leg_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_Foot_L-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Foot_L-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_Foot_L-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Av_Foot_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Foot_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Surfer2__Boolean-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2__Boolean-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2__Boolean-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2_Leg_R-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Leg_R-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2_Leg_R-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2_Leg_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Leg_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2_Leg_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2_Heel_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Heel_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2_Heel_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2_R_Toe01-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_R_Toe01-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2_R_Toe01-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2_R_Toe02-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_R_Toe02-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2_R_Toe02-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2_R_Toe03-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_R_Toe03-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2_R_Toe03-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2_Leg_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Leg_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2_Leg_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2_Heel_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_Heel_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2_Heel_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2_L_Toe01-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_L_Toe01-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2_L_Toe01-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2_L_Toe02-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_L_Toe02-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2_L_Toe02-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2_L_Toe03-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Surfer2_L_Toe03-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2_L_Toe03-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("outputFraction"),
              toNode : new SFString("Surfer2Av_Foot_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("eatEnabled"),
              toNode : new SFString("EatSurfer2"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("ScareSurfer2"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Surfer2Collide"),
              toField : new SFString("runAway")}),

            new ROUTE({
              fromNode : new SFString("ScareSurfer2"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("Surfer2Collide"),
              toField : new SFString("allSafe")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("startAnim"),
              toNode : new SFString("TimeSensor_Surfer2_Av01-TIMER"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("playOops"),
              toNode : new SFString("oopsSound"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("stopAnimLoop"),
              toNode : new SFString("TimeSensor_Surfer2-TIMER"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Surfer2Collide"),
              fromField : new SFString("startAnimLoop"),
              toNode : new SFString("TimeSensor_Surfer2-TIMER"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Surfer2_Av01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Surfer2Collide"),
              toField : new SFString("inputFraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_Innertube-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Mapper"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_InnertubeFast-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Mapper"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Mapper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_L_leg-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_leg-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Mapper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_leg-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_L_leg-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_leg-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Mapper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_leg-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_L_flipper-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_flipper-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Mapper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_flipper-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_L_flipper-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_flipper-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Mapper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_flipper-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_R_leg-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_leg-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Mapper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_leg-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_R_leg-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_leg-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Mapper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_leg-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_R_flipper-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_flipper-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Mapper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_flipper-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_R_flipper-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_flipper-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Mapper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_R_flipper-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_Dummy-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_Dummy-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Mapper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_Dummy-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Innertube_L_butt-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_butt-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Mapper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Innertube_L_butt-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide"),
              fromField : new SFString("kickStart"),
              toNode : new SFString("TimeSensor_Innertube-TIMER"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide"),
              fromField : new SFString("kickSlower"),
              toNode : new SFString("TimeSensor_Innertube-TIMER"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide"),
              fromField : new SFString("kickFaster"),
              toNode : new SFString("TimeSensor_InnertubeFast-TIMER"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide"),
              fromField : new SFString("enableRun"),
              toNode : new SFString("ScareTuber"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("EatTuber"),
              fromField : new SFString("isActive"),
              toNode : new SFString("TubeCollide"),
              toField : new SFString("beingEaten")}),

            new ROUTE({
              fromNode : new SFString("ScareTuber"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TubeCollide"),
              toField : new SFString("runAway")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide"),
              fromField : new SFString("enableHit"),
              toNode : new SFString("EatTuber"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide"),
              fromField : new SFString("tubeRun"),
              toNode : new SFString("TuberRun"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide"),
              fromField : new SFString("tubeRun2"),
              toNode : new SFString("TuberRun2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide"),
              fromField : new SFString("tubeRun"),
              toNode : new SFString("oopsSound"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide"),
              fromField : new SFString("tubeRun2"),
              toNode : new SFString("oopsSound"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("TuberRun"),
              fromField : new SFString("isActive"),
              toNode : new SFString("TubeCollide"),
              toField : new SFString("finishedRunning")}),

            new ROUTE({
              fromNode : new SFString("TuberRun2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("TubeCollide"),
              toField : new SFString("finishedRunning2")}),

            new ROUTE({
              fromNode : new SFString("TuberRun"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Tube01_avoid01-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TuberRun"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Tube01_avoid01-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TuberRun2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Tube01_avoid02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TuberRun2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Tube01_avoid02-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube01_avoid01-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Tube01-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube01_avoid01-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Tube01-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube01_avoid02-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Tube01-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube01_avoid02-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Tube01-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube01_avoid01-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("TuberCollisionMover"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube01_avoid02-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("TuberCollisionMover"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide2"),
              fromField : new SFString("enableRun"),
              toNode : new SFString("ScareTuber2"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide2"),
              fromField : new SFString("kickStart"),
              toNode : new SFString("TimeSensor_Innertube-TIMER"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide2"),
              fromField : new SFString("kickSlower"),
              toNode : new SFString("TimeSensor_Innertube-TIMER"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide2"),
              fromField : new SFString("kickFaster"),
              toNode : new SFString("TimeSensor_InnertubeFast-TIMER"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("EatTuber2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("TubeCollide2"),
              toField : new SFString("beingEaten")}),

            new ROUTE({
              fromNode : new SFString("ScareTuber2"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TubeCollide2"),
              toField : new SFString("runAway")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide2"),
              fromField : new SFString("enableHit"),
              toNode : new SFString("EatTuber2"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide2"),
              fromField : new SFString("tubeRun"),
              toNode : new SFString("oopsSound"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide2"),
              fromField : new SFString("tubeRun2"),
              toNode : new SFString("oopsSound"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide2"),
              fromField : new SFString("tubeRun"),
              toNode : new SFString("Tuber2Run"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("TubeCollide2"),
              fromField : new SFString("tubeRun2"),
              toNode : new SFString("Tuber2Run2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Tuber2Run"),
              fromField : new SFString("isActive"),
              toNode : new SFString("TubeCollide2"),
              toField : new SFString("finishedRunning")}),

            new ROUTE({
              fromNode : new SFString("Tuber2Run2"),
              fromField : new SFString("isActive"),
              toNode : new SFString("TubeCollide2"),
              toField : new SFString("finishedRunning")}),

            new ROUTE({
              fromNode : new SFString("Tuber2Run"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Tube02_avoid01-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Tuber2Run"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Tube02_avoid01-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Tuber2Run2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Tube02_avoid02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Tuber2Run2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_Tube02_avoid02-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube02_avoid01-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Tube02-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube02_avoid01-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Tube02-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube02_avoid02-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Tube02-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube02_avoid02-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_Tube02-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube02_avoid01-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Tuber2CollisionMover"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Tube02_avoid02-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Tuber2CollisionMover"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("FadeTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("FadeInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FadeTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("FadeColorInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FadeColorInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Fog01"),
              toField : new SFString("set_color")}),

            new ROUTE({
              fromNode : new SFString("FadeInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Fog01"),
              toField : new SFString("set_visibilityRange")}),

            new ROUTE({
              fromNode : new SFString("seagullVisible"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TextDisplay"),
              toField : new SFString("seagullVisible")}),

            new ROUTE({
              fromNode : new SFString("sittingSeagullVisible"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TextDisplay"),
              toField : new SFString("sittingSeagullVisible")}),

            new ROUTE({
              fromNode : new SFString("fishVisible"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TextDisplay"),
              toField : new SFString("fishVisible")}),

            new ROUTE({
              fromNode : new SFString("fishSwimVisible"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TextDisplay"),
              toField : new SFString("fishSwimVisible")}),

            new ROUTE({
              fromNode : new SFString("surferVisible"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TextDisplay"),
              toField : new SFString("surferVisible")}),

            new ROUTE({
              fromNode : new SFString("surfer2Visible"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TextDisplay"),
              toField : new SFString("surfer2Visible")}),

            new ROUTE({
              fromNode : new SFString("tuberVisible"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TextDisplay"),
              toField : new SFString("tuberVisible")}),

            new ROUTE({
              fromNode : new SFString("tuber2Visible"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TextDisplay"),
              toField : new SFString("tuber2Visible")}),

            new ROUTE({
              fromNode : new SFString("skeletonVisible"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TextDisplay"),
              toField : new SFString("skeletonVisible")}),

            new ROUTE({
              fromNode : new SFString("SeeEnd"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TextDisplay"),
              toField : new SFString("endVisible")}),

            new ROUTE({
              fromNode : new SFString("SharkBoomTimer"),
              fromField : new SFString("isActive"),
              toNode : new SFString("BoomScript"),
              toField : new SFString("startBoom")}),

            new ROUTE({
              fromNode : new SFString("BoomScript"),
              fromField : new SFString("playBoom"),
              toNode : new SFString("boomSound"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("JumpToEnd"),
              fromField : new SFString("endGame"),
              toNode : new SFString("KillShark"),
              toField : new SFString("Kill")}),

            new ROUTE({
              fromNode : new SFString("JumpToEnd"),
              fromField : new SFString("endGame2"),
              toNode : new SFString("KillShark"),
              toField : new SFString("canyonEnd")}),

            new ROUTE({
              fromNode : new SFString("eyeClick"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("JumpToEnd"),
              toField : new SFString("eyeClick")}),

            new ROUTE({
              fromNode : new SFString("eyeClick2"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("JumpToEnd"),
              toField : new SFString("eyeClick2")}),

            new ROUTE({
              fromNode : new SFString("EatTimer"),
              fromField : new SFString("isActive"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("testEnd")}),

            new ROUTE({
              fromNode : new SFString("SeeEnd"),
              fromField : new SFString("isActive"),
              toNode : new SFString("KillShark"),
              toField : new SFString("canyonEnd")}),

            new ROUTE({
              fromNode : new SFString("SharkSwim"),
              fromField : new SFString("killTrigger"),
              toNode : new SFString("KillShark"),
              toField : new SFString("Kill")}),

            new ROUTE({
              fromNode : new SFString("KillShark"),
              fromField : new SFString("startDeath"),
              toNode : new SFString("SharkDeathTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("KillShark"),
              fromField : new SFString("startDeath"),
              toNode : new SFString("SharkBoomTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("KillShark"),
              fromField : new SFString("startDeath"),
              toNode : new SFString("FishBurpTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("KillShark"),
              fromField : new SFString("startDeath"),
              toNode : new SFString("burpSound"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("KillShark"),
              fromField : new SFString("burp"),
              toNode : new SFString("burpSound"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("isActive"),
              toNode : new SFString("KillShark"),
              toField : new SFString("deathAnimation")}),

            new ROUTE({
              fromNode : new SFString("FishBurpTimer"),
              fromField : new SFString("isActive"),
              toNode : new SFString("KillShark"),
              toField : new SFString("fishBurp")}),

            new ROUTE({
              fromNode : new SFString("KillShark"),
              fromField : new SFString("startFade"),
              toNode : new SFString("FadeTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("FadeColorInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("KillShark"),
              toField : new SFString("inputSkyColor")}),

            new ROUTE({
              fromNode : new SFString("KillShark"),
              fromField : new SFString("outputSkyColor"),
              toNode : new SFString("Background01"),
              toField : new SFString("set_skyColor")}),

            new ROUTE({
              fromNode : new SFString("FadeTimer"),
              fromField : new SFString("isActive"),
              toNode : new SFString("KillShark"),
              toField : new SFString("fadeDone")}),

            new ROUTE({
              fromNode : new SFString("KillShark"),
              fromField : new SFString("navInfoControl"),
              toNode : new SFString("NavInfo01"),
              toField : new SFString("set_type")}),

            new ROUTE({
              fromNode : new SFString("WorldProx"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("SurferCollisionSpinner"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("WorldProx"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("Surfer2CollisionSpinner"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("WorldProx"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("TuberCollisionSpinner"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("WorldProx"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("Tuber2CollisionSpinner"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("WorldProx"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("SittingSeagullCollisionSpinner"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("WorldProx"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("SeagullCollisionSpinner"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Gullswim-ROOT"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("SeagullCollisionMover"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("WorldProx"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("FishSwimCollisionSpinner"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Fishswim-ROOT"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("FishSwimCollisionMover"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("WorldProx"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("FishCollisionSpinner"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Inline_Fishbott-ROOT"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("FishCollisionMover"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("WorldProx"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("position_changed")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("time")}),

            new ROUTE({
              fromNode : new SFString("WorldProx"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("SharkHead"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("WorldProx"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("SharkHead"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Shark-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Shark-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Shark-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkSwim"),
              fromField : new SFString("animation_timer"),
              toNode : new SFString("TimeSensor01-SCRIPT"),
              toField : new SFString("fractionIn")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Shark-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Shark-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Shark-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Shark-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Shark-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor02-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Shark_Gill_L01-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Shark_Gill_L01-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Gill_L01-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor02-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Shark_Gill_L03-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Shark_Gill_L03-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Gill_L03-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor02-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Shark_Gill_R02-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Shark_Gill_R02-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Gill_R02-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor02-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Shark_Gill_R01-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Shark_Gill_R01-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Gill_R01-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor02-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Shark_Gill_R03-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Shark_Gill_R03-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Gill_R03-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor02-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Shark_Gill_L02-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Shark_Gill_L02-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Gill_L02-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("EatSeagull"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("EatTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("EatSeagull"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TimeSensor_gullswim-TIMER"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("EatSeagull"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("eatingSeagull")}),

            new ROUTE({
              fromNode : new SFString("EatFishSwim"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("EatTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("EatFishSwim"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TimeSensor_Fishswim-TIMER"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("EatFishSwim"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("eatingFishSwim")}),

            new ROUTE({
              fromNode : new SFString("EatFish"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("EatTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("EatFish"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("TimeSensor_Fishbott-TIMER"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("EatFish"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("eatingFish")}),

            new ROUTE({
              fromNode : new SFString("EatSittingSeagull"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("EatTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("EatSittingSeagull"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("eatingSittingSeagull")}),

            new ROUTE({
              fromNode : new SFString("EatSurfer"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("EatTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("EatSurfer"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("eatingSurfer")}),

            new ROUTE({
              fromNode : new SFString("EatSurfer2"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("EatTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("EatSurfer2"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("eatingSurfer2")}),

            new ROUTE({
              fromNode : new SFString("EatTuber"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("EatTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("EatTuber"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("eatingTuber")}),

            new ROUTE({
              fromNode : new SFString("EatTuber2"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("EatTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("EatTuber2"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("eatingTuber2")}),

            new ROUTE({
              fromNode : new SFString("SharkSwim"),
              fromField : new SFString("seagullSwitcher"),
              toNode : new SFString("Seagull"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("SharkSwim"),
              fromField : new SFString("fishSwimSwitcher"),
              toNode : new SFString("FishSwim"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("SharkSwim"),
              fromField : new SFString("fishSwitcher"),
              toNode : new SFString("Fish"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("SharkSwim"),
              fromField : new SFString("sittingSeagullSwitcher"),
              toNode : new SFString("SittingSeagull"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("SharkSwim"),
              fromField : new SFString("surferSwitcher"),
              toNode : new SFString("Surfer"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("SharkSwim"),
              fromField : new SFString("surfer2Switcher"),
              toNode : new SFString("Surfer2"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("SharkSwim"),
              fromField : new SFString("tuberSwitcher"),
              toNode : new SFString("Tuber"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("SharkSwim"),
              fromField : new SFString("tuber2Switcher"),
              toNode : new SFString("Tuber2"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("SharkSwim"),
              fromField : new SFString("playChompSound"),
              toNode : new SFString("chompSound"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("EatTimer"),
              fromField : new SFString("isActive"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("doneEating")}),

            new ROUTE({
              fromNode : new SFString("KillTimer"),
              fromField : new SFString("isActive"),
              toNode : new SFString("SharkSwim"),
              toField : new SFString("killObject")}),

            new ROUTE({
              fromNode : new SFString("SharkEat-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("EatTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkEat-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkEat-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("EatTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkEat-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkEat-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("EatTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkEat-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkEat_Eyeball_R-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Eyeball_R-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("EatTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkEat_Eyeball_R-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkEat_Eyeball_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Eyeball_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("EatTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkEat_Eyeball_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkEat_Eyeball_L-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Eyeball_L-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("EatTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkEat_Eyeball_L-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkEat_Eyeball_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Eyeball_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("EatTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkEat_Eyeball_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("burp-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("burp-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("burp-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("burp-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("burp-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_Eyeball_R-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Eyeball_R-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_Eyeball_R-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_Eyeball_R-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Eyeball_R-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_Eyeball_R-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_Eyeball_R-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Eyeball_R-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_Eyeball_R-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_Eyeball_L-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Eyeball_L-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_Eyeball_L-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_Eyeball_L-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Eyeball_L-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_Eyeball_L-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_Eyeball_L-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Shark_Eyeball_L-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_Eyeball_L-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Dummy_SharkDeath_explode-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Dummy_SharkDeath_explode-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Dummy_SharkDeath_explode-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode_Eyeball_L-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode_Eyeball_L-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode_Eyeball_L-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode_Eyeball_R-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode_Eyeball_R-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode_Eyeball_R-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode00-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode00-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode00-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode01-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode01-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode01-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode02-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode02-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode02-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode02-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode02-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode02-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode02-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode02-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode03-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode03-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode03-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode03-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode03-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode03-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode03-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode03-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode03-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode04-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode04-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode04-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode04-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode04-ROOT"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode04-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode05-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode05-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode05-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode06-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode06-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode06-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode07-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode07-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode07-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode08-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode08-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode08-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode09-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode09-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode09-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode10-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode10-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode10-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeath_explode11-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SharkDeath_explode11-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("SharkDeath_explode11-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Inline_fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_fishswim-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Inline_fishswim-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_fishswim-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_fishswim-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Inline_fishswim-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_fishswim-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Inline_fishswim-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Inline_fishswim-ROOT"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Inline_fishswim-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("fish_burp-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("fish_burp-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("fish_burp-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("fish_burp-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("fish_burp-ROOT"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("fish_burp02-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("fish_burp02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("SharkDeathTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("fish_burp02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("fish_burp02-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("fish_burp02-ROOT"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());