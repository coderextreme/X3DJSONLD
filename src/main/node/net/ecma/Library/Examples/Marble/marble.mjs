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
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Rectangle2D = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var LineProperties = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var PointSet = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var KeySensor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TwoSidedMaterial = require('./x3d.mjs');
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
              content : new SFString("Tue, 22 Sep 2015 11:26:52 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V3.0.4, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Library/Examples/Marble/marble.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Tue, 13 Jun 2017 09:43:36 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Grid"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
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
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("dimension"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("10 10 10")}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("majorLineEvery"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("5 5 5")}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("majorLineOffset"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("color"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.5 0.5 0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("transparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.61803")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("lineColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 0.7 0.7")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("lineTransparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.8")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("majorLineColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 0.7 0.7")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("majorLineTransparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.6")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("solid"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("translation")}),

                            new connect({
                              nodeField : new SFString("rotation"),
                              protoField : new SFString("rotation")}),

                            new connect({
                              nodeField : new SFString("scale"),
                              protoField : new SFString("scale")})])})),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Plane"),
                          rotation : new SFRotation([-3.09087122910219e-8,0.70710528118436,0.707108281185553,3.14159]),
                          scale : new SFVec3f([10,10,1]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Material2"),
                                      diffuseColor : new SFColor([0,0,0]),
                                      IS : new SFNode(
                                        new IS({
                                          connect : new MFNode([
                                            new connect({
                                              nodeField : new SFString("emissiveColor"),
                                              protoField : new SFString("color")}),

                                            new connect({
                                              nodeField : new SFString("transparency"),
                                              protoField : new SFString("transparency")})])}))}))})),
                              geometry : new SFNode(
                                new Rectangle2D({
                                  size : new SFVec2f([1,1]),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("solid"),
                                          protoField : new SFString("solid")})])}))}))})])}),

                        new Shape({
                          DEF : new SFString("MajorGrid"),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("MajorMaterial"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("majorLineColor")}),

                                        new connect({
                                          nodeField : new SFString("transparency"),
                                          protoField : new SFString("majorLineTransparency")})])}))}))})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              DEF : new SFString("MajorGrid_1"),
                              coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-5,0,-5.25,-5,0,5.25,0,0,-5.25,0,0,5.25,5,0,-5.25,5,0,5.25,-5.25,0,-5,5.25,0,-5,-5.25,0,0,5.25,0,0,-5.25,0,5,5.25,0,5])}))}))}),

                        new Shape({
                          DEF : new SFString("MinorGrid"),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("MinorMaterial"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("lineColor")}),

                                        new connect({
                                          nodeField : new SFString("transparency"),
                                          protoField : new SFString("lineTransparency")})])}))}))})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              DEF : new SFString("MinorGrid_1"),
                              coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-4,0,-5,-4,0,5,-3,0,-5,-3,0,5,-2,0,-5,-2,0,5,-1,0,-5,-1,0,5,1,0,-5,1,0,5,2,0,-5,2,0,5,3,0,-5,3,0,5,4,0,-5,4,0,5,-5,0,-4,5,0,-4,-5,0,-3,5,0,-3,-5,0,-2,5,0,-2,-5,0,-1,5,0,-1,-5,0,1,5,0,1,-5,0,2,5,0,2,-5,0,3,5,0,3,-5,0,4,5,0,4])}))}))}),

                        new Shape({
                          DEF : new SFString("MajorPoints"),
                          appearance : new SFNode(
                            new Appearance({
                              lineProperties : new SFNode(
                                new LineProperties({
                                  linewidthScaleFactor : new SFFloat(6)})),
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("MajorMaterial")}))})),
                          geometry : new SFNode(
                            new PointSet({
                              DEF : new SFString("MajorPoints_1"),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,-5,0,0,0,0,0,5,0])}))}))}),

                        new Shape({
                          DEF : new SFString("MinorPoints"),
                          appearance : new SFNode(
                            new Appearance({
                              lineProperties : new SFNode(
                                new LineProperties({
                                  linewidthScaleFactor : new SFFloat(4)})),
                              material : new SFNode(
                                new Material({
                                  USE : new SFString("MinorMaterial")}))})),
                          geometry : new SFNode(
                            new PointSet({
                              DEF : new SFString("MinorPoints_1"),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,-4,0,0,-3,0,0,-2,0,0,-1,0,0,1,0,0,2,0,0,3,0,0,4,0])}))}))})])}),

                    new Script({
                      DEF : new SFString("GridScript"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
                      field : new MFNode([
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
                          type : field.TYPE_SFNODE,
                          name : new SFString("plane"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Plane")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("majorGrid"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new IndexedLineSet({
                              USE : new SFString("MajorGrid_1")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("minorGrid"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new IndexedLineSet({
                              USE : new SFString("MinorGrid_1")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("majorPoints"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new PointSet({
                              USE : new SFString("MajorPoints_1")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("minorPoints"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new PointSet({
                              USE : new SFString("MinorPoints_1")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("dimension"),
                              protoField : new SFString("dimension")}),

                            new connect({
                              nodeField : new SFString("majorLineEvery"),
                              protoField : new SFString("majorLineEvery")}),

                            new connect({
                              nodeField : new SFString("majorLineOffset"),
                              protoField : new SFString("majorLineOffset")})])})]),
                      
ecmascript:eval (0

, function initialize ()
{
	eventsProcessed ();
}

, function eventsProcessed ()
{
	// Plane

	plane .scale = new SFVec3f (dimension [0], dimension [2], 1);

	// Grid

	generateGrid (true, majorGrid);
	generateGrid (false, minorGrid);

	// Points

	generatePoints (true,  majorPoints .coord .point);
	generatePoints (false, minorPoints .coord .point);
}

, function generateGrid (major, grid)
{
	var point       = grid .coord .point;
	var coordIndex  = new MFInt32 ();
	var scaleX1_2   = dimension [0] / 2;
	var scaleZ1_2   = dimension [2] / 2;
	var majorAdd    = major / 4;
	var p           = 0;

	for (var i = 0, size = dimension [0] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 0))
			continue;

		var x = -scaleX1_2 + i;

		point [p]     = new SFVec3f (x, 0, -scaleZ1_2 - majorAdd);
		point [p + 1] = new SFVec3f (x, 0,  scaleZ1_2 + majorAdd);
		coordIndex [coordIndex .length] = p;
		coordIndex [coordIndex .length] = p + 1;
		coordIndex [coordIndex .length] = -1;
			
		p += 2;
	}

	for (var i = 0, size = dimension [2] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 2))
			continue;

		var z = -scaleZ1_2 + i;

		point [p]     = new SFVec3f (-scaleX1_2 - majorAdd, 0, z);
		point [p + 1] = new SFVec3f ( scaleX1_2 + majorAdd, 0, z);
		coordIndex [coordIndex .length] = p;
		coordIndex [coordIndex .length] = p + 1;
		coordIndex [coordIndex .length] = -1;
		
		p += 2;
	}

	point .length = p;

	grid .set_coordIndex = coordIndex;
}

, function generatePoints (major, point)
{
	var scaleY1_2 = -dimension [1] / 2;
	var p         = 0;

	for (var i = 0, size = dimension [1] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 1))
			continue;

		point [p] = new SFVec3f (0, scaleY1_2 + i, 0);
		++ p;
	}

	point .length = p;
}

, function isMajorLine (i, index)
{
	for (var d = index; d < majorLineEvery .length; d += 3)
	{
		if (isMajor (i, dimension [index], majorLineEvery [d], majorLineOffset [d]))
			return true;
	}

	return false;
}

, function isMajor (i, dimension, majorLineEvery, majorLineOffset)
{
	if (majorLineEvery)
	{
		var index = Math .floor (i - dimension / 2 - majorLineOffset);

		return !(index % majorLineEvery);
	}

	return false;
})})])}))}),

            new ProtoDeclare({
              name : new SFString("NewPrototype"),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoDeclare({
                      name : new SFString("Grid"),
                      ProtoInterface : new SFNode(
                        new ProtoInterface({
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
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("1 1 1")}),

                            new field({
                              type : field.TYPE_MFINT32,
                              name : new SFString("dimension"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("10 10 10")}),

                            new field({
                              type : field.TYPE_MFINT32,
                              name : new SFString("majorLineEvery"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("5 5 5")}),

                            new field({
                              type : field.TYPE_MFINT32,
                              name : new SFString("majorLineOffset"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0 0 0")}),

                            new field({
                              type : field.TYPE_SFCOLOR,
                              name : new SFString("color"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.5 0.5 0.5")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("transparency"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.61803")}),

                            new field({
                              type : field.TYPE_SFCOLOR,
                              name : new SFString("lineColor"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("1 0.7 0.7")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("lineTransparency"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.8")}),

                            new field({
                              type : field.TYPE_SFCOLOR,
                              name : new SFString("majorLineColor"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("1 0.7 0.7")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("majorLineTransparency"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                              value : new SFString("0.6")}),

                            new field({
                              type : field.TYPE_SFBOOL,
                              name : new SFString("solid"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              value : new SFString("true")})])})),
                      ProtoBody : new SFNode(
                        new ProtoBody({
                          children : new MFNode([
                            new Transform({
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("translation"),
                                      protoField : new SFString("translation")}),

                                    new connect({
                                      nodeField : new SFString("rotation"),
                                      protoField : new SFString("rotation")}),

                                    new connect({
                                      nodeField : new SFString("scale"),
                                      protoField : new SFString("scale")})])})),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("Plane_1"),
                                  rotation : new SFRotation([-3.09087122910219e-8,0.70710528118436,0.707108281185553,3.14159]),
                                  scale : new SFVec3f([10,10,1]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              DEF : new SFString("Material2_1"),
                                              diffuseColor : new SFColor([0,0,0]),
                                              IS : new SFNode(
                                                new IS({
                                                  connect : new MFNode([
                                                    new connect({
                                                      nodeField : new SFString("emissiveColor"),
                                                      protoField : new SFString("color")}),

                                                    new connect({
                                                      nodeField : new SFString("transparency"),
                                                      protoField : new SFString("transparency")})])}))}))})),
                                      geometry : new SFNode(
                                        new Rectangle2D({
                                          size : new SFVec2f([1,1]),
                                          IS : new SFNode(
                                            new IS({
                                              connect : new MFNode([
                                                new connect({
                                                  nodeField : new SFString("solid"),
                                                  protoField : new SFString("solid")})])}))}))})])}),

                                new Shape({
                                  DEF : new SFString("MajorGrid_2"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          DEF : new SFString("MajorMaterial_1"),
                                          IS : new SFNode(
                                            new IS({
                                              connect : new MFNode([
                                                new connect({
                                                  nodeField : new SFString("emissiveColor"),
                                                  protoField : new SFString("majorLineColor")}),

                                                new connect({
                                                  nodeField : new SFString("transparency"),
                                                  protoField : new SFString("majorLineTransparency")})])}))}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MajorGrid_3"),
                                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-5,0,-5.25,-5,0,5.25,0,0,-5.25,0,0,5.25,5,0,-5.25,5,0,5.25,-5.25,0,-5,5.25,0,-5,-5.25,0,0,5.25,0,0,-5.25,0,5,5.25,0,5])}))}))}),

                                new Shape({
                                  DEF : new SFString("MinorGrid_2"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          DEF : new SFString("MinorMaterial_1"),
                                          IS : new SFNode(
                                            new IS({
                                              connect : new MFNode([
                                                new connect({
                                                  nodeField : new SFString("emissiveColor"),
                                                  protoField : new SFString("lineColor")}),

                                                new connect({
                                                  nodeField : new SFString("transparency"),
                                                  protoField : new SFString("lineTransparency")})])}))}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MinorGrid_3"),
                                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-4,0,-5,-4,0,5,-3,0,-5,-3,0,5,-2,0,-5,-2,0,5,-1,0,-5,-1,0,5,1,0,-5,1,0,5,2,0,-5,2,0,5,3,0,-5,3,0,5,4,0,-5,4,0,5,-5,0,-4,5,0,-4,-5,0,-3,5,0,-3,-5,0,-2,5,0,-2,-5,0,-1,5,0,-1,-5,0,1,5,0,1,-5,0,2,5,0,2,-5,0,3,5,0,3,-5,0,4,5,0,4])}))}))}),

                                new Shape({
                                  DEF : new SFString("MajorPoints_2"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      lineProperties : new SFNode(
                                        new LineProperties({
                                          linewidthScaleFactor : new SFFloat(6)})),
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("MajorMaterial_1")}))})),
                                  geometry : new SFNode(
                                    new PointSet({
                                      DEF : new SFString("MajorPoints_3"),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,-5,0,0,0,0,0,5,0])}))}))}),

                                new Shape({
                                  DEF : new SFString("MinorPoints_2"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      lineProperties : new SFNode(
                                        new LineProperties({
                                          linewidthScaleFactor : new SFFloat(4)})),
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("MinorMaterial_1")}))})),
                                  geometry : new SFNode(
                                    new PointSet({
                                      DEF : new SFString("MinorPoints_3"),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,-4,0,0,-3,0,0,-2,0,0,-1,0,0,1,0,0,2,0,0,3,0,0,4,0])}))}))})])}),

                            new Script({
                              DEF : new SFString("GridScript_1"),
                              directOutput : new SFBool(true),
                              mustEvaluate : new SFBool(true),
                              field : new MFNode([
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
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("plane"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new Transform({
                                      USE : new SFString("Plane_1")})])}),

                                new field({
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("majorGrid"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new IndexedLineSet({
                                      USE : new SFString("MajorGrid_3")})])}),

                                new field({
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("minorGrid"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new IndexedLineSet({
                                      USE : new SFString("MinorGrid_3")})])}),

                                new field({
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("majorPoints"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new PointSet({
                                      USE : new SFString("MajorPoints_3")})])}),

                                new field({
                                  type : field.TYPE_SFNODE,
                                  name : new SFString("minorPoints"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  children : new MFNode([
                                    new PointSet({
                                      USE : new SFString("MinorPoints_3")})])}),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("dimension"),
                                      protoField : new SFString("dimension")}),

                                    new connect({
                                      nodeField : new SFString("majorLineEvery"),
                                      protoField : new SFString("majorLineEvery")}),

                                    new connect({
                                      nodeField : new SFString("majorLineOffset"),
                                      protoField : new SFString("majorLineOffset")})])})]),
                              
