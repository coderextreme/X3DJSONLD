// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('creator'),
              content_ : SFString('John W Carlson')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('December 13 2015')),

            meta(
              name_ : SFString('title'),
              content_ : SFString('fors.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('beginnings of a force directed graph in 3D')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('node'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('position'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      DEF_ : SFString('transform'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('position'))]),
                      child_ : 
                        Shape(
                          geometry_ : 
                            Sphere(),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)])))),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(1), SFDouble(0), SFDouble(0)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Node")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                                      size_ : 5)),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)])))))]),

                    PositionInterpolator(
                      DEF_ : SFString('NodePosition'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,5,0])])),

                    Script(
                      DEF_ : SFString('MoveBall'),
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('translation'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('50 50 0')),

                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('old'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0 0 0')),

                        field(
                          type_ : SFString("SFTime"),
                          name_ : SFString('set_cycle'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("MFVec3f"),
                          name_ : SFString('keyValue'),
                          accessType_ : SFString("outputOnly")),
                      ],
ecmascript:eval (0
					, function set_cycle(value) {
                                                old = translation;
						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
                                                keyValue = new MFVec3f([old, translation]);
						// Browser.println(translation);
					})),

                    TimeSensor(
                      DEF_ : SFString('nodeClock'),
                      cycleInterval_ : 3,
                      loop_ : true),

                    ROUTE(
                      fromNode_ : SFString('nodeClock'),
                      fromField_ : SFString('cycleTime'),
                      toNode_ : SFString('MoveBall'),
                      toField_ : SFString('set_cycle')),

                    ROUTE(
                      fromNode_ : SFString('nodeClock'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('NodePosition'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('MoveBall'),
                      fromField_ : SFString('keyValue'),
                      toNode_ : SFString('NodePosition'),
                      toField_ : SFString('keyValue')),

                    ROUTE(
                      fromNode_ : SFString('NodePosition'),
                      fromField_ : SFString('value_changed'),
                      toNode_ : SFString('transform'),
                      toField_ : SFString('set_translation'))])),

            ProtoDeclare(
              name_ : SFString('cyl'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('set_positionA'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('set_positionB'),
                      accessType_ : SFString("inputOnly"))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Shape(
                      geometry_ : 
                        Extrusion(
                          DEF_ : SFString('extrusion'),
                          creaseAngle_ : 0.785,
                          crossSection_ : MFVec2f([SFVec2f([1,0]),SFVec2f([0.92,-0.38]),SFVec2f([0.71,-0.71]),SFVec2f([0.38,-0.92]),SFVec2f([0,-1]),SFVec2f([-0.38,-0.92]),SFVec2f([-0.71,-0.71]),SFVec2f([-0.92,-0.38]),SFVec2f([-1,0]),SFVec2f([-0.92,0.38]),SFVec2f([-0.71,0.71]),SFVec2f([-0.38,0.92]),SFVec2f([0,1]),SFVec2f([0.38,0.92]),SFVec2f([0.71,0.71]),SFVec2f([0.92,0.38]),SFVec2f([1,0])]),
                          spine_ : MFVec3f([SFVec3f([0,-50,0]),SFVec3f([0,50,0])])),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)])))),

                    Script(
                      DEF_ : SFString('MoveCylinder'),
                      field_ : [
                        field(
                          type_ : SFString("MFVec3f"),
                          name_ : SFString('spine'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0 -50 0 0 50 0')),

                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('set_endA'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('set_endB'),
                          accessType_ : SFString("inputOnly"))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('set_endA'),
                              protoField_ : SFString('set_positionA')),

                            connect(
                              nodeField_ : SFString('set_endB'),
                              protoField_ : SFString('set_positionB'))]),
                      ,
ecmascript:eval (0

                , function set_endA(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([value, spine[1]]);
		    }
                }

                , function set_endB(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([spine[0], value]);
		    }
                }

                , function set_spine(value) {
                    spine = value;
                })),

                    ROUTE(
                      fromNode_ : SFString('MoveCylinder'),
                      fromField_ : SFString('spine'),
                      toNode_ : SFString('extrusion'),
                      toField_ : SFString('set_spine'))])),

            Transform(
              DEF_ : SFString('HoldsContent'),
              scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
              children_ : [
                PlaneSensor(
                  DEF_ : SFString('clickGenerator'),
                  minPosition_ : SFVec2f([SFDouble(-50), SFDouble(-50)]),
                  maxPosition_ : SFVec2f([SFDouble(50), SFDouble(50)]),
                  description_ : SFString('click on background to add nodes, click on nodes to add links')),

                ProtoInstance(
                  name_ : SFString('node'),
                  DEF_ : SFString('nodeA'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('position'),
                      value_ : SFString('0 0 0'))]),

                ProtoInstance(
                  name_ : SFString('node'),
                  DEF_ : SFString('nodeB'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('position'),
                      value_ : SFString('50 50 50'))]),

                ProtoInstance(
                  name_ : SFString('cyl'),
                  DEF_ : SFString('linkA'),
                  fieldValue_ : [
                    fieldValue(
                      name_ : SFString('set_positionA'),
                      value_ : SFString('0 0 0')),

                    fieldValue(
                      name_ : SFString('set_positionB'),
                      value_ : SFString('50 50 50'))])]),

            ROUTE(
              fromNode_ : SFString('nodeA'),
              fromField_ : SFString('position'),
              toNode_ : SFString('linkA'),
              toField_ : SFString('set_positionA')),

            ROUTE(
              fromNode_ : SFString('nodeB'),
              fromField_ : SFString('position'),
              toNode_ : SFString('linkA'),
              toField_ : SFString('set_positionB'))]));
void main() { exit(0); }
