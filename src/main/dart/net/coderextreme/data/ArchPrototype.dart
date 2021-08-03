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
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('ArchPrototype'),
              appinfo_ : SFString('Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.'),
              ProtoInterface_ : 
                ProtoInterface(
                  /*COLOR OF ARCH*/
                  /*INPUT PARAMETERS*/
                  /*General parameters: measures in meters*/
                  /*Parameters to create to create shapes related to arch: put true to apply*/
                  field_ : [
                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('diffuseColor'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('color of arch'),
                      value_ : SFString('0.2 0.8 0.8')),

                    field(
                      type_ : SFString("SFColor"),
                      name_ : SFString('emissiveColor'),
                      accessType_ : SFString("inputOutput"),
                      appinfo_ : SFString('color of arch'),
                      value_ : SFString('0.2 0.8 0.8')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('clearSpanWidth'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference'),
                      value_ : SFString('4')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('riseHeight'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference'),
                      value_ : SFString('2')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('depth'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('depth'),
                      value_ : SFString('3')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('topAbutmentHeight'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('topAbutmentHeight:topAbutmentHeight=0 means no topAbutment'),
                      value_ : SFString('0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('pierWidth'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('pierWidth:pierWidtht=0 means no pierWidth'),
                      value_ : SFString('0.5')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('pierHeight'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('pierHeight: pierHeight=0 means no pierHeight'),
                      value_ : SFString('1')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('archHalf'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width'),
                      value_ : SFString('false')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('archHalfExtensionWidth'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.'),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('onlyIntrados'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.'),
                      value_ : SFString('false')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('archFilled'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.'),
                      value_ : SFString('false')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('archHalfFilled'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.'),
                      value_ : SFString('false')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('lintel'),
                      accessType_ : SFString("initializeOnly"),
                      appinfo_ : SFString('lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.'),
                      value_ : SFString('false'))]),
              ProtoBody_ : 
                ProtoBody(
                  /*First node determines node type of this prototype*/
                  /*IndexedFaceset creates arch*/
                  children_ : [
                    Transform(
                      DEF_ : SFString('ArchTransform'),
                      children_ : [
                        Shape(
                          DEF_ : SFString('Arch'),
                          /*note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly*/
                          geometry_ : 
                            IndexedFaceSet(
                              DEF_ : SFString('ArchIndex'),
                              convex_ : false,
                              solid_ : false,
                              coord_ : 
                                Coordinate(
                                  DEF_ : SFString('ArchChord'))),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('MaterialNode'),
                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('emissiveColor'),
                                          protoField_ : SFString('emissiveColor')),

                                        connect(
                                          nodeField_ : SFString('diffuseColor'),
                                          protoField_ : SFString('diffuseColor'))]))))]),
                  /*Subsequent nodes do not render, but still must be a valid X3D subgraph*/
                  /*This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs*/

                    Script(
                      DEF_ : SFString('ArchPrototypeScript'),
                      url_ : MFString([SFString("../node/ArchPrototypeScript.js"), SFString("https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js")]),
                      /*INPUT PARAMETERS*/
                      /*General parameters*/
                      /*Parameters to create to create shapes related to arch: put true to apply*/
                      /*OUTPUT PARAMETERS*/
                      field_ : [
                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('clearSpanWidth'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for clearSpanWidth parameter')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('riseHeight'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for riseHeight parameter')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('depth'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for depth parameter')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('topAbutmentHeight'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for topAbutmentHeight parameter')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('pierWidth'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for pierWidth parameter')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('pierHeight'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for pierHeight parameter')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('archHalf'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for archHalf parameter')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('archHalfExtensionWidth'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for archHalfExtensionWidth parameter')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('onlyIntrados'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for onlyIntrados parameter')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('archFilled'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for archFilled parameter')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('archHalfFilled'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for archHalfFilled parameter')),

                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('lintel'),
                          accessType_ : SFString("initializeOnly"),
                          appinfo_ : SFString('user or default input for lintel parameter')),

                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('computedScale'),
                          accessType_ : SFString("outputOnly"),
                          appinfo_ : SFString('computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth')),

                        field(
                          type_ : SFString("MFVec3f"),
                          name_ : SFString('pointOut'),
                          accessType_ : SFString("outputOnly"),
                          appinfo_ : SFString('send computed points to the Coordinate node')),

                        field(
                          type_ : SFString("MFInt32"),
                          name_ : SFString('indexOut'),
                          accessType_ : SFString("outputOnly"),
                          appinfo_ : SFString('send computed indices to the IndexedFaceSet node'))],

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
                              nodeField_ : SFString('pierWidth'),
                              protoField_ : SFString('pierWidth')),

                            connect(
                              nodeField_ : SFString('topAbutmentHeight'),
                              protoField_ : SFString('topAbutmentHeight')),

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
                      fromField_ : SFString('computedScale'),
                      fromNode_ : SFString('ArchPrototypeScript'),
                      toField_ : SFString('scale'),
                      toNode_ : SFString('ArchTransform')),

                    ROUTE(
                      fromField_ : SFString('pointOut'),
                      fromNode_ : SFString('ArchPrototypeScript'),
                      toField_ : SFString('point'),
                      toNode_ : SFString('ArchChord')),

                    ROUTE(
                      fromField_ : SFString('indexOut'),
                      fromNode_ : SFString('ArchPrototypeScript'),
                      toField_ : SFString('set_coordIndex'),
                      toNode_ : SFString('ArchIndex'))])),

            ProtoInstance(
              name_ : SFString('ArchPrototype'),
              DEF_ : SFString('ArchInstance'),
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
          /*Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)*/

            Inline(
              DEF_ : SFString('CoordinateAxes'),
              url_ : MFString([SFString("../data/CoordinateAxes.x3d")]))]));
void main() { exit(0); }