ecmascript:eval (0

, function initialize ()
{
	eventsProcessed ();
}

, function eventsProcessed ()
{
	// Plane

	plane .scale = new SFVec3f (dimension [0], dimension [2], 1);

	// Grid

	generateGrid (true, majorGrid);
	generateGrid (false, minorGrid);

	// Points

	generatePoints (true,  majorPoints .coord .point);
	generatePoints (false, minorPoints .coord .point);
}

, function generateGrid (major, grid)
{
	var point       = grid .coord .point;
	var coordIndex  = new MFInt32 ();
	var scaleX1_2   = dimension [0] / 2;
	var scaleZ1_2   = dimension [2] / 2;
	var majorAdd    = major / 4;
	var p           = 0;

	for (var i = 0, size = dimension [0] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 0))
			continue;

		var x = -scaleX1_2 + i;

		point [p]     = new SFVec3f (x, 0, -scaleZ1_2 - majorAdd);
		point [p + 1] = new SFVec3f (x, 0,  scaleZ1_2 + majorAdd);
		coordIndex [coordIndex .length] = p;
		coordIndex [coordIndex .length] = p + 1;
		coordIndex [coordIndex .length] = -1;
			
		p += 2;
	}

	for (var i = 0, size = dimension [2] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 2))
			continue;

		var z = -scaleZ1_2 + i;

		point [p]     = new SFVec3f (-scaleX1_2 - majorAdd, 0, z);
		point [p + 1] = new SFVec3f ( scaleX1_2 + majorAdd, 0, z);
		coordIndex [coordIndex .length] = p;
		coordIndex [coordIndex .length] = p + 1;
		coordIndex [coordIndex .length] = -1;
		
		p += 2;
	}

	point .length = p;

	grid .set_coordIndex = coordIndex;
}

