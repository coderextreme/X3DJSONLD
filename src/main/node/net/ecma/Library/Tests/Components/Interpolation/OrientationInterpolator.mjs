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
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
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
              content : new SFString("Mon, 04 Jan 2016 06:29:42 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V4.3.3, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://rawgit.com/create3000/Library/master/Tests/Components/Interpolation/OrientationInterpolator.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 27 Oct 2018 09:53:37 GMT")}),

            new meta({
              name : new SFString("titania-output-style"),
              content : new SFString("Nicest")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("LineTrail"),
              url : new MFString(["https://cdn.rawgit.com/create3000/Titania/master/Library/Tests/Interpolation/LineTrail.wrl"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("cycleInterval"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("resetTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("point"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("dimension"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])}),

            new WorldInfo({
              title : new SFString("OrientationChaser"),
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
                          value : new MFDouble([-1.26207339763641,-3.20390677452087,-3.62576198577881])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0.00718989036977291,-0.937747418880463,0.347243458032608,2.86365866661072])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Page"),
                      DEF : new SFString("Page"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("activeView"),
                          DEF : new SFString("activeView"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([1])})),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("multiView"),
                          DEF : new SFString("multiView"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([0])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("selectGeometry"),
                          DEF : new SFString("selectGeometry"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([false])})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("nodes"),
                          DEF : new SFString("nodes"),
                          reference : new SFString("http://titania.create3000.de"),
                          Script : new SFNode(
                            new Script({
                              DEF : new SFString("FollowerScript"),
                              field : new MFNode([
                                new field({
                                  type : field.TYPE_SFTIME,
                                  name : new SFString("set_time"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFBOOL,
                                  name : new SFString("set_active"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFROTATION,
                                  name : new SFString("set_rotation"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFCOLOR,
                                  name : new SFString("color_changed"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFVEC3F,
                                  name : new SFString("point_changed"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("touchSensor"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new TouchSensor({
                                      DEF : new SFString("Touch")})])}),

                                new field({
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("timeSensor"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new TimeSensor({
                                      DEF : new SFString("_1"),
                                      cycleInterval : new SFTime(2),
                                      startTime : new SFTime(1540633981.11618),
                                      stopTime : new SFTime(1540633981.11618)})])}),

                                new field({
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("interpolator"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new OrientationInterpolator({
                                      DEF : new SFString("_2"),
                                      key : new MFFloat([0,1]),
                                      keyValue : new MFRotation([0.835275572584412,-0.549831535876019,0,0.558846203626118,-0.894060667491528,0.44794589276452,0,0.919814454880826])})])}),
                              ]),vrmlscript:

, function initialize ()
{
	timeSensor .stopTime  = 0;
	timeSensor .startTime = 0;

	interpolator .keyValue [0] = new SFRotation ();
	interpolator .keyValue [1] = new SFRotation ();
}

, function set_time (value, time)
{
	timeSensor .stopTime  = time;
	timeSensor .startTime = time;

	interpolator .keyValue [0] = interpolator .value_changed;
	interpolator .keyValue [1] = new SFRotation (new SFVec3f (0, 0, 1), touchSensor .hitPoint_changed);
}

, function set_active (value)
{
	if (value)
		color_changed = new SFColor (0.8, 0, 0);
	
	else
		color_changed = new SFColor (0.8, 0.8, 0.8);
}

, function set_rotation (value)
{
	point_changed = value .multVec (new SFVec3f (0, 0, 1));
})}))}))}))})])}),

            new NavigationInfo({
              type : ["NONE","ANY"]}),

            new Background({
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new Viewpoint({
              position : new SFVec3f([0,0,5])}),

            new Shape({
              DEF : new SFString("LineTrail"),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      emissiveColor : new SFColor([0,0.8,0.8])}))})),
              geometry : new SFNode(
                new ProtoInstance({
                  name : new SFString("LineTrail"),
                  DEF : new SFString("Trail"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("enabled"),
                      value : new SFString("false")}),

                    new fieldValue({
                      name : new SFString("cycleInterval"),
                      value : new SFString("0.1")}),

                    new fieldValue({
                      name : new SFString("point"),
                      value : new SFString("0.356336 0.711216 0.605968")}),

                    new fieldValue({
                      name : new SFString("dimension"),
                      value : new SFString("100")})])}))}),

            new Transform({
              DEF : new SFString("Sphere"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(0.5)}))})),
                  geometry : new SFNode(
                    new Sphere({}))}),

                new TouchSensor({
                  USE : new SFString("Touch")})])}),

            new Transform({
              DEF : new SFString("Cone"),
              rotation : new SFRotation([-0.894060667491529,0.44794589276452,0,0.919814454880826]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Cone_3"),
                  translation : new SFVec3f([0,0,0.192283]),
                  rotation : new SFRotation([1,0,0,1.5708]),
                  scale : new SFVec3f([0.770473,0.770473,0.770473]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("ConeMaterial")}))})),
                      geometry : new SFNode(
                        new Cone({}))})])}),

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
                              point : new MFVec3f([-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1])}))}))})])})])}),

            new Script({
              USE : new SFString("FollowerScript")}),

            new ROUTE({
              fromNode : new SFString("Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("FollowerScript"),
              toField : new SFString("set_time")}),

            new ROUTE({
              fromNode : new SFString("FollowerScript"),
              fromField : new SFString("color_changed"),
              toNode : new SFString("ConeMaterial"),
              toField : new SFString("set_diffuseColor")}),

            new ROUTE({
              fromNode : new SFString("FollowerScript"),
              fromField : new SFString("point_changed"),
              toNode : new SFString("Trail"),
              toField : new SFString("set_point")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("FollowerScript"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Cone"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Trail"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("isActive"),
              toNode : new SFString("FollowerScript"),
              toField : new SFString("set_active")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_fraction")})])}))});
console.log(X3D0.toXMLNode());
