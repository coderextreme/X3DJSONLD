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
              content_ : SFString('ArchPrototype.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Michele Foti, Don Brutzman')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('15 December 2014')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('27 November 2015')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('ArchModelingDiagrams.pdf')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://en.wikipedia.org/wiki/Arch')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('ArchPrototype'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFColor"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('diffuseColor'),
                      value_ : SFString('0.2 0.8 0.8')),

                    field(
                      type_ : SFString("SFColor"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('emissiveColor'),
                      value_ : SFString('0.2 0.8 0.8')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('clearSpanWidth'),
                      value_ : SFString('4')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('riseHeight'),
                      value_ : SFString('2')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('depth'),
                      value_ : SFString('3')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('topAbutmentHeight'),
                      value_ : SFString('0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('pierWidth'),
                      value_ : SFString('0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('pierHeight'),
                      value_ : SFString('1')),

                    field(
                      type_ : SFString("SFBool"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('archHalf')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('archHalfExtensionWidth')),

                    field(
                      type_ : SFString("SFBool"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('onlyIntrados')),

                    field(
                      type_ : SFString("SFBool"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('archFilled')),

                    field(
                      type_ : SFString("SFBool"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('archHalfFilled')),

                    field(
                      type_ : SFString("SFBool"),
                      accessType_ : SFString("initializeOnly"),
                      name_ : SFString('lintel'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      DEF_ : SFString('ArchTransform'),
                      child_ : 
                        Shape(
                          DEF_ : SFString('Arch'),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('MaterialNode'),
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('diffuseColor'),
                                          protoField_ : SFString('diffuseColor')),

                                        connect(
                                          nodeField_ : SFString('emissiveColor'),
                                          protoField_ : SFString('emissiveColor'))]))),
                          geometry_ : 
                            IndexedFaceSet(
                              DEF_ : SFString('ArchIndex'),
                              solid_ : false,
                              convex_ : false,
                              coord_ : 
                                Coordinate(
                                  DEF_ : SFString('ArchChord'))))),

                    Script(
                      DEF_ : SFString('ArchPrototypeScript'),
                      url_ : MFString([SFString("../node/ArchPrototypeScript.js"), SFString("https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js")]),
                      field_ : [
                        field(
                          type_ : SFString("SFFloat"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('clearSpanWidth')),

                        field(
                          type_ : SFString("SFFloat"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('riseHeight')),

                        field(
                          type_ : SFString("SFFloat"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('depth')),

                        field(
                          type_ : SFString("SFFloat"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('topAbutmentHeight')),

                        field(
                          type_ : SFString("SFFloat"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('pierWidth')),

                        field(
                          type_ : SFString("SFFloat"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('pierHeight')),

                        field(
                          type_ : SFString("SFBool"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('archHalf')),

                        field(
                          type_ : SFString("SFFloat"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('archHalfExtensionWidth')),

                        field(
                          type_ : SFString("SFBool"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('onlyIntrados')),

                        field(
                          type_ : SFString("SFBool"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('archFilled')),

                        field(
                          type_ : SFString("SFBool"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('archHalfFilled')),

                        field(
                          type_ : SFString("SFBool"),
                          accessType_ : SFString("initializeOnly"),
                          name_ : SFString('lintel')),

                        field(
                          type_ : SFString("SFVec3f"),
                          accessType_ : SFString("outputOnly"),
                          name_ : SFString('computedScale')),

                        field(
                          type_ : SFString("MFVec3f"),
                          accessType_ : SFString("outputOnly"),
                          name_ : SFString('pointOut')),

                        field(
                          type_ : SFString("MFInt32"),
                          accessType_ : SFString("outputOnly"),
                          name_ : SFString('indexOut'))],

                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('clearSpanWidth'),
                              protoField_ : SFString('clearSpanWidth')),

                            connect(
                              nodeField_ : SFString('riseHeight'),
                              protoField_ : SFString('riseHeight')),

                            connect(
                              nodeField_ : SFString('depth'),
                              protoField_ : SFString('depth')),

                            connect(
                              nodeField_ : SFString('topAbutmentHeight'),
                              protoField_ : SFString('topAbutmentHeight')),

                            connect(
                              nodeField_ : SFString('pierWidth'),
                              protoField_ : SFString('pierWidth')),

                            connect(
                              nodeField_ : SFString('pierHeight'),
                              protoField_ : SFString('pierHeight')),

                            connect(
                              nodeField_ : SFString('archHalf'),
                              protoField_ : SFString('archHalf')),

                            connect(
                              nodeField_ : SFString('archHalfExtensionWidth'),
                              protoField_ : SFString('archHalfExtensionWidth')),

                            connect(
                              nodeField_ : SFString('onlyIntrados'),
                              protoField_ : SFString('onlyIntrados')),

                            connect(
                              nodeField_ : SFString('archFilled'),
                              protoField_ : SFString('archFilled')),

                            connect(
                              nodeField_ : SFString('archHalfFilled'),
                              protoField_ : SFString('archHalfFilled')),

                            connect(
                              nodeField_ : SFString('lintel'),
                              protoField_ : SFString('lintel'))])),

                    ROUTE(
                      fromNode_ : SFString('ArchPrototypeScript'),
                      fromField_ : SFString('computedScale'),
                      toNode_ : SFString('ArchTransform'),
                      toField_ : SFString('scale')),

                    ROUTE(
                      fromNode_ : SFString('ArchPrototypeScript'),
                      fromField_ : SFString('pointOut'),
                      toNode_ : SFString('ArchChord'),
                      toField_ : SFString('point')),

                    ROUTE(
                      fromNode_ : SFString('ArchPrototypeScript'),
                      fromField_ : SFString('indexOut'),
                      toNode_ : SFString('ArchIndex'),
                      toField_ : SFString('set_coordIndex'))])),

            ProtoInstance(
              DEF_ : SFString('ArchInstance'),
              name_ : SFString('ArchPrototype'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('diffuseColor'),
                  value_ : SFString('0.5 0.3 0.6')),

                fieldValue(
                  name_ : SFString('emissiveColor'),
                  value_ : SFString('0.5 0.3 0.6')),

                fieldValue(
                  name_ : SFString('clearSpanWidth'),
                  value_ : SFString('5')),

                fieldValue(
                  name_ : SFString('riseHeight'),
                  value_ : SFString('2.5')),

                fieldValue(
                  name_ : SFString('depth'),
                  value_ : SFString('2')),

                fieldValue(
                  name_ : SFString('topAbutmentHeight'),
                  value_ : SFString('0.6')),

                fieldValue(
                  name_ : SFString('pierWidth'),
                  value_ : SFString('1')),

                fieldValue(
                  name_ : SFString('pierHeight'),
                  value_ : SFString('2'))]),

            Inline(
              DEF_ : SFString('CoordinateAxes'),
              global_ : true,
              url_ : MFString([SFString("../data/CoordinateAxes.x3d")]))]));
void main() { exit(0); }