, function generatePoints (major, point)
{
	var scaleY1_2 = -dimension [1] / 2;
	var p         = 0;

	for (var i = 0, size = dimension [1] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 1))
			continue;

		point [p] = new SFVec3f (0, scaleY1_2 + i, 0);
		++ p;
	}

	point .length = p;
}

, function isMajorLine (i, index)
{
	for (var d = index; d < majorLineEvery .length; d += 3)
	{
		if (isMajor (i, dimension [index], majorLineEvery [d], majorLineOffset [d]))
			return true;
	}

	return false;
}

, function isMajor (i, dimension, majorLineEvery, majorLineOffset)
{
	if (majorLineEvery)
	{
		var index = Math .floor (i - dimension / 2 - majorLineOffset);

		return !(index % majorLineEvery);
	}

	return false;
})})])}))})])}))}),

            new WorldInfo({
              title : new SFString("marble"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("AngleGrid"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("enabled"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([false])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Grid"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("enabled"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([true])})),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("majorLineOffset"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([1,0,1])})),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("majorLineEvery"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([2,5,2])}))})),
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
                          value : new MFDouble([-3.07363247871399,8.03197002410889,15.9220294952393])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-0.921656397930821,-0.377252083461801,-0.0907212746653947,0.497329384088516])})),
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
                        new MetadataBoolean({
                          name : new SFString("selectGeometry"),
                          DEF : new SFString("selectGeometry"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([false])}))}))})])}),

            new Switch({
              DEF : new SFString("Resources"),
              whichChoice : new SFInt32(-1),
              children : new MFNode([
                new Shape({
                  DEF : new SFString("GrayBox"),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,0,0]),
                          specularColor : new SFColor([0.415,0.415,0.415]),
                          shininess : new SFFloat(0.102564)}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(3.14159),
                      colorIndex : new MFInt32([1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1]),
                      coordIndex : new MFInt32([74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([0.2,0.2,0.2,0.5,0.5,0.5])})),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("coords_ME_Cube"),
                          point : new MFVec3f([-0.699999,-1,0.699996,-0.700001,-0.700004,0.999997,-1,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1,-0.699994,-1,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1,-0.699997,0.700003,0.699999,-0.699998,1,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1,-0.699996,1,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1,0.700004,0.699994,0.700001,1,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994])}))}))}),

                new Shape({
                  DEF : new SFString("YellowBox"),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,0,0]),
                          specularColor : new SFColor([0.415,0.415,0.415]),
                          shininess : new SFFloat(0.102564)}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(3.14159),
                      colorIndex : new MFInt32([1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1]),
                      coordIndex : new MFInt32([74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([0,0,0,1,0.917647,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("coords_ME_Cube_1"),
                          point : new MFVec3f([-0.699999,-1,0.699996,-0.700001,-0.700004,0.999997,-1,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1,-0.699994,-1,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1,-0.699997,0.700003,0.699999,-0.699998,1,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1,-0.699996,1,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1,0.700004,0.699994,0.700001,1,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994])}))}))}),

                new Shape({
                  DEF : new SFString("OrangeBox"),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,0,0]),
                          specularColor : new SFColor([0.415,0.415,0.415]),
                          shininess : new SFFloat(0.102564)}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(3.14159),
                      colorIndex : new MFInt32([1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1]),
                      coordIndex : new MFInt32([74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([0,0,0,1,0.333333,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("coords_ME_Cube_2"),
                          point : new MFVec3f([-0.699999,-1,0.699996,-0.700001,-0.700004,0.999997,-1,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1,-0.699994,-1,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1,-0.699997,0.700003,0.699999,-0.699998,1,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1,-0.699996,1,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1,0.700004,0.699994,0.700001,1,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994])}))}))}),

                new Shape({
                  DEF : new SFString("RedBox"),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,0,0]),
                          specularColor : new SFColor([0.415,0.415,0.415]),
                          shininess : new SFFloat(0.102564)}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(3.14159),
                      colorIndex : new MFInt32([1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1]),
                      coordIndex : new MFInt32([74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([0,0,0,1,0,0])})),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("coords_ME_Cube_3"),
                          point : new MFVec3f([-0.699999,-1,0.699996,-0.700001,-0.700004,0.999997,-1,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1,-0.699994,-1,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1,-0.699997,0.700003,0.699999,-0.699998,1,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1,-0.699996,1,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1,0.700004,0.699994,0.700001,1,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994])}))}))}),

                new Shape({
                  DEF : new SFString("LilaBox"),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,0,0]),
                          specularColor : new SFColor([0.415,0.415,0.415]),
                          shininess : new SFFloat(0.102564)}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      creaseAngle : new SFFloat(3.14159),
                      colorIndex : new MFInt32([1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1]),
                      coordIndex : new MFInt32([74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([0,0,0,0.67451,0,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("coords_ME_Cube_4"),
                          point : new MFVec3f([-0.699999,-1,0.699996,-0.700001,-0.700004,0.999997,-1,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1,-0.699994,-1,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1,-0.699997,0.700003,0.699999,-0.699998,1,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1,-0.699996,1,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1,0.700004,0.699994,0.700001,1,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994])}))}))})])}),

            new Script({
              DEF : new SFString("EnterWorldScript"),
              
ecmascript:eval (0

, function initialize ()
{
	Browser .setBrowserOption ("Shading", "PHONG");
})}),

            new NavigationInfo({}),

            new Background({
              DEF : new SFString("Gray"),
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new KeySensor({
              DEF : new SFString("A"),
              enabled : new SFBool(false)}),

            new Transform({
              DEF : new SFString("Marble"),
              translation : new SFVec3f([0,1,0]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("SphereTranslation"),
                  children : new MFNode([
                    new Viewpoint({
                      description : new SFString("Home"),
                      position : new SFVec3f([-3.38726,12.9707,12.1553]),
                      orientation : new SFRotation([-0.94727163287453,-0.299522883916634,-0.113852955875043,0.840082])}),

                    new Transform({
                      DEF : new SFString("SphereRotation"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("Metal31"),
                                  ambientIntensity : new SFFloat(0.0955322),
                                  diffuseColor : new SFColor([0.99772,0.995715,1]),
                                  specularColor : new SFColor([1,0.701006,1]),
                                  shininess : new SFFloat(0.127551)})),
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString([", ","checkerboard.pngcheckerboard.svg"])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              solid : new SFBool(false)}))})])})])}),

                new Script({
                  DEF : new SFString("MarbleScript"),
                  directOutput : new SFBool(true),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("set_actionKeyPress"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("fieldSize"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("2 0 2")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("marbleRadius"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("position_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("timer"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("_1"),
                          cycleInterval : new SFTime(0.61803398875),
                          startTime : new SFTime(1446646222.59139)})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("orientationInterpolator"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new OrientationInterpolator({
                          DEF : new SFString("_2"),
                          key : new MFFloat([0,0.25,0.5,0.75,1]),
                          keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("positionInterpolator"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new PositionInterpolator({
                          DEF : new SFString("_3"),
                          key : new MFFloat([0,1]),
                          keyValue : new MFVec3f([0,0,0,0,0,0])})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("rectangle"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("MarblePositionRectangle"),
                          rotation : new SFRotation([0.999999999993436,0.00000362335999997621,-7.56699999995033e-10,4.71239]),
                          scaleOrientation : new SFRotation([0.999999999994294,0.00000297420999998303,0.00000160218999999086,0.785189]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Neon22"),
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      specularColor : new SFColor([0.622449,0.622449,0.622449]),
                                      emissiveColor : new SFColor([0.934028,0.00304288,1]),
                                      shininess : new SFFloat(0.0510204)}))})),
                              geometry : new SFNode(
                                new Rectangle2D({}))})])})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("grid"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Grid"),
                          DEF : new SFString("_4"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("dimension"),
                              value : new SFString("22 0 22")}),

                            new fieldValue({
                              name : new SFString("majorLineEvery"),
                              value : new SFString("2 5 2")}),

                            new fieldValue({
                              name : new SFString("majorLineOffset"),
                              value : new SFString("1 0 1")}),

                            new fieldValue({
                              name : new SFString("transparency"),
                              value : new SFString("1")}),

                            new fieldValue({
                              name : new SFString("lineColor"),
                              value : new SFString("0 0 0")}),

                            new fieldValue({
                              name : new SFString("majorLineColor"),
                              value : new SFString("0 0 0")})])})])}),
                  group : new SFNode(
                    new Group({
                      children : new MFNode([
                        new KeySensor({
                          DEF : new SFString("MarbleKeySensor")})])})]),
                  
