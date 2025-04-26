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
var IndexedFaceSet = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var FillProperties = require('./x3d.mjs');
var LineProperties = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var PlaneSensor = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Disk2D = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var LineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var OrthoViewpoint = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Fri, 04 Sep 2015 10:19:01 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V3.0.4, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Tue, 25 Jul 2017 09:42:17 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("Connectors")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("RoundedRectangle2D"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("cornerRadius"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("size"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("2 2")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("solid"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new IndexedFaceSet({
                      DEF : new SFString("Geometry"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("solid"),
                              protoField : new SFString("solid")})])})),
                      coord : new SFNode(
                        new Coordinate({}))}),

                    new Script({
                      DEF : new SFString("RoundedRectangle2D"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("cornerDimension"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("10")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("cornerRadius"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("size"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("geometry"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new IndexedFaceSet({
                              USE : new SFString("Geometry")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("cornerRadius"),
                              protoField : new SFString("cornerRadius")}),

                            new connect({
                              nodeField : new SFString("size"),
                              protoField : new SFString("size")})])})]),
                      vrmlscript:

, function initialize ()
{
	var point         = new SFVec3f (cornerRadius, 0, 0);
	var startRotation = new SFRotation ();
	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);
	var corner        = new MFVec3f ();
	var coordIndex    = new MFInt32 ();
	var points        = new MFVec3f ();

	for (var i = 0; i < cornerDimension * 4; ++ i)
		coordIndex [coordIndex .length] = i;

	geometry .coordIndex = coordIndex;

	for (var i = 0; i < cornerDimension; ++i)
		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);

	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = corner [i] .add (translation);

	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	geometry .coord .point = points;
})})])}))}),

            new ProtoDeclare({
              name : new SFString("Widget"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("fillColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.1 0.1 0.1")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("lineColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.4 0.4 0.4")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("linewidthScaleFactor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("geometry"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Shape"),
                      child : new SFNode(
                        new Shape({
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("geometry"),
                                  protoField : new SFString("geometry")})])})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("diffuseColor"),
                                          protoField : new SFString("fillColor")})])}))}))}))})),
                      child : new SFNode(
                        new Shape({
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("geometry"),
                                  protoField : new SFString("geometry")})])})),
                          appearance : new SFNode(
                            new Appearance({
                              fillProperties : new SFNode(
                                new FillProperties({
                                  filled : new SFBool(false),
                                  hatched : new SFBool(false)})),
                              lineProperties : new SFNode(
                                new LineProperties({
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("linewidthScaleFactor"),
                                          protoField : new SFString("linewidthScaleFactor")})])}))})),
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0,0,0]),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("lineColor")})])}))}))}))}))})])}))}),

            new ProtoDeclare({
              name : new SFString("Node"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new PlaneSensor({
                          DEF : new SFString("PlaneSensor")}),

                        new Transform({
                          DEF : new SFString("Node"),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("translation"),
                                  protoField : new SFString("translation")})])})),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Widget"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("geometry"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("RoundedRectangle2D"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("cornerRadius"),
                                          value : new SFString("0.12")}),

                                        new fieldValue({
                                          name : new SFString("size"),
                                          value : new SFString("2 1")})])})])})])}),

                            new Transform({
                              DEF : new SFString("Input"),
                              translation : new SFVec3f([-1,0,0]),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("Widget"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("lineColor"),
                                      value : new SFString("0.72 0.14 0.23")}),

                                    new fieldValue({
                                      name : new SFString("geometry"),
                                      children : new MFNode([
                                        new Disk2D({
                                          DEF : new SFString("Connector"),
                                          outerRadius : new SFFloat(0.2)})])})])})])}),

                            new Transform({
                              DEF : new SFString("Output"),
                              translation : new SFVec3f([1,0,0]),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("Widget"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("lineColor"),
                                      value : new SFString("0.44 0.5 0.72")}),

                                    new fieldValue({
                                      name : new SFString("geometry"),
                                      children : new MFNode([
                                        new Disk2D({
                                          USE : new SFString("Connector")})])})])})])})])})])}),

                    new Script({
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("translation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("sensor"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new PlaneSensor({
                              USE : new SFString("PlaneSensor")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("transform"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Node")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("translation")})])})]),
                      vrmlscript:
, function initialize ()
{
	sensor .offset = translation;
})}),

                    new ROUTE({
                      fromNode : new SFString("PlaneSensor"),
                      fromField : new SFString("translation_changed"),
                      toNode : new SFString("Node"),
                      toField : new SFString("set_translation")})])}))}),

            new ProtoDeclare({
              name : new SFString("Route"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("lineColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.43 0.43 0.98")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("linewidthScaleFactor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("2")}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("output"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("input"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          lineProperties : new SFNode(
                            new LineProperties({
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("linewidthScaleFactor"),
                                      protoField : new SFString("linewidthScaleFactor")})])}))})),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,0]),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("emissiveColor"),
                                      protoField : new SFString("lineColor")})])}))}))})),
                      geometry : new SFNode(
                        new LineSet({
                          DEF : new SFString("Geometry_1"),
                          vertexCount : new MFInt32([2]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,0,0,1,0,0])}))}))}),

                    new Script({
                      DEF : new SFString("Route"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("set_translation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("routeDimension"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("21")}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("output"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("input"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("geometry"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new LineSet({
                              USE : new SFString("Geometry_1")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("self"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Script({
                              USE : new SFString("Route")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("output"),
                              protoField : new SFString("output")}),

                            new connect({
                              nodeField : new SFString("input"),
                              protoField : new SFString("input")})])})]),
                      vrmlscript:
