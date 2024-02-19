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
var Background = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("Trebuchet.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Working model of a 14th century Trebuchet Catapult.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("LT Joe Roth")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("20 June 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("version"),
              content : new SFString("7.8")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://trebuchet.com")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://members.home.net/dimona")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("trebuchet catapult Monty Python")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Trebuchet.x3d")}),

            new Background({
              backUrl : new MFString(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"]),
              bottomUrl : new MFString(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"]),
              frontUrl : new MFString(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"]),
              groundAngle : new MFFloat([1.309,1.570796]),
              groundColor : new MFColor([0.1,0.1,0,0.4,0.25,0.2,0.6,0.6,0.6]),
              leftUrl : new MFString(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"]),
              rightUrl : new MFString(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"]),
              skyAngle : new MFFloat([1.309,1.57079]),
              skyColor : new MFColor([0,0.2,0.7,0,0.5,1,1,1,1]),
              topUrl : new MFString(["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"])}),

            new Sound({
              maxBack : new SFFloat(1000),
              maxFront : new SFFloat(1000),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("HolyGrail"),
                  description : new SFString("HolyGrail"),
                  loop : new SFBool(true),
                  url : new MFString(["holygral.mp3","http://www.nps.navy.mil/code32/vrml/holygral.mp3"])}))}),

            new Shape({
              geometry : new SFNode(
                new Box({
                  size : new SFVec3f([10000,1,10000])})),
              appearance : new SFNode(
                new Appearance({
                  texture : new SFNode(
                    new ImageTexture({
                      url : new MFString(["grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"])}))}))}),

            new Transform({
              rotation : new SFRotation([0,1,0,1.57]),
              scale : new SFVec3f([0.5,0.5,0.5]),
              translation : new SFVec3f([10.5,6.5,4.5]),
              child : new SFNode(
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("TextAppearance"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0,0]),
                          emissiveColor : new SFColor([1,1,0])}))})),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Click Sling to Select Projectile"]),
                      fontStyle : new SFNode(
                        new FontStyle({}))}))}))}),

            new Transform({
              rotation : new SFRotation([0,1,0,1.57]),
              scale : new SFVec3f([0.5,0.5,0.5]),
              translation : new SFVec3f([11,5.5,6]),
              children : new MFNode([
                new Switch({
                  DEF : new SFString("Weight"),
                  whichChoice : new SFInt32(0),
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("TextAppearance")})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Click Here to Change Counter Weight (50 lbs)"])}))})])}),

                    new Group({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("TextAppearance")})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Click Here to Change Counter Weight (500 lbs)"])}))})])}),

                    new Group({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("TextAppearance")})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Click Here to Change Counter Weight (1000 lbs)"])}))})])}),

                    new Group({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("TextAppearance")})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["Click Here to Change Counter Weight (10000 lbs)"])}))})])})])}),

                new TouchSensor({
                  DEF : new SFString("weightselector"),
                  description : new SFString("weight selector")}),

                new Transform({
                  translation : new SFVec3f([8,0,0]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([20,1,1])})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              transparency : new SFFloat(1)}))}))}))})])}),

            new Transform({
              rotation : new SFRotation([0,1,0,1.57]),
              translation : new SFVec3f([10,0.5,4.5]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("launch"),
                  translation : new SFVec3f([0,2,5]),
                  children : new MFNode([
                    new Billboard({
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,0,0])}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString(["LAUNCH"]),
                              fontStyle : new SFNode(
                                new FontStyle({}))}))}),

                        new Transform({
                          translation : new SFVec3f([2,0.3,0]),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Box({
                                  size : new SFVec3f([5,1,1])})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      transparency : new SFFloat(1)}))}))}))}),

                        new Switch({
                          DEF : new SFString("PigdogMonk"),
                          whichChoice : new SFInt32(-1),
                          children : new MFNode([
                            new Group({
                              children : new MFNode([
                                new Sound({
                                  maxBack : new SFFloat(1000),
                                  maxFront : new SFFloat(1000),
                                  source : new SFNode(
                                    new AudioClip({
                                      DEF : new SFString("PigDogSound"),
                                      description : new SFString("PigDogSound"),
                                      url : new MFString(["pigdog.wav","http://www.nps.navy.mil/code32/vrml/pigdog.wav"])}))})])}),

                            new Group({
                              children : new MFNode([
                                new Sound({
                                  maxBack : new SFFloat(1000),
                                  maxFront : new SFFloat(1000),
                                  source : new SFNode(
                                    new AudioClip({
                                      DEF : new SFString("MonkSound"),
                                      description : new SFString("MonkSound"),
                                      url : new MFString(["monks.wav","http://www.nps.navy.mil/code32/vrml/monks.wav"])}))})])})])})])}),

                    new TouchSensor({
                      DEF : new SFString("Launch"),
                      description : new SFString("launch!")})])}),

                new Transform({
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("projectilename"),
                      whichChoice : new SFInt32(0),
                      children : new MFNode([
                        new Group({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("TextAppearance")})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Bowling Ball (10 lbs)"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      size : new SFFloat(0.5)}))}))}),

                            new Sound({
                              maxBack : new SFFloat(1000),
                              maxFront : new SFFloat(1000),
                              priority : new SFFloat(1),
                              source : new SFNode(
                                new AudioClip({
                                  DEF : new SFString("HolyHandGrenadeSound"),
                                  description : new SFString("HolyHandGrenadeSound"),
                                  url : new MFString(["grenade.wav","http://www.nps.navy.mil/code32/vrml/grenade.wav"])}))})])}),

                        new Group({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("TextAppearance")})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Cow (1000 lbs)"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      size : new SFFloat(0.5)}))}))}),

                            new Sound({
                              maxBack : new SFFloat(1000),
                              maxFront : new SFFloat(1000),
                              source : new SFNode(
                                new AudioClip({
                                  DEF : new SFString("CowSound"),
                                  description : new SFString("CowSound"),
                                  url : new MFString(["lavache.wav","http://www.nps.navy.mil/code32/vrml/lavache.wav"])}))})])}),

                        new Group({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("TextAppearance")})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Chicken (5 lbs)"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      size : new SFFloat(0.5)}))}))}),

                            new Sound({
                              maxBack : new SFFloat(1000),
                              maxFront : new SFFloat(1000),
                              priority : new SFFloat(1),
                              source : new SFNode(
                                new AudioClip({
                                  DEF : new SFString("HamsterSound"),
                                  description : new SFString("HamsterSound"),
                                  url : new MFString(["hamster.wav","http://www.nps.navy.mil/code32/vrml/hamster.wav"])}))})])})])})])})])}),

            new Transform({
              rotation : new SFRotation([0,1,0,-1.67]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("aft"),
                  translation : new SFVec3f([5,5,15]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-2.5,-4.5,-2]),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("launch")})])})])})])}),

            new Transform({
              translation : new SFVec3f([0,3,0]),
              child : new SFNode(
                new Shape({
                  DEF : new SFString("plank"),
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([25,1,1])})),
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("wood"),
                      texture : new SFNode(
                        new ImageTexture({
                          DEF : new SFString("woodTexture"),
                          url : new MFString(["wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"])}))}))})),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("angledsupport"),
                  rotation : new SFRotation([0,0,1,1]),
                  translation : new SFVec3f([-5,10,0]),
                  child : new SFNode(
                    new Shape({
                      USE : new SFString("plank")}))}),

                new Transform({
                  DEF : new SFString("angledsupport2"),
                  rotation : new SFRotation([0,0,1,-1]),
                  translation : new SFVec3f([5,10,0]),
                  child : new SFNode(
                    new Shape({
                      USE : new SFString("plank")}))}),

                new Transform({
                  DEF : new SFString("verticalsupport"),
                  rotation : new SFRotation([0,0,1,1.57]),
                  scale : new SFVec3f([0.9,1,1]),
                  translation : new SFVec3f([0,11,0]),
                  child : new SFNode(
                    new Shape({
                      USE : new SFString("plank")})),
                  /*Main Verticle Support*/}),

                new Transform({
                  DEF : new SFString("horizontalsupport"),
                  scale : new SFVec3f([0.4,1,1]),
                  translation : new SFVec3f([0,10,0]),
                  child : new SFNode(
                    new Shape({
                      USE : new SFString("plank")}))}),

                new Transform({
                  rotation : new SFRotation([0,0,1,1.57]),
                  scale : new SFVec3f([0.6,1,1]),
                  translation : new SFVec3f([0,5,10]),
                  children : new MFNode([
                    new Transform({
                      rotation : new SFRotation([0,1,0,0.4]),
                      child : new SFNode(
                        new Shape({
                          USE : new SFString("plank")}))})])}),

                new Transform({
                  DEF : new SFString("panel"),
                  translation : new SFVec3f([0,18.2,-0.3]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([5,5,0.5])})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("wood")}))}))}),

                new Transform({
                  rotation : new SFRotation([1,0,0,-1.57]),
                  translation : new SFVec3f([0,0.6,2.5]),
                  children : new MFNode([
                    new Transform({
                      rotation : new SFRotation([0,0,1,1.57]),
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Extrusion({
                              beginCap : new SFBool(false),
                              crossSection : new MFVec2f([1,-0.38,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,-0.38,-1,-1.1,1,-1.1,1,-0.38]),
                              endCap : new SFBool(false),
                              solid : new SFBool(false),
                              spine : new MFVec3f([0,6,0,0,-11,0])})),
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("wood")}))}))})])}),

                new Transform({
                  DEF : new SFString("flinger"),
                  center : new SFVec3f([7,0,0]),
                  rotation : new SFRotation([0,0,1,0.82]),
                  scale : new SFVec3f([0.9,1,1]),
                  translation : new SFVec3f([-7,18,2.5]),
                  children : new MFNode([
                    new Transform({
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Box({
                              size : new SFVec3f([35,1,1])})),
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("wood")}))})),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([7,0,0]),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Box({
                                  size : new SFVec3f([8,2,2])})),
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("wood")}))}))})])}),

                    new Transform({
                      rotation : new SFRotation([1,0,0,1.57]),
                      scale : new SFVec3f([0.2,0.2,0.2]),
                      translation : new SFVec3f([-15,-1,0]),
                      child : new SFNode(
                        new Shape({
                          DEF : new SFString("Torus"),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  specularColor : new SFColor([1,1,1])}))})),
                          geometry : new SFNode(
                            new Extrusion({
                              beginCap : new SFBool(false),
                              convex : new SFBool(false),
                              creaseAngle : new SFFloat(1.57),
                              crossSection : new MFVec2f([0.9,0,0.81,-0.34,0.63,-0.63,0.34,-0.83,0,-0.9,-0.34,-0.81,-0.63,-0.63,-0.81,-0.34,-0.9,0,-0.81,0.34,-0.63,0.63,-0.34,0.81,0,0.9,0.38,0.81,0.63,0.63,0.81,0.34,0.9,0]),
                              endCap : new SFBool(false),
                              spine : new MFVec3f([2,0,0,1.85,0,0.77,1.41,0,1.41,0.77,0,1.85,0,0,2,-0.77,0,1.85,-1.41,0,1.41,-1.85,0,0.77,-2,0,0,-1.85,0,-0.77,-1.41,0,-1.41,-0.77,0,-1.85,0,0,-2,0.77,0,-1.85,1.41,0,-1.41,1.85,0,-0.77,2,0,0])}))})),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([1,0,2]),
                          child : new SFNode(
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("rope"),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("woodTexture")}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(1.5)}))})),
                          /*knott*/})])}),
                  /*The Unicorn*/

                    new Transform({
                      rotation : new SFRotation([0,0,1,1.2]),
                      scale : new SFVec3f([0.2,0.2,0.2]),
                      translation : new SFVec3f([-18.3,0.3,0]),
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Cylinder({
                              height : new SFFloat(10)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  specularColor : new SFColor([1,1,1])}))}))})),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0,-2.5,0]),
                          child : new SFNode(
                            new Shape({
                              USE : new SFString("Torus")})),
                          /*The Unicorn*/
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([-2,0,0]),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Sphere({
                                      radius : new SFFloat(1.5)})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("rope")}))})),
                              /*Knott*/})])}),

                        new Transform({
                          rotation : new SFRotation([0,0,1,1.2]),
                          translation : new SFVec3f([15,55,-11]),
                          children : new MFNode([
                            new Transform({
                              scale : new SFVec3f([5,5,5]),
                              child : new SFNode(
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("rope")})),
                                  geometry : new SFNode(
                                    new Extrusion({
                                      beginCap : new SFBool(false),
                                      creaseAngle : new SFFloat(0.76),
                                      crossSection : new MFVec2f([0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0]),
                                      endCap : new SFBool(false),
                                      solid : new SFBool(false),
                                      spine : new MFVec3f([-15.2,1.4,2.2,-12,-0.8,2.2])}))}))})])})])}),

                    new Transform({
                      rotation : new SFRotation([1,0,0,-1.7]),
                      translation : new SFVec3f([-17,-4.5,0]),
                      children : new MFNode([
                        new Transform({
                          scale : new SFVec3f([0.2,0.2,0.2]),
                          child : new SFNode(
                            new Shape({
                              USE : new SFString("Torus"),
                              /*Knot*/})),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([-1,0,1.7]),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Sphere({
                                      radius : new SFFloat(1.5)})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("rope")}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("RnS"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("ropes"),
                          children : new MFNode([
                            new Transform({
                              rotation : new SFRotation([0,0,1,-0.82]),
                              translation : new SFVec3f([7,-26,-2.5]),
                              child : new SFNode(
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("rope")})),
                                  geometry : new SFNode(
                                    new Extrusion({
                                      beginCap : new SFBool(false),
                                      creaseAngle : new SFFloat(0.76),
                                      crossSection : new MFVec2f([0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0]),
                                      endCap : new SFBool(false),
                                      solid : new SFBool(false),
                                      spine : new MFVec3f([-33,0.9,2.5,-18.5,1.9,2.55])}))})),
                              child : new SFNode(
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("rope")})),
                                  geometry : new SFNode(
                                    new Extrusion({
                                      beginCap : new SFBool(false),
                                      creaseAngle : new SFFloat(0.76),
                                      crossSection : new MFVec2f([0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0]),
                                      endCap : new SFBool(false),
                                      solid : new SFBool(false),
                                      spine : new MFVec3f([-35.7,-0.8,2.5,-18.8,-0.8,2.55])}))}))})])}),

                        new Transform({
                          DEF : new SFString("sling"),
                          rotation : new SFRotation([0,0,1,-0.82]),
                          translation : new SFVec3f([-4,-15.3,0]),
                          children : new MFNode([
                            new Transform({
                              children : new MFNode([
                                new Transform({
                                  rotation : new SFRotation([0,1,0,-1.57]),
                                  scale : new SFVec3f([1,1.3,1]),
                                  translation : new SFVec3f([0.5,0,-1]),
                                  children : new MFNode([
                                    new Transform({
                                      rotation : new SFRotation([0,0,1,1.57]),
                                      children : new MFNode([
                                        new Transform({
                                          scale : new SFVec3f([0.3,0.3,0.3]),
                                          child : new SFNode(
                                            new Shape({
                                              DEF : new SFString("halfsling"),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  DEF : new SFString("clear"),
                                                  material : new SFNode(
                                                    new Material({
                                                      transparency : new SFFloat(0.5)}))})),
                                              geometry : new SFNode(
                                                new Extrusion({
                                                  crossSection : new MFVec2f([0,0,0,5,0.5,7,1,8,2,9,3,11,3.5,11.2,4,11,5,9,6,8,6.5,7,6.7,5,6.7,0,0,0]),
                                                  spine : new MFVec3f([0,0,0,0.1,0,0])}))})),
                                          children : new MFNode([
                                            new Transform({
                                              scale : new SFVec3f([0.3,0.3,0.3]),
                                              translation : new SFVec3f([0,-3.5,11.5]),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("Torus")})),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0,0,2]),
                                                  child : new SFNode(
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          USE : new SFString("rope")})),
                                                      geometry : new SFNode(
                                                        new Sphere({
                                                          radius : new SFFloat(1.5)}))}))})])})])}),

                                        new Transform({
                                          scale : new SFVec3f([0.3,0.3,0.3]),
                                          translation : new SFVec3f([2,0,0]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("halfsling")})),
                                          children : new MFNode([
                                            new Transform({
                                              scale : new SFVec3f([0.3,0.3,0.3]),
                                              translation : new SFVec3f([0,-3.5,11.3]),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("Torus")})),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0,0,2]),
                                                  child : new SFNode(
                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          USE : new SFString("rope")})),
                                                      geometry : new SFNode(
                                                        new Sphere({
                                                          radius : new SFFloat(1.5)}))}))})])})])}),

                                        new Transform({
                                          translation : new SFVec3f([1,-1,0]),
                                          child : new SFNode(
                                            new Shape({
                                              geometry : new SFNode(
                                                new Extrusion({
                                                  beginCap : new SFBool(false),
                                                  creaseAngle : new SFFloat(0.785),
                                                  crossSection : new MFVec2f([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0]),
                                                  endCap : new SFBool(false),
                                                  solid : new SFBool(false),
                                                  spine : new MFVec3f([0,-1,0,0,1,0])})),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  USE : new SFString("clear")}))}))})])}),

                                    new TouchSensor({
                                      DEF : new SFString("LauncheeChoice"),
                                      description : new SFString("launcher choice")})])}),

                                new Transform({
                                  DEF : new SFString("projectiletransform"),
                                  scale : new SFVec3f([0.01,0.01,0.01]),
                                  children : new MFNode([
                                    new Switch({
                                      DEF : new SFString("projectile"),
                                      whichChoice : new SFInt32(0),
                                      children : new MFNode([
                                        new Group({
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0,0.7,0]),
                                              child : new SFNode(
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new Sphere({
                                                      radius : new SFFloat(0.7)})),
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      DEF : new SFString("black"),
                                                      material : new SFNode(
                                                        new Material({
                                                          diffuseColor : new SFColor([0,0,0]),
                                                          specularColor : new SFColor([1,1,1])}))}))}))})])}),

                                        new Group({
                                          children : new MFNode([
                                            new Transform({
                                              children : new MFNode([
                                                new Inline({
                                                  url : new MFString(["cow.wrl","http://www.uoguelph.ca/~dchiu/cow.wrl"])})])})])}),

                                        new Group({
                                          children : new MFNode([
                                            new Transform({
                                              rotation : new SFRotation([0,1,0,1.57]),
                                              scale : new SFVec3f([0.4,0.4,0.4]),
                                              translation : new SFVec3f([0,0.7,0]),
                                              children : new MFNode([
                                                new Inline({
                                                  url : new MFString(["vrml_ginger.wrl","http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"])})])})])})])})])})])})])})])})])}),

                new Transform({
                  rotation : new SFRotation([1,0,0,1.57]),
                  translation : new SFVec3f([0,18,2.5]),
                  child : new SFNode(
                    new Shape({
                      geometry : new SFNode(
                        new Cylinder({
                          height : new SFFloat(8),
                          radius : new SFFloat(0.4)})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,0]),
                              specularColor : new SFColor([1,1,1])}))}))})),
                  /*Top Pivot*/}),

                new Transform({
                  DEF : new SFString("verticalweight"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([4,18,1.8]),
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Box({
                              size : new SFVec3f([1,10,0.5])})),
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("wood")}))}))}),

                    new Transform({
                      translation : new SFVec3f([4,18,3.2]),
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Box({
                              size : new SFVec3f([1,10,0.5])})),
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("wood")}))}))}),

                    new Transform({
                      translation : new SFVec3f([4,14,2.5]),
                      /*CounterWeight*/
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Cylinder({
                              height : new SFFloat(4),
                              radius : new SFFloat(1.5)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0,0,0]),
                                  specularColor : new SFColor([1,1,1])}))}))}))}),

                    new Transform({
                      rotation : new SFRotation([1,0,0,1.57]),
                      translation : new SFVec3f([4,22,2.5]),
                      child : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new Cylinder({
                              height : new SFFloat(2.5),
                              radius : new SFFloat(0.3)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0,0,0]),
                                  specularColor : new SFColor([1,1,1])}))}))}))})])}),

                new Transform({
                  rotation : new SFRotation([0,0,1,1.57]),
                  scale : new SFVec3f([0.2,0.2,0.2]),
                  translation : new SFVec3f([-11.5,-1,2]),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("screw"),
                      rotation : new SFRotation([1,0,0,1.57]),
                      child : new SFNode(
                        new Shape({
                          USE : new SFString("Torus")})),
                      children : new MFNode([
                        new Transform({
                          rotation : new SFRotation([1,0,0,-1.57]),
                          translation : new SFVec3f([0,0,7]),
                          child : new SFNode(
                            new Shape({
                              geometry : new SFNode(
                                new Cylinder({
                                  height : new SFFloat(10),
                                  radius : new SFFloat(0.7)})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      specularColor : new SFColor([1,1,1])}))}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0,7]),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("screw")})])}),
                  /*Release Pin*/

                    new Transform({
                      DEF : new SFString("Pin"),
                      rotation : new SFRotation([1,0,0,-1.57]),
                      translation : new SFVec3f([0,0,-3]),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("screw")})])})])}),

                new Transform({
                  translation : new SFVec3f([0,0,5]),
                  child : new SFNode(
                    new Shape({
                      USE : new SFString("plank")})),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("angledsupport")}),

                    new Transform({
                      USE : new SFString("angledsupport2")}),

                    new Transform({
                      USE : new SFString("verticalsupport")}),

                    new Transform({
                      USE : new SFString("horizontalsupport")}),

                    new Transform({
                      rotation : new SFRotation([0,1,0,1.57]),
                      scale : new SFVec3f([0.6,1,1]),
                      translation : new SFVec3f([0,-11,-2.5]),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("horizontalsupport")})])}),

                    new Transform({
                      rotation : new SFRotation([0,0,1,-1.57]),
                      scale : new SFVec3f([0.6,1,1]),
                      translation : new SFVec3f([0,5,-10]),
                      children : new MFNode([
                        new Transform({
                          rotation : new SFRotation([0,1,0,0.4]),
                          child : new SFNode(
                            new Shape({
                              USE : new SFString("plank")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0,0.6]),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("panel")})])})])}),

                new Transform({
                  translation : new SFVec3f([10,-1,2.5]),
                  child : new SFNode(
                    new Shape({
                      DEF : new SFString("Axle"),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([1,1,8])})),
                      appearance : new SFNode(
                        new Appearance({
                          USE : new SFString("wood")}))})),
                  children : new MFNode([
                    new Transform({
                      rotation : new SFRotation([1,0,0,1.57]),
                      translation : new SFVec3f([0,0,4.5]),
                      child : new SFNode(
                        new Shape({
                          DEF : new SFString("wheel"),
                          geometry : new SFNode(
                            new Cylinder({
                              radius : new SFFloat(2)})),
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("wood")}))})),
                      child : new SFNode(
                        new Shape({
                          DEF : new SFString("tracks"),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(1.5)})),
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("black")}))})),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0,0.55,0]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("hub"),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(1.5)})),
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("black")}))}))})])}),

                    new Transform({
                      rotation : new SFRotation([1,0,0,1.57]),
                      translation : new SFVec3f([0,0,-4.5]),
                      child : new SFNode(
                        new Shape({
                          USE : new SFString("wheel")})),
                      child : new SFNode(
                        new Shape({
                          USE : new SFString("tracks")})),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0,-0.55,0]),
                          child : new SFNode(
                            new Shape({
                              USE : new SFString("hub")}))})])})])}),

                new Transform({
                  translation : new SFVec3f([-10,-1,2.5]),
                  child : new SFNode(
                    new Shape({
                      USE : new SFString("Axle")})),
                  children : new MFNode([
                    new Transform({
                      rotation : new SFRotation([1,0,0,1.57]),
                      translation : new SFVec3f([0,0,4.5]),
                      child : new SFNode(
                        new Shape({
                          USE : new SFString("wheel")})),
                      child : new SFNode(
                        new Shape({
                          USE : new SFString("tracks")})),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0,0.55,0]),
                          child : new SFNode(
                            new Shape({
                              USE : new SFString("hub")}))})])}),

                    new Transform({
                      rotation : new SFRotation([1,0,0,1.57]),
                      translation : new SFVec3f([0,0,-4.5]),
                      child : new SFNode(
                        new Shape({
                          USE : new SFString("wheel")})),
                      child : new SFNode(
                        new Shape({
                          USE : new SFString("tracks")})),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0,-0.55,0]),
                          child : new SFNode(
                            new Shape({
                              USE : new SFString("hub")}))})])}),

                    new Transform({
                      rotation : new SFRotation([0,1,0,-0.6]),
                      translation : new SFVec3f([0,100,400]),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([1,3,0]),
                          children : new MFNode([
                            new Viewpoint({
                              description : new SFString("Side")})])}),

                        new Transform({
                          USE : new SFString("launch")}),

                        new Transform({
                          children : new MFNode([
                            new TouchSensor({
                              USE : new SFString("LauncheeChoice")}),

                            new Switch({
                              USE : new SFString("projectilename")}),

                            new Transform({
                              translation : new SFVec3f([2.5,0,0]),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Box({
                                      size : new SFVec3f([5,0.5,0.5])})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          transparency : new SFFloat(1)}))}))}))})])}),

                        new Transform({
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          translation : new SFVec3f([0,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              USE : new SFString("weightselector")}),

                            new Switch({
                              USE : new SFString("Weight")}),

                            new Transform({
                              translation : new SFVec3f([8,0,0]),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new Box({
                                      size : new SFVec3f([17,1,0.5])})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          transparency : new SFFloat(1)}))}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("ProjectileTransform"),
                      translation : new SFVec3f([14.25,1.25,0]),
                      children : new MFNode([
                        new Switch({
                          USE : new SFString("projectile")}),

                        new Transform({
                          rotation : new SFRotation([0,1,0,1.57]),
                          translation : new SFVec3f([0,1,0]),
                          children : new MFNode([
                            new Viewpoint({
                              description : new SFString("Projectile Cam"),
                              position : new SFVec3f([0,0,15])})])})])}),

                    new Transform({
                      translation : new SFVec3f([20,2,0]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Front"),
                          rotation : new SFRotation([0,1,0,1.57]),
                          children : new MFNode([
                            new Viewpoint({
                              description : new SFString("Fore")})])})])}),

                    new Transform({
                      translation : new SFVec3f([-8,4,0]),
                      children : new MFNode([
                        new Transform({
                          rotation : new SFRotation([0,1,0,-1.57]),
                          children : new MFNode([
                            new Viewpoint({
                              description : new SFString("Aft")})])})])}),

                    new Script({
                      DEF : new SFString("WeightScript"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_boolean"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("whichchoice"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("CounterWeight"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                      ]),
ecmascript:eval (0


, function initialize ()
{
	whichchoice =0;
	CounterWeight=100;
}

, function set_boolean ( boolean_input, eventTime)
{

	if ( boolean_input== false ) { return; } // ignore the unclick
        whichchoice = whichchoice +1;
	if (whichchoice == 0)CounterWeight=50.00;
	if (whichchoice == 1)CounterWeight=500.00;
	if (whichchoice == 2)CounterWeight=1000.00;
	if (whichchoice == 3)CounterWeight=10000.00;
        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }


        Browser.println ('CounterWeight ='+CounterWeight);
})}),

                    new Script({
                      DEF : new SFString("LauncheeScript"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_boolean"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("whichchoice"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("ProjectileWeight"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                      ]),
ecmascript:eval (0

, function set_boolean (boolean_input, eventTime)
{
	if ( boolean_input== false ) { return; } // ignore unclick
        whichchoice = whichchoice +1;
        if (whichchoice == 0)ProjectileWeight=10.00;
        if (whichchoice == 1)ProjectileWeight=1000.00;
	if (whichchoice == 2)ProjectileWeight=5;

	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }
	Browser.println ('Projectile Weight'+ProjectileWeight);
})}),

                    new Script({
                      DEF : new SFString("PigdogMonkScript"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_boolean"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("whichchoice"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                      ]),
ecmascript:eval (0

, function set_boolean (boolean_input, eventTime)
{
	if ( boolean_input== false ) { return; } // ignore unclick

        whichchoice = whichchoice +1;

        if ( whichchoice ==2 )  whichchoice = 0;


})}),

                    new Script({
                      DEF : new SFString("Mover"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_MassCounterWeight"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_MassProjectileWeight"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("MassCounterWeight"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("1")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("MassProjectileWeight"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("1")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("transparent"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("value_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                      ]),
ecmascript:eval (0

, function initialize ()
{
	MassCounterWeight=100;
	MassProjectileWeight=10;
	Browser.println ('MassCounterWeight =' + MassCounterWeight);
	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);
}

, function set_MassProjectileWeight (value, timestamp)
{
	MassProjectileWeight = value;
	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);
}
, function set_MassCounterWeight (value2, timestamp)
{
	MassCounterWeight = value2;
	Browser.println ('new MassCounterWeight =' + MassCounterWeight);
}


, function set_fraction ( fraction, eventTime )
{
	var TrebuchetHeight=45;
	var Height =25;
      	x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;
	// start at TrebuchetHeight and keep along z axis (z=zero)
	y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);
        z = 0;
        transparent = new SFVec3f (1,1,1);
     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)
		{
		x=x-10;
		y=y+1;
		transparent = new SFVec3f(.01, .01, .01);
			}

	value_changed = new SFVec3f (x, y, z);
	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);
})})])})])}),

            new TimeSensor({
              DEF : new SFString("clock"),
              cycleInterval : new SFTime(10)}),

            new PositionInterpolator({
              DEF : new SFString("verticalweightpath"),
              key : new MFFloat([0,0.1,0.2,0.2,0.3,0.9]),
              keyValue : new MFVec3f([1.4,1.6,0,1,-8,0,-3.5,-12,0,-3.5,-12,0,1.2,-8,0,1.4,1.6,0])}),

            new OrientationInterpolator({
              DEF : new SFString("flingerangles"),
              key : new MFFloat([0,0.1,0.2,0.2,0.3,0.9]),
              keyValue : new MFRotation([0,0,1,0.82,0,0,1,-0.77,0,0,1,-1.57,0,0,1,-1.57,0,0,1,-0.77,0,0,1,0.82])}),

            new PositionInterpolator({
              DEF : new SFString("pinpath"),
              key : new MFFloat([0,0.01,0.95,1]),
              keyValue : new MFVec3f([0,0,-3,0,0,-10,0,0,-10,0,0,-3])}),

            new OrientationInterpolator({
              DEF : new SFString("RnSAngels"),
              key : new MFFloat([0,0.7,1]),
              keyValue : new MFRotation([0,0,1,0,0,0,1,-3.14,0,0,1,0])}),

            new PositionInterpolator({
              DEF : new SFString("invisiable"),
              key : new MFFloat([0,0.2,0.98,0.99]),
              keyValue : new MFVec3f([1,1,1,0.01,0.01,0.01,0.01,0.01,0.01,1,1,1])}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("invisiable")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("invisiable"),
              toField : new SFString("set_scale"),
              toNode : new SFString("projectiletransform")}),

            new ROUTE({
              fromField : new SFString("CounterWeight"),
              fromNode : new SFString("WeightScript"),
              toField : new SFString("set_MassCounterWeight"),
              toNode : new SFString("Mover")}),

            new ROUTE({
              fromField : new SFString("ProjectileWeight"),
              fromNode : new SFString("LauncheeScript"),
              toField : new SFString("set_MassProjectileWeight"),
              toNode : new SFString("Mover")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Mover")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Mover"),
              toField : new SFString("set_translation"),
              toNode : new SFString("ProjectileTransform")}),

            new ROUTE({
              fromField : new SFString("transparent"),
              fromNode : new SFString("Mover"),
              toField : new SFString("set_scale"),
              toNode : new SFString("ProjectileTransform")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Launch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("clock")}),

            new ROUTE({
              fromField : new SFString("isActive"),
              fromNode : new SFString("Launch"),
              toField : new SFString("set_boolean"),
              toNode : new SFString("PigdogMonkScript")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Launch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("PigDogSound")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Launch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("MonkSound")}),

            new ROUTE({
              fromField : new SFString("whichchoice"),
              fromNode : new SFString("PigdogMonkScript"),
              toField : new SFString("whichChoice"),
              toNode : new SFString("PigdogMonk")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("LauncheeChoice"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("HolyHandGrenadeSound")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("LauncheeChoice"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("CowSound")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("LauncheeChoice"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("HamsterSound")}),

            new ROUTE({
              fromField : new SFString("isActive"),
              fromNode : new SFString("LauncheeChoice"),
              toField : new SFString("set_boolean"),
              toNode : new SFString("LauncheeScript")}),

            new ROUTE({
              fromField : new SFString("whichchoice"),
              fromNode : new SFString("LauncheeScript"),
              toField : new SFString("whichChoice"),
              toNode : new SFString("projectile")}),

            new ROUTE({
              fromField : new SFString("whichchoice"),
              fromNode : new SFString("LauncheeScript"),
              toField : new SFString("whichChoice"),
              toNode : new SFString("projectilename")}),

            new ROUTE({
              fromField : new SFString("isActive"),
              fromNode : new SFString("weightselector"),
              toField : new SFString("set_boolean"),
              toNode : new SFString("WeightScript")}),

            new ROUTE({
              fromField : new SFString("whichchoice"),
              fromNode : new SFString("WeightScript"),
              toField : new SFString("whichChoice"),
              toNode : new SFString("Weight")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("flingerangles")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("flingerangles"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("flinger")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("verticalweightpath")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("verticalweightpath"),
              toField : new SFString("set_translation"),
              toNode : new SFString("verticalweight")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("pinpath")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("pinpath"),
              toField : new SFString("set_translation"),
              toNode : new SFString("Pin")})])}))});
console.log(X3D0.toXMLNode());
