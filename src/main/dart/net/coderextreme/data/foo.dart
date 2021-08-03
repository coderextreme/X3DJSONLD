// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Interchange'),
      version_ : SFString('3.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('generator'),
              content_ : SFString('tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting')),

            meta(
              name_ : SFString('source'),
              content_ : SFString('LOA0ExampleSourceInVRML.wrl'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('Humanoid'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('center'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('humanoidBody'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("MFString"),
                      name_ : SFString('info'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('joints'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFString"),
                      name_ : SFString('name'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('rotation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 1 0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('scale'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1 1 1')),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('scaleOrientation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 1 0')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('segments'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('sites'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('translation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFString"),
                      name_ : SFString('version'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('200x')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('viewpoints'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('bboxCenter'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('bboxSize'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('-1 -1 -1'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      children_ : [
                        Group(
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('children'),
                                  protoField_ : SFString('humanoidBody'))])),

                        Group(
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
                              nodeField_ : SFString('center'),
                              protoField_ : SFString('center')),

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
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('translation'))]))])),

            ProtoDeclare(
              name_ : SFString('Joint'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('center'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('children'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('limitOrientation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 1 0')),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('llimit'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFString"),
                      name_ : SFString('name'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('rotation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 1 0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('scale'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1 1 1')),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('scaleOrientation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 1 0')),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('stiffness'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1 1 1')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('translation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("MFFloat"),
                      name_ : SFString('ulimit'),
                      accessType_ : SFString("inputOutput"))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('children')),

                            connect(
                              nodeField_ : SFString('center'),
                              protoField_ : SFString('center')),

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
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('translation'))]))])),

            ProtoDeclare(
              name_ : SFString('Segment'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('addChildren'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('removeChildren'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('centerOfMass'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('children'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFNode"),
                      name_ : SFString('coord'),
                      accessType_ : SFString("inputOutput"),
                      clearChildren_ : SFString()),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('displacers'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFString"),
                      name_ : SFString('name'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('mass'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('momentsOfInertia'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1 1 1')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('bboxCenter'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('bboxSize'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('-1 -1 -1'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Group(
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('children')),

                            connect(
                              nodeField_ : SFString('bboxCenter'),
                              protoField_ : SFString('bboxCenter')),

                            connect(
                              nodeField_ : SFString('bboxSize'),
                              protoField_ : SFString('bboxSize')),

                            connect(
                              nodeField_ : SFString('addChildren'),
                              protoField_ : SFString('addChildren')),

                            connect(
                              nodeField_ : SFString('removeChildren'),
                              protoField_ : SFString('removeChildren'))]))])),

            ProtoDeclare(
              name_ : SFString('Site'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('addChildren'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('removeChildren'),
                      accessType_ : SFString("inputOnly")),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('center'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0')),

                    field(
                      type_ : SFString("MFNode"),
                      name_ : SFString('children'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFString"),
                      name_ : SFString('name'),
                      accessType_ : SFString("inputOutput")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('rotation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 1 0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('scale'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1 1 1')),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('scaleOrientation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 1 0')),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('translation'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0 0 0'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      IS_ : 
                        IS(
                          connect_ : [
                            connect(
                              nodeField_ : SFString('children'),
                              protoField_ : SFString('children')),

                            connect(
                              nodeField_ : SFString('center'),
                              protoField_ : SFString('center')),

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
                              nodeField_ : SFString('translation'),
                              protoField_ : SFString('translation')),

                            connect(
                              nodeField_ : SFString('addChildren'),
                              protoField_ : SFString('addChildren')),

                            connect(
                              nodeField_ : SFString('removeChildren'),
                              protoField_ : SFString('removeChildren'))]))])),

            ProtoInstance(
              name_ : SFString('Humanoid'),
              DEF_ : SFString('humanoid'),
              fieldValue_ : [
                fieldValue(
                  name_ : SFString('humanoidBody'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('Joint'),
                      DEF_ : SFString('hanim_humanoid_root'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('stiffness'),
                          value_ : SFString('1 1 1')),

                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('humanoid_root')),

                        fieldValue(
                          name_ : SFString('center'),
                          value_ : SFString('0 0.8240000009536743 0.027699999511241913')),

                        fieldValue(
                          name_ : SFString('children'),
                          children_ : [
                            ProtoInstance(
                              name_ : SFString('Segment'),
                              DEF_ : SFString('hanim_sacrum'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('sacrum')),

                                fieldValue(
                                  name_ : SFString('children'),
                                  children_ : [
                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_skull_tip'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('skull_tip')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.004999999888241291 1.7503999471664429 0.005499999970197678'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_sellion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('sellion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.005799999926239252 1.631600022315979 0.0851999968290329'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_infraorbitale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_infraorbitale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.02370000071823597 1.6171000003814697 0.07519999891519547'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_infraorbitale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_infraorbitale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.0340999998152256 1.6171000003814697 0.07519999891519547'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_supramenton'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('supramenton')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.006099999882280827 1.5410000085830688 0.08049999922513962'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_tragion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_tragion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.06459999829530716 1.6346999406814575 0.03020000085234642'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_gonion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_gonion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.052000001072883606 1.552899956703186 0.034699998795986176'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_tragion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_tragion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.0738999992609024 1.6347999572753906 0.028200000524520874'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_gonion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_gonion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.06310000270605087 1.5529999732971191 0.032999999821186066'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_nuchale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('nuchale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.0038999998942017555 1.5972000360488892 -0.07959999889135361'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_clavicale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_clavicale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.011500000022351742 1.4943000078201294 0.03999999910593033'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_suprasternale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('suprasternale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.00839999970048666 1.4714000225067139 0.05510000139474869'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_clavicale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_clavicale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.02710000053048134 1.4943000078201294 0.039400000125169754'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_thelion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_thelion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.07360000163316727 1.3385000228881836 0.1216999962925911'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_thelion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_thelion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.09179999679327011 1.3381999731063843 0.11919999867677689'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_substernale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('substernale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.008500000461935997 1.2994999885559082 0.11469999700784683'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_rib10'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_rib10')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.07109999656677246 1.194100022315979 0.10159999877214432'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_asis'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_asis')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.08869999647140503 1.0020999908447266 0.1111999973654747'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_rib10'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_rib10')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.08709999918937683 1.1924999952316284 0.09920000284910202'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_asis'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_asis')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.0925000011920929 0.9983000159263611 0.10520000010728836'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_iliocristale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_iliocristale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1525000035762787 1.0628000497817993 0.0035000001080334187'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_trochanterion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_trochanterion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1688999980688095 0.8418999910354614 0.03519999980926514'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_iliocristale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_iliocristale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.16120000183582306 1.0536999702453613 0.0007999999797903001'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_trochanterion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_trochanterion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.16769999265670776 0.8335999846458435 0.030300000682473183'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_cervicale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('cervicale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.006399999838322401 1.5199999809265137 -0.08150000125169754'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_spine_2_lower_back'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('spine_2_lower_back')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.004900000058114529 1.1907999515533447 -0.11129999905824661'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_psis'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_psis')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.07159999758005142 1.0190000534057617 -0.11379999667406082'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_psis'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_psis')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.07739999890327454 1.0190000534057617 -0.11509999632835388'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_waist_preferred_posterior'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('waist_preferred_posterior')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.28999999165534973 1.0915000438690186 -0.10909999907016754'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_acromion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_acromion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.19050000607967377 1.479099988937378 -0.04309999942779541'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_axilla_proximal'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_axilla_proximal')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.16259999573230743 1.4071999788284302 -0.003100000089034438'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_radial_styloid'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_radial_styloid')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.188400000333786 0.8676000237464905 -0.035999998450279236'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_axilla_distal'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_axilla_distal')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.16030000150203705 1.4098000526428223 -0.08259999752044678'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_olecranon'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_olecranon')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1906999945640564 1.1404999494552612 -0.10649999976158142'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_humeral_lateral_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_humeral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.2223999947309494 1.1517000198364258 -0.10329999774694443'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_humeral_medial_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_humeral_medial_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1679999977350235 1.1297999620437622 -0.10620000213384628'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_radiale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_radiale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.21299999952316284 1.1304999589920044 -0.10909999907016754'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_metacarpal_phalanx_2'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_metacarpal_phalanx_2')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.19769999384880066 0.8169000148773193 -0.01769999973475933'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_dactylion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_dactylion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1941000074148178 0.6772000193595886 -0.04230000078678131'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_ulnar_styloid'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_ulnar_styloid')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.21170000731945038 0.8561999797821045 -0.058400001376867294'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_metacarpal_phalanx_5'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_metacarpal_phalanx_5')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.19290000200271606 0.7889999747276306 -0.10639999806880951'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_acromion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_acromion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.20319999754428864 1.4759999513626099 -0.04899999871850014'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_axilla_proximal'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_axilla_proximal')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.1776999980211258 1.406499981880188 -0.007499999832361937'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_radial_styloid'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_radial_styloid')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.19009999930858612 0.8644999861717224 -0.04149999842047691'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_axilla_distal'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_axilla_distal')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.17059999704360962 1.4071999788284302 -0.08749999850988388'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_olecranon'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_olecranon')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.19619999825954437 1.1375000476837158 -0.11230000108480453'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_humeral_lateral_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_humeral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.2280000001192093 1.1482000350952148 -0.10999999940395355'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_humeral_medial_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_humeral_medial_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.17350000143051147 1.1272000074386597 -0.11129999905824661'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_radiale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_radiale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.21819999814033508 1.1211999654769897 -0.11670000106096268'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_metacarpal_phalanx_2'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_metacarpal_phalanx_2')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.20090000331401825 0.8138999938964844 -0.02370000071823597'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_dactylion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_dactylion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.20559999346733093 0.6743000149726868 -0.04820000007748604'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_ulnar_styloid'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_ulnar_styloid')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.2142000049352646 0.8529000282287598 -0.06480000168085098'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_metacarpal_phalanx_5'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_metacarpal_phalanx_5')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.19290000200271606 0.7860000133514404 -0.11219999939203262'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_knee_crease'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_knee_crease')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.08250000327825546 0.49320000410079956 -0.032600000500679016'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_femoral_lateral_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_femoral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1421000063419342 0.4991999864578247 0.03099999949336052'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_femoral_medial_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_femoral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.022099999710917473 0.5013999938964844 0.02889999933540821'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_tarsal_interphalangeal_phalanx_5'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_tarsal_interphalangeal_phalanx_5')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.15230000019073486 0.016599999740719795 0.08950000256299973'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_lateral_malleolus'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_lateral_malleolus')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1005999967455864 0.0658000037074089 -0.10750000178813934'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_medial_malleolus'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_medial_malleolus')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.05909999832510948 0.07599999755620956 -0.09279999881982803'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_sphyrion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_sphyrion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.06030000001192093 0.061000000685453415 -0.10019999742507935'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_tarsal_interphalangeal_phalanx_1'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_tarsal_interphalangeal_phalanx_1')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.05209999904036522 0.026000000536441803 0.01269999984651804'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_calcaneus_posterior'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_calcaneus_posterior')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.06920000165700912 0.02969999983906746 -0.12210000306367874'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_tarsal_distal_phalanx_2')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.08829999715089798 0.013399999588727951 0.13830000162124634'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_knee_crease'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_knee_crease')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.09929999709129333 0.48809999227523804 -0.030899999663233757'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_femoral_lateral_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_femoral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.1597999930381775 0.4966999888420105 0.02969999983906746'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_femoral_medial_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_femoral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.039799999445676804 0.49459999799728394 0.030300000682473183'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_tarsal_interphalangeal_phalanx_5'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_tarsal_interphalangeal_phalanx_5')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.18250000476837158 0.007000000216066837 0.09279999881982803'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_lateral_malleolus'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_lateral_malleolus')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.13079999387264252 0.059700001031160355 -0.10320000350475311'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_medial_malleolus'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_medial_malleolus')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.08900000154972076 0.07159999758005142 -0.08810000121593475'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_sphyrion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_sphyrion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.08900000154972076 0.057500001043081284 -0.09430000185966492'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_tarsal_interphalangeal_phalanx_1'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_tarsal_interphalangeal_phalanx_1')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.08160000294446945 0.02319999970495701 0.010599999688565731'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_calcaneus_posterior'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_calcaneus_posterior')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.09740000218153 0.02590000070631504 -0.11710000038146973'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_tarsal_distal_phalanx_2')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.11949999630451202 0.007899999618530273 0.14329999685287476'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_crotch'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('crotch')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.0034000000450760126 0.8266000151634216 0.025699999183416367'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_neck_base'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_neck_base')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.04190000146627426 1.5148999691009521 -0.02199999988079071'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_neck_base'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_neck_base')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.06459999829530716 1.5140999555587769 -0.03799999877810478'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_navel'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('navel')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.006899999920278788 1.09660005569458 0.10170000046491623'))])])])])])]),

                fieldValue(
                  name_ : SFString('joints'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('Joint'),
                      DEF_ : SFString('hanim_humanoid_root'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('stiffness'),
                          value_ : SFString('1 1 1')),

                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('humanoid_root')),

                        fieldValue(
                          name_ : SFString('center'),
                          value_ : SFString('0 0.8240000009536743 0.027699999511241913')),

                        fieldValue(
                          name_ : SFString('children'),
                          children_ : [
                            ProtoInstance(
                              name_ : SFString('Segment'),
                              DEF_ : SFString('hanim_sacrum'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('sacrum')),

                                fieldValue(
                                  name_ : SFString('children'),
                                  children_ : [
                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_skull_tip'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('skull_tip')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.004999999888241291 1.7503999471664429 0.005499999970197678'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_sellion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('sellion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.005799999926239252 1.631600022315979 0.0851999968290329'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_infraorbitale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_infraorbitale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.02370000071823597 1.6171000003814697 0.07519999891519547'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_infraorbitale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_infraorbitale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.0340999998152256 1.6171000003814697 0.07519999891519547'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_supramenton'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('supramenton')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.006099999882280827 1.5410000085830688 0.08049999922513962'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_tragion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_tragion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.06459999829530716 1.6346999406814575 0.03020000085234642'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_gonion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_gonion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.052000001072883606 1.552899956703186 0.034699998795986176'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_tragion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_tragion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.0738999992609024 1.6347999572753906 0.028200000524520874'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_gonion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_gonion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.06310000270605087 1.5529999732971191 0.032999999821186066'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_nuchale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('nuchale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.0038999998942017555 1.5972000360488892 -0.07959999889135361'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_clavicale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_clavicale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.011500000022351742 1.4943000078201294 0.03999999910593033'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_suprasternale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('suprasternale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.00839999970048666 1.4714000225067139 0.05510000139474869'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_clavicale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_clavicale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.02710000053048134 1.4943000078201294 0.039400000125169754'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_thelion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_thelion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.07360000163316727 1.3385000228881836 0.1216999962925911'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_thelion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_thelion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.09179999679327011 1.3381999731063843 0.11919999867677689'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_substernale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('substernale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.008500000461935997 1.2994999885559082 0.11469999700784683'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_rib10'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_rib10')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.07109999656677246 1.194100022315979 0.10159999877214432'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_asis'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_asis')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.08869999647140503 1.0020999908447266 0.1111999973654747'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_rib10'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_rib10')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.08709999918937683 1.1924999952316284 0.09920000284910202'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_asis'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_asis')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.0925000011920929 0.9983000159263611 0.10520000010728836'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_iliocristale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_iliocristale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1525000035762787 1.0628000497817993 0.0035000001080334187'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_trochanterion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_trochanterion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1688999980688095 0.8418999910354614 0.03519999980926514'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_iliocristale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_iliocristale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.16120000183582306 1.0536999702453613 0.0007999999797903001'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_trochanterion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_trochanterion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.16769999265670776 0.8335999846458435 0.030300000682473183'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_cervicale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('cervicale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.006399999838322401 1.5199999809265137 -0.08150000125169754'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_spine_2_lower_back'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('spine_2_lower_back')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.004900000058114529 1.1907999515533447 -0.11129999905824661'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_psis'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_psis')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.07159999758005142 1.0190000534057617 -0.11379999667406082'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_psis'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_psis')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.07739999890327454 1.0190000534057617 -0.11509999632835388'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_waist_preferred_posterior'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('waist_preferred_posterior')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.28999999165534973 1.0915000438690186 -0.10909999907016754'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_acromion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_acromion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.19050000607967377 1.479099988937378 -0.04309999942779541'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_axilla_proximal'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_axilla_proximal')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.16259999573230743 1.4071999788284302 -0.003100000089034438'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_radial_styloid'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_radial_styloid')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.188400000333786 0.8676000237464905 -0.035999998450279236'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_axilla_distal'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_axilla_distal')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.16030000150203705 1.4098000526428223 -0.08259999752044678'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_olecranon'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_olecranon')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1906999945640564 1.1404999494552612 -0.10649999976158142'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_humeral_lateral_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_humeral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.2223999947309494 1.1517000198364258 -0.10329999774694443'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_humeral_medial_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_humeral_medial_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1679999977350235 1.1297999620437622 -0.10620000213384628'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_radiale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_radiale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.21299999952316284 1.1304999589920044 -0.10909999907016754'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_metacarpal_phalanx_2'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_metacarpal_phalanx_2')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.19769999384880066 0.8169000148773193 -0.01769999973475933'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_dactylion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_dactylion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1941000074148178 0.6772000193595886 -0.04230000078678131'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_ulnar_styloid'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_ulnar_styloid')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.21170000731945038 0.8561999797821045 -0.058400001376867294'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_metacarpal_phalanx_5'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_metacarpal_phalanx_5')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.19290000200271606 0.7889999747276306 -0.10639999806880951'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_acromion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_acromion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.20319999754428864 1.4759999513626099 -0.04899999871850014'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_axilla_proximal'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_axilla_proximal')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.1776999980211258 1.406499981880188 -0.007499999832361937'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_radial_styloid'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_radial_styloid')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.19009999930858612 0.8644999861717224 -0.04149999842047691'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_axilla_distal'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_axilla_distal')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.17059999704360962 1.4071999788284302 -0.08749999850988388'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_olecranon'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_olecranon')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.19619999825954437 1.1375000476837158 -0.11230000108480453'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_humeral_lateral_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_humeral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.2280000001192093 1.1482000350952148 -0.10999999940395355'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_humeral_medial_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_humeral_medial_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.17350000143051147 1.1272000074386597 -0.11129999905824661'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_radiale'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_radiale')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.21819999814033508 1.1211999654769897 -0.11670000106096268'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_metacarpal_phalanx_2'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_metacarpal_phalanx_2')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.20090000331401825 0.8138999938964844 -0.02370000071823597'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_dactylion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_dactylion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.20559999346733093 0.6743000149726868 -0.04820000007748604'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_ulnar_styloid'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_ulnar_styloid')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.2142000049352646 0.8529000282287598 -0.06480000168085098'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_metacarpal_phalanx_5'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_metacarpal_phalanx_5')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.19290000200271606 0.7860000133514404 -0.11219999939203262'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_knee_crease'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_knee_crease')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.08250000327825546 0.49320000410079956 -0.032600000500679016'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_femoral_lateral_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_femoral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1421000063419342 0.4991999864578247 0.03099999949336052'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_femoral_medial_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_femoral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.022099999710917473 0.5013999938964844 0.02889999933540821'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_tarsal_interphalangeal_phalanx_5'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_tarsal_interphalangeal_phalanx_5')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.15230000019073486 0.016599999740719795 0.08950000256299973'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_lateral_malleolus'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_lateral_malleolus')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.1005999967455864 0.0658000037074089 -0.10750000178813934'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_medial_malleolus'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_medial_malleolus')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.05909999832510948 0.07599999755620956 -0.09279999881982803'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_sphyrion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_sphyrion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.06030000001192093 0.061000000685453415 -0.10019999742507935'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_tarsal_interphalangeal_phalanx_1'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_tarsal_interphalangeal_phalanx_1')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.05209999904036522 0.026000000536441803 0.01269999984651804'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_calcaneus_posterior'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_calcaneus_posterior')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.06920000165700912 0.02969999983906746 -0.12210000306367874'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_tarsal_distal_phalanx_2')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.08829999715089798 0.013399999588727951 0.13830000162124634'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_knee_crease'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_knee_crease')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.09929999709129333 0.48809999227523804 -0.030899999663233757'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_femoral_lateral_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_femoral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.1597999930381775 0.4966999888420105 0.02969999983906746'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_femoral_medial_epicondyles'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_femoral_lateral_epicondyles')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.039799999445676804 0.49459999799728394 0.030300000682473183'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_tarsal_interphalangeal_phalanx_5'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_tarsal_interphalangeal_phalanx_5')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.18250000476837158 0.007000000216066837 0.09279999881982803'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_lateral_malleolus'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_lateral_malleolus')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.13079999387264252 0.059700001031160355 -0.10320000350475311'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_medial_malleolus'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_medial_malleolus')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.08900000154972076 0.07159999758005142 -0.08810000121593475'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_sphyrion'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_sphyrion')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.08900000154972076 0.057500001043081284 -0.09430000185966492'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_tarsal_interphalangeal_phalanx_1'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_tarsal_interphalangeal_phalanx_1')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.08160000294446945 0.02319999970495701 0.010599999688565731'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_calcaneus_posterior'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_calcaneus_posterior')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.09740000218153 0.02590000070631504 -0.11710000038146973'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_tarsal_distal_phalanx_2')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.11949999630451202 0.007899999618530273 0.14329999685287476'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_crotch'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('crotch')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.0034000000450760126 0.8266000151634216 0.025699999183416367'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_r_neck_base'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('r_neck_base')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('-0.04190000146627426 1.5148999691009521 -0.02199999988079071'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_l_neck_base'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('l_neck_base')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.06459999829530716 1.5140999555587769 -0.03799999877810478'))]),

                                    ProtoInstance(
                                      name_ : SFString('Site'),
                                      DEF_ : SFString('hanim_navel'),
                                      fieldValue_ : [
                                        fieldValue(
                                          name_ : SFString('name'),
                                          value_ : SFString('navel')),

                                        fieldValue(
                                          name_ : SFString('translation'),
                                          value_ : SFString('0.006899999920278788 1.09660005569458 0.10170000046491623'))])])])])])]),

                fieldValue(
                  name_ : SFString('segments'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('Segment'),
                      DEF_ : SFString('hanim_sacrum'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('sacrum')),

                        fieldValue(
                          name_ : SFString('children'),
                          children_ : [
                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_skull_tip'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('skull_tip')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.004999999888241291 1.7503999471664429 0.005499999970197678'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_sellion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('sellion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.005799999926239252 1.631600022315979 0.0851999968290329'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_infraorbitale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_infraorbitale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.02370000071823597 1.6171000003814697 0.07519999891519547'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_infraorbitale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_infraorbitale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.0340999998152256 1.6171000003814697 0.07519999891519547'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_supramenton'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('supramenton')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.006099999882280827 1.5410000085830688 0.08049999922513962'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_tragion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_tragion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.06459999829530716 1.6346999406814575 0.03020000085234642'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_gonion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_gonion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.052000001072883606 1.552899956703186 0.034699998795986176'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_tragion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_tragion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.0738999992609024 1.6347999572753906 0.028200000524520874'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_gonion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_gonion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.06310000270605087 1.5529999732971191 0.032999999821186066'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_nuchale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('nuchale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.0038999998942017555 1.5972000360488892 -0.07959999889135361'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_clavicale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_clavicale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.011500000022351742 1.4943000078201294 0.03999999910593033'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_suprasternale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('suprasternale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.00839999970048666 1.4714000225067139 0.05510000139474869'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_clavicale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_clavicale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.02710000053048134 1.4943000078201294 0.039400000125169754'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_thelion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_thelion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.07360000163316727 1.3385000228881836 0.1216999962925911'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_thelion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_thelion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.09179999679327011 1.3381999731063843 0.11919999867677689'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_substernale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('substernale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.008500000461935997 1.2994999885559082 0.11469999700784683'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_rib10'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_rib10')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.07109999656677246 1.194100022315979 0.10159999877214432'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_asis'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_asis')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.08869999647140503 1.0020999908447266 0.1111999973654747'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_rib10'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_rib10')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.08709999918937683 1.1924999952316284 0.09920000284910202'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_asis'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_asis')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.0925000011920929 0.9983000159263611 0.10520000010728836'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_iliocristale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_iliocristale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.1525000035762787 1.0628000497817993 0.0035000001080334187'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_trochanterion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_trochanterion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.1688999980688095 0.8418999910354614 0.03519999980926514'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_iliocristale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_iliocristale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.16120000183582306 1.0536999702453613 0.0007999999797903001'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_trochanterion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_trochanterion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.16769999265670776 0.8335999846458435 0.030300000682473183'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_cervicale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('cervicale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.006399999838322401 1.5199999809265137 -0.08150000125169754'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_spine_2_lower_back'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('spine_2_lower_back')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.004900000058114529 1.1907999515533447 -0.11129999905824661'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_psis'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_psis')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.07159999758005142 1.0190000534057617 -0.11379999667406082'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_psis'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_psis')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.07739999890327454 1.0190000534057617 -0.11509999632835388'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_waist_preferred_posterior'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('waist_preferred_posterior')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.28999999165534973 1.0915000438690186 -0.10909999907016754'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_acromion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_acromion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.19050000607967377 1.479099988937378 -0.04309999942779541'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_axilla_proximal'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_axilla_proximal')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.16259999573230743 1.4071999788284302 -0.003100000089034438'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_radial_styloid'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_radial_styloid')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.188400000333786 0.8676000237464905 -0.035999998450279236'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_axilla_distal'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_axilla_distal')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.16030000150203705 1.4098000526428223 -0.08259999752044678'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_olecranon'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_olecranon')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.1906999945640564 1.1404999494552612 -0.10649999976158142'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_humeral_lateral_epicondyles'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_humeral_lateral_epicondyles')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.2223999947309494 1.1517000198364258 -0.10329999774694443'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_humeral_medial_epicondyles'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_humeral_medial_epicondyles')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.1679999977350235 1.1297999620437622 -0.10620000213384628'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_radiale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_radiale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.21299999952316284 1.1304999589920044 -0.10909999907016754'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_metacarpal_phalanx_2'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_metacarpal_phalanx_2')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.19769999384880066 0.8169000148773193 -0.01769999973475933'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_dactylion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_dactylion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.1941000074148178 0.6772000193595886 -0.04230000078678131'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_ulnar_styloid'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_ulnar_styloid')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.21170000731945038 0.8561999797821045 -0.058400001376867294'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_metacarpal_phalanx_5'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_metacarpal_phalanx_5')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.19290000200271606 0.7889999747276306 -0.10639999806880951'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_acromion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_acromion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.20319999754428864 1.4759999513626099 -0.04899999871850014'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_axilla_proximal'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_axilla_proximal')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.1776999980211258 1.406499981880188 -0.007499999832361937'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_radial_styloid'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_radial_styloid')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.19009999930858612 0.8644999861717224 -0.04149999842047691'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_axilla_distal'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_axilla_distal')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.17059999704360962 1.4071999788284302 -0.08749999850988388'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_olecranon'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_olecranon')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.19619999825954437 1.1375000476837158 -0.11230000108480453'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_humeral_lateral_epicondyles'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_humeral_lateral_epicondyles')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.2280000001192093 1.1482000350952148 -0.10999999940395355'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_humeral_medial_epicondyles'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_humeral_medial_epicondyles')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.17350000143051147 1.1272000074386597 -0.11129999905824661'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_radiale'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_radiale')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.21819999814033508 1.1211999654769897 -0.11670000106096268'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_metacarpal_phalanx_2'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_metacarpal_phalanx_2')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.20090000331401825 0.8138999938964844 -0.02370000071823597'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_dactylion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_dactylion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.20559999346733093 0.6743000149726868 -0.04820000007748604'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_ulnar_styloid'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_ulnar_styloid')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.2142000049352646 0.8529000282287598 -0.06480000168085098'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_metacarpal_phalanx_5'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_metacarpal_phalanx_5')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.19290000200271606 0.7860000133514404 -0.11219999939203262'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_knee_crease'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_knee_crease')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.08250000327825546 0.49320000410079956 -0.032600000500679016'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_femoral_lateral_epicondyles'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_femoral_lateral_epicondyles')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.1421000063419342 0.4991999864578247 0.03099999949336052'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_femoral_medial_epicondyles'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_femoral_lateral_epicondyles')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.022099999710917473 0.5013999938964844 0.02889999933540821'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_tarsal_interphalangeal_phalanx_5'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_tarsal_interphalangeal_phalanx_5')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.15230000019073486 0.016599999740719795 0.08950000256299973'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_lateral_malleolus'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_lateral_malleolus')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.1005999967455864 0.0658000037074089 -0.10750000178813934'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_medial_malleolus'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_medial_malleolus')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.05909999832510948 0.07599999755620956 -0.09279999881982803'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_sphyrion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_sphyrion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.06030000001192093 0.061000000685453415 -0.10019999742507935'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_tarsal_interphalangeal_phalanx_1'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_tarsal_interphalangeal_phalanx_1')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.05209999904036522 0.026000000536441803 0.01269999984651804'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_calcaneus_posterior'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_calcaneus_posterior')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.06920000165700912 0.02969999983906746 -0.12210000306367874'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_tarsal_distal_phalanx_2')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.08829999715089798 0.013399999588727951 0.13830000162124634'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_knee_crease'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_knee_crease')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.09929999709129333 0.48809999227523804 -0.030899999663233757'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_femoral_lateral_epicondyles'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_femoral_lateral_epicondyles')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.1597999930381775 0.4966999888420105 0.02969999983906746'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_femoral_medial_epicondyles'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_femoral_lateral_epicondyles')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.039799999445676804 0.49459999799728394 0.030300000682473183'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_tarsal_interphalangeal_phalanx_5'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_tarsal_interphalangeal_phalanx_5')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.18250000476837158 0.007000000216066837 0.09279999881982803'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_lateral_malleolus'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_lateral_malleolus')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.13079999387264252 0.059700001031160355 -0.10320000350475311'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_medial_malleolus'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_medial_malleolus')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.08900000154972076 0.07159999758005142 -0.08810000121593475'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_sphyrion'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_sphyrion')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.08900000154972076 0.057500001043081284 -0.09430000185966492'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_tarsal_interphalangeal_phalanx_1'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_tarsal_interphalangeal_phalanx_1')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.08160000294446945 0.02319999970495701 0.010599999688565731'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_calcaneus_posterior'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_calcaneus_posterior')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.09740000218153 0.02590000070631504 -0.11710000038146973'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_tarsal_distal_phalanx_2')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.11949999630451202 0.007899999618530273 0.14329999685287476'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_crotch'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('crotch')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.0034000000450760126 0.8266000151634216 0.025699999183416367'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_r_neck_base'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('r_neck_base')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('-0.04190000146627426 1.5148999691009521 -0.02199999988079071'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_l_neck_base'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('l_neck_base')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.06459999829530716 1.5140999555587769 -0.03799999877810478'))]),

                            ProtoInstance(
                              name_ : SFString('Site'),
                              DEF_ : SFString('hanim_navel'),
                              fieldValue_ : [
                                fieldValue(
                                  name_ : SFString('name'),
                                  value_ : SFString('navel')),

                                fieldValue(
                                  name_ : SFString('translation'),
                                  value_ : SFString('0.006899999920278788 1.09660005569458 0.10170000046491623'))])])])]),

                fieldValue(
                  name_ : SFString('sites'),
                  children_ : [
                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_skull_tip'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('skull_tip')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.004999999888241291 1.7503999471664429 0.005499999970197678'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_sellion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('sellion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.005799999926239252 1.631600022315979 0.0851999968290329'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_infraorbitale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_infraorbitale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.02370000071823597 1.6171000003814697 0.07519999891519547'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_infraorbitale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_infraorbitale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.0340999998152256 1.6171000003814697 0.07519999891519547'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_supramenton'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('supramenton')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.006099999882280827 1.5410000085830688 0.08049999922513962'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_tragion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_tragion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.06459999829530716 1.6346999406814575 0.03020000085234642'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_gonion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_gonion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.052000001072883606 1.552899956703186 0.034699998795986176'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_tragion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_tragion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.0738999992609024 1.6347999572753906 0.028200000524520874'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_gonion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_gonion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.06310000270605087 1.5529999732971191 0.032999999821186066'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_nuchale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('nuchale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.0038999998942017555 1.5972000360488892 -0.07959999889135361'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_clavicale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_clavicale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.011500000022351742 1.4943000078201294 0.03999999910593033'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_suprasternale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('suprasternale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.00839999970048666 1.4714000225067139 0.05510000139474869'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_clavicale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_clavicale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.02710000053048134 1.4943000078201294 0.039400000125169754'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_thelion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_thelion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.07360000163316727 1.3385000228881836 0.1216999962925911'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_thelion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_thelion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.09179999679327011 1.3381999731063843 0.11919999867677689'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_substernale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('substernale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.008500000461935997 1.2994999885559082 0.11469999700784683'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_rib10'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_rib10')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.07109999656677246 1.194100022315979 0.10159999877214432'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_asis'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_asis')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.08869999647140503 1.0020999908447266 0.1111999973654747'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_rib10'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_rib10')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.08709999918937683 1.1924999952316284 0.09920000284910202'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_asis'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_asis')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.0925000011920929 0.9983000159263611 0.10520000010728836'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_iliocristale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_iliocristale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.1525000035762787 1.0628000497817993 0.0035000001080334187'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_trochanterion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_trochanterion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.1688999980688095 0.8418999910354614 0.03519999980926514'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_iliocristale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_iliocristale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.16120000183582306 1.0536999702453613 0.0007999999797903001'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_trochanterion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_trochanterion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.16769999265670776 0.8335999846458435 0.030300000682473183'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_cervicale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('cervicale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.006399999838322401 1.5199999809265137 -0.08150000125169754'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_spine_2_lower_back'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('spine_2_lower_back')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.004900000058114529 1.1907999515533447 -0.11129999905824661'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_psis'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_psis')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.07159999758005142 1.0190000534057617 -0.11379999667406082'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_psis'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_psis')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.07739999890327454 1.0190000534057617 -0.11509999632835388'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_waist_preferred_posterior'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('waist_preferred_posterior')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.28999999165534973 1.0915000438690186 -0.10909999907016754'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_acromion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_acromion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.19050000607967377 1.479099988937378 -0.04309999942779541'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_axilla_proximal'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_axilla_proximal')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.16259999573230743 1.4071999788284302 -0.003100000089034438'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_radial_styloid'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_radial_styloid')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.188400000333786 0.8676000237464905 -0.035999998450279236'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_axilla_distal'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_axilla_distal')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.16030000150203705 1.4098000526428223 -0.08259999752044678'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_olecranon'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_olecranon')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.1906999945640564 1.1404999494552612 -0.10649999976158142'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_humeral_lateral_epicondyles'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_humeral_lateral_epicondyles')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.2223999947309494 1.1517000198364258 -0.10329999774694443'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_humeral_medial_epicondyles'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_humeral_medial_epicondyles')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.1679999977350235 1.1297999620437622 -0.10620000213384628'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_radiale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_radiale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.21299999952316284 1.1304999589920044 -0.10909999907016754'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_metacarpal_phalanx_2'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_metacarpal_phalanx_2')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.19769999384880066 0.8169000148773193 -0.01769999973475933'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_dactylion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_dactylion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.1941000074148178 0.6772000193595886 -0.04230000078678131'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_ulnar_styloid'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_ulnar_styloid')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.21170000731945038 0.8561999797821045 -0.058400001376867294'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_metacarpal_phalanx_5'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_metacarpal_phalanx_5')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.19290000200271606 0.7889999747276306 -0.10639999806880951'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_acromion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_acromion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.20319999754428864 1.4759999513626099 -0.04899999871850014'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_axilla_proximal'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_axilla_proximal')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.1776999980211258 1.406499981880188 -0.007499999832361937'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_radial_styloid'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_radial_styloid')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.19009999930858612 0.8644999861717224 -0.04149999842047691'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_axilla_distal'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_axilla_distal')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.17059999704360962 1.4071999788284302 -0.08749999850988388'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_olecranon'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_olecranon')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.19619999825954437 1.1375000476837158 -0.11230000108480453'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_humeral_lateral_epicondyles'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_humeral_lateral_epicondyles')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.2280000001192093 1.1482000350952148 -0.10999999940395355'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_humeral_medial_epicondyles'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_humeral_medial_epicondyles')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.17350000143051147 1.1272000074386597 -0.11129999905824661'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_radiale'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_radiale')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.21819999814033508 1.1211999654769897 -0.11670000106096268'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_metacarpal_phalanx_2'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_metacarpal_phalanx_2')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.20090000331401825 0.8138999938964844 -0.02370000071823597'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_dactylion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_dactylion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.20559999346733093 0.6743000149726868 -0.04820000007748604'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_ulnar_styloid'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_ulnar_styloid')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.2142000049352646 0.8529000282287598 -0.06480000168085098'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_metacarpal_phalanx_5'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_metacarpal_phalanx_5')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.19290000200271606 0.7860000133514404 -0.11219999939203262'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_knee_crease'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_knee_crease')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.08250000327825546 0.49320000410079956 -0.032600000500679016'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_femoral_lateral_epicondyles'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_femoral_lateral_epicondyles')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.1421000063419342 0.4991999864578247 0.03099999949336052'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_femoral_medial_epicondyles'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_femoral_lateral_epicondyles')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.022099999710917473 0.5013999938964844 0.02889999933540821'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_tarsal_interphalangeal_phalanx_5'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_tarsal_interphalangeal_phalanx_5')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.15230000019073486 0.016599999740719795 0.08950000256299973'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_lateral_malleolus'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_lateral_malleolus')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.1005999967455864 0.0658000037074089 -0.10750000178813934'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_medial_malleolus'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_medial_malleolus')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.05909999832510948 0.07599999755620956 -0.09279999881982803'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_sphyrion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_sphyrion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.06030000001192093 0.061000000685453415 -0.10019999742507935'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_tarsal_interphalangeal_phalanx_1'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_tarsal_interphalangeal_phalanx_1')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.05209999904036522 0.026000000536441803 0.01269999984651804'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_calcaneus_posterior'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_calcaneus_posterior')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.06920000165700912 0.02969999983906746 -0.12210000306367874'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_tarsal_distal_phalanx_2')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.08829999715089798 0.013399999588727951 0.13830000162124634'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_knee_crease'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_knee_crease')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.09929999709129333 0.48809999227523804 -0.030899999663233757'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_femoral_lateral_epicondyles'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_femoral_lateral_epicondyles')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.1597999930381775 0.4966999888420105 0.02969999983906746'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_femoral_medial_epicondyles'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_femoral_lateral_epicondyles')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.039799999445676804 0.49459999799728394 0.030300000682473183'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_tarsal_interphalangeal_phalanx_5'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_tarsal_interphalangeal_phalanx_5')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.18250000476837158 0.007000000216066837 0.09279999881982803'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_lateral_malleolus'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_lateral_malleolus')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.13079999387264252 0.059700001031160355 -0.10320000350475311'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_medial_malleolus'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_medial_malleolus')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.08900000154972076 0.07159999758005142 -0.08810000121593475'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_sphyrion'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_sphyrion')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.08900000154972076 0.057500001043081284 -0.09430000185966492'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_tarsal_interphalangeal_phalanx_1'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_tarsal_interphalangeal_phalanx_1')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.08160000294446945 0.02319999970495701 0.010599999688565731'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_calcaneus_posterior'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_calcaneus_posterior')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.09740000218153 0.02590000070631504 -0.11710000038146973'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_tarsal_distal_phalanx_2')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.11949999630451202 0.007899999618530273 0.14329999685287476'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_crotch'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('crotch')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.0034000000450760126 0.8266000151634216 0.025699999183416367'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_r_neck_base'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('r_neck_base')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('-0.04190000146627426 1.5148999691009521 -0.02199999988079071'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_l_neck_base'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('l_neck_base')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.06459999829530716 1.5140999555587769 -0.03799999877810478'))]),

                    ProtoInstance(
                      name_ : SFString('Site'),
                      DEF_ : SFString('hanim_navel'),
                      fieldValue_ : [
                        fieldValue(
                          name_ : SFString('name'),
                          value_ : SFString('navel')),

                        fieldValue(
                          name_ : SFString('translation'),
                          value_ : SFString('0.006899999920278788 1.09660005569458 0.10170000046491623'))])]),

                fieldValue(
                  name_ : SFString('name'),
                  value_ : SFString('humanoid')),

                fieldValue(
                  name_ : SFString('info'),
                  value_ : SFString('\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@graphics.cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA0\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided\'s-i\'and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"'))]),

            Group(
              DEF_ : SFString('JointCenters_WorldInfo'),
              children_ : [
                WorldInfo(
                  title_ : SFString('HANIM 200x Default Joint Centers, LOA&#8209;0'),
                  info_ : MFString([SFString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 0 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")]))]),

            NavigationInfo(
              avatarSize_ : MFFloat([SFFloat(0.25), SFFloat(1.600000023841858), SFFloat(0.75)]),
              speed_ : 1.5)]));
void main() { exit(0); }
