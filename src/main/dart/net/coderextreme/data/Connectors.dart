// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Full'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('comment'),
              content_ : SFString('World of Titania')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('Fri, 04 Sep 2015 10:19:01 GMT')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Holger Seelig')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Titania V3.0.4, http://titania.create3000.de')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Tue, 25 Jul 2017 09:42:17 GMT')),

            meta(
              name_ : SFString('title'),
              content_ : SFString('Connectors'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('RoundedRectangle2D'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('cornerRadius'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('1')),

                    field(
                      type_ : SFString("SFVec2f"),
                      name_ : SFString('size'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('2 2')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('solid'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('true'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    IndexedFaceSet(
                      DEF_ : SFString('Geometry'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('solid'),
                              protoField_ : SFString('solid'))]),
                      coord_ : 
                        Coordinate()),

                    Script(
                      DEF_ : SFString('RoundedRectangle2D'),
                      directOutput_ : true,
                      field_ : [
                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('cornerDimension'),
                          accessType_ : SFString("initializeOnly"),
                          value_ : SFString('10')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('cornerRadius'),
                          accessType_ : SFString("initializeOnly")),

                        field(
                          type_ : SFString("SFVec2f"),
                          name_ : SFString('size'),
                          accessType_ : SFString("initializeOnly")),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('geometry'),
                          accessType_ : SFString("initializeOnly"),
                          children_ : [
                            IndexedFaceSet(
                              USE_ : SFString('Geometry'))])],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('cornerRadius'),
                              protoField_ : SFString('cornerRadius')),

                            connect(
                              nodeField_ : SFString('size'),
                              protoField_ : SFString('size'))]),
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
}))])),

            ProtoDeclare(
              name_ : SFString('Widget'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('fillColor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0.1 0.1 0.1')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('lineColor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0.4 0.4 0.4')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('linewidthScaleFactor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1')),

                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('geometry'),
                      accessType_ : SFString("inputOutput"))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      DEF_ : SFString('Shape'),
                      child_ : 
                        Shape(
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('geometry'),
                                  protoField_ : SFString('geometry'))]),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('diffuseColor'),
                                          protoField_ : SFString('fillColor'))])))),
                      child_ : 
                        Shape(
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('geometry'),
                                  protoField_ : SFString('geometry'))]),
                          appearance_ : 
                            Appearance(
                              fillProperties_ : 
                                FillProperties(
                                  filled_ : false,
                                  hatched_ : false),
                              lineProperties_ : 
                                LineProperties(
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('linewidthScaleFactor'),
                                          protoField_ : SFString('linewidthScaleFactor'))])),
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('emissiveColor'),
                                          protoField_ : SFString('lineColor'))])))))])),

            ProtoDeclare(
              name_ : SFString('Node'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('translation'),
                      accessType_ : SFString("inputOutput"))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Group(
                      children_ : [
                        PlaneSensor(
                          DEF_ : SFString('PlaneSensor')),

                        Transform(
                          DEF_ : SFString('Node'),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('translation'),
                                  protoField_ : SFString('translation'))]),
                          children_ : [
                            ProtoInstance(
                              name_ : SFString('Widget'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('geometry'),
                                  children_ : [
                                    ProtoInstance(
                                      name_ : SFString('RoundedRectangle2D'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('cornerRadius'),
                                          value_ : SFString('0.12')),

                                        fieldValue(
                                          name_ : SFString('size'),
                                          value_ : SFString('2 1'))])])]),

                            Transform(
                              DEF_ : SFString('Input'),
                              translation_ : SFVec3f([SFDouble(-1), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                ProtoInstance(
                                  name_ : SFString('Widget'),
                                  fieldValue_ : [
                                    fieldValue(
                                      name_ : SFString('lineColor'),
                                      value_ : SFString('0.72 0.14 0.23')),

                                    fieldValue(
                                      name_ : SFString('geometry'),
                                      children_ : [
                                        Disk2D(
                                          DEF_ : SFString('Connector'),
                                          outerRadius_ : 0.2)])])]),

                            Transform(
                              DEF_ : SFString('Output'),
                              translation_ : SFVec3f([SFDouble(1), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                ProtoInstance(
                                  name_ : SFString('Widget'),
                                  fieldValue_ : [
                                    fieldValue(
                                      name_ : SFString('lineColor'),
                                      value_ : SFString('0.44 0.5 0.72')),

                                    fieldValue(
                                      name_ : SFString('geometry'),
                                      children_ : [
                                        Disk2D(
                                          USE_ : SFString('Connector'))])])])])]),

                    Script(
                      directOutput_ : true,
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('translation'),
                          accessType_ : SFString("inputOutput")),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('sensor'),
                          accessType_ : SFString("initializeOnly"),
                          children_ : [
                            PlaneSensor(
                              USE_ : SFString('PlaneSensor'))]),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('transform'),
                          accessType_ : SFString("initializeOnly"),
                          children_ : [
                            Transform(
                              USE_ : SFString('Node'))])],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('translation'))]),
                      vrmlscript:
