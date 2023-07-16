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
var Background = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var LineProperties = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var SphereSensor = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Arc2D = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
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
              content : new SFString("Fri, 18 Sep 2015 01:10:27 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.2, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 02 Jan 2016 06:07:53 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("Billboard 1 1 1")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("Billboard"),
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
                          value : new MFDouble([0,0,10])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,1,0])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))}))})])}),

            new Background({
              skyAngle : new MFFloat([0.8,1.3,1.4,1.5708]),
              skyColor : new MFColor([0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98]),
              groundAngle : new MFFloat([0.6,1.2,1.3,1.5708]),
              groundColor : new MFColor([0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98])}),

            new Viewpoint({
              description : new SFString("Front")}),

            new Viewpoint({
              description : new SFString("z pi/2"),
              orientation : new SFRotation([0,0,1,1.5708])}),

            new Viewpoint({
              description : new SFString("y pi/2"),
              position : new SFVec3f([10,0,0]),
              orientation : new SFRotation([0,1,0,1.5708])}),

            new ProximitySensor({
              DEF : new SFString("Proxy"),
              size : new SFVec3f([1000,1000,1000])}),

            new Transform({
              DEF : new SFString("HUD"),
              translation : new SFVec3f([0,0,10]),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([0,-0.3,-1]),
                  scale : new SFVec3f([0.02,0.02,0.02]),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("TouchX"),
                          description : new SFString("1 0 0")}),

                        new Transform({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Rococo12"),
                                      ambientIntensity : new SFFloat(0.226102),
                                      diffuseColor : new SFColor([0.904409,0.146366,0.208768]),
                                      specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                                      shininess : new SFFloat(0.078125)}))})),
                              geometry : new SFNode(
                                new Box({}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([3,0,0]),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("TouchY"),
                          description : new SFString("0 1 0")}),

                        new Transform({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Rococo28"),
                                      ambientIntensity : new SFFloat(0.226102),
                                      diffuseColor : new SFColor([0.279645,0.904409,0.511589]),
                                      specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                                      shininess : new SFFloat(0.078125)}))})),
                              geometry : new SFNode(
                                new Box({}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([6,0,0]),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("TouchXYZ"),
                          description : new SFString("1 1 1")}),

                        new Transform({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Rococo24"),
                                      ambientIntensity : new SFFloat(0.226102),
                                      diffuseColor : new SFColor([0.28636,0.554905,0.904409]),
                                      specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                                      shininess : new SFFloat(0.078125)}))})),
                              geometry : new SFNode(
                                new Box({}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([9,0,0]),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("TouchZ"),
                          description : new SFString("0 0 1")}),

                        new Transform({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Rococo1"),
                                      ambientIntensity : new SFFloat(0.187004),
                                      diffuseColor : new SFColor([0.636212,0.748016,0.300948]),
                                      specularColor : new SFColor([0.412121,0.412121,0.412121]),
                                      shininess : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new Box({}))})])})])}),

                    new Transform({
                      translation : new SFVec3f([12,0,-5.68434e-14]),
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("TouchZ_1"),
                          description : new SFString("0 0 0")}),

                        new Transform({
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Rococo35"),
                                      ambientIntensity : new SFFloat(0.0499912),
                                      diffuseColor : new SFColor([0.195355,0.197924,0.199965]),
                                      specularColor : new SFColor([0.430303,0.430303,0.430303]),
                                      shininess : new SFFloat(0.406061)}))})),
                              geometry : new SFNode(
                                new Box({}))})])})])})])})])}),

            new Transform({
              children : new MFNode([
                new Billboard({
                  DEF : new SFString("Billboard"),
                  axisOfRotation : new SFVec3f([1,1,1]),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("XForm"),
                      children : new MFNode([
                        new Transform({
                          rotation : new SFRotation([1,0,0,1.5708]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
                              geometry : new SFNode(
                                new Cone({}))})])}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({}))})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              colorIndex : new MFInt32([0,1,-1,2,3,-1]),
                              coordIndex : new MFInt32([0,1,-1,2,3,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([0,0,0,1,1,1,0,0,0,1,1,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Local"),
                                  point : new MFVec3f([-2,0,0,2,0,0,0,-2,0,0,2,0])}))}))}),

                        new Transform({
                          translation : new SFVec3f([2,0,0]),
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          children : new MFNode([
                            new Billboard({
                              axisOfRotation : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0,0,0])}))})),
                                  geometry : new SFNode(
                                    new Text({
                                      string : new MFString(["x"])}))})])})])}),

                        new Transform({
                          translation : new SFVec3f([0,2,0]),
                          scale : new SFVec3f([0.5,0.5,0.5]),
                          children : new MFNode([
                            new Billboard({
                              axisOfRotation : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0,0,0])}))})),
                                  geometry : new SFNode(
                                    new Text({
                                      string : new MFString(["y"])}))})])})])})])}),

                    new Shape({
                      DEF : new SFString("LocalAxisOfRotation1"),
                      appearance : new SFNode(
                        new Appearance({
                          lineProperties : new SFNode(
                            new LineProperties({
                              linetype : new SFInt32(3)})),
                          material : new SFNode(
                            new Material({}))})),
                      geometry : new SFNode(
                        new IndexedLineSet({
                          coordIndex : new MFInt32([0,1,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("LocalAxisOfRotation"),
                              point : new MFVec3f([-3,-3,-3,3,3,3])}))}))})])})])}),

            new Transform({
              children : new MFNode([
                new SphereSensor({
                  DEF : new SFString("AxisSensor"),
                  offset : new SFRotation([-0.707107,0.707107,0,0.955317])}),

                new Transform({
                  DEF : new SFString("AxisOfRotation"),
                  rotation : new SFRotation([-0.707107,0.707107,0,0.955317]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,0,2]),
                      rotation : new SFRotation([1,0,0,1.5708]),
                      scale : new SFVec3f([0.1,0.1,0.1]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0,1,0])}))})),
                          geometry : new SFNode(
                            new Cone({}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0,-2]),
                      scale : new SFVec3f([0.1,0.1,0.1]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,0,0])}))})),
                          geometry : new SFNode(
                            new Sphere({}))})])}),

                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({}))})),
                      geometry : new SFNode(
                        new IndexedLineSet({
                          colorPerVertex : new SFBool(false),
                          colorIndex : new MFInt32([0,1]),
                          coordIndex : new MFInt32([0,1,-1,1,2,-1]),
                          color : new SFNode(
                            new Color({
                              color : new MFColor([1,0,0,0,1,0])})),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0,-2,0,0,0,0,0,2])}))}))})])})])}),

            new Transform({
              DEF : new SFString("ZAxis"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new IndexedLineSet({
                      colorPerVertex : new SFBool(false),
                      colorIndex : new MFInt32([0,1]),
                      coordIndex : new MFInt32([0,1,-1,1,2,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([0,0,0,0,0,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([0,0,-2,0,0,0,0,0,2])}))}))}),

                new Transform({
                  translation : new SFVec3f([0,0,2]),
                  scale : new SFVec3f([0.5,0.5,0.5]),
                  children : new MFNode([
                    new Billboard({
                      axisOfRotation : new SFVec3f([0,0,0]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0,0,0])}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString([" z"])}))})])})])}),

                new Transform({
                  translation : new SFVec3f([0,0,2]),
                  rotation : new SFRotation([1,0,0,1.5708]),
                  scale : new SFVec3f([0.1,0.1,0.1]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))})),
                      geometry : new SFNode(
                        new Cone({}))})])})])}),

            new Transform({
              DEF : new SFString("Normal"),
              rotation : new SFRotation([0.707107,0.707107,0,1.5708]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new IndexedLineSet({
                      colorPerVertex : new SFBool(false),
                      colorIndex : new MFInt32([0,1]),
                      coordIndex : new MFInt32([0,1,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([1,1,0,1,1,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([0,0,0,0,0,2])}))}))}),

                new Transform({
                  translation : new SFVec3f([0,0,2]),
                  rotation : new SFRotation([1,0,0,1.5708]),
                  scale : new SFVec3f([0.1,0.1,0.1]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,0])}))})),
                      geometry : new SFNode(
                        new Cone({}))})])}),

                new Transform({
                  translation : new SFVec3f([0,0,2]),
                  scale : new SFVec3f([0.3,0.3,0.3]),
                  children : new MFNode([
                    new Billboard({
                      axisOfRotation : new SFVec3f([0,0,0]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0,0,0])}))})),
                          geometry : new SFNode(
                            new Text({
                              string : new MFString([" normal"])}))})])})])})])}),

            new Transform({
              DEF : new SFString("Rotation"),
              rotation : new SFRotation([-0.357407,-0.862856,-0.357407,1.71777]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          emissiveColor : new SFColor([1,0,0])}))})),
                  geometry : new SFNode(
                    new Arc2D({
                      DEF : new SFString("Arc"),
                      endAngle : new SFFloat(0.955317)}))})])}),

            new Script({
              DEF : new SFString("AxisScript"),
              directOutput : new SFBool(true),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_x"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_y"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_z"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_xyz"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_0"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("set_rotation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_position"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("billboard"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Billboard({
                      USE : new SFString("Billboard")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("xform"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("XForm")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("absolute"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("AxisOfRotation")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("local"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Coordinate({
                      USE : new SFString("LocalAxisOfRotation")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("sensor"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new SphereSensor({
                      USE : new SFString("AxisSensor")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("normal"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("Normal")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("rotation"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("Rotation")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("arc"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Arc2D({
                      USE : new SFString("Arc")})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("proxy"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new ProximitySensor({
                      USE : new SFString("Proxy")})])}),
              ]),vrmlscript:
, function initialize ()
{
	set_xyz ();
}

, function set_x ()
{
	set_axisOfRotation (new SFVec3f (1, 0, 0));
}

, function set_y ()
{
	set_axisOfRotation (new SFVec3f (0, 1, 0));
}

, function set_z ()
{
	set_axisOfRotation (new SFVec3f (0, 0, 1) .normalize () .multiply (2));
}

, function set_xyz ()
{
	set_axisOfRotation (new SFVec3f (1, 1, 1));
}

, function set_0 ()
{
	set_axisOfRotation (new SFVec3f ());
}

, function set_rotation (value)
{
	set_axisOfRotation (value .multVec (new SFVec3f (0, 0, 1)));
}

, function set_position ()
{
	set_axisOfRotation (billboard .axisOfRotation);
}

var xAxis = new SFVec3f (1, 0, 0);
var zAxis = new SFVec3f (0, 0, 1);

, function set_axisOfRotation (axisOfRotation)
{
	billboard .axisOfRotation = axisOfRotation;
	
	// Normal of plane between axisOfRotation and billbordToViewer

	var vector = axisOfRotation .cross (proxy .position_changed);
	normal .rotation = new SFRotation (zAxis, vector);

	// axisOfRotation

	var axisRotation = new SFRotation (zAxis, axisOfRotation);
	
	local .point       = new MFVec3f (axisOfRotation .multiply (3) .negate (), axisOfRotation .multiply (3));
	absolute .rotation = axisRotation;
	sensor .offset     = axisRotation;

	// Angle between zAxis and axisOfRotation
	var angle = Math .acos (zAxis .dot (axisOfRotation .normalize ()));
	var rot   = new SFRotation (zAxis, zAxis .cross (axisOfRotation));
	rotation .rotation = rot .multiply (new SFRotation (rot .multVec (xAxis), zAxis));

	arc .endAngle = angle;

	print ('axisOfRotation: ', local .point);
	print ('axisOfRotation: ', axisOfRotation);
	print ('normal:         ', vector);
	print ('angle:          ', angle);
	

	var n = vector .normalize ();
	var a = axisOfRotation .cross (zAxis .cross (axisOfRotation)) .normalize ();
			
	var angle = n .dot (a);
	print ('angle n         ', angle);

})}),

            new ROUTE({
              fromNode : new SFString("Proxy"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("HUD"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Proxy"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("HUD"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Proxy"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("AxisScript"),
              toField : new SFString("set_position")}),

            new ROUTE({
              fromNode : new SFString("TouchX"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("AxisScript"),
              toField : new SFString("set_x")}),

            new ROUTE({
              fromNode : new SFString("TouchY"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("AxisScript"),
              toField : new SFString("set_y")}),

            new ROUTE({
              fromNode : new SFString("TouchZ"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("AxisScript"),
              toField : new SFString("set_z")}),

            new ROUTE({
              fromNode : new SFString("TouchXYZ"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("AxisScript"),
              toField : new SFString("set_xyz")}),

            new ROUTE({
              fromNode : new SFString("AxisSensor"),
              fromField : new SFString("rotation_changed"),
              toNode : new SFString("AxisScript"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TouchZ_1"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("AxisScript"),
              toField : new SFString("set_0")})])}))});
console.log(X3D0.toXMLNode());
