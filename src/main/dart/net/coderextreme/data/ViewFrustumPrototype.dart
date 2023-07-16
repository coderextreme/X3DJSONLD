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
              content_ : SFString('ViewFrustumPrototype.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('16 August 2008')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('ViewFrustumExample.x3d')),

            meta(
              name_ : SFString('drawing'),
              content_ : SFString('ViewFrustumComputation.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('ViewFrustumOverheadView.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('ViewFrustumObliqueView.png')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('view culling frustum')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('ViewFrustumPrototype.x3d')),

            ProtoDeclare(
              name_ : SFString('ViewFrustum'),
              appinfo_ : SFString('Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('ViewpointNode'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('required: insert Viewpoint DEF or USE node for view of interest'),
                      /*NULL node, ProtoInstance must provide*/),

                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('NavigationInfoNode'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('required: insert NavigationInfo DEF or USE node of interest'),
                      /*NULL node, ProtoInstance must provide*/),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('visible'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('whether or not frustum geometry is rendered'),
                      value_ : SFString('true')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('lineColor'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('RGB color of ViewFrustum outline, default value 0.9 0.9 0.9'),
                      value_ : SFString('0.9 0.9 0.9')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('frustumColor'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8'),
                      value_ : SFString('0.8 0.8 0.8')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('transparency'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('transparency of ViewFrustum hull geometry, default value 0.5'),
                      value_ : SFString('0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('aspectRatio'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('assumed ratio height/width, default value 0.75'),
                      value_ : SFString('0.75')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('trace'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('debug support, default false'),
                      value_ : SFString('false'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Switch(
                      DEF_ : SFString('VisibilitySwitch'),
                      whichChoice_ : -1,
                      children_ : [
                        Transform(
                          DEF_ : SFString('PositionTransform'),
                          rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14159)]),
                          children_ : [
                            Transform(
                              DEF_ : SFString('OrientationTransform'),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedLineSet(
                                      DEF_ : SFString('FrustumLines'),
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(3), SFInt32(0), SFInt32(-1), SFInt32(4), SFInt32(5), SFInt32(6), SFInt32(7), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(-1), SFInt32(1), SFInt32(5), SFInt32(-1), SFInt32(2), SFInt32(6), SFInt32(-1), SFInt32(3), SFInt32(7), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          DEF_ : SFString('FrustumCoordinate'),
                                          point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0]),SFVec3f([0,0,0])]))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          IS_ : 
                                            IS(
                                              connect_ : [
                                                connect(
                                                  nodeField_ : SFString('emissiveColor'),
                                                  protoField_ : SFString('lineColor'))])))),

                                Shape(
                                  geometry_ : 
                                    Extrusion(
                                      DEF_ : SFString('FrustumExtrusion')),
                                  appearance_ : 
                                    Appearance(
                                      DEF_ : SFString('FrustumAppearance'),
                                      material_ : 
                                        Material(
                                          IS_ : 
                                            IS(
                                              connect_ : [
                                                connect(
                                                  nodeField_ : SFString('diffuseColor'),
                                                  protoField_ : SFString('frustumColor')),

                                                connect(
                                                  nodeField_ : SFString('transparency'),
                                                  protoField_ : SFString('transparency'))])))),

                                Shape(
                                  geometry_ : 
                                    Sphere(
                                      radius_ : 0.08),
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('FrustumAppearance')))])])]),

                    Script(
                      DEF_ : SFString('GeometryComputationScript'),
                      directOutput_ : true,
                      url_ : MFString([SFString("ViewFrustumPrototypeScript.js")]),
                      field_ : [
                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('visible'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('Whether or not frustum geometry is rendered')),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('visibilitySwitchSelection'),
                          accessType_ : SFString("outputOnly"),
                          appinfo_ : SFString('Adjust Switch selection to make geometry visible or not')),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('ViewpointNode'),
                          accessType_ : SFString("initializeOnly"),
                          /*initialization node (if any) goes here*/),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('NavigationInfoNode'),
                          accessType_ : SFString("initializeOnly"),
                          /*initialization node (if any) goes here*/),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('FrustumCoordinate'),
                          accessType_ : SFString("initializeOnly"),
                          children_ : [
                            Coordinate(
                              USE_ : SFString('FrustumCoordinate'))]),

                        field(
                          type_ : SFString("SFNode"),
                          name_ : SFString('FrustumExtrusion'),
                          accessType_ : SFString("initializeOnly"),
                          children_ : [
                            Extrusion(
                              USE_ : SFString('FrustumExtrusion'))]),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('recompute'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('aspectRatio'),
                          accessType_ : SFString("inputOutput"),
                          appinfo_ : SFString('assumed ratio height/width')),

                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('position_changed'),
                          accessType_ : SFString("outputOnly")),

                        field(
                          type_ : SFString("SFRotation"),
                          name_ : SFString('orientation_changed'),
                          accessType_ : SFString("outputOnly")),

                        field(
                          type_ : SFString("MFVec3f"),
                          name_ : SFString('spine_changed'),
                          accessType_ : SFString("outputOnly")),

                        field(
                          type_ : SFString("MFVec2f"),
                          name_ : SFString('scale_changed'),
                          accessType_ : SFString("outputOnly")),

                        field(
                          type_ : SFString("MFVec3f"),
                          name_ : SFString('point_changed'),
                          accessType_ : SFString("outputOnly")),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('trace'),
                          accessType_ : SFString("initializeOnly"))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('visible'),
                              protoField_ : SFString('visible')),

                            connect(
                              nodeField_ : SFString('ViewpointNode'),
                              protoField_ : SFString('ViewpointNode')),

                            connect(
                              nodeField_ : SFString('NavigationInfoNode'),
                              protoField_ : SFString('NavigationInfoNode')),

                            connect(
                              nodeField_ : SFString('aspectRatio'),
                              protoField_ : SFString('aspectRatio')),

                            connect(
                              nodeField_ : SFString('trace'),
                              protoField_ : SFString('trace'))])),

                    ROUTE(
                      fromField_ : SFString('visibilitySwitchSelection'),
                      fromNode_ : SFString('GeometryComputationScript'),
                      toField_ : SFString('whichChoice'),
                      toNode_ : SFString('VisibilitySwitch')),

                    ROUTE(
                      fromField_ : SFString('position_changed'),
                      fromNode_ : SFString('GeometryComputationScript'),
                      toField_ : SFString('translation'),
                      toNode_ : SFString('PositionTransform')),

                    ROUTE(
                      fromField_ : SFString('orientation_changed'),
                      fromNode_ : SFString('GeometryComputationScript'),
                      toField_ : SFString('rotation'),
                      toNode_ : SFString('OrientationTransform')),

                    ROUTE(
                      fromField_ : SFString('spine_changed'),
                      fromNode_ : SFString('GeometryComputationScript'),
                      toField_ : SFString('set_spine'),
                      toNode_ : SFString('FrustumExtrusion')),

                    ROUTE(
                      fromField_ : SFString('scale_changed'),
                      fromNode_ : SFString('GeometryComputationScript'),
                      toField_ : SFString('set_scale'),
                      toNode_ : SFString('FrustumExtrusion')),

                    ROUTE(
                      fromField_ : SFString('point_changed'),
                      fromNode_ : SFString('GeometryComputationScript'),
                      toField_ : SFString('point'),
                      toNode_ : SFString('FrustumCoordinate'))])),
          /*Example use is in separate scene*/

            Anchor(
              description_ : SFString('ViewFrustum Example'),
              url_ : MFString([SFString("ViewFrustumExample.x3d")]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.8), SFDouble(0.4), SFDouble(0)]))),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("ViewFrustumPrototype.x3d"), SFString("is a Prototype declaration file."), SFString("For an example scene using the prototype,"), SFString("click this text and view"), SFString("ViewFrustumExample.x3d")]),
                      fontStyle_ : 
                        FontStyle(
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                          size_ : 0.8)))])]));
void main() { exit(0); }
