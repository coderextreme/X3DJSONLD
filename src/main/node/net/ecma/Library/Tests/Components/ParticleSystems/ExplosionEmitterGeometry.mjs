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
var LayerSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
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
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var OrthoViewpoint = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var LineProperties = require('./x3d.mjs');
var Disk2D = require('./x3d.mjs');
var PlaneSensor = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var Rectangle2D = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Core"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("EnvironmentalEffects"),
              level : new SFInt32(4)})),
          component : new SFNode(
            new component({
              name : new SFString("Navigation"),
              level : new SFInt32(3)})),
          component : new SFNode(
            new component({
              name : new SFString("ParticleSystems"),
              level : new SFInt32(3)})),
          component : new SFNode(
            new component({
              name : new SFString("Rendering"),
              level : new SFInt32(5)})),
          component : new SFNode(
            new component({
              name : new SFString("Shape"),
              level : new SFInt32(5)})),
          component : new SFNode(
            new component({
              name : new SFString("Geometry3D"),
              level : new SFInt32(4)})),
          component : new SFNode(
            new component({
              name : new SFString("Grouping"),
              level : new SFInt32(3)})),
          component : new SFNode(
            new component({
              name : new SFString("Layering"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Text"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Geometry2D"),
              level : new SFInt32(2)})),
          component : new SFNode(
            new component({
              name : new SFString("PointingDeviceSensor"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Scripting"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Time"),
              level : new SFInt32(2)})),
          meta : new MFNode([
            new meta({
              name : new SFString("created"),
              content : new SFString("Fri, 30 Sep 2022 17:09:57 GMT")}),

            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Sunrise X3D Editor")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Sunrise X3D Editor V1.0.0, https://create3000.github.io/Sunrise/")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///Users/holger/Desktop/X_ITE/x_ite/src/tests/ExplosionEmitterGeometry.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Fri, 30 Sep 2022 18:26:37 GMT")})])})),
      Scene : new SFNode(
        new Scene({
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
                      geometryType : new SFString("GEOMETRY"),
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
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0.403922,0.305882,0.654902])}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([1,1,1])}))}),

                    new Transform({
                      DEF : new SFString("Box"),
                      translation : new SFVec3f([-10,0,0]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({}))})),
                          geometry : new SFNode(
                            new Box({}))})])}),

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
                              string : new MFString(["numParticles 200"]),
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
                              translation : new SFVec3f([1,0,0]),
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
                              offset : new SFVec3f([1,0,0]),
                              maxPosition : new SFVec2f([1,0])})])}),

                        new Group({
                          children : new MFNode([
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
                                  value : new SFString("200")}),

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
                                  value : new SFString("200")}),
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
})})])}),

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
                                  DEF : new SFString("_4"),
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
                                          cycleInterval : new SFTime(6.8),
                                          loop : new SFBool(true),
                                          startTime : new SFTime(1451028308.5169),
                                          resumeTime : new SFTime(1451028223.75739),
                                          pauseTime : new SFTime(1451028247.50596),
                                          stopTime : new SFTime(1451028309.80616)})])}),
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
})})])})])})])})])}))})),
          children : new MFNode([
            new ROUTE({
              fromNode : new SFString("NumParticlesyScript"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_maxParticles")}),

            new ROUTE({
              fromNode : new SFString("NumParticlesyScript"),
              fromField : new SFString("string_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_string")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("Rectangle2D"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("NumParticlesyScript"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ToggleTransparencyAnim"),
              toField : new SFString("set_touchTime")})])}))});
console.log(X3D0.toXMLNode());