, function initialize ()
{
	Browser .addRoute (output, 'translation_changed', self, 'set_translation');
	Browser .addRoute (input,  'translation_changed', self, 'set_translation');

	set_translation ();
}

, function set_translation ()
{
	geometry .vertexCount [0] = routeDimension;

	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));
	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));

	var w = inPoint .x - outPoint .x;
	var h = outPoint .y - inPoint .y;

	for (var i = 0; i < routeDimension; ++ i)
	{
		var t = i / (routeDimension - 1);
		var y = h / 2 * (Math .cos (t * Math .PI) - 1);

		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));
	}
})})])}))}),

            new NavigationInfo({
              type : [", ","PLANE_create3000.deANY"]}),

            new Background({
              skyColor : new MFColor([0.2,0.2,0.2])}),

            new OrthoViewpoint({
              description : new SFString("OthoViewpoint"),
              position : new SFVec3f([-3.13496,-4.19776,10]),
              centerOfRotation : new SFVec3f([-3.13496,-4.19776,0]),
              fieldOfView : new SFVec3f([0,0,10,10])}),

            new Viewpoint({
              description : new SFString("Viewpoint")}),

            new Transform({
              DEF : new SFString("Connectors"),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Route"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("output"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          DEF : new SFString("N1"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("translation"),
                              value : new SFString("-3.98323 2.88948 0")})])})])}),

                    new fieldValue({
                      name : new SFString("input"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          DEF : new SFString("N2"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("translation"),
                              value : new SFString("-0.0890862 2.96049 0")})])})])})])}),

                new ProtoInstance({
                  name : new SFString("Route"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("output"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N1")})])}),

                    new fieldValue({
                      name : new SFString("input"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          DEF : new SFString("N3"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("translation"),
                              value : new SFString("-0.104169 1.16371 0")})])})])})])}),

                new ProtoInstance({
                  name : new SFString("Route"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("output"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N1")})])}),

                    new fieldValue({
                      name : new SFString("input"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          DEF : new SFString("N4"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("translation"),
                              value : new SFString("-0.0998688 -0.40172 0")})])})])})])}),

                new ProtoInstance({
                  name : new SFString("Route"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("output"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N1")})])}),

                    new fieldValue({
                      name : new SFString("input"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          DEF : new SFString("N5"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("translation"),
                              value : new SFString("-0.0998687 -2.14742 0")})])})])})])}),

                new ProtoInstance({
                  name : new SFString("Route"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("output"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N2")})])}),

                    new fieldValue({
                      name : new SFString("input"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          DEF : new SFString("N6"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("translation"),
                              value : new SFString("3.55694 2.4116 0")})])})])})])}),

                new ProtoInstance({
                  name : new SFString("Route"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("output"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N3")})])}),

                    new fieldValue({
                      name : new SFString("input"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N6")})])})])}),

                new ProtoInstance({
                  name : new SFString("Route"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("output"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N4")})])}),

                    new fieldValue({
                      name : new SFString("input"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          DEF : new SFString("N7"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("translation"),
                              value : new SFString("3.75106 -0.0794556 0")})])})])})])}),

                new ProtoInstance({
                  name : new SFString("Route"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("output"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N5")})])}),

                    new fieldValue({
                      name : new SFString("input"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N7")})])})])}),

                new ProtoInstance({
                  name : new SFString("Route"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("output"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N6")})])}),

                    new fieldValue({
                      name : new SFString("input"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          DEF : new SFString("N8"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("translation"),
                              value : new SFString("7.68077 1.21228 0")})])})])})])}),

                new ProtoInstance({
                  name : new SFString("Route"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("output"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N7")})])}),

                    new fieldValue({
                      name : new SFString("input"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Node"),
                          USE : new SFString("N8")})])})])}),

                new ProtoInstance({
                  name : new SFString("Node"),
                  USE : new SFString("N1")}),

                new ProtoInstance({
                  name : new SFString("Node"),
                  USE : new SFString("N2")}),

                new ProtoInstance({
                  name : new SFString("Node"),
                  USE : new SFString("N3")}),

                new ProtoInstance({
                  name : new SFString("Node"),
                  USE : new SFString("N4")}),

                new ProtoInstance({
                  name : new SFString("Node"),
                  USE : new SFString("N5")}),

                new ProtoInstance({
                  name : new SFString("Node"),
                  USE : new SFString("N6")}),

                new ProtoInstance({
                  name : new SFString("Node"),
                  USE : new SFString("N7")}),

                new ProtoInstance({
                  name : new SFString("Node"),
                  USE : new SFString("N8")})])})])}))});
console.log(X3D0.toXMLNode());