ecmascript:eval (0

var
	up    = new SFVec3f (-1, 0,  0),
	down  = new SFVec3f ( 1, 0,  0),
	left  = new SFVec3f ( 0, 0,  1),
	right = new SFVec3f ( 0, 0, -1);

, function initialize ()
{
	positionInterpolator    .keyValue = new MFVec3f ();
	orientationInterpolator .keyValue = new MFRotation ();
	rectangle .translation            = new SFVec3f (); 

	positionInterpolator    .set_fraction = 1;
	orientationInterpolator .set_fraction = 1;
	
	position_changed = new MFInt32 (grid .dimension [0] / fieldSize [0] / 2,
	                                0,
	                                grid .dimension [2] / fieldSize [2] / 2);
}

, function set_actionKeyPress (value, time)
{
	if (timer .isActive)
		return;
	
	switch (value)
	{
		case 17: // up
			roll (-1, up, 2, time);
			break;
		case 18: // down
			roll (1, down, 2, time);
			break;
		case 19: // left
			roll (-1, left, 0, time);
			break;
		case 20: // right
			roll (1, right, 0, time);
			break;
	}
}

, function roll (direction, rotationAxis, axis, time)
{
	// PositionInterpolator

	var
		startTranslation = positionInterpolator .keyValue [1],
		translation      = new SFVec3f ();
		
	translation [axis] = 2 * grid .scale [axis] * direction;
	translation        = startTranslation .add (translation);

	if (Math .abs (translation [axis]) > grid .dimension [axis] / fieldSize [axis] * grid .scale [axis])
		return;
		
	position_changed [axis] += direction;

	positionInterpolator .keyValue = new MFVec3f (startTranslation, translation);
	
	// OrientationInterpolator

	var
		startRotation = orientationInterpolator .keyValue [4],
		angle         = 2 * grid .scale [axis] / marbleRadius,
	   rotation1     = new SFRotation (rotationAxis, angle * 0.25),
		rotation2     = new SFRotation (rotationAxis, angle * 0.5),
		rotation3     = new SFRotation (rotationAxis, angle * 0.75),
		rotation4     = new SFRotation (rotationAxis, angle);
	
	rotation1 = startRotation .multiply (rotation1);
	rotation2 = startRotation .multiply (rotation2);
	rotation3 = startRotation .multiply (rotation3);
	rotation4 = startRotation .multiply (rotation4);

	orientationInterpolator .keyValue = new MFRotation (startRotation, rotation1, rotation2, rotation3, rotation4);
	timer .startTime = time;
	
	// Rectangle
	
	rectangle .translation = positionInterpolator .keyValue [1];
})})])}),

            new Transform({
              USE : new SFString("MarblePositionRectangle")}),

            new ProtoInstance({
              name : new SFString("Grid"),
              USE : new SFString("_4")}),

            new Script({
              DEF : new SFString("ItemsScript"),
              field : new MFNode([
                new field({
                  type : field.TYPE_MFINT32,
                  name : new SFString("set_position"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("fieldSize"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  value : new SFString("2 0 2")}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("item"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Item"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("_5"),
                          rotation : new SFRotation([0,1,0,1.92752507496879]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("Rectangle2D"),
                              translation : new SFVec3f([0,1,0]),
                              rotation : new SFRotation([-3.18379e-14,-9.22889e-14,1,2.35619]),
                              scale : new SFVec3f([0.707107,0.707107,1]),
                              scaleOrientation : new SFRotation([0.00000990983999946696,0.00000306160999983532,0.999999999946211,0.392693]),
                              children : new MFNode([
                                new Group({
                                  DEF : new SFString("ItemRotationAnim"),
                                  metadata : new MFNode([
                                    new MetadataSet({
                                      name : new SFString("Animation"),
                                      DEF : new SFString("Animation"),
                                      reference : new SFString("http://titania.create3000.de"),
                                      value : new SFNode(
                                        new MetadataInteger({
                                          name : new SFString("duration"),
                                          DEF : new SFString("duration"),
                                          reference : new SFString("http://titania.create3000.de"),
                                          value : new MFInt32([48])})),
                                      value : new SFNode(
                                        new MetadataInteger({
                                          name : new SFString("framesPerSecond"),
                                          DEF : new SFString("framesPerSecond"),
                                          reference : new SFString("http://titania.create3000.de"),
                                          value : new MFInt32([10])}))}),
                                  children : new MFNode([
                                    new TimeSensor({
                                      DEF : new SFString("_6"),
                                      cycleInterval : new SFTime(4.8),
                                      loop : new SFBool(true)}),

                                    new OrientationInterpolator({
                                      DEF : new SFString("RotationInterpolator"),
                                      key : new MFFloat([0,0.0208333,0.0416667,0.0625,0.0833333,0.104167,0.125,0.145833,0.166667,0.1875,0.208333,0.229167,0.25,0.270833,0.291667,0.3125,0.333333,0.354167,0.375,0.395833,0.416667,0.4375,0.458333,0.479167,0.5,0.520833,0.541667,0.5625,0.583333,0.604167,0.625,0.645833,0.666667,0.6875,0.708333,0.729167,0.75,0.770833,0.791667,0.8125,0.833333,0.854167,0.875,0.895833,0.916667,0.9375,0.958333,0.979167,1]),
                                      keyValue : new MFRotation([0,0,1,0,0,-1,0,0.124026000000001,0,-1,0,0.250436,0,-1,0,0.378893,0,-1,0,0.509054,0,-1,0,0.640579,0,-1,0,0.773126,0,-1,0,0.906355,0,-1,0,1.03993,0,-1,0,1.1735,0,-1,0,1.30672,0,-1,0,1.43927,0,-1,0,1.5708,0,-1,0,1.70107,0,-1,0,1.83032,0,-1,0,1.95889,0,-1,0,2.08712,0,-1,0,2.21535,0,-1,0,2.34392,0,-1,0,2.47317,0,-1,0,2.60345,0,-1,0,2.73509,0,-1,0,2.86843,0,-1,0,3.00382,0,1,0,3.14159,0,1,0,2.99996,0,1,0,2.85389,0,1,0,2.70441,0,1,0,2.55254,0,1,0,2.39932,0,1,0,2.24575,0,1,0,2.09286,0,1,0,1.94168,0,1,0,1.79322,0,1,0,1.64852,0,1,0,1.50859,0,1,0,1.37445,0,1,0,1.24679,0,1,0,1.12492,0,1,0,1.00783,0,1,0,0.894481,0,1,0,0.783864,0,1,0,0.674952,0,1,0,0.566721,0,1,0,0.458149,0,1,0,0.348214,0,1,0,0.235892,0,1,0,0.120161000000002,0,0,1,0]),
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
                                              value : new MFInt32([0,12,24,36,48])})),
                                          value : new SFNode(
                                            new MetadataDouble({
                                              name : new SFString("keyValue"),
                                              DEF : new SFString("keyValue"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFDouble([0,0,1,0,0,-1,0,1.570796251297,0,1,0,3.14159274101257,0,1,0,1.37444686889648,0,0,1,0])})),
                                          value : new SFNode(
                                            new MetadataString({
                                              name : new SFString("keyType"),
                                              DEF : new SFString("keyType"),
                                              reference : new SFString("http://titania.create3000.de"),
                                              value : new MFString([", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"])}))})])})])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new TwoSidedMaterial({
                                          separateBackColor : new SFBool(true),
                                          ambientIntensity : new SFFloat(0),
                                          diffuseColor : new SFColor([0,0,0]),
                                          specularColor : new SFColor([0.622449,0.622449,0.622449]),
                                          emissiveColor : new SFColor([0.460235,0,1]),
                                          shininess : new SFFloat(0.0510204),
                                          backAmbientIntensity : new SFFloat(0),
                                          backDiffuseColor : new SFColor([0,0,0]),
                                          backSpecularColor : new SFColor([0.721,0.721,0.721]),
                                          backEmissiveColor : new SFColor([1,0.0392157,0]),
                                          backShininess : new SFFloat(0.0903955)}))})),
                                  geometry : new SFNode(
                                    new Rectangle2D({}))})])})])})])})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("itemGroup"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("ItemGroup"),
                      children : new MFNode([
                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])}),

                        new Transform({
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Item")})])})])})])}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("grid"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Grid"),
                      USE : new SFString("_4")})])}),
              ]),
ecmascript:eval (0

var fillRate = 0.25

, function initialize ()
{
	set_startTime (0);
}

, function set_position (value)
{
	print (value);
}

, function set_startTime ()
{
	var itemCount = Math .floor (grid .dimension [0] / fieldSize [0] * grid .dimension [2] / fieldSize [2] * fillRate);
	
	itemGroup .children .length = 0;
	
	for (var i = 0; i < itemCount; ++i)
	{
		var transform = Browser .currentScene .createNode ("Transform");
		
		transform .children [0] = item;
		itemGroup .children [i] = transform;
	}
})}),

            new Group({
              USE : new SFString("ItemGroup")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("MarbleKeySensor"),
              fromField : new SFString("actionKeyPress"),
              toNode : new SFString("MarbleScript"),
              toField : new SFString("set_actionKeyPress")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SphereRotation"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("SphereTranslation"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("MarbleScript"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("ItemsScript"),
              toField : new SFString("set_position")}),

            new ROUTE({
              fromNode : new SFString("_6"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_5"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());
