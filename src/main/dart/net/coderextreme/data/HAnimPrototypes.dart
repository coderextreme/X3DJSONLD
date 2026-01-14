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
              content_ : SFString('HAnimPrototypes.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes.')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes.')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint).')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('Need support for skin')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Ozan APAYDIN, Don Brutzman')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Ozan APAYDIN, Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('15 November 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Mon, 15 Sep 2025 05:20:09 GMT')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('upgrade to match support requirements for HAnim 2.2')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Specifications/HAnim2001')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.HAnim.org')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Models')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Specifications')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('InterchangableActorsViaDynamicRoutingPrototypes.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('Humanoid1_1'),
              appinfo_ : SFString('The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.'),
              documentation_ : SFString('http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFString"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('name')),

                    field(
                      type_ : SFString("SFString"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('version'),
                      value_ : SFString('1.1'),
                      appinfo_ : SFString('legal values: 1.1 or 2.0')),

                    field(
                      type_ : SFString("SFString"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('humanoidVersion'),
                      appinfo_ : SFString('Version of the humanoid being modeled. Hint: HAnim version 2.0')),

                    field(
                      type_ : SFString("MFString"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('info')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('translation')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('rotation')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('center')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('scale'),
                      value_ : SFString('1 1 1')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('scaleOrientation')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('bboxCenter')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('bboxSize'),
                      value_ : SFString('-1 -1 -1')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('humanoidBody'),
                      appinfo_ : SFString('HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton.'),
                      documentation_ : SFString('http://HAnim.org/Specifications/HAnim1.1/#humanoid')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('skeleton'),
                      appinfo_ : SFString('HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody'),
                      documentation_ : SFString('http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('joints'),
                      appinfo_ : SFString('Container field for Joint nodes')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('segments'),
                      appinfo_ : SFString('Container field for Segment nodes')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('sites'),
                      appinfo_ : SFString('Container field for Site nodes')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('viewpoints'),
                      appinfo_ : SFString('Container field for Viewpoint nodes')),

                    field(
                      type_ : SFString("SFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('skinCoord'),
                      appinfo_ : SFString('Hint: HAnim version 2.0')),

                    field(
                      type_ : SFString("SFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('skinNormal'),
                      appinfo_ : SFString('Hint: HAnim version 2.0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      DEF_ : SFString('HumanoidTransform'),
                      children_ : [
                        Group(
                          DEF_ : SFString('HumanoidGroup1'),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('children'),
                                  protoField_ : SFString('humanoidBody'))])),

                        Group(
                          DEF_ : SFString('HumanoidGroup2'),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('children'),
                                  protoField_ : SFString('skeleton'))])),

                        Group(
                          DEF_ : SFString('HumanoidGroup3'),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('children'),
                                  protoField_ : SFString('viewpoints'))]))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('translation')),

                            connect(
                              nodeField_ : SFString('rotation'),
                              protoField_ : SFString('rotation')),

                            connect(
                              nodeField_ : SFString('scale'),
                              protoField_ : SFString('scale')),

                            connect(
                              nodeField_ : SFString('scaleOrientation'),
                              protoField_ : SFString('scaleOrientation')),

                            connect(
                              nodeField_ : SFString('center'),
                              protoField_ : SFString('center')),

                            connect(
                              nodeField_ : SFString('bboxSize'),
                              protoField_ : SFString('bboxSize')),

                            connect(
                              nodeField_ : SFString('bboxCenter'),
                              protoField_ : SFString('bboxCenter'))]))])),

            ProtoDeclare(
              name_ : SFString('Joint'),
              appinfo_ : SFString('The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.'),
              documentation_ : SFString('http://HAnim.org/Specifications/HAnim2001/part1/Joint.html'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFString"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('name')),

                    field(
                      type_ : SFString("MFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('ulimit')),

                    field(
                      type_ : SFString("MFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('llimit')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('limitOrientation')),

                    field(
                      type_ : SFString("MFInt32"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('skinCoordIndex')),

                    field(
                      type_ : SFString("MFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('skinCoordWeight')),

                    field(
                      type_ : SFString("MFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('stiffness'),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('translation')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('rotation')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('scale'),
                      value_ : SFString('1 1 1')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('scaleOrientation')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('center')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('bboxCenter')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('bboxSize'),
                      value_ : SFString('-1 -1 -1')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('children')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('addChildren')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('removeChildren'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      DEF_ : SFString('JointTransform'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('translation')),

                            connect(
                              nodeField_ : SFString('rotation'),
                              protoField_ : SFString('rotation')),

                            connect(
                              nodeField_ : SFString('scale'),
                              protoField_ : SFString('scale')),

                            connect(
                              nodeField_ : SFString('scaleOrientation'),
                              protoField_ : SFString('scaleOrientation')),

                            connect(
                              nodeField_ : SFString('center'),
                              protoField_ : SFString('center')),

                            connect(
                              nodeField_ : SFString('bboxSize'),
                              protoField_ : SFString('bboxSize')),

                            connect(
                              nodeField_ : SFString('bboxCenter'),
                              protoField_ : SFString('bboxCenter')),

                            connect(
                              nodeField_ : SFString('addChildren'),
                              protoField_ : SFString('addChildren')),

                            connect(
                              nodeField_ : SFString('removeChildren'),
                              protoField_ : SFString('removeChildren')),

                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('children'))]))])),

            ProtoDeclare(
              name_ : SFString('Segment'),
              appinfo_ : SFString('The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node.'),
              documentation_ : SFString('http://HAnim.org/Specifications/HAnim2001/part1/Segment.html'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFString"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('name')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('mass')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('centerOfMass')),

                    field(
                      type_ : SFString("MFFloat"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('momentsOfInertia'),
                      value_ : SFString('0 0 0 0 0 0 0 0 0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('bboxCenter')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('bboxSize'),
                      value_ : SFString('-1 -1 -1')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('children')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('addChildren')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('removeChildren')),

                    field(
                      type_ : SFString("SFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('coord'),
                      appinfo_ : SFString('contains Coordinate nodes')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('displacers'),
                      appinfo_ : SFString('contains Displacer nodes'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Group(
                      DEF_ : SFString('SegmentGroup'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('bboxSize'),
                              protoField_ : SFString('bboxSize')),

                            connect(
                              nodeField_ : SFString('bboxCenter'),
                              protoField_ : SFString('bboxCenter')),

                            connect(
                              nodeField_ : SFString('addChildren'),
                              protoField_ : SFString('addChildren')),

                            connect(
                              nodeField_ : SFString('removeChildren'),
                              protoField_ : SFString('removeChildren')),

                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('children'))]))])),

            ProtoDeclare(
              name_ : SFString('Site'),
              appinfo_ : SFString('The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).'),
              documentation_ : SFString('http://HAnim.org/Specifications/HAnim2001/part1/Site.html'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFString"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('name')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('translation')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('rotation')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('scale'),
                      value_ : SFString('1 1 1')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('scaleOrientation')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('center')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('bboxCenter')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('bboxSize'),
                      value_ : SFString('-1 -1 -1')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('children')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('addChildren')),

                    field(
                      type_ : SFString("MFNode"),
                      accessType_ : SFString("inputOnly"),
                      name_ : SFString('removeChildren'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      DEF_ : SFString('SiteTransform'),
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('translation')),

                            connect(
                              nodeField_ : SFString('rotation'),
                              protoField_ : SFString('rotation')),

                            connect(
                              nodeField_ : SFString('scale'),
                              protoField_ : SFString('scale')),

                            connect(
                              nodeField_ : SFString('scaleOrientation'),
                              protoField_ : SFString('scaleOrientation')),

                            connect(
                              nodeField_ : SFString('center'),
                              protoField_ : SFString('center')),

                            connect(
                              nodeField_ : SFString('bboxSize'),
                              protoField_ : SFString('bboxSize')),

                            connect(
                              nodeField_ : SFString('bboxCenter'),
                              protoField_ : SFString('bboxCenter')),

                            connect(
                              nodeField_ : SFString('addChildren'),
                              protoField_ : SFString('addChildren')),

                            connect(
                              nodeField_ : SFString('removeChildren'),
                              protoField_ : SFString('removeChildren')),

                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('children'))]))])),

            ProtoDeclare(
              name_ : SFString('Displacer'),
              appinfo_ : SFString('A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.'),
              documentation_ : SFString('http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFString"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('name')),

                    field(
                      type_ : SFString("MFInt32"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('coordIndex')),

                    field(
                      type_ : SFString("MFVec3f"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('displacements'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    WorldInfo(
                      info_ : MFString([SFString("null body node")]))])),

            Shape(
              appearance_ : 
                Appearance(
                  material_ : 
                    Material(
                      ambientIntensity_ : 0.25,
                      diffuseColor_ : SFColor([SFDouble(0.795918), SFDouble(0.505869), SFDouble(0.093315)]),
                      specularColor_ : SFColor([SFDouble(0.923469), SFDouble(0.428866), SFDouble(0.006369)]),
                      shininess_ : 0.39)),
              geometry_ : 
                Text(
                  string_ : MFString([SFString("Humanoid Animation"), SFString("(HAnim) prototype"), SFString("implementations")]),
                  fontStyle_ : 
                    FontStyle(
                      justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))]));
void main() { exit(0); }
