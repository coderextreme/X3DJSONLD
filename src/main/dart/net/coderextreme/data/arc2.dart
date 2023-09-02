// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('arc2.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Lost, Doug Sanden I think')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('a generic proto to connect two objects'))]),
      Scene_ : 
        Scene(
          children_ : [
            Viewpoint(
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(5)]),
              description_ : SFString('Only Viewpoint')),

            Background(
              skyColor_ : MFColor([SFColor(0.4), SFColor(0.4), SFColor(0.4)])),

            Transform(
              DEF_ : SFString('G1'),
              children_ : [
                Transform(
                  DEF_ : SFString('DECLpoint_INSTANCE_node'),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Sphere(
                          radius_ : 0.1),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)])))),
                  children_ : [
                    PositionInterpolator(
                      DEF_ : SFString('DECLpoint_INSTANCE_PI1'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,5,0])])),

                    Script(
                      DEF_ : SFString('DECLpoint_INSTANCE_MB1'),
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('translation'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0 0 0')),

                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('old'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0 0 0')),

                        field(
                          type_ : SFString("SFTime"),
                          name_ : SFString('set_location'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("MFVec3f"),
                          name_ : SFString('keyValue'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0 0 0 0 5 0')),
                      ],
ecmascript:eval (0
               , function set_location(value) {
                    old = translation;
                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f(old, translation);
               })),

                    TimeSensor(
                      DEF_ : SFString('DECLpoint_INSTANCE_CL1'),
                      cycleInterval_ : 3,
                      loop_ : true),

                    ROUTE(
                      fromNode_ : SFString('DECLpoint_INSTANCE_CL1'),
                      fromField_ : SFString('cycleTime'),
                      toNode_ : SFString('DECLpoint_INSTANCE_MB1'),
                      toField_ : SFString('set_location')),

                    ROUTE(
                      fromNode_ : SFString('DECLpoint_INSTANCE_CL1'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('DECLpoint_INSTANCE_PI1'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('DECLpoint_INSTANCE_MB1'),
                      fromField_ : SFString('keyValue'),
                      toNode_ : SFString('DECLpoint_INSTANCE_PI1'),
                      toField_ : SFString('keyValue')),

                    ROUTE(
                      fromNode_ : SFString('DECLpoint_INSTANCE_PI1'),
                      fromField_ : SFString('value_changed'),
                      toNode_ : SFString('DECLpoint_INSTANCE_node'),
                      toField_ : SFString('set_translation')),

                    ROUTE(
                      fromNode_ : SFString('DECLpoint_INSTANCE_MB1'),
                      fromField_ : SFString('translation_changed'),
                      toNode_ : SFString('DECLpoint_INSTANCE_node'),
                      toField_ : SFString('set_translation'))])]),

            Transform(
              DEF_ : SFString('G2'),
              children_ : [
                Transform(
                  DEF_ : SFString('DECLpoint_INSTANCE1000_node'),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Sphere(
                          radius_ : 0.1),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)])))),
                  children_ : [
                    PositionInterpolator(
                      DEF_ : SFString('DECLpoint_INSTANCE1000_PI1'),
                      key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,5,0])])),

                    Script(
                      DEF_ : SFString('DECLpoint_INSTANCE1000_MB1'),
                      field_ : [
                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('translation'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0 0 0')),

                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('old'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0 0 0')),

                        field(
                          type_ : SFString("SFTime"),
                          name_ : SFString('set_location'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("MFVec3f"),
                          name_ : SFString('keyValue'),
                          accessType_ : SFString("inputOutput"),
                          value_ : SFString('0 0 0 0 5 0')),
                      ],
ecmascript:eval (0
               , function set_location(value) {
                    old = translation;
                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f(old, translation);
               })),

                    TimeSensor(
                      DEF_ : SFString('DECLpoint_INSTANCE1000_CL1'),
                      cycleInterval_ : 3,
                      loop_ : true),

                    ROUTE(
                      fromNode_ : SFString('DECLpoint_INSTANCE1000_CL1'),
                      fromField_ : SFString('cycleTime'),
                      toNode_ : SFString('DECLpoint_INSTANCE1000_MB1'),
                      toField_ : SFString('set_location')),

                    ROUTE(
                      fromNode_ : SFString('DECLpoint_INSTANCE1000_CL1'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('DECLpoint_INSTANCE1000_PI1'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('DECLpoint_INSTANCE1000_MB1'),
                      fromField_ : SFString('keyValue'),
                      toNode_ : SFString('DECLpoint_INSTANCE1000_PI1'),
                      toField_ : SFString('keyValue')),

                    ROUTE(
                      fromNode_ : SFString('DECLpoint_INSTANCE1000_PI1'),
                      fromField_ : SFString('value_changed'),
                      toNode_ : SFString('DECLpoint_INSTANCE1000_node'),
                      toField_ : SFString('set_translation')),

                    ROUTE(
                      fromNode_ : SFString('DECLpoint_INSTANCE1000_MB1'),
                      fromField_ : SFString('translation_changed'),
                      toNode_ : SFString('DECLpoint_INSTANCE1000_node'),
                      toField_ : SFString('set_translation'))])]),

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

            Script(
              DEF_ : SFString('DECLx3dconnector_connector1_S1'),
              field_ : [
                field(
                  type_ : SFString("SFNode"),
                  name_ : SFString('startnode'),
                  accessType_ : SFString("initializeOnly"),
                  children_ : [
                    Transform(
                      USE_ : SFString('G1'))]),

                field(
                  type_ : SFString("SFNode"),
                  name_ : SFString('endnode'),
                  accessType_ : SFString("initializeOnly"),
                  children_ : [
                    Transform(
                      USE_ : SFString('G2'))]),

                field(
                  type_ : SFString("SFNode"),
                  name_ : SFString('transC1'),
                  accessType_ : SFString("initializeOnly"),
                  children_ : [
                    Transform(
                      USE_ : SFString('transC1'))]),

                field(
                  type_ : SFString("SFNode"),
                  name_ : SFString('rotscaleC1'),
                  accessType_ : SFString("initializeOnly"),
                  children_ : [
                    Transform(
                      USE_ : SFString('rotscaleC1'))]),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('set_startpoint'),
                  accessType_ : SFString("inputOnly")),

                field(
                  type_ : SFString("SFVec3f"),
                  name_ : SFString('set_endpoint'),
                  accessType_ : SFString("inputOnly")),
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
	      transC1.translation = trafo.translation;
	      rotscaleC1.rotation = trafo.rotation;
	      rotscaleC1.scale = trafo.scale;
	}
        , function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        , function set_startpoint(val,t){
            recompute_and_route(val,endnode.translation);
        }
        , function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val);
        })),

            ROUTE(
              fromNode_ : SFString('G1'),
              fromField_ : SFString('translation_changed'),
              toNode_ : SFString('DECLx3dconnector_connector1_S1'),
              toField_ : SFString('set_startpoint')),

            ROUTE(
              fromNode_ : SFString('G2'),
              fromField_ : SFString('translation_changed'),
              toNode_ : SFString('DECLx3dconnector_connector1_S1'),
              toField_ : SFString('set_endpoint'))]));
void main() { exit(0); }
