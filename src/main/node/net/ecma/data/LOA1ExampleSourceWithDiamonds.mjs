'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { IndexedFaceSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
import { fieldValue } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("generator"),
              content : new SFString("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting")}),

            new meta({
              name : new SFString("source"),
              content : new SFString("LOA1ExampleSourceWithDiamonds.wrl")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Humanoid"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("center"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("humanoidBody"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("info"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("joints"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("name"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("rotation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("scale"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("scaleOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("segments"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("sites"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("version"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("200x")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("viewpoints"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxCenter"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxSize"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-1 -1 -1")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Group({
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("children"),
                                  protoField : new SFString("humanoidBody")})])}))}),

                        new Group({
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("children"),
                                  protoField : new SFString("viewpoints")})])}))}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("center"),
                              protoField : new SFString("center")}),

                            new connect({
                              nodeField : new SFString("rotation"),
                              protoField : new SFString("rotation")}),

                            new connect({
                              nodeField : new SFString("scale"),
                              protoField : new SFString("scale")}),

                            new connect({
                              nodeField : new SFString("scaleOrientation"),
                              protoField : new SFString("scaleOrientation")}),

                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("translation")})])}))])})])}))}),

            new ProtoDeclare({
              name : new SFString("Joint"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("center"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("limitOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("llimit"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("name"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("rotation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("scale"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("scaleOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("stiffness"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("ulimit"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Transform({
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("children"),
                                  protoField : new SFString("children")}),

                                new connect({
                                  nodeField : new SFString("center"),
                                  protoField : new SFString("center")}),

                                new connect({
                                  nodeField : new SFString("rotation"),
                                  protoField : new SFString("rotation")}),

                                new connect({
                                  nodeField : new SFString("scale"),
                                  protoField : new SFString("scale")}),

                                new connect({
                                  nodeField : new SFString("scaleOrientation"),
                                  protoField : new SFString("scaleOrientation")}),

                                new connect({
                                  nodeField : new SFString("translation"),
                                  protoField : new SFString("translation")})])}))}),

                        new Transform({
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32(new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])),
                                  creaseAngle : new SFFloat(0.5),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f(new MFVec3f([0,0.009999999776482582,0,-0.009999999776482582,0,0,0,0,0.009999999776482582,0.009999999776482582,0,0,0,0,-0.009999999776482582,0,-0.009999999776482582,0]))}))})),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor(new SFColor([1,1,0]))}))}))}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("translation"),
                                  protoField : new SFString("center")})])}))])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("Segment"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("addChildren"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("removeChildren"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("centerOfMass"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("coord"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      clearChildren : new SFString()}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("displacers"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("name"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("mass"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("momentsOfInertia"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxCenter"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("bboxSize"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-1 -1 -1")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")}),

                            new connect({
                              nodeField : new SFString("bboxCenter"),
                              protoField : new SFString("bboxCenter")}),

                            new connect({
                              nodeField : new SFString("bboxSize"),
                              protoField : new SFString("bboxSize")}),

                            new connect({
                              nodeField : new SFString("addChildren"),
                              protoField : new SFString("addChildren")}),

                            new connect({
                              nodeField : new SFString("removeChildren"),
                              protoField : new SFString("removeChildren")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("Site"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("addChildren"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("removeChildren"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("center"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("name"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("rotation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("scale"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("scaleOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")}),

                            new connect({
                              nodeField : new SFString("center"),
                              protoField : new SFString("center")}),

                            new connect({
                              nodeField : new SFString("rotation"),
                              protoField : new SFString("rotation")}),

                            new connect({
                              nodeField : new SFString("scale"),
                              protoField : new SFString("scale")}),

                            new connect({
                              nodeField : new SFString("scaleOrientation"),
                              protoField : new SFString("scaleOrientation")}),

                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("translation")}),

                            new connect({
                              nodeField : new SFString("addChildren"),
                              protoField : new SFString("addChildren")}),

                            new connect({
                              nodeField : new SFString("removeChildren"),
                              protoField : new SFString("removeChildren")})])}))})])}))}),

            new ProtoInstance({
              name : new SFString("Humanoid"),
              DEF : new SFString("humanoid"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("humanoidBody"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_humanoid_root"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("humanoid_root")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0 0.8240000009536743 0.027699999511241913")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_sacroiliac"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("sacroiliac")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0 0.914900004863739 0.0015999999595806003")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_l_hip"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_hip")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_l_knee"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_knee")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("0.10400000214576721 0.48669999837875366 0.030799999833106995")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_l_talocrural"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_talocrural")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("0.11010000109672546 0.06560000032186508 -0.07360000163316727")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Joint"),
                                                              DEF : new SFString("hanim_l_metatarsophalangeal_"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("stiffness"),
                                                                  value : new SFString("1 1 1")}),

                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_metatarsophalangeal_")}),

                                                                new fieldValue({
                                                                  name : new SFString("center"),
                                                                  value : new SFString("0.10859999805688858 0.00009999999747378752 0.03680000081658363")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Segment"),
                                                                      DEF : new SFString("hanim_l_middistal"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_middistal")}),

                                                                        new fieldValue({
                                                                          name : new SFString("children"),
                                                                          children : new MFNode([
                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_l_middistal_tip"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("l_middistal_tip")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("0.13539999723434448 0.0015999999595806003 0.147599995136261")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_5"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("l_tarsal_interphalangeal_phalanx_5")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("0.18250000476837158 0.007000000216066837 0.09279999881982803")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_1"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("l_tarsal_interphalangeal_phalanx_1")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("0.08160000294446945 0.02319999970495701 0.010599999688565731")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("l_tarsal_distal_phalanx_2")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("0.11949999630451202 0.007899999618530273 0.14329999685287476")})])})])})])})])})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_l_hindfoot"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_hindfoot")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_lateral_malleolus"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_lateral_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.13079999387264252 0.059700001031160355 -0.10320000350475311")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_medial_malleolus"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_medial_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.08900000154972076 0.07159999758005142 -0.08810000121593475")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_sphyrion"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_sphyrion")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.08900000154972076 0.057500001043081284 -0.09430000185966492")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_calcaneus_posterior"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_calcaneus_posterior")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.09740000218153 0.02590000070631504 -0.11710000038146973")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_l_calf"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_calf")})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_l_thigh"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_thigh")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_knee_crease"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_knee_crease")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.09929999709129333 0.48809999227523804 -0.030899999663233757")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_femoral_lateral_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.1597999930381775 0.4966999888420105 0.02969999983906746")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_femoral_medial_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.039799999445676804 0.49459999799728394 0.030300000682473183")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_r_hip"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_hip")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("-0.0949999988079071 0.9171000123023987 0.002899999963119626")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_r_knee"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_knee")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("-0.08669999986886978 0.49129998683929443 0.03180000185966492")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_r_talocrural"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_talocrural")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Joint"),
                                                              DEF : new SFString("hanim_r_metatarsophalangeal_"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("stiffness"),
                                                                  value : new SFString("1 1 1")}),

                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_metatarsophalangeal_")}),

                                                                new fieldValue({
                                                                  name : new SFString("center"),
                                                                  value : new SFString("-0.08009999990463257 0 0.03680000081658363")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Segment"),
                                                                      DEF : new SFString("hanim_r_middistal"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_middistal")}),

                                                                        new fieldValue({
                                                                          name : new SFString("children"),
                                                                          children : new MFNode([
                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_r_middistal_tip"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("r_middistal_tip")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_5"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("r_tarsal_interphalangeal_phalanx_5")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("-0.15230000019073486 0.016599999740719795 0.08950000256299973")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_1"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("r_tarsal_interphalangeal_phalanx_1")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("-0.05209999904036522 0.026000000536441803 0.01269999984651804")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("r_tarsal_distal_phalanx_2")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("-0.08829999715089798 0.013399999588727951 0.13830000162124634")})])})])})])})])})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_r_hindfoot"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_hindfoot")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_lateral_malleolus"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_lateral_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_medial_malleolus"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_medial_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_sphyrion"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_sphyrion")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_calcaneus_posterior"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_calcaneus_posterior")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_r_calf"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_calf")})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_r_thigh"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_thigh")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_knee_crease"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_knee_crease")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_femoral_lateral_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.1421000063419342 0.4991999864578247 0.03099999949336052")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_femoral_medial_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.022099999710917473 0.5013999938964844 0.02889999933540821")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_pelvis"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("pelvis")})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_vl5"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("vl5")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.00279999990016222 1.0568000078201294 -0.07760000228881836")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_skullbase"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("skullbase")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.004399999976158142 1.62090003490448 0.023600000888109207")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_skull"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("skull")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_skull_tip"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("skull_tip")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.004999999888241291 1.7503999471664429 0.005499999970197678")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_sellion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("sellion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.005799999926239252 1.631600022315979 0.0851999968290329")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_infraorbitale"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_infraorbitale")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.02370000071823597 1.6171000003814697 0.07519999891519547")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_infraorbitale"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_infraorbitale")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.0340999998152256 1.6171000003814697 0.07519999891519547")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_supramenton"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("supramenton")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.006099999882280827 1.5410000085830688 0.08049999922513962")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_tragion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_tragion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.06459999829530716 1.6346999406814575 0.03020000085234642")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_gonion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_gonion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.052000001072883606 1.552899956703186 0.034699998795986176")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_tragion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_tragion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.0738999992609024 1.6347999572753906 0.028200000524520874")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_gonion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_gonion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.06310000270605087 1.5529999732971191 0.032999999821186066")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_nuchale"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("nuchale")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_l_shoulder"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_shoulder")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.2029000073671341 1.437600016593933 -0.03869999945163727")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_l_elbow"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_elbow")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("0.2013999968767166 1.135699987411499 -0.0681999996304512")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_l_radiocarpal"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_radiocarpal")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("0.19840000569820404 0.8662999868392944 -0.05829999968409538")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_l_hand"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_hand")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_hand_tip"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_hand_tip")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.20800000429153442 0.6730999946594238 -0.04910000041127205")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_metacarpal_phalanx_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_metacarpal_phalanx_2")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.20090000331401825 0.8138999938964844 -0.02370000071823597")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_dactylion"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_dactylion")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.20559999346733093 0.6743000149726868 -0.04820000007748604")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_ulnar_styloid"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_ulnar_styloid")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_metacarpal_phalanx_5"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_metacarpal_phalanx_5")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.19290000200271606 0.7860000133514404 -0.11219999939203262")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_l_forearm"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_forearm")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_radial_styloid"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_radial_styloid")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.19009999930858612 0.8644999861717224 -0.04149999842047691")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_olecranon"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_olecranon")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_humeral_medial_epicondyles"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_humeral_medial_epicondyles")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.17350000143051147 1.1272000074386597 -0.11129999905824661")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_radiale"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_radiale")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.21819999814033508 1.1211999654769897 -0.11670000106096268")})])})])})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_l_upperarm"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_upperarm")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_humeral_lateral_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_humeral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.2280000001192093 1.1482000350952148 -0.10999999940395355")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_r_shoulder"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_shoulder")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_r_elbow"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_elbow")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("-0.1949000060558319 1.138800024986267 -0.06199999898672104")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_r_radiocarpal"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_radiocarpal")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_r_hand"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_hand")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_hand_tip"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_hand_tip")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_metacarpal_phalanx_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_metacarpal_phalanx_2")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_dactylion"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_dactylion")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_ulnar_styloid"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_ulnar_styloid")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_metacarpal_phalanx_5"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_metacarpal_phalanx_5")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_r_forearm"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_forearm")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_radial_styloid"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_radial_styloid")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.188400000333786 0.8676000237464905 -0.035999998450279236")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_olecranon"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_olecranon")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_humeral_medial_epicondyles"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_humeral_medial_epicondyles")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_radiale"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_radiale")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")})])})])})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_r_upperarm"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_upperarm")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_humeral_lateral_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_humeral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_l5"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l5")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_clavicale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_clavicale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.011500000022351742 1.4943000078201294 0.03999999910593033")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_suprasternale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("suprasternale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.00839999970048666 1.4714000225067139 0.05510000139474869")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_clavicale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_clavicale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.02710000053048134 1.4943000078201294 0.039400000125169754")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_thelion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_thelion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.07360000163316727 1.3385000228881836 0.1216999962925911")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_thelion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_thelion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.09179999679327011 1.3381999731063843 0.11919999867677689")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_substernale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("substernale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.008500000461935997 1.2994999885559082 0.11469999700784683")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_rib10"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_rib10")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.07109999656677246 1.194100022315979 0.10159999877214432")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_rib10"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_rib10")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.08709999918937683 1.1924999952316284 0.09920000284910202")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_cervicale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("cervicale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.006399999838322401 1.5199999809265137 -0.08150000125169754")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_spine_2_lower_back"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("spine_2_lower_back")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.004900000058114529 1.1907999515533447 -0.11129999905824661")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_waist_preferred_posterior"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("waist_preferred_posterior")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.28999999165534973 1.0915000438690186 -0.10909999907016754")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_acromion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_acromion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.19050000607967377 1.479099988937378 -0.04309999942779541")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_axilla_proximal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_axilla_proximal")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_axilla_distal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_axilla_distal")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_acromion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_acromion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.20319999754428864 1.4759999513626099 -0.04899999871850014")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_axilla_proximal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_axilla_proximal")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.1776999980211258 1.406499981880188 -0.007499999832361937")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_axilla_distal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_axilla_distal")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.17059999704360962 1.4071999788284302 -0.08749999850988388")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_neck_base"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_neck_base")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_neck_base"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_neck_base")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.06459999829530716 1.5140999555587769 -0.03799999877810478")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_navel"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("navel")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.006899999920278788 1.09660005569458 0.10170000046491623")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_sacrum"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("sacrum")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_asis"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_asis")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.08869999647140503 1.0020999908447266 0.1111999973654747")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_asis"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_asis")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.0925000011920929 0.9983000159263611 0.10520000010728836")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_iliocristale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_iliocristale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_trochanterion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_trochanterion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.1688999980688095 0.8418999910354614 0.03519999980926514")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_iliocristale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_iliocristale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.16120000183582306 1.0536999702453613 0.0007999999797903001")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_trochanterion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_trochanterion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.16769999265670776 0.8335999846458435 0.030300000682473183")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_psis"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_psis")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_psis"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_psis")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.07739999890327454 1.0190000534057617 -0.11509999632835388")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_crotch"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("crotch")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.0034000000450760126 0.8266000151634216 0.025699999183416367")})])})])})])})])})])})])}),

                new fieldValue({
                  name : new SFString("joints"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_humanoid_root"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("humanoid_root")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0 0.8240000009536743 0.027699999511241913")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_sacroiliac"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("sacroiliac")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0 0.914900004863739 0.0015999999595806003")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_l_hip"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_hip")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_l_knee"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_knee")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("0.10400000214576721 0.48669999837875366 0.030799999833106995")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_l_talocrural"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_talocrural")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("0.11010000109672546 0.06560000032186508 -0.07360000163316727")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Joint"),
                                                              DEF : new SFString("hanim_l_metatarsophalangeal_"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("stiffness"),
                                                                  value : new SFString("1 1 1")}),

                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_metatarsophalangeal_")}),

                                                                new fieldValue({
                                                                  name : new SFString("center"),
                                                                  value : new SFString("0.10859999805688858 0.00009999999747378752 0.03680000081658363")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Segment"),
                                                                      DEF : new SFString("hanim_l_middistal"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_middistal")}),

                                                                        new fieldValue({
                                                                          name : new SFString("children"),
                                                                          children : new MFNode([
                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_l_middistal_tip"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("l_middistal_tip")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("0.13539999723434448 0.0015999999595806003 0.147599995136261")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_5"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("l_tarsal_interphalangeal_phalanx_5")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("0.18250000476837158 0.007000000216066837 0.09279999881982803")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_1"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("l_tarsal_interphalangeal_phalanx_1")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("0.08160000294446945 0.02319999970495701 0.010599999688565731")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("l_tarsal_distal_phalanx_2")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("0.11949999630451202 0.007899999618530273 0.14329999685287476")})])})])})])})])})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_l_hindfoot"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_hindfoot")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_lateral_malleolus"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_lateral_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.13079999387264252 0.059700001031160355 -0.10320000350475311")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_medial_malleolus"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_medial_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.08900000154972076 0.07159999758005142 -0.08810000121593475")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_sphyrion"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_sphyrion")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.08900000154972076 0.057500001043081284 -0.09430000185966492")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_calcaneus_posterior"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_calcaneus_posterior")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.09740000218153 0.02590000070631504 -0.11710000038146973")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_l_calf"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_calf")})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_l_thigh"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_thigh")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_knee_crease"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_knee_crease")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.09929999709129333 0.48809999227523804 -0.030899999663233757")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_femoral_lateral_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.1597999930381775 0.4966999888420105 0.02969999983906746")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_femoral_medial_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.039799999445676804 0.49459999799728394 0.030300000682473183")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_r_hip"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_hip")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("-0.0949999988079071 0.9171000123023987 0.002899999963119626")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_r_knee"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_knee")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("-0.08669999986886978 0.49129998683929443 0.03180000185966492")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_r_talocrural"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_talocrural")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Joint"),
                                                              DEF : new SFString("hanim_r_metatarsophalangeal_"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("stiffness"),
                                                                  value : new SFString("1 1 1")}),

                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_metatarsophalangeal_")}),

                                                                new fieldValue({
                                                                  name : new SFString("center"),
                                                                  value : new SFString("-0.08009999990463257 0 0.03680000081658363")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Segment"),
                                                                      DEF : new SFString("hanim_r_middistal"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_middistal")}),

                                                                        new fieldValue({
                                                                          name : new SFString("children"),
                                                                          children : new MFNode([
                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_r_middistal_tip"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("r_middistal_tip")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_5"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("r_tarsal_interphalangeal_phalanx_5")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("-0.15230000019073486 0.016599999740719795 0.08950000256299973")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_1"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("r_tarsal_interphalangeal_phalanx_1")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("-0.05209999904036522 0.026000000536441803 0.01269999984651804")})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Site"),
                                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("r_tarsal_distal_phalanx_2")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("translation"),
                                                                                  value : new SFString("-0.08829999715089798 0.013399999588727951 0.13830000162124634")})])})])})])})])})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_r_hindfoot"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_hindfoot")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_lateral_malleolus"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_lateral_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_medial_malleolus"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_medial_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_sphyrion"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_sphyrion")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_calcaneus_posterior"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_calcaneus_posterior")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_r_calf"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_calf")})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_r_thigh"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_thigh")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_knee_crease"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_knee_crease")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_femoral_lateral_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.1421000063419342 0.4991999864578247 0.03099999949336052")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_femoral_medial_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.022099999710917473 0.5013999938964844 0.02889999933540821")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_pelvis"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("pelvis")})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_vl5"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("vl5")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.00279999990016222 1.0568000078201294 -0.07760000228881836")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_skullbase"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("skullbase")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.004399999976158142 1.62090003490448 0.023600000888109207")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_skull"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("skull")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_skull_tip"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("skull_tip")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.004999999888241291 1.7503999471664429 0.005499999970197678")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_sellion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("sellion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.005799999926239252 1.631600022315979 0.0851999968290329")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_infraorbitale"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_infraorbitale")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.02370000071823597 1.6171000003814697 0.07519999891519547")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_infraorbitale"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_infraorbitale")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.0340999998152256 1.6171000003814697 0.07519999891519547")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_supramenton"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("supramenton")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.006099999882280827 1.5410000085830688 0.08049999922513962")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_tragion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_tragion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.06459999829530716 1.6346999406814575 0.03020000085234642")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_gonion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_gonion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.052000001072883606 1.552899956703186 0.034699998795986176")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_tragion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_tragion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.0738999992609024 1.6347999572753906 0.028200000524520874")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_gonion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_gonion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.06310000270605087 1.5529999732971191 0.032999999821186066")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_nuchale"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("nuchale")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_l_shoulder"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_shoulder")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.2029000073671341 1.437600016593933 -0.03869999945163727")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_l_elbow"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_elbow")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("0.2013999968767166 1.135699987411499 -0.0681999996304512")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_l_radiocarpal"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_radiocarpal")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("0.19840000569820404 0.8662999868392944 -0.05829999968409538")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_l_hand"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_hand")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_hand_tip"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_hand_tip")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.20800000429153442 0.6730999946594238 -0.04910000041127205")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_metacarpal_phalanx_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_metacarpal_phalanx_2")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.20090000331401825 0.8138999938964844 -0.02370000071823597")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_dactylion"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_dactylion")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.20559999346733093 0.6743000149726868 -0.04820000007748604")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_ulnar_styloid"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_ulnar_styloid")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_metacarpal_phalanx_5"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_metacarpal_phalanx_5")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.19290000200271606 0.7860000133514404 -0.11219999939203262")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_l_forearm"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_forearm")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_radial_styloid"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_radial_styloid")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.19009999930858612 0.8644999861717224 -0.04149999842047691")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_olecranon"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_olecranon")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_humeral_medial_epicondyles"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_humeral_medial_epicondyles")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.17350000143051147 1.1272000074386597 -0.11129999905824661")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_radiale"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_radiale")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.21819999814033508 1.1211999654769897 -0.11670000106096268")})])})])})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_l_upperarm"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_upperarm")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_humeral_lateral_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_humeral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.2280000001192093 1.1482000350952148 -0.10999999940395355")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_r_shoulder"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_shoulder")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_r_elbow"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_elbow")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("-0.1949000060558319 1.138800024986267 -0.06199999898672104")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_r_radiocarpal"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_radiocarpal")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_r_hand"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_hand")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_hand_tip"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_hand_tip")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_metacarpal_phalanx_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_metacarpal_phalanx_2")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_dactylion"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_dactylion")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_ulnar_styloid"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_ulnar_styloid")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_metacarpal_phalanx_5"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_metacarpal_phalanx_5")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_r_forearm"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_forearm")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_radial_styloid"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_radial_styloid")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.188400000333786 0.8676000237464905 -0.035999998450279236")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_olecranon"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_olecranon")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_humeral_medial_epicondyles"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_humeral_medial_epicondyles")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_radiale"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_radiale")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")})])})])})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_r_upperarm"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_upperarm")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_humeral_lateral_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_humeral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_l5"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l5")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_clavicale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_clavicale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.011500000022351742 1.4943000078201294 0.03999999910593033")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_suprasternale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("suprasternale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.00839999970048666 1.4714000225067139 0.05510000139474869")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_clavicale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_clavicale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.02710000053048134 1.4943000078201294 0.039400000125169754")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_thelion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_thelion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.07360000163316727 1.3385000228881836 0.1216999962925911")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_thelion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_thelion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.09179999679327011 1.3381999731063843 0.11919999867677689")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_substernale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("substernale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.008500000461935997 1.2994999885559082 0.11469999700784683")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_rib10"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_rib10")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.07109999656677246 1.194100022315979 0.10159999877214432")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_rib10"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_rib10")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.08709999918937683 1.1924999952316284 0.09920000284910202")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_cervicale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("cervicale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.006399999838322401 1.5199999809265137 -0.08150000125169754")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_spine_2_lower_back"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("spine_2_lower_back")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.004900000058114529 1.1907999515533447 -0.11129999905824661")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_waist_preferred_posterior"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("waist_preferred_posterior")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.28999999165534973 1.0915000438690186 -0.10909999907016754")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_acromion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_acromion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.19050000607967377 1.479099988937378 -0.04309999942779541")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_axilla_proximal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_axilla_proximal")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_axilla_distal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_axilla_distal")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_acromion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_acromion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.20319999754428864 1.4759999513626099 -0.04899999871850014")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_axilla_proximal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_axilla_proximal")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.1776999980211258 1.406499981880188 -0.007499999832361937")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_axilla_distal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_axilla_distal")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.17059999704360962 1.4071999788284302 -0.08749999850988388")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_neck_base"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_neck_base")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_neck_base"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_neck_base")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.06459999829530716 1.5140999555587769 -0.03799999877810478")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_navel"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("navel")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.006899999920278788 1.09660005569458 0.10170000046491623")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_sacrum"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("sacrum")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_asis"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_asis")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.08869999647140503 1.0020999908447266 0.1111999973654747")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_asis"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_asis")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.0925000011920929 0.9983000159263611 0.10520000010728836")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_iliocristale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_iliocristale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_trochanterion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_trochanterion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.1688999980688095 0.8418999910354614 0.03519999980926514")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_iliocristale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_iliocristale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.16120000183582306 1.0536999702453613 0.0007999999797903001")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_trochanterion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_trochanterion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.16769999265670776 0.8335999846458435 0.030300000682473183")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_psis"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_psis")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_psis"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_psis")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.07739999890327454 1.0190000534057617 -0.11509999632835388")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_crotch"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("crotch")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.0034000000450760126 0.8266000151634216 0.025699999183416367")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_sacroiliac"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("sacroiliac")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0 0.914900004863739 0.0015999999595806003")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_l_hip"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_hip")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_l_knee"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_knee")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.10400000214576721 0.48669999837875366 0.030799999833106995")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_l_talocrural"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_talocrural")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("0.11010000109672546 0.06560000032186508 -0.07360000163316727")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_l_metatarsophalangeal_"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_metatarsophalangeal_")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("0.10859999805688858 0.00009999999747378752 0.03680000081658363")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_l_middistal"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_middistal")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_middistal_tip"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_middistal_tip")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.13539999723434448 0.0015999999595806003 0.147599995136261")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_5"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_tarsal_interphalangeal_phalanx_5")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.18250000476837158 0.007000000216066837 0.09279999881982803")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_1"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_tarsal_interphalangeal_phalanx_1")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.08160000294446945 0.02319999970495701 0.010599999688565731")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_tarsal_distal_phalanx_2")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.11949999630451202 0.007899999618530273 0.14329999685287476")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_l_hindfoot"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_hindfoot")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_lateral_malleolus"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_lateral_malleolus")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.13079999387264252 0.059700001031160355 -0.10320000350475311")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_medial_malleolus"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_medial_malleolus")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.08900000154972076 0.07159999758005142 -0.08810000121593475")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_sphyrion"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_sphyrion")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.08900000154972076 0.057500001043081284 -0.09430000185966492")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_calcaneus_posterior"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_calcaneus_posterior")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.09740000218153 0.02590000070631504 -0.11710000038146973")})])})])})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_l_calf"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_calf")})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_l_thigh"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_thigh")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_knee_crease"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_knee_crease")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.09929999709129333 0.48809999227523804 -0.030899999663233757")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_femoral_lateral_epicondyles"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_femoral_lateral_epicondyles")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.1597999930381775 0.4966999888420105 0.02969999983906746")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_femoral_medial_epicondyles"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_femoral_lateral_epicondyles")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.039799999445676804 0.49459999799728394 0.030300000682473183")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_r_hip"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_hip")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("-0.0949999988079071 0.9171000123023987 0.002899999963119626")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_r_knee"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_knee")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("-0.08669999986886978 0.49129998683929443 0.03180000185966492")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_r_talocrural"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_talocrural")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_r_metatarsophalangeal_"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_metatarsophalangeal_")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("-0.08009999990463257 0 0.03680000081658363")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_r_middistal"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_middistal")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_middistal_tip"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_middistal_tip")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_5"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_tarsal_interphalangeal_phalanx_5")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.15230000019073486 0.016599999740719795 0.08950000256299973")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_1"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_tarsal_interphalangeal_phalanx_1")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.05209999904036522 0.026000000536441803 0.01269999984651804")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_tarsal_distal_phalanx_2")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.08829999715089798 0.013399999588727951 0.13830000162124634")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_r_hindfoot"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_hindfoot")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_lateral_malleolus"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_lateral_malleolus")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_medial_malleolus"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_medial_malleolus")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_sphyrion"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_sphyrion")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_calcaneus_posterior"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_calcaneus_posterior")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")})])})])})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_r_calf"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_calf")})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_r_thigh"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_thigh")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_knee_crease"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_knee_crease")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_femoral_lateral_epicondyles"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_femoral_lateral_epicondyles")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.1421000063419342 0.4991999864578247 0.03099999949336052")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_femoral_medial_epicondyles"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_femoral_lateral_epicondyles")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.022099999710917473 0.5013999938964844 0.02889999933540821")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_pelvis"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("pelvis")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_l_hip"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_hip")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0.09610000252723694 0.9124000072479248 -0.00009999999747378752")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_l_knee"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_knee")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.10400000214576721 0.48669999837875366 0.030799999833106995")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_l_talocrural"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_talocrural")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.11010000109672546 0.06560000032186508 -0.07360000163316727")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_l_metatarsophalangeal_"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_metatarsophalangeal_")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("0.10859999805688858 0.00009999999747378752 0.03680000081658363")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_l_middistal"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_middistal")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_middistal_tip"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_middistal_tip")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.13539999723434448 0.0015999999595806003 0.147599995136261")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_5"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_tarsal_interphalangeal_phalanx_5")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.18250000476837158 0.007000000216066837 0.09279999881982803")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_1"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_tarsal_interphalangeal_phalanx_1")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.08160000294446945 0.02319999970495701 0.010599999688565731")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_tarsal_distal_phalanx_2")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.11949999630451202 0.007899999618530273 0.14329999685287476")})])})])})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_l_hindfoot"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_hindfoot")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_lateral_malleolus"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_lateral_malleolus")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.13079999387264252 0.059700001031160355 -0.10320000350475311")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_medial_malleolus"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_medial_malleolus")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.08900000154972076 0.07159999758005142 -0.08810000121593475")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_sphyrion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_sphyrion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.08900000154972076 0.057500001043081284 -0.09430000185966492")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_calcaneus_posterior"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_calcaneus_posterior")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.09740000218153 0.02590000070631504 -0.11710000038146973")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_l_calf"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_calf")})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_l_thigh"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_thigh")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_knee_crease"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_knee_crease")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.09929999709129333 0.48809999227523804 -0.030899999663233757")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_femoral_lateral_epicondyles"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_femoral_lateral_epicondyles")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.1597999930381775 0.4966999888420105 0.02969999983906746")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_femoral_medial_epicondyles"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_femoral_lateral_epicondyles")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.039799999445676804 0.49459999799728394 0.030300000682473183")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_l_knee"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_knee")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0.10400000214576721 0.48669999837875366 0.030799999833106995")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_l_talocrural"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_talocrural")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.11010000109672546 0.06560000032186508 -0.07360000163316727")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_l_metatarsophalangeal_"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_metatarsophalangeal_")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.10859999805688858 0.00009999999747378752 0.03680000081658363")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_l_middistal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_middistal")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_middistal_tip"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_middistal_tip")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.13539999723434448 0.0015999999595806003 0.147599995136261")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_5"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_tarsal_interphalangeal_phalanx_5")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.18250000476837158 0.007000000216066837 0.09279999881982803")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_1"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_tarsal_interphalangeal_phalanx_1")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.08160000294446945 0.02319999970495701 0.010599999688565731")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_tarsal_distal_phalanx_2")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.11949999630451202 0.007899999618530273 0.14329999685287476")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_l_hindfoot"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_hindfoot")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_lateral_malleolus"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_lateral_malleolus")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.13079999387264252 0.059700001031160355 -0.10320000350475311")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_medial_malleolus"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_medial_malleolus")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.08900000154972076 0.07159999758005142 -0.08810000121593475")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_sphyrion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_sphyrion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.08900000154972076 0.057500001043081284 -0.09430000185966492")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_calcaneus_posterior"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_calcaneus_posterior")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.09740000218153 0.02590000070631504 -0.11710000038146973")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_l_calf"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_calf")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_l_talocrural"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_talocrural")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0.11010000109672546 0.06560000032186508 -0.07360000163316727")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_l_metatarsophalangeal_"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_metatarsophalangeal_")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.10859999805688858 0.00009999999747378752 0.03680000081658363")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_l_middistal"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_middistal")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_middistal_tip"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_middistal_tip")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.13539999723434448 0.0015999999595806003 0.147599995136261")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_5"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_tarsal_interphalangeal_phalanx_5")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.18250000476837158 0.007000000216066837 0.09279999881982803")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_1"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_tarsal_interphalangeal_phalanx_1")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.08160000294446945 0.02319999970495701 0.010599999688565731")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_tarsal_distal_phalanx_2")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.11949999630451202 0.007899999618530273 0.14329999685287476")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_l_hindfoot"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_hindfoot")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_lateral_malleolus"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_lateral_malleolus")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.13079999387264252 0.059700001031160355 -0.10320000350475311")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_medial_malleolus"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_medial_malleolus")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.08900000154972076 0.07159999758005142 -0.08810000121593475")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_sphyrion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_sphyrion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.08900000154972076 0.057500001043081284 -0.09430000185966492")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_calcaneus_posterior"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_calcaneus_posterior")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.09740000218153 0.02590000070631504 -0.11710000038146973")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_l_metatarsophalangeal_"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_metatarsophalangeal_")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0.10859999805688858 0.00009999999747378752 0.03680000081658363")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_l_middistal"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_middistal")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_middistal_tip"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_middistal_tip")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.13539999723434448 0.0015999999595806003 0.147599995136261")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_5"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_tarsal_interphalangeal_phalanx_5")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.18250000476837158 0.007000000216066837 0.09279999881982803")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_1"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_tarsal_interphalangeal_phalanx_1")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.08160000294446945 0.02319999970495701 0.010599999688565731")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_tarsal_distal_phalanx_2")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.11949999630451202 0.007899999618530273 0.14329999685287476")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_r_hip"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_hip")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("-0.0949999988079071 0.9171000123023987 0.002899999963119626")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_r_knee"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_knee")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("-0.08669999986886978 0.49129998683929443 0.03180000185966492")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_r_talocrural"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_talocrural")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_r_metatarsophalangeal_"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_metatarsophalangeal_")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("-0.08009999990463257 0 0.03680000081658363")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_r_middistal"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_middistal")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_middistal_tip"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_middistal_tip")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_5"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_tarsal_interphalangeal_phalanx_5")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.15230000019073486 0.016599999740719795 0.08950000256299973")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_1"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_tarsal_interphalangeal_phalanx_1")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.05209999904036522 0.026000000536441803 0.01269999984651804")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_tarsal_distal_phalanx_2")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.08829999715089798 0.013399999588727951 0.13830000162124634")})])})])})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_r_hindfoot"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_hindfoot")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_lateral_malleolus"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_lateral_malleolus")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_medial_malleolus"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_medial_malleolus")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_sphyrion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_sphyrion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_calcaneus_posterior"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_calcaneus_posterior")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_r_calf"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_calf")})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_r_thigh"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_thigh")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_knee_crease"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_knee_crease")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_femoral_lateral_epicondyles"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_femoral_lateral_epicondyles")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.1421000063419342 0.4991999864578247 0.03099999949336052")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_femoral_medial_epicondyles"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_femoral_lateral_epicondyles")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.022099999710917473 0.5013999938964844 0.02889999933540821")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_r_knee"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_knee")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("-0.08669999986886978 0.49129998683929443 0.03180000185966492")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_r_talocrural"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_talocrural")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_r_metatarsophalangeal_"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_metatarsophalangeal_")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("-0.08009999990463257 0 0.03680000081658363")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_r_middistal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_middistal")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_middistal_tip"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_middistal_tip")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_5"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_tarsal_interphalangeal_phalanx_5")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.15230000019073486 0.016599999740719795 0.08950000256299973")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_1"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_tarsal_interphalangeal_phalanx_1")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.05209999904036522 0.026000000536441803 0.01269999984651804")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_tarsal_distal_phalanx_2")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.08829999715089798 0.013399999588727951 0.13830000162124634")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_r_hindfoot"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_hindfoot")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_lateral_malleolus"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_lateral_malleolus")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_medial_malleolus"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_medial_malleolus")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_sphyrion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_sphyrion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_calcaneus_posterior"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_calcaneus_posterior")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_r_calf"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_calf")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_r_talocrural"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_talocrural")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("-0.08009999990463257 0.07119999825954437 -0.07660000026226044")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_r_metatarsophalangeal_"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_metatarsophalangeal_")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("-0.08009999990463257 0 0.03680000081658363")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_r_middistal"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_middistal")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_middistal_tip"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_middistal_tip")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_5"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_tarsal_interphalangeal_phalanx_5")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.15230000019073486 0.016599999740719795 0.08950000256299973")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_1"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_tarsal_interphalangeal_phalanx_1")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.05209999904036522 0.026000000536441803 0.01269999984651804")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_tarsal_distal_phalanx_2")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.08829999715089798 0.013399999588727951 0.13830000162124634")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_r_hindfoot"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_hindfoot")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_lateral_malleolus"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_lateral_malleolus")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_medial_malleolus"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_medial_malleolus")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_sphyrion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_sphyrion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_calcaneus_posterior"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_calcaneus_posterior")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_r_metatarsophalangeal_"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_metatarsophalangeal_")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("-0.08009999990463257 0 0.03680000081658363")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_r_middistal"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_middistal")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_middistal_tip"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_middistal_tip")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_5"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_tarsal_interphalangeal_phalanx_5")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.15230000019073486 0.016599999740719795 0.08950000256299973")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_1"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_tarsal_interphalangeal_phalanx_1")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.05209999904036522 0.026000000536441803 0.01269999984651804")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_tarsal_distal_phalanx_2")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.08829999715089798 0.013399999588727951 0.13830000162124634")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_vl5"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("vl5")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0.00279999990016222 1.0568000078201294 -0.07760000228881836")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_skullbase"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("skullbase")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.004399999976158142 1.62090003490448 0.023600000888109207")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_skull"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("skull")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_skull_tip"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("skull_tip")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.004999999888241291 1.7503999471664429 0.005499999970197678")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_sellion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("sellion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.005799999926239252 1.631600022315979 0.0851999968290329")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_infraorbitale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_infraorbitale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.02370000071823597 1.6171000003814697 0.07519999891519547")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_infraorbitale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_infraorbitale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.0340999998152256 1.6171000003814697 0.07519999891519547")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_supramenton"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("supramenton")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.006099999882280827 1.5410000085830688 0.08049999922513962")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_tragion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_tragion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.06459999829530716 1.6346999406814575 0.03020000085234642")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_gonion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_gonion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.052000001072883606 1.552899956703186 0.034699998795986176")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_tragion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_tragion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.0738999992609024 1.6347999572753906 0.028200000524520874")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_gonion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_gonion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.06310000270605087 1.5529999732971191 0.032999999821186066")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_nuchale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("nuchale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_l_shoulder"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_shoulder")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.2029000073671341 1.437600016593933 -0.03869999945163727")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_l_elbow"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_elbow")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.2013999968767166 1.135699987411499 -0.0681999996304512")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_l_radiocarpal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_radiocarpal")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("0.19840000569820404 0.8662999868392944 -0.05829999968409538")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_l_hand"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_hand")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_hand_tip"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_hand_tip")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.20800000429153442 0.6730999946594238 -0.04910000041127205")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_metacarpal_phalanx_2"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_metacarpal_phalanx_2")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.20090000331401825 0.8138999938964844 -0.02370000071823597")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_dactylion"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_dactylion")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.20559999346733093 0.6743000149726868 -0.04820000007748604")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_ulnar_styloid"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_ulnar_styloid")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_l_metacarpal_phalanx_5"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_metacarpal_phalanx_5")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("0.19290000200271606 0.7860000133514404 -0.11219999939203262")})])})])})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_l_forearm"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_forearm")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_radial_styloid"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_radial_styloid")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.19009999930858612 0.8644999861717224 -0.04149999842047691")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_olecranon"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_olecranon")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_humeral_medial_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_humeral_medial_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.17350000143051147 1.1272000074386597 -0.11129999905824661")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_radiale"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_radiale")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.21819999814033508 1.1211999654769897 -0.11670000106096268")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_l_upperarm"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_upperarm")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_humeral_lateral_epicondyles"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_humeral_lateral_epicondyles")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.2280000001192093 1.1482000350952148 -0.10999999940395355")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_r_shoulder"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_shoulder")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_r_elbow"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_elbow")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("-0.1949000060558319 1.138800024986267 -0.06199999898672104")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_r_radiocarpal"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_radiocarpal")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_r_hand"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_hand")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_hand_tip"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_hand_tip")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_metacarpal_phalanx_2"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_metacarpal_phalanx_2")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_dactylion"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_dactylion")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_ulnar_styloid"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_ulnar_styloid")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Site"),
                                                              DEF : new SFString("hanim_r_metacarpal_phalanx_5"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_metacarpal_phalanx_5")}),

                                                                new fieldValue({
                                                                  name : new SFString("translation"),
                                                                  value : new SFString("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")})])})])})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_r_forearm"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_forearm")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_radial_styloid"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_radial_styloid")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.188400000333786 0.8676000237464905 -0.035999998450279236")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_olecranon"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_olecranon")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_humeral_medial_epicondyles"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_humeral_medial_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_radiale"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_radiale")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_r_upperarm"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_upperarm")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_humeral_lateral_epicondyles"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_humeral_lateral_epicondyles")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_l5"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l5")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_clavicale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_clavicale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.011500000022351742 1.4943000078201294 0.03999999910593033")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_suprasternale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("suprasternale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.00839999970048666 1.4714000225067139 0.05510000139474869")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_clavicale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_clavicale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.02710000053048134 1.4943000078201294 0.039400000125169754")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_thelion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_thelion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.07360000163316727 1.3385000228881836 0.1216999962925911")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_thelion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_thelion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.09179999679327011 1.3381999731063843 0.11919999867677689")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_substernale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("substernale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.008500000461935997 1.2994999885559082 0.11469999700784683")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_rib10"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_rib10")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.07109999656677246 1.194100022315979 0.10159999877214432")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_rib10"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_rib10")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.08709999918937683 1.1924999952316284 0.09920000284910202")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_cervicale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("cervicale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.006399999838322401 1.5199999809265137 -0.08150000125169754")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_spine_2_lower_back"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("spine_2_lower_back")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.004900000058114529 1.1907999515533447 -0.11129999905824661")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_waist_preferred_posterior"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("waist_preferred_posterior")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.28999999165534973 1.0915000438690186 -0.10909999907016754")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_acromion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_acromion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.19050000607967377 1.479099988937378 -0.04309999942779541")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_axilla_proximal"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_axilla_proximal")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_axilla_distal"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_axilla_distal")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_acromion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_acromion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.20319999754428864 1.4759999513626099 -0.04899999871850014")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_axilla_proximal"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_axilla_proximal")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.1776999980211258 1.406499981880188 -0.007499999832361937")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_axilla_distal"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_axilla_distal")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.17059999704360962 1.4071999788284302 -0.08749999850988388")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_neck_base"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_neck_base")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_neck_base"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_neck_base")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.06459999829530716 1.5140999555587769 -0.03799999877810478")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_navel"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("navel")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.006899999920278788 1.09660005569458 0.10170000046491623")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_skullbase"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("skullbase")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0.004399999976158142 1.62090003490448 0.023600000888109207")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_skull"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("skull")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_skull_tip"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("skull_tip")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.004999999888241291 1.7503999471664429 0.005499999970197678")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_sellion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("sellion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.005799999926239252 1.631600022315979 0.0851999968290329")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_infraorbitale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_infraorbitale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.02370000071823597 1.6171000003814697 0.07519999891519547")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_infraorbitale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_infraorbitale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.0340999998152256 1.6171000003814697 0.07519999891519547")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_supramenton"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("supramenton")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.006099999882280827 1.5410000085830688 0.08049999922513962")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_tragion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_tragion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.06459999829530716 1.6346999406814575 0.03020000085234642")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_gonion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_gonion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.052000001072883606 1.552899956703186 0.034699998795986176")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_tragion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_tragion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.0738999992609024 1.6347999572753906 0.028200000524520874")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_gonion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_gonion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.06310000270605087 1.5529999732971191 0.032999999821186066")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_nuchale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("nuchale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_l_shoulder"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_shoulder")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0.2029000073671341 1.437600016593933 -0.03869999945163727")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_l_elbow"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_elbow")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.2013999968767166 1.135699987411499 -0.0681999996304512")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_l_radiocarpal"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_radiocarpal")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.19840000569820404 0.8662999868392944 -0.05829999968409538")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_l_hand"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_hand")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_hand_tip"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_hand_tip")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.20800000429153442 0.6730999946594238 -0.04910000041127205")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_metacarpal_phalanx_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_metacarpal_phalanx_2")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.20090000331401825 0.8138999938964844 -0.02370000071823597")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_dactylion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_dactylion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.20559999346733093 0.6743000149726868 -0.04820000007748604")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_ulnar_styloid"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_ulnar_styloid")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_metacarpal_phalanx_5"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_metacarpal_phalanx_5")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.19290000200271606 0.7860000133514404 -0.11219999939203262")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_l_forearm"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_forearm")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_radial_styloid"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_radial_styloid")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.19009999930858612 0.8644999861717224 -0.04149999842047691")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_olecranon"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_olecranon")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_humeral_medial_epicondyles"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_humeral_medial_epicondyles")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.17350000143051147 1.1272000074386597 -0.11129999905824661")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_radiale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_radiale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.21819999814033508 1.1211999654769897 -0.11670000106096268")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_l_upperarm"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_upperarm")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_humeral_lateral_epicondyles"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_humeral_lateral_epicondyles")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.2280000001192093 1.1482000350952148 -0.10999999940395355")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_l_elbow"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_elbow")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0.2013999968767166 1.135699987411499 -0.0681999996304512")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_l_radiocarpal"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_radiocarpal")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.19840000569820404 0.8662999868392944 -0.05829999968409538")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_l_hand"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_hand")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_hand_tip"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_hand_tip")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.20800000429153442 0.6730999946594238 -0.04910000041127205")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_metacarpal_phalanx_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_metacarpal_phalanx_2")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.20090000331401825 0.8138999938964844 -0.02370000071823597")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_dactylion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_dactylion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.20559999346733093 0.6743000149726868 -0.04820000007748604")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_ulnar_styloid"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_ulnar_styloid")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_metacarpal_phalanx_5"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_metacarpal_phalanx_5")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.19290000200271606 0.7860000133514404 -0.11219999939203262")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_l_forearm"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_forearm")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_radial_styloid"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_radial_styloid")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.19009999930858612 0.8644999861717224 -0.04149999842047691")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_olecranon"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_olecranon")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_humeral_medial_epicondyles"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_humeral_medial_epicondyles")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.17350000143051147 1.1272000074386597 -0.11129999905824661")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_radiale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_radiale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.21819999814033508 1.1211999654769897 -0.11670000106096268")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_l_radiocarpal"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_radiocarpal")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0.19840000569820404 0.8662999868392944 -0.05829999968409538")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_l_hand"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_hand")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_hand_tip"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_hand_tip")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.20800000429153442 0.6730999946594238 -0.04910000041127205")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_metacarpal_phalanx_2"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_metacarpal_phalanx_2")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.20090000331401825 0.8138999938964844 -0.02370000071823597")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_dactylion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_dactylion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.20559999346733093 0.6743000149726868 -0.04820000007748604")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_ulnar_styloid"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_ulnar_styloid")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_l_metacarpal_phalanx_5"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_metacarpal_phalanx_5")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("0.19290000200271606 0.7860000133514404 -0.11219999939203262")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_r_shoulder"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_shoulder")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("-0.1906999945640564 1.4407000541687012 -0.032499998807907104")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_r_elbow"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_elbow")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("-0.1949000060558319 1.138800024986267 -0.06199999898672104")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_r_radiocarpal"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_radiocarpal")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_r_hand"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_hand")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_hand_tip"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_hand_tip")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_metacarpal_phalanx_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_metacarpal_phalanx_2")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_dactylion"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_dactylion")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_ulnar_styloid"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_ulnar_styloid")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_metacarpal_phalanx_5"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_metacarpal_phalanx_5")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_r_forearm"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_forearm")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_radial_styloid"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_radial_styloid")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.188400000333786 0.8676000237464905 -0.035999998450279236")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_olecranon"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_olecranon")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_humeral_medial_epicondyles"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_humeral_medial_epicondyles")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_radiale"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_radiale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_r_upperarm"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_upperarm")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_humeral_lateral_epicondyles"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_humeral_lateral_epicondyles")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_r_elbow"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_elbow")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("-0.1949000060558319 1.138800024986267 -0.06199999898672104")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_r_radiocarpal"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_radiocarpal")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_r_hand"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_hand")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_hand_tip"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_hand_tip")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_metacarpal_phalanx_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_metacarpal_phalanx_2")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_dactylion"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_dactylion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_ulnar_styloid"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_ulnar_styloid")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_metacarpal_phalanx_5"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_metacarpal_phalanx_5")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_r_forearm"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_forearm")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_radial_styloid"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_radial_styloid")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.188400000333786 0.8676000237464905 -0.035999998450279236")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_olecranon"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_olecranon")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_humeral_medial_epicondyles"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_humeral_medial_epicondyles")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_radiale"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_radiale")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")})])})])})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_r_radiocarpal"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_radiocarpal")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("-0.19589999318122864 0.8694000244140625 -0.05209999904036522")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_r_hand"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_hand")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_hand_tip"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_hand_tip")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_metacarpal_phalanx_2"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_metacarpal_phalanx_2")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_dactylion"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_dactylion")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_ulnar_styloid"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_ulnar_styloid")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")})])}),

                                    new ProtoInstance({
                                      name : new SFString("Site"),
                                      DEF : new SFString("hanim_r_metacarpal_phalanx_5"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_metacarpal_phalanx_5")}),

                                        new fieldValue({
                                          name : new SFString("translation"),
                                          value : new SFString("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")})])})])})])})])})])})])}),

                new fieldValue({
                  name : new SFString("segments"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_l_middistal"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_middistal")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_middistal_tip"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_middistal_tip")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.13539999723434448 0.0015999999595806003 0.147599995136261")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_5"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_tarsal_interphalangeal_phalanx_5")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.18250000476837158 0.007000000216066837 0.09279999881982803")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_1"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_tarsal_interphalangeal_phalanx_1")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.08160000294446945 0.02319999970495701 0.010599999688565731")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_tarsal_distal_phalanx_2")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.11949999630451202 0.007899999618530273 0.14329999685287476")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_l_hindfoot"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_hindfoot")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_lateral_malleolus"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_lateral_malleolus")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.13079999387264252 0.059700001031160355 -0.10320000350475311")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_medial_malleolus"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_medial_malleolus")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.08900000154972076 0.07159999758005142 -0.08810000121593475")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_sphyrion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_sphyrion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.08900000154972076 0.057500001043081284 -0.09430000185966492")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_calcaneus_posterior"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_calcaneus_posterior")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.09740000218153 0.02590000070631504 -0.11710000038146973")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_l_calf"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_calf")})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_l_thigh"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_thigh")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_knee_crease"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_knee_crease")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.09929999709129333 0.48809999227523804 -0.030899999663233757")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_femoral_lateral_epicondyles"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_femoral_lateral_epicondyles")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.1597999930381775 0.4966999888420105 0.02969999983906746")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_femoral_medial_epicondyles"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_femoral_lateral_epicondyles")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.039799999445676804 0.49459999799728394 0.030300000682473183")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_r_middistal"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_middistal")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_middistal_tip"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_middistal_tip")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_5"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_tarsal_interphalangeal_phalanx_5")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.15230000019073486 0.016599999740719795 0.08950000256299973")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_1"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_tarsal_interphalangeal_phalanx_1")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.05209999904036522 0.026000000536441803 0.01269999984651804")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_tarsal_distal_phalanx_2")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.08829999715089798 0.013399999588727951 0.13830000162124634")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_r_hindfoot"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_hindfoot")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_lateral_malleolus"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_lateral_malleolus")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_medial_malleolus"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_medial_malleolus")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_sphyrion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_sphyrion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_calcaneus_posterior"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_calcaneus_posterior")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_r_calf"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_calf")})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_r_thigh"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_thigh")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_knee_crease"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_knee_crease")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_femoral_lateral_epicondyles"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_femoral_lateral_epicondyles")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.1421000063419342 0.4991999864578247 0.03099999949336052")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_femoral_medial_epicondyles"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_femoral_lateral_epicondyles")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.022099999710917473 0.5013999938964844 0.02889999933540821")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_pelvis"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("pelvis")})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_skull"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("skull")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_skull_tip"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("skull_tip")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.004999999888241291 1.7503999471664429 0.005499999970197678")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_sellion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("sellion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.005799999926239252 1.631600022315979 0.0851999968290329")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_infraorbitale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_infraorbitale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.02370000071823597 1.6171000003814697 0.07519999891519547")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_infraorbitale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_infraorbitale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.0340999998152256 1.6171000003814697 0.07519999891519547")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_supramenton"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("supramenton")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.006099999882280827 1.5410000085830688 0.08049999922513962")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_tragion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_tragion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.06459999829530716 1.6346999406814575 0.03020000085234642")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_gonion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_gonion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.052000001072883606 1.552899956703186 0.034699998795986176")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_tragion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_tragion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.0738999992609024 1.6347999572753906 0.028200000524520874")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_gonion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_gonion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.06310000270605087 1.5529999732971191 0.032999999821186066")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_nuchale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("nuchale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_l_hand"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_hand")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_hand_tip"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_hand_tip")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.20800000429153442 0.6730999946594238 -0.04910000041127205")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_metacarpal_phalanx_2"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_metacarpal_phalanx_2")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.20090000331401825 0.8138999938964844 -0.02370000071823597")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_dactylion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_dactylion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.20559999346733093 0.6743000149726868 -0.04820000007748604")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_ulnar_styloid"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_ulnar_styloid")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_metacarpal_phalanx_5"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_metacarpal_phalanx_5")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.19290000200271606 0.7860000133514404 -0.11219999939203262")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_l_forearm"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_forearm")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_radial_styloid"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_radial_styloid")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.19009999930858612 0.8644999861717224 -0.04149999842047691")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_olecranon"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_olecranon")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_humeral_medial_epicondyles"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_humeral_medial_epicondyles")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.17350000143051147 1.1272000074386597 -0.11129999905824661")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_radiale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_radiale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.21819999814033508 1.1211999654769897 -0.11670000106096268")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_l_upperarm"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_upperarm")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_humeral_lateral_epicondyles"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_humeral_lateral_epicondyles")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.2280000001192093 1.1482000350952148 -0.10999999940395355")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_r_hand"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_hand")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_hand_tip"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_hand_tip")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_metacarpal_phalanx_2"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_metacarpal_phalanx_2")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_dactylion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_dactylion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_ulnar_styloid"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_ulnar_styloid")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_metacarpal_phalanx_5"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_metacarpal_phalanx_5")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_r_forearm"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_forearm")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_radial_styloid"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_radial_styloid")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.188400000333786 0.8676000237464905 -0.035999998450279236")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_olecranon"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_olecranon")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_humeral_medial_epicondyles"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_humeral_medial_epicondyles")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_radiale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_radiale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_r_upperarm"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_upperarm")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_humeral_lateral_epicondyles"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_humeral_lateral_epicondyles")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_l5"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l5")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_clavicale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_clavicale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.011500000022351742 1.4943000078201294 0.03999999910593033")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_suprasternale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("suprasternale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.00839999970048666 1.4714000225067139 0.05510000139474869")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_clavicale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_clavicale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.02710000053048134 1.4943000078201294 0.039400000125169754")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_thelion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_thelion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.07360000163316727 1.3385000228881836 0.1216999962925911")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_thelion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_thelion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.09179999679327011 1.3381999731063843 0.11919999867677689")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_substernale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("substernale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.008500000461935997 1.2994999885559082 0.11469999700784683")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_rib10"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_rib10")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.07109999656677246 1.194100022315979 0.10159999877214432")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_rib10"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_rib10")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.08709999918937683 1.1924999952316284 0.09920000284910202")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_cervicale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("cervicale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.006399999838322401 1.5199999809265137 -0.08150000125169754")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_spine_2_lower_back"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("spine_2_lower_back")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.004900000058114529 1.1907999515533447 -0.11129999905824661")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_waist_preferred_posterior"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("waist_preferred_posterior")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.28999999165534973 1.0915000438690186 -0.10909999907016754")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_acromion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_acromion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.19050000607967377 1.479099988937378 -0.04309999942779541")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_axilla_proximal"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_axilla_proximal")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_axilla_distal"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_axilla_distal")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_acromion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_acromion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.20319999754428864 1.4759999513626099 -0.04899999871850014")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_axilla_proximal"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_axilla_proximal")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.1776999980211258 1.406499981880188 -0.007499999832361937")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_axilla_distal"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_axilla_distal")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.17059999704360962 1.4071999788284302 -0.08749999850988388")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_neck_base"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_neck_base")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_neck_base"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_neck_base")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.06459999829530716 1.5140999555587769 -0.03799999877810478")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_navel"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("navel")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.006899999920278788 1.09660005569458 0.10170000046491623")})])})])})])}),

                    new ProtoInstance({
                      name : new SFString("Segment"),
                      DEF : new SFString("hanim_sacrum"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("sacrum")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_asis"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_asis")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.08869999647140503 1.0020999908447266 0.1111999973654747")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_asis"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_asis")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.0925000011920929 0.9983000159263611 0.10520000010728836")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_iliocristale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_iliocristale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_trochanterion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_trochanterion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.1688999980688095 0.8418999910354614 0.03519999980926514")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_iliocristale"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_iliocristale")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.16120000183582306 1.0536999702453613 0.0007999999797903001")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_trochanterion"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_trochanterion")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.16769999265670776 0.8335999846458435 0.030300000682473183")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_r_psis"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("r_psis")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_l_psis"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("l_psis")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.07739999890327454 1.0190000534057617 -0.11509999632835388")})])}),

                            new ProtoInstance({
                              name : new SFString("Site"),
                              DEF : new SFString("hanim_crotch"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("crotch")}),

                                new fieldValue({
                                  name : new SFString("translation"),
                                  value : new SFString("0.0034000000450760126 0.8266000151634216 0.025699999183416367")})])})])})])})])}),

                new fieldValue({
                  name : new SFString("sites"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_middistal_tip"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_middistal_tip")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.13539999723434448 0.0015999999595806003 0.147599995136261")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_5"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_tarsal_interphalangeal_phalanx_5")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.18250000476837158 0.007000000216066837 0.09279999881982803")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx_1"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_tarsal_interphalangeal_phalanx_1")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.08160000294446945 0.02319999970495701 0.010599999688565731")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_tarsal_distal_phalanx_2")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.11949999630451202 0.007899999618530273 0.14329999685287476")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_lateral_malleolus"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_lateral_malleolus")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.13079999387264252 0.059700001031160355 -0.10320000350475311")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_medial_malleolus"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_medial_malleolus")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.08900000154972076 0.07159999758005142 -0.08810000121593475")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_sphyrion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_sphyrion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.08900000154972076 0.057500001043081284 -0.09430000185966492")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_calcaneus_posterior"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_calcaneus_posterior")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.09740000218153 0.02590000070631504 -0.11710000038146973")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_knee_crease"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_knee_crease")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.09929999709129333 0.48809999227523804 -0.030899999663233757")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_femoral_lateral_epicondyles"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_femoral_lateral_epicondyles")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.1597999930381775 0.4966999888420105 0.02969999983906746")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_femoral_medial_epicondyles"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_femoral_lateral_epicondyles")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.039799999445676804 0.49459999799728394 0.030300000682473183")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_middistal_tip"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_middistal_tip")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.10429999977350235 -0.022700000554323196 0.14499999582767487")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_5"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_tarsal_interphalangeal_phalanx_5")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.15230000019073486 0.016599999740719795 0.08950000256299973")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx_1"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_tarsal_interphalangeal_phalanx_1")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.05209999904036522 0.026000000536441803 0.01269999984651804")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_tarsal_distal_phalanx_2")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.08829999715089798 0.013399999588727951 0.13830000162124634")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_lateral_malleolus"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_lateral_malleolus")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.1005999967455864 0.0658000037074089 -0.10750000178813934")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_medial_malleolus"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_medial_malleolus")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.05909999832510948 0.07599999755620956 -0.09279999881982803")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_sphyrion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_sphyrion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.06030000001192093 0.061000000685453415 -0.10019999742507935")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_calcaneus_posterior"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_calcaneus_posterior")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.06920000165700912 0.02969999983906746 -0.12210000306367874")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_knee_crease"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_knee_crease")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.08250000327825546 0.49320000410079956 -0.032600000500679016")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_femoral_lateral_epicondyles"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_femoral_lateral_epicondyles")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.1421000063419342 0.4991999864578247 0.03099999949336052")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_femoral_medial_epicondyles"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_femoral_lateral_epicondyles")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.022099999710917473 0.5013999938964844 0.02889999933540821")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_skull_tip"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("skull_tip")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.004999999888241291 1.7503999471664429 0.005499999970197678")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_sellion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("sellion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.005799999926239252 1.631600022315979 0.0851999968290329")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_infraorbitale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_infraorbitale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.02370000071823597 1.6171000003814697 0.07519999891519547")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_infraorbitale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_infraorbitale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.0340999998152256 1.6171000003814697 0.07519999891519547")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_supramenton"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("supramenton")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.006099999882280827 1.5410000085830688 0.08049999922513962")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_tragion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_tragion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.06459999829530716 1.6346999406814575 0.03020000085234642")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_gonion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_gonion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.052000001072883606 1.552899956703186 0.034699998795986176")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_tragion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_tragion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.0738999992609024 1.6347999572753906 0.028200000524520874")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_gonion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_gonion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.06310000270605087 1.5529999732971191 0.032999999821186066")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_nuchale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("nuchale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.0038999998942017555 1.5972000360488892 -0.07959999889135361")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_hand_tip"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_hand_tip")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.20800000429153442 0.6730999946594238 -0.04910000041127205")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_metacarpal_phalanx_2"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_metacarpal_phalanx_2")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.20090000331401825 0.8138999938964844 -0.02370000071823597")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_dactylion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_dactylion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.20559999346733093 0.6743000149726868 -0.04820000007748604")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_ulnar_styloid"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_ulnar_styloid")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.2142000049352646 0.8529000282287598 -0.06480000168085098")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_metacarpal_phalanx_5"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_metacarpal_phalanx_5")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.19290000200271606 0.7860000133514404 -0.11219999939203262")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_radial_styloid"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_radial_styloid")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.19009999930858612 0.8644999861717224 -0.04149999842047691")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_olecranon"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_olecranon")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.19619999825954437 1.1375000476837158 -0.11230000108480453")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_humeral_medial_epicondyles"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_humeral_medial_epicondyles")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.17350000143051147 1.1272000074386597 -0.11129999905824661")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_radiale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_radiale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.21819999814033508 1.1211999654769897 -0.11670000106096268")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_humeral_lateral_epicondyles"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_humeral_lateral_epicondyles")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.2280000001192093 1.1482000350952148 -0.10999999940395355")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_hand_tip"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_hand_tip")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.19689999520778656 0.6758000254631042 -0.04270000010728836")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_metacarpal_phalanx_2"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_metacarpal_phalanx_2")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.19769999384880066 0.8169000148773193 -0.01769999973475933")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_dactylion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_dactylion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.1941000074148178 0.6772000193595886 -0.04230000078678131")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_ulnar_styloid"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_ulnar_styloid")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.21170000731945038 0.8561999797821045 -0.058400001376867294")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_metacarpal_phalanx_5"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_metacarpal_phalanx_5")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.19290000200271606 0.7889999747276306 -0.10639999806880951")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_radial_styloid"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_radial_styloid")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.188400000333786 0.8676000237464905 -0.035999998450279236")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_olecranon"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_olecranon")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.1906999945640564 1.1404999494552612 -0.10649999976158142")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_humeral_medial_epicondyles"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_humeral_medial_epicondyles")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.1679999977350235 1.1297999620437622 -0.10620000213384628")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_radiale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_radiale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.21299999952316284 1.1304999589920044 -0.10909999907016754")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_humeral_lateral_epicondyles"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_humeral_lateral_epicondyles")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.2223999947309494 1.1517000198364258 -0.10329999774694443")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_clavicale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_clavicale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.011500000022351742 1.4943000078201294 0.03999999910593033")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_suprasternale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("suprasternale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.00839999970048666 1.4714000225067139 0.05510000139474869")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_clavicale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_clavicale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.02710000053048134 1.4943000078201294 0.039400000125169754")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_thelion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_thelion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.07360000163316727 1.3385000228881836 0.1216999962925911")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_thelion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_thelion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.09179999679327011 1.3381999731063843 0.11919999867677689")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_substernale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("substernale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.008500000461935997 1.2994999885559082 0.11469999700784683")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_rib10"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_rib10")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.07109999656677246 1.194100022315979 0.10159999877214432")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_rib10"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_rib10")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.08709999918937683 1.1924999952316284 0.09920000284910202")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_cervicale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("cervicale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.006399999838322401 1.5199999809265137 -0.08150000125169754")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_spine_2_lower_back"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("spine_2_lower_back")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.004900000058114529 1.1907999515533447 -0.11129999905824661")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_waist_preferred_posterior"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("waist_preferred_posterior")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.28999999165534973 1.0915000438690186 -0.10909999907016754")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_acromion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_acromion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.19050000607967377 1.479099988937378 -0.04309999942779541")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_axilla_proximal"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_axilla_proximal")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.16259999573230743 1.4071999788284302 -0.003100000089034438")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_axilla_distal"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_axilla_distal")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.16030000150203705 1.4098000526428223 -0.08259999752044678")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_acromion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_acromion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.20319999754428864 1.4759999513626099 -0.04899999871850014")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_axilla_proximal"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_axilla_proximal")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.1776999980211258 1.406499981880188 -0.007499999832361937")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_axilla_distal"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_axilla_distal")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.17059999704360962 1.4071999788284302 -0.08749999850988388")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_neck_base"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_neck_base")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.04190000146627426 1.5148999691009521 -0.02199999988079071")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_neck_base"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_neck_base")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.06459999829530716 1.5140999555587769 -0.03799999877810478")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_navel"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("navel")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.006899999920278788 1.09660005569458 0.10170000046491623")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_asis"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_asis")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.08869999647140503 1.0020999908447266 0.1111999973654747")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_asis"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_asis")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.0925000011920929 0.9983000159263611 0.10520000010728836")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_iliocristale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_iliocristale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.1525000035762787 1.0628000497817993 0.0035000001080334187")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_trochanterion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_trochanterion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.1688999980688095 0.8418999910354614 0.03519999980926514")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_iliocristale"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_iliocristale")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.16120000183582306 1.0536999702453613 0.0007999999797903001")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_trochanterion"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_trochanterion")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.16769999265670776 0.8335999846458435 0.030300000682473183")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_r_psis"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("r_psis")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("-0.07159999758005142 1.0190000534057617 -0.11379999667406082")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_l_psis"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("l_psis")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.07739999890327454 1.0190000534057617 -0.11509999632835388")})])}),

                    new ProtoInstance({
                      name : new SFString("Site"),
                      DEF : new SFString("hanim_crotch"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("crotch")}),

                        new fieldValue({
                          name : new SFString("translation"),
                          value : new SFString("0.0034000000450760126 0.8266000151634216 0.025699999183416367")})])})])}),

                new fieldValue({
                  name : new SFString("name"),
                  value : new SFString("humanoid")}),

                new fieldValue({
                  name : new SFString("info"),
                  value : new SFString("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;1\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"")})])}),

            new Group({
              DEF : new SFString("JointCenters_WorldInfo"),
              children : new MFNode([
                new WorldInfo({
                  title : new SFString("HANIM 200x Default Joint Centers, LOA&#8209;1"),
                  info : new MFString(new MFString([" HANIM 200x Default Joint Centers, Level-Of-Articulation 1 -------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]))})])}),

            new NavigationInfo({
              avatarSize : new MFFloat(new MFFloat([0.25,1.600000023841858,0.75])),
              speed : new SFFloat(1.5)})])}))});
console.log(X3D0.toXMLNode());
