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
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var LayerSet = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Layer = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ParticleSystem = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var ExplosionEmitter = require('./x3d.mjs');
var WindPhysicsModel = require('./x3d.mjs');
var ColorRGBA = require('./x3d.mjs');
var MFColorRGBA = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var PointProperties = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var OrthoViewpoint = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var LineProperties = require('./x3d.mjs');
var Disk2D = require('./x3d.mjs');
var PlaneSensor = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var Rectangle2D = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
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
              content : new SFString("Fri, 22 Apr 2016 03:51:27 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.4.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/ExplosionEmitter.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 22 Apr 2016 04:34:33 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Grid"),
              url : new MFString([", ","GridTool.x3dv#Gridfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("translation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("rotation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("scale"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFINT32,
                  name : new SFString("dimension"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFINT32,
                  name : new SFString("majorLineEvery"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFINT32,
                  name : new SFString("majorLineOffset"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("color"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("transparency"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("lineColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("lineTransparency"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFCOLOR,
                  name : new SFString("majorLineColor"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("majorLineTransparency"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("solid"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])}),

            new WorldInfo({
              title : new SFString("ExplosionEmitter"),
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
                          value : new MFDouble([0,0,0])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("previous"),
                          DEF : new SFString("previous"),
                          reference : new SFString("http://titania.create3000.de")})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("children"),
                          DEF : new SFString("children"),
                          reference : new SFString("http://titania.create3000.de"),
                          Script : new SFNode(
                            new Script({
                              DEF : new SFString("NumParticlesyScript"),
                              field : new MFNode([
                                new field({
                                  type : field.TYPE_SFVEC3F,
                                  name : new SFString("set_translation"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFSTRING,
                                  name : new SFString("description"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("numParticles")}),

                                new field({
                                  type : field.TYPE_SFINT32,
                                  name : new SFString("minValue"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                                new field({
                                  type : field.TYPE_SFINT32,
                                  name : new SFString("maxValue"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                                  value : new SFString("40000")}),

                                new field({
                                  type : field.TYPE_SFINT32,
                                  name : new SFString("value_changed"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_MFSTRING,
                                  name : new SFString("string_changed"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFINT32,
                                  name : new SFString("currentValue"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  value : new SFString("2000")}),
                              ]),
ecmascript:eval (0

, function initialized ()
{
	set_value (value);
}

, function set_translation (value)
{
	set_value (minValue + (value .x * (maxValue - minValue)));
}

, function set_value (value)
{
	var rounded = value .toFixed (0);

	if (rounded == currentValue)
		return;

	currentValue       = rounded;
	string_changed [0] = description + " " + rounded;
	value_changed      = rounded;
})}))}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("LayerSet"),
                      DEF : new SFString("LayerSet"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("activeLayer"),
                          DEF : new SFString("activeLayer"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([-1])}))}))})])}),
          layerSet : new SFNode(
            new LayerSet({
              activeLayer : new SFInt32(1),
              order : new MFInt32([0,1,2,3]),
              layers : new SFNode(
                new Layer({
                  children : new MFNode([
                    new Background({
                      DEF : new SFString("Gray"),
                      skyColor : new MFColor([0.2,0.2,0.2])}),

                    new Viewpoint({
                      description : new SFString("Viewpoint"),
                      position : new SFVec3f([0,20,55])}),

                    new ParticleSystem({
                      DEF : new SFString("_1"),
                      geometryType : new SFString("POINT"),
                      maxParticles : new SFInt32(2000),
                      particleLifetime : new SFFloat(4),
                      lifetimeVariation : new SFFloat(0.5),
                      particleSize : new SFVec2f([1,1]),
                      colorKey : new MFFloat([0,0.2,0.5,0.7,0.8,1]),
                      emitter : new SFNode(
                        new ExplosionEmitter({
                          speed : new SFFloat(0.5),
                          variation : new SFFloat(0.5),
                          mass : new SFFloat(0.1),
                          surfaceArea : new SFFloat(0.1)})),
                      physics : new SFNode(
                        new WindPhysicsModel({
                          direction : new SFVec3f([0,1,0]),
                          speed : new SFFloat(0.7),
                          gustiness : new SFFloat(1.7),
                          turbulence : new SFFloat(0.3)})),
                      physics : new SFNode(
                        new WindPhysicsModel({
                          speed : new SFFloat(0.5),
                          gustiness : new SFFloat(2)})),
                      color : new SFNode(
                        new ColorRGBA({
                          color : new MFColorRGBA([1,0.38,0,0,1,0.58,0.06,0.01,1,0.37,0,0.1,1,0.05,0,0,0,0,0,0.015,0,0,0,0])})),
                      appearance : new SFNode(
                        new Appearance({
                          pointProperties : new SFNode(
                            new PointProperties({
                              pointSizeScaleFactor : new SFFloat(10),
                              pointSizeMinValue : new SFFloat(10),
                              pointSizeMaxValue : new SFFloat(10)}))}))}),

                    new Transform({
                      DEF : new SFString("IndexedLineSet"),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new IndexedLineSet({
                              colorPerVertex : new SFBool(false),
                              colorIndex : new MFInt32([0,1,2]),
                              coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1]),
                              color : new SFNode(
                                new Color({
                                  color : new MFColor([1,0,0,0,1,0,0,0,1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1])}))}))})])})])})),
              layers : new SFNode(
                new Layer({
                  children : new MFNode([
                    new OrthoViewpoint({}),

                    new Transform({
                      DEF : new SFString("TransparencyText"),
                      translation : new SFVec3f([1.675,-0.95,-0.00000349096]),
                      scale : new SFVec3f([0.0672307,0.0672307,0.0672307]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  emissiveColor : new SFColor([1,1,1])}))})),
                          geometry : new SFNode(
                            new Text({
                              DEF : new SFString("_2"),
                              string : new MFString(["numParticles 2337"]),
                              solid : new SFBool(true),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  family : new MFString(["SANS"]),
                                  justify : new MFString(["END"])}))}))})])}),

                    new Transform({
                      DEF : new SFString("TransparancySlider"),
                      translation : new SFVec3f([0.025,-0.923,-0.00000349096]),
                      center : new SFVec3f([0,-0.027,0]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("IndexedLineSet_1"),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  lineProperties : new SFNode(
                                    new LineProperties({
                                      linewidthScaleFactor : new SFFloat(2)})),
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Artdeco31"),
                                      emissiveColor : new SFColor([1,1,1])}))})),
                              geometry : new SFNode(
                                new IndexedLineSet({
                                  colorPerVertex : new SFBool(false),
                                  coordIndex : new MFInt32([0,1,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0,0,1,0,0])}))}))})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("Rectangle2D"),
                              translation : new SFVec3f([0.0584318,0,0]),
                              scale : new SFVec3f([0.027,0.0267372,0.0267372]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new Disk2D({}))})])}),

                            new PlaneSensor({
                              DEF : new SFString("_3"),
                              offset : new SFVec3f([0.0584318,0,0]),
                              maxPosition : new SFVec2f([1,0])})])}),

                        new Group({
                          children : new MFNode([
                            new Group({
                              DEF : new SFString("Animation"),
                              metadata : new MFNode([
                                new MetadataSet({
                                  name : new SFString("Animation"),
                                  DEF : new SFString("Animation_1"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new SFNode(
                                    new MetadataInteger({
                                      name : new SFString("duration"),
                                      DEF : new SFString("duration"),
                                      reference : new SFString("http://titania.create3000.de"),
                                      value : new MFInt32([68])})),
                                  value : new SFNode(
                                    new MetadataInteger({
                                      name : new SFString("framesPerSecond"),
                                      DEF : new SFString("framesPerSecond"),
                                      reference : new SFString("http://titania.create3000.de"),
                                      value : new MFInt32([10])}))}),
                              children : new MFNode([
                                new TimeSensor({
                                  DEF : new SFString("_4"),
                                  cycleInterval : new SFTime(6.8),
                                  loop : new SFBool(true),
                                  startTime : new SFTime(1451028308.5169),
                                  resumeTime : new SFTime(1451028223.75739),
                                  pauseTime : new SFTime(1451028247.50596),
                                  stopTime : new SFTime(1451028309.80616)}),

                                new PositionInterpolator({
                                  DEF : new SFString("pointSizeScriptSet_translationInterpolator"),
                                  key : new MFFloat([0,0.0147059,0.0294118,0.0441176,0.0588235,0.0735294,0.0882353,0.102941,0.117647,0.132353,0.147059,0.161765,0.176471,0.191176,0.205882,0.220588,0.235294,0.25,0.264706,0.279412,0.294118,0.308824,0.323529,0.338235,0.352941,0.367647,0.382353,0.397059,0.411765,0.426471,0.441176,0.455882,0.470588,0.485294,0.5,0.514706,0.529412,0.544118,0.558824,0.573529,0.588235,0.602941,0.617647,0.632353,0.647059,0.661765,0.676471,0.691176,0.705882,0.720588,0.735294,0.75,0.764706,0.779412,0.794118,0.808824,0.823529,0.838235,0.852941,0.867647,0.882353,0.897059,0.911765,0.926471,0.941176,0.955882,0.970588,0.985294,1]),
                                  keyValue : new MFVec3f([0.200605,0,0,0.202642,0,0,0.208588,0,0,0.2182,0,0,0.231232,0,0,0.247441,0,0,0.266581,0,0,0.288408,0,0,0.312679,0,0,0.339147,0,0,0.367569,0,0,0.3977,0,0,0.429295,0,0,0.462111,0,0,0.495902,0,0,0.530424,0,0,0.565432,0,0,0.600683,0,0,0.63593,0,0,0.670931,0,0,0.70544,0,0,0.739212,0,0,0.772004,0,0,0.803571,0,0,0.833668,0,0,0.86205,0,0,0.888474,0,0,0.912694,0,0,0.934466,0,0,0.953546,0,0,0.969689,0,0,0.98265,0,0,0.992186,0,0,0.99805,0,0,1,0,0,0.997866,0,0,0.991808,0,0,0.982071,0,0,0.968899,0,0,0.95254,0,0,0.933237,0,0,0.911238,0,0,0.886786,0,0,0.860128,0,0,0.831508,0,0,0.801174,0,0,0.769369,0,0,0.736339,0,0,0.70233,0,0,0.667588,0,0,0.632357,0,0,0.596883,0,0,0.561412,0,0,0.526189,0,0,0.49146,0,0,0.457469,0,0,0.424463,0,0,0.392687,0,0,0.362387,0,0,0.333807,0,0,0.307193,0,0,0.282792,0,0,0.260847,0,0,0.241605,0,0,0.225311,0,0,0.212211,0,0,0.20255,0,0,0.196573,0,0,0.194526,0,0]),
                                  metadata : new MFNode([
                                    new MetadataSet({
                                      name : new SFString("Interpolator"),
                                      DEF : new SFString("Interpolator"),
                                      reference : new SFString("http://titania.create3000.de"),
                                      value : new SFNode(
                                        new MetadataInteger({
                                          name : new SFString("key"),
                                          DEF : new SFString("key"),
                                          reference : new SFString("http://titania.create3000.de"),
                                          value : new MFInt32([0,34,68])})),
                                      value : new SFNode(
                                        new MetadataDouble({
                                          name : new SFString("keyValue"),
                                          DEF : new SFString("keyValue"),
                                          reference : new SFString("http://titania.create3000.de"),
                                          value : new MFDouble([0.20060533285141,0,0,1,0,0,0.194526299834251,0,0])})),
                                      value : new SFNode(
                                        new MetadataString({
                                          name : new SFString("keyType"),
                                          DEF : new SFString("keyType"),
                                          reference : new SFString("http://titania.create3000.de"),
                                          value : new MFString([", ","SPLINE, ","SPLINESPLINE"])}))})])})])}),

                            new Script({
                              USE : new SFString("NumParticlesyScript")})])}),

                        new Switch({
                          whichChoice : new SFInt32(-1),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("Rectangle2D_1"),
                              translation : new SFVec3f([-0.075,0,0]),
                              scale : new SFVec3f([0.025,0.0247567,0.0247567]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new Rectangle2D({}))}),

                                new TouchSensor({
                                  DEF : new SFString("_5"),
                                  description : new SFString("Toggle Animation")}),

                                new Script({
                                  DEF : new SFString("ToggleTransparencyAnim"),
                                  field : new MFNode([
                                    new field({
                                      type : field.TYPE_SFTIME,
                                      name : new SFString("set_touchTime"),
                                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                    new field({
                                      type : field.TYPE_SFNODE,
                                      name : new SFString("timer"),
                                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                      children : new MFNode([
                                        new TimeSensor({
                                          USE : new SFString("_4")})])}),
                                  ]),
ecmascript:eval (0

, function set_touchTime (value, time)
{
	if (timer .isActive)
	{
		if (timer .isPaused)
			timer .resumeTime = time;
		else
			timer .pauseTime = time;
	}
	else
		timer .startTime = time;
})})])})])})])})])}))})]),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("pointSizeScriptSet_translationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("pointSizeScriptSet_translationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Rectangle2D"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("pointSizeScriptSet_translationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("NumParticlesyScript"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ToggleTransparencyAnim"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("NumParticlesyScript"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("Rectangle2D"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("pointSizeScriptSet_translationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_offset")}),

            new ROUTE({
              fromNode : new SFString("NumParticlesyScript"),
              fromField : new SFString("string_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_string")}),

            new ROUTE({
              fromNode : new SFString("NumParticlesyScript"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_maxParticles")})}))});
console.log(X3D0.toXMLNode());