, function initialize ()
{
	sensor .offset = translation;
})),

                    ROUTE(
                      fromNode_ : SFString('PlaneSensor'),
                      fromField_ : SFString('translation_changed'),
                      toNode_ : SFString('Node'),
                      toField_ : SFString('set_translation'))])),

            ProtoDeclare(
              name_ : SFString('Route'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('lineColor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0.43 0.43 0.98')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('linewidthScaleFactor'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('2')),

                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('output'),
                      accessType_ : SFString("initializeOnly")),

                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('input'),
                      accessType_ : SFString("initializeOnly"))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Shape(
                      appearance_ : 
                        Appearance(
                          lineProperties_ : 
                            LineProperties(
                              IS_ : 
                                IS(
                                  connect_ : [
                                    connect(
                                      nodeField_ : SFString('linewidthScaleFactor'),
                                      protoField_ : SFString('linewidthScaleFactor'))])),
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              IS_ : 
                                IS(
                                  connect_ : [
                                    connect(
                                      nodeField_ : SFString('emissiveColor'),
                                      protoField_ : SFString('lineColor'))]))),
                      geometry_ : 
                        LineSet(
                          DEF_ : SFString('Geometry_1'),
                          vertexCount_ : MFInt32([SFInt32(2)]),
                          coord_ : 
                            Coordinate(
                              point_ : MFVec3f([SFVec3f([-1,0,0]),SFVec3f([1,0,0])])))),

                    Script(
                      DEF_ : SFString('Route'),
                      directOutput_ : true,
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('set_translation'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('routeDimension'),
                          accessType_ : SFString("initializeOnly"),
                          value_ : SFString('21')),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('output'),
                          accessType_ : SFString("initializeOnly")),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('input'),
                          accessType_ : SFString("initializeOnly")),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('geometry'),
                          accessType_ : SFString("initializeOnly"),
                          children_ : [
                            LineSet(
                              USE_ : SFString('Geometry_1'))]),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('self'),
                          accessType_ : SFString("initializeOnly"),
                          children_ : [
                            Script(
                              USE_ : SFString('Route'))])],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('output'),
                              protoField_ : SFString('output')),

                            connect(
                              nodeField_ : SFString('input'),
                              protoField_ : SFString('input'))]),
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
}))])),

            NavigationInfo(
              type_ : MFString([SFString(", "), SFString("PLANE_create3000.deANY")])),

            Background(
              skyColor_ : MFColor([SFColor(0.2), SFColor(0.2), SFColor(0.2)])),

            OrthoViewpoint(
              description_ : SFString('OthoViewpoint'),
              position_ : SFVec3f([SFDouble(-3.13496), SFDouble(-4.19776), SFDouble(10)]),
              centerOfRotation_ : SFVec3f([SFDouble(-3.13496), SFDouble(-4.19776), SFDouble(0)]),
              fieldOfView_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(10), SFDouble(10)])),

            Viewpoint(
              description_ : SFString('Viewpoint')),

            Transform(
              DEF_ : SFString('Connectors'),
              children_ : [
                ProtoInstance(
                  name_ : SFString('Route'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('output'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          DEF_ : SFString('N1'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('translation'),
                              value_ : SFString('-3.98323 2.88948 0'))])]),

                    fieldValue(
                      name_ : SFString('input'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          DEF_ : SFString('N2'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('translation'),
                              value_ : SFString('-0.0890862 2.96049 0'))])])]),

                ProtoInstance(
                  name_ : SFString('Route'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('output'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N1'))]),

                    fieldValue(
                      name_ : SFString('input'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          DEF_ : SFString('N3'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('translation'),
                              value_ : SFString('-0.104169 1.16371 0'))])])]),

                ProtoInstance(
                  name_ : SFString('Route'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('output'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N1'))]),

                    fieldValue(
                      name_ : SFString('input'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          DEF_ : SFString('N4'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('translation'),
                              value_ : SFString('-0.0998688 -0.40172 0'))])])]),

                ProtoInstance(
                  name_ : SFString('Route'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('output'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N1'))]),

                    fieldValue(
                      name_ : SFString('input'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          DEF_ : SFString('N5'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('translation'),
                              value_ : SFString('-0.0998687 -2.14742 0'))])])]),

                ProtoInstance(
                  name_ : SFString('Route'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('output'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N2'))]),

                    fieldValue(
                      name_ : SFString('input'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          DEF_ : SFString('N6'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('translation'),
                              value_ : SFString('3.55694 2.4116 0'))])])]),

                ProtoInstance(
                  name_ : SFString('Route'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('output'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N3'))]),

                    fieldValue(
                      name_ : SFString('input'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N6'))])]),

                ProtoInstance(
                  name_ : SFString('Route'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('output'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N4'))]),

                    fieldValue(
                      name_ : SFString('input'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          DEF_ : SFString('N7'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('translation'),
                              value_ : SFString('3.75106 -0.0794556 0'))])])]),

                ProtoInstance(
                  name_ : SFString('Route'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('output'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N5'))]),

                    fieldValue(
                      name_ : SFString('input'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N7'))])]),

                ProtoInstance(
                  name_ : SFString('Route'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('output'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N6'))]),

                    fieldValue(
                      name_ : SFString('input'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          DEF_ : SFString('N8'),
                          fieldValue_ : [
                            fieldValue(
                              name_ : SFString('translation'),
                              value_ : SFString('7.68077 1.21228 0'))])])]),

                ProtoInstance(
                  name_ : SFString('Route'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('output'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N7'))]),

                    fieldValue(
                      name_ : SFString('input'),
                      children_ : [
                        ProtoInstance(
                          name_ : SFString('Node'),
                          USE_ : SFString('N8'))])]),

                ProtoInstance(
                  name_ : SFString('Node'),
                  USE_ : SFString('N1')),

                ProtoInstance(
                  name_ : SFString('Node'),
                  USE_ : SFString('N2')),

                ProtoInstance(
                  name_ : SFString('Node'),
                  USE_ : SFString('N3')),

                ProtoInstance(
                  name_ : SFString('Node'),
                  USE_ : SFString('N4')),

                ProtoInstance(
                  name_ : SFString('Node'),
                  USE_ : SFString('N5')),

                ProtoInstance(
                  name_ : SFString('Node'),
                  USE_ : SFString('N6')),

                ProtoInstance(
                  name_ : SFString('Node'),
                  USE_ : SFString('N7')),

                ProtoInstance(
                  name_ : SFString('Node'),
                  USE_ : SFString('N8'))])]));
void main() { exit(0); }
