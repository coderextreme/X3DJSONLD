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
              name_ : SFString('title'),
              content_ : SFString('x3dconnectorProto.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Lost, Doug Sanden I think')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('Unknown')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Sat, 30 Dec 2023 10:14:10 GMT')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('x3dconnector'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFNode"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('startnode')),

                    field(
                      type_ : SFString("SFNode"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('endnode')),

                    field(
                      type_ : SFString("SFNode"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('transnode')),

                    field(
                      type_ : SFString("SFNode"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('rotscalenode')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('set_startpoint')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('set_endpoint'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Script(
                      DEF_ : SFString('S1'),
                      directOutput_ : true,
                      field_ : [
                        field(
                          type_ : SFString("SFNode"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('startnode')),

                        field(
                          type_ : SFString("SFNode"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('endnode')),

                        field(
                          type_ : SFString("SFNode"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('transnode')),

                        field(
                          type_ : SFString("SFNode"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('rotscalenode')),

                        field(
                          type_ : SFString("SFVec3f"),
                          accessType_ : SFString("inputOnly"),
                          name_ : SFString('set_startpoint')),

                        field(
                          type_ : SFString("SFVec3f"),
                          accessType_ : SFString("inputOnly"),
                          name_ : SFString('set_endpoint')),
                      ],
ecmascript:eval (0
        , function recompute(startpoint,endpoint){
	    if (typeof endpoint === 'undefined') {
		return;
	    }
            var dif = endpoint.subtract(startpoint);
            var dist = dif.length()*0.5;
            var dif2 = dif.multiply(0.5);
            var norm = dif.normalize();
            var transl = startpoint.add(dif2);
	    if (typeof Quaternion !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    }
	}
	, function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      if (trafo) {
		      transnode.translation = trafo.translation;
		      rotscalenode.rotation = trafo.rotation;
		      rotscalenode.scale = trafo.scale;
	      }
	}
        , function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        , function set_startpoint(val,t){
            recompute_and_route(val,endnode.translation);
        }
        , function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val);
        }),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('startnode'),
                              protoField_ : SFString('startnode')),

                            connect(
                              nodeField_ : SFString('endnode'),
                              protoField_ : SFString('endnode')),

                            connect(
                              nodeField_ : SFString('transnode'),
                              protoField_ : SFString('transnode')),

                            connect(
                              nodeField_ : SFString('rotscalenode'),
                              protoField_ : SFString('rotscalenode')),

                            connect(
                              nodeField_ : SFString('set_startpoint'),
                              protoField_ : SFString('set_startpoint')),

                            connect(
                              nodeField_ : SFString('set_endpoint'),
                              protoField_ : SFString('set_endpoint'))]))])),

            WorldInfo(
              title_ : SFString('Connector Proto')),

            Viewpoint(
              description_ : SFString('Only Viewpoint'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(5)])),

            Background(
              skyColor_ : MFColor([SFColor(0.4), SFColor(0.4), SFColor(0.4)])),

            Transform(
              DEF_ : SFString('G1'),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.7), SFDouble(0.2), SFDouble(0.2)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 0.1)),
              children_ : [
                PlaneSensor(
                  DEF_ : SFString('PS1'),
                  description_ : SFString('Grab to move'))]),

            Transform(
              DEF_ : SFString('G2'),
              translation_ : SFVec3f([SFDouble(1), SFDouble(-1), SFDouble(0.01)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.2), SFDouble(0.7), SFDouble(0.2)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 0.1)),
              children_ : [
                PlaneSensor(
                  DEF_ : SFString('PS2'),
                  description_ : SFString('Grab to move'),
                  offset_ : SFVec3f([SFDouble(1), SFDouble(-1), SFDouble(0.01)]))]),

            Transform(
              DEF_ : SFString('G3'),
              translation_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(0.01)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.2), SFDouble(0.7), SFDouble(0.2)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 0.1)),
              children_ : [
                PlaneSensor(
                  DEF_ : SFString('PS3'),
                  description_ : SFString('Grab to move'),
                  offset_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(0.01)]))]),

            Transform(
              DEF_ : SFString('G4'),
              translation_ : SFVec3f([SFDouble(-1), SFDouble(1), SFDouble(0.01)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.2), SFDouble(0.7), SFDouble(0.2)]))),
                  geometry_ : 
                    Sphere(
                      radius_ : 0.1)),
              children_ : [
                PlaneSensor(
                  DEF_ : SFString('PS4'),
                  description_ : SFString('Grab to move'),
                  offset_ : SFVec3f([SFDouble(-1), SFDouble(1), SFDouble(0.01)]))]),

            Transform(
              DEF_ : SFString('transC1'),
              children_ : [
                Transform(
                  DEF_ : SFString('rotscaleC1'),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.2), SFDouble(0.7), SFDouble(0.7)]),
                              transparency_ : 0.5)),
                      geometry_ : 
                        Cylinder(
                          radius_ : 0.05)))]),

            Transform(
              DEF_ : SFString('transC2'),
              children_ : [
                Transform(
                  DEF_ : SFString('rotscaleC2'),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.2), SFDouble(0.7), SFDouble(0.7)]),
                              transparency_ : 0.5)),
                      geometry_ : 
                        Cylinder(
                          radius_ : 0.05)))]),

            Transform(
              DEF_ : SFString('transC3'),
              children_ : [
                Transform(
                  DEF_ : SFString('rotscaleC3'),
                  child_ : 
                    Shape(
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0.2), SFDouble(0.7), SFDouble(0.7)]),
                              transparency_ : 0.5)),
                      geometry_ : 
                        Cylinder(
                          radius_ : 0.05)))]),

            ProtoInstance(
              DEF_ : SFString('connector1'),
              name_ : SFString('x3dconnector'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('startnode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('G1'))]),

                fieldValue(
                  name_ : SFString('endnode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('G2'))]),

                fieldValue(
                  name_ : SFString('transnode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('transC1'))]),

                fieldValue(
                  name_ : SFString('rotscalenode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('rotscaleC1'))])]),

            ProtoInstance(
              DEF_ : SFString('connector2'),
              name_ : SFString('x3dconnector'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('startnode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('G1'))]),

                fieldValue(
                  name_ : SFString('endnode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('G3'))]),

                fieldValue(
                  name_ : SFString('transnode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('transC2'))]),

                fieldValue(
                  name_ : SFString('rotscalenode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('rotscaleC2'))])]),

            ProtoInstance(
              DEF_ : SFString('connector3'),
              name_ : SFString('x3dconnector'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('startnode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('G1'))]),

                fieldValue(
                  name_ : SFString('endnode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('G4'))]),

                fieldValue(
                  name_ : SFString('transnode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('transC3'))]),

                fieldValue(
                  name_ : SFString('rotscalenode'),
                  children_ : [
                    Transform(
                      USE_ : SFString('rotscaleC3'))])]),

            ROUTE(
              fromNode_ : SFString('PS1'),
              fromField_ : SFString('translation_changed'),
              toNode_ : SFString('G1'),
              toField_ : SFString('translation')),

            ROUTE(
              fromNode_ : SFString('PS2'),
              fromField_ : SFString('translation_changed'),
              toNode_ : SFString('G2'),
              toField_ : SFString('translation')),

            ROUTE(
              fromNode_ : SFString('PS3'),
              fromField_ : SFString('translation_changed'),
              toNode_ : SFString('G3'),
              toField_ : SFString('translation')),

            ROUTE(
              fromNode_ : SFString('PS4'),
              fromField_ : SFString('translation_changed'),
              toNode_ : SFString('G4'),
              toField_ : SFString('translation')),

            ROUTE(
              fromNode_ : SFString('G1'),
              fromField_ : SFString('translation'),
              toNode_ : SFString('connector1'),
              toField_ : SFString('set_startpoint')),

            ROUTE(
              fromNode_ : SFString('G2'),
              fromField_ : SFString('translation'),
              toNode_ : SFString('connector1'),
              toField_ : SFString('set_endpoint')),

            ROUTE(
              fromNode_ : SFString('G1'),
              fromField_ : SFString('translation'),
              toNode_ : SFString('connector2'),
              toField_ : SFString('set_startpoint')),

            ROUTE(
              fromNode_ : SFString('G3'),
              fromField_ : SFString('translation'),
              toNode_ : SFString('connector2'),
              toField_ : SFString('set_endpoint')),

            ROUTE(
              fromNode_ : SFString('G1'),
              fromField_ : SFString('translation'),
              toNode_ : SFString('connector3'),
              toField_ : SFString('set_startpoint')),

            ROUTE(
              fromNode_ : SFString('G4'),
              fromField_ : SFString('translation'),
              toNode_ : SFString('connector3'),
              toField_ : SFString('set_endpoint'))]));
void main() { exit(0); }
