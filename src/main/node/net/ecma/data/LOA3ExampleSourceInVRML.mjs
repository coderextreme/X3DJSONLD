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
import { ProtoInstance } from './x3d.mjs';
import { fieldValue } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("generator"),
              content : new SFString("view3dscene, https://castle-engine.io/view3dscene.php")}),

            new meta({
              name : new SFString("source"),
              content : new SFString("LOA3ExampleSourceInVRML.wrl")})])})),
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
                              protoField : new SFString("translation")})])}))})])}))}),

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
              DEF : new SFString("humanoid_2"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("humanoidBody"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Joint"),
                      DEF : new SFString("hanim_humanoid_root_2"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("stiffness"),
                          value : new SFString("1 1 1")}),

                        new fieldValue({
                          name : new SFString("name"),
                          value : new SFString("humanoid_root")}),

                        new fieldValue({
                          name : new SFString("center"),
                          value : new SFString("0 0.824000000953674 0.0276999995112419")}),

                        new fieldValue({
                          name : new SFString("children"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_sacroiliac_2"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("sacroiliac")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0 0.914900004863739 0.0015999999595806")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_l_hip_2"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l_hip")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.0961000025272369 0.912400007247925 -0.0000999999974737875")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_l_knee_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_knee")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("0.104000002145767 0.486699998378754 0.030799999833107")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_l_talocrural_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_talocrural")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("0.110100001096725 0.0656000003218651 -0.0736000016331673")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Joint"),
                                                              DEF : new SFString("hanim_l_tarsotarsal_interphalangeal__2"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("stiffness"),
                                                                  value : new SFString("1 1 1")}),

                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_tarsotarsal_interphalangeal_")}),

                                                                new fieldValue({
                                                                  name : new SFString("center"),
                                                                  value : new SFString("0.108599998056889 0.0000999999974737875 -0.0368000008165836")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Joint"),
                                                                      DEF : new SFString("hanim_l_metatarsophalangeal__2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("stiffness"),
                                                                          value : new SFString("1 1 1")}),

                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_metatarsophalangeal_")}),

                                                                        new fieldValue({
                                                                          name : new SFString("center"),
                                                                          value : new SFString("0.108599998056889 0.0000999999974737875 0.0368000008165836")}),

                                                                        new fieldValue({
                                                                          name : new SFString("children"),
                                                                          children : new MFNode([
                                                                            new ProtoInstance({
                                                                              name : new SFString("Joint"),
                                                                              DEF : new SFString("hanim_l_tarsal_interphalangeal__2"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("stiffness"),
                                                                                  value : new SFString("1 1 1")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("l_tarsal_interphalangeal_")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("center"),
                                                                                  value : new SFString("0.108599998056889 0 0.0762000009417534")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("children"),
                                                                                  children : new MFNode([
                                                                                    new ProtoInstance({
                                                                                      name : new SFString("Segment"),
                                                                                      DEF : new SFString("hanim_l_tarsal_distal_phalanx2"),
                                                                                      fieldValue : new MFNode([
                                                                                        new fieldValue({
                                                                                          name : new SFString("name"),
                                                                                          value : new SFString("l_tarsal_distal_phalanx_1")}),

                                                                                        new fieldValue({
                                                                                          name : new SFString("children"),
                                                                                          children : new MFNode([
                                                                                            new ProtoInstance({
                                                                                              name : new SFString("Site"),
                                                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_1_tip_2"),
                                                                                              fieldValue : new MFNode([
                                                                                                new fieldValue({
                                                                                                  name : new SFString("name"),
                                                                                                  value : new SFString("l_tarsal_distal_phalanx_1_tip")}),

                                                                                                new fieldValue({
                                                                                                  name : new SFString("translation"),
                                                                                                  value : new SFString("0.135399997234344 0.0015999999595806 0.147599995136261")})])}),

                                                                                            new ProtoInstance({
                                                                                              name : new SFString("Site"),
                                                                                              DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx6"),
                                                                                              fieldValue : new MFNode([
                                                                                                new fieldValue({
                                                                                                  name : new SFString("name"),
                                                                                                  value : new SFString("l_tarsal_interphalangeal_phalanx_5")}),

                                                                                                new fieldValue({
                                                                                                  name : new SFString("translation"),
                                                                                                  value : new SFString("0.182500004768372 0.00700000021606684 0.092799998819828")})])}),

                                                                                            new ProtoInstance({
                                                                                              name : new SFString("Site"),
                                                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx3"),
                                                                                              fieldValue : new MFNode([
                                                                                                new fieldValue({
                                                                                                  name : new SFString("name"),
                                                                                                  value : new SFString("l_tarsal_distal_phalanx_2")}),

                                                                                                new fieldValue({
                                                                                                  name : new SFString("translation"),
                                                                                                  value : new SFString("0.119499996304512 0.00789999961853027 0.143299996852875")})])})])})])})])})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Segment"),
                                                                              DEF : new SFString("hanim_l_middistal_2"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("l_middistal")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("children"),
                                                                                  children : new MFNode([
                                                                                    new ProtoInstance({
                                                                                      name : new SFString("Site"),
                                                                                      DEF : new SFString("hanim_l_tarsal_interphalangeal_phalanx2"),
                                                                                      fieldValue : new MFNode([
                                                                                        new fieldValue({
                                                                                          name : new SFString("name"),
                                                                                          value : new SFString("l_tarsal_interphalangeal_phalanx_1")}),

                                                                                        new fieldValue({
                                                                                          name : new SFString("translation"),
                                                                                          value : new SFString("0.0816000029444695 0.023199999704957 0.0105999996885657")})])})])})])})])})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Segment"),
                                                                      DEF : new SFString("hanim_l_midproximal_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_midproximal")})])})])})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_l_hindfoot_2"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l_hindfoot")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_lateral_malleolus_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_lateral_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.130799993872643 0.0597000010311604 -0.103200003504753")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_medial_malleolus_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_medial_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.0890000015497208 0.0715999975800514 -0.0881000012159348")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_sphyrion_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_sphyrion")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.0890000015497208 0.0575000010430813 -0.0943000018596649")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_calcaneus_posterior_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_calcaneus_posterior")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.09740000218153 0.025900000706315 -0.11710000038147")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_l_calf_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_calf")})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_l_thigh_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_thigh")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_knee_crease_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_knee_crease")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.0992999970912933 0.488099992275238 -0.0308999996632338")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_femoral_lateral_epicondyles_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.159799993038177 0.496699988842011 0.0296999998390675")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_l_femoral_medial_epicondyles_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("0.0397999994456768 0.494599997997284 0.0303000006824732")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_r_hip_2"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("r_hip")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("-0.0949999988079071 0.917100012302399 0.00289999996311963")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_r_knee_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_knee")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("-0.0866999998688698 0.491299986839294 0.0318000018596649")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_r_talocrural_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_talocrural")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("-0.0800999999046326 0.0711999982595444 -0.0766000002622604")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Joint"),
                                                              DEF : new SFString("hanim_r_tarsotarsal_interphalangeal__2"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("stiffness"),
                                                                  value : new SFString("1 1 1")}),

                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_tarsotarsal_interphalangeal_")}),

                                                                new fieldValue({
                                                                  name : new SFString("center"),
                                                                  value : new SFString("-0.0800999999046326 0 -0.0368000008165836")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Joint"),
                                                                      DEF : new SFString("hanim_r_metatarsophalangeal__2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("stiffness"),
                                                                          value : new SFString("1 1 1")}),

                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_metatarsophalangeal_")}),

                                                                        new fieldValue({
                                                                          name : new SFString("center"),
                                                                          value : new SFString("-0.0800999999046326 0 0.0368000008165836")}),

                                                                        new fieldValue({
                                                                          name : new SFString("children"),
                                                                          children : new MFNode([
                                                                            new ProtoInstance({
                                                                              name : new SFString("Joint"),
                                                                              DEF : new SFString("hanim_r_tarsal_interphalangeal__2"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("stiffness"),
                                                                                  value : new SFString("1 1 1")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("r_tarsal_interphalangeal_")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("center"),
                                                                                  value : new SFString("-0.0800999999046326 0.00389999989420176 0.0732000023126602")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("children"),
                                                                                  children : new MFNode([
                                                                                    new ProtoInstance({
                                                                                      name : new SFString("Segment"),
                                                                                      DEF : new SFString("hanim_r_tarsal_distal_phalanx2"),
                                                                                      fieldValue : new MFNode([
                                                                                        new fieldValue({
                                                                                          name : new SFString("name"),
                                                                                          value : new SFString("r_tarsal_distal_phalanx_1")}),

                                                                                        new fieldValue({
                                                                                          name : new SFString("children"),
                                                                                          children : new MFNode([
                                                                                            new ProtoInstance({
                                                                                              name : new SFString("Site"),
                                                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_1_tip_2"),
                                                                                              fieldValue : new MFNode([
                                                                                                new fieldValue({
                                                                                                  name : new SFString("name"),
                                                                                                  value : new SFString("r_tarsal_distal_phalanx_1_tip")}),

                                                                                                new fieldValue({
                                                                                                  name : new SFString("translation"),
                                                                                                  value : new SFString("-0.104299999773502 -0.0227000005543232 0.144999995827675")})])}),

                                                                                            new ProtoInstance({
                                                                                              name : new SFString("Site"),
                                                                                              DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx6"),
                                                                                              fieldValue : new MFNode([
                                                                                                new fieldValue({
                                                                                                  name : new SFString("name"),
                                                                                                  value : new SFString("r_tarsal_interphalangeal_phalanx_5")}),

                                                                                                new fieldValue({
                                                                                                  name : new SFString("translation"),
                                                                                                  value : new SFString("-0.152300000190735 0.0165999997407198 0.0895000025629997")})])}),

                                                                                            new ProtoInstance({
                                                                                              name : new SFString("Site"),
                                                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx3"),
                                                                                              fieldValue : new MFNode([
                                                                                                new fieldValue({
                                                                                                  name : new SFString("name"),
                                                                                                  value : new SFString("r_tarsal_distal_phalanx_2")}),

                                                                                                new fieldValue({
                                                                                                  name : new SFString("translation"),
                                                                                                  value : new SFString("-0.088299997150898 0.013399999588728 0.138300001621246")})])})])})])})])})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Segment"),
                                                                              DEF : new SFString("hanim_r_middistal_2"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("r_middistal")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("children"),
                                                                                  children : new MFNode([
                                                                                    new ProtoInstance({
                                                                                      name : new SFString("Site"),
                                                                                      DEF : new SFString("hanim_r_tarsal_interphalangeal_phalanx2"),
                                                                                      fieldValue : new MFNode([
                                                                                        new fieldValue({
                                                                                          name : new SFString("name"),
                                                                                          value : new SFString("r_tarsal_interphalangeal_phalanx_1")}),

                                                                                        new fieldValue({
                                                                                          name : new SFString("translation"),
                                                                                          value : new SFString("-0.0520999990403652 0.0260000005364418 0.012699999846518")})])})])})])})])})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Segment"),
                                                                      DEF : new SFString("hanim_r_midproximal_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_midproximal")})])})])})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_r_hindfoot_2"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("r_hindfoot")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_lateral_malleolus_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_lateral_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.100599996745586 0.0658000037074089 -0.107500001788139")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_medial_malleolus_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_medial_malleolus")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.0590999983251095 0.0759999975562096 -0.092799998819828")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_sphyrion_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_sphyrion")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.0603000000119209 0.0610000006854534 -0.100199997425079")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_calcaneus_posterior_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_calcaneus_posterior")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.0692000016570091 0.0296999998390675 -0.122100003063679")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_r_calf_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_calf")})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_r_thigh_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_thigh")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_knee_crease_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_knee_crease")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.0825000032782555 0.4932000041008 -0.032600000500679")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_femoral_lateral_epicondyles_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.142100006341934 0.499199986457825 0.0309999994933605")})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Site"),
                                                      DEF : new SFString("hanim_r_femoral_medial_epicondyles_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("r_femoral_lateral_epicondyles")}),

                                                        new fieldValue({
                                                          name : new SFString("translation"),
                                                          value : new SFString("-0.0220999997109175 0.501399993896484 0.0288999993354082")})])})])})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_pelvis_2"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("pelvis")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_iliocristale_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_iliocristale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.152500003576279 1.0628000497818 0.00350000010803342")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_trochanterion_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_trochanterion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.16889999806881 0.841899991035461 0.0351999998092651")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_iliocristale_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_iliocristale")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.161200001835823 1.05369997024536 0.0007999999797903")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_trochanterion_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_trochanterion")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.167699992656708 0.833599984645844 0.0303000006824732")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_asis_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_asis")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.088699996471405 1.00209999084473 0.111199997365475")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_asis_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_asis")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.0925000011920929 0.998300015926361 0.105200000107288")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_r_psis_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("r_psis")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("-0.0715999975800514 1.01900005340576 -0.113799996674061")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_l_psis_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l_psis")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.0773999989032745 1.01900005340576 -0.115099996328354")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_crotch_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("crotch")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.00340000004507601 0.826600015163422 0.0256999991834164")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Joint"),
                              DEF : new SFString("hanim_vl5_2"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("stiffness"),
                                  value : new SFString("1 1 1")}),

                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("vl5")}),

                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.00279999990016222 1.05680000782013 -0.0776000022888184")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Joint"),
                                      DEF : new SFString("hanim_vl4_2"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("stiffness"),
                                          value : new SFString("1 1 1")}),

                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("vl4")}),

                                        new fieldValue({
                                          name : new SFString("center"),
                                          value : new SFString("0.00350000010803342 1.09249997138977 -0.0786999985575676")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Joint"),
                                              DEF : new SFString("hanim_vl3_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("stiffness"),
                                                  value : new SFString("1 1 1")}),

                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("vl3")}),

                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("0.00410000002011657 1.1275999546051 -0.0795999988913536")}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("Joint"),
                                                      DEF : new SFString("hanim_vl2_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("stiffness"),
                                                          value : new SFString("1 1 1")}),

                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("vl2")}),

                                                        new fieldValue({
                                                          name : new SFString("center"),
                                                          value : new SFString("0.0044999998062849 1.15460002422333 -0.0799999982118607")}),

                                                        new fieldValue({
                                                          name : new SFString("children"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("Joint"),
                                                              DEF : new SFString("hanim_vl1_2"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("stiffness"),
                                                                  value : new SFString("1 1 1")}),

                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("vl1")}),

                                                                new fieldValue({
                                                                  name : new SFString("center"),
                                                                  value : new SFString("0.00480000022798777 1.19120001792908 -0.0804999992251396")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Joint"),
                                                                      DEF : new SFString("hanim_vt12_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("stiffness"),
                                                                          value : new SFString("1 1 1")}),

                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("vt12")}),

                                                                        new fieldValue({
                                                                          name : new SFString("center"),
                                                                          value : new SFString("0.00510000018402934 1.22780001163483 -0.0807999968528748")}),

                                                                        new fieldValue({
                                                                          name : new SFString("children"),
                                                                          children : new MFNode([
                                                                            new ProtoInstance({
                                                                              name : new SFString("Joint"),
                                                                              DEF : new SFString("hanim_vt11_2"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("stiffness"),
                                                                                  value : new SFString("1 1 1")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("vt11")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("center"),
                                                                                  value : new SFString("0.00529999984428287 1.26789999008179 -0.0810000002384186")}),

                                                                                new fieldValue({
                                                                                  name : new SFString("children"),
                                                                                  children : new MFNode([
                                                                                    new ProtoInstance({
                                                                                      name : new SFString("Joint"),
                                                                                      DEF : new SFString("hanim_vt10_2"),
                                                                                      fieldValue : new MFNode([
                                                                                        new fieldValue({
                                                                                          name : new SFString("stiffness"),
                                                                                          value : new SFString("1 1 1")}),

                                                                                        new fieldValue({
                                                                                          name : new SFString("name"),
                                                                                          value : new SFString("vt10")}),

                                                                                        new fieldValue({
                                                                                          name : new SFString("center"),
                                                                                          value : new SFString("0.00559999980032444 1.28480005264282 -0.0821999981999397")}),

                                                                                        new fieldValue({
                                                                                          name : new SFString("children"),
                                                                                          children : new MFNode([
                                                                                            new ProtoInstance({
                                                                                              name : new SFString("Joint"),
                                                                                              DEF : new SFString("hanim_vt9_2"),
                                                                                              fieldValue : new MFNode([
                                                                                                new fieldValue({
                                                                                                  name : new SFString("stiffness"),
                                                                                                  value : new SFString("1 1 1")}),

                                                                                                new fieldValue({
                                                                                                  name : new SFString("name"),
                                                                                                  value : new SFString("vt9")}),

                                                                                                new fieldValue({
                                                                                                  name : new SFString("center"),
                                                                                                  value : new SFString("0.00570000009611249 1.31260001659393 -0.0838000029325485")}),

                                                                                                new fieldValue({
                                                                                                  name : new SFString("children"),
                                                                                                  children : new MFNode([
                                                                                                    new ProtoInstance({
                                                                                                      name : new SFString("Joint"),
                                                                                                      DEF : new SFString("hanim_vt8_2"),
                                                                                                      fieldValue : new MFNode([
                                                                                                        new fieldValue({
                                                                                                          name : new SFString("stiffness"),
                                                                                                          value : new SFString("1 1 1")}),

                                                                                                        new fieldValue({
                                                                                                          name : new SFString("name"),
                                                                                                          value : new SFString("vt8")}),

                                                                                                        new fieldValue({
                                                                                                          name : new SFString("center"),
                                                                                                          value : new SFString("0.00570000009611249 1.33819997310638 -0.0844999998807907")}),

                                                                                                        new fieldValue({
                                                                                                          name : new SFString("children"),
                                                                                                          children : new MFNode([
                                                                                                            new ProtoInstance({
                                                                                                              name : new SFString("Joint"),
                                                                                                              DEF : new SFString("hanim_vt7_2"),
                                                                                                              fieldValue : new MFNode([
                                                                                                                new fieldValue({
                                                                                                                  name : new SFString("stiffness"),
                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                new fieldValue({
                                                                                                                  name : new SFString("name"),
                                                                                                                  value : new SFString("vt7")}),

                                                                                                                new fieldValue({
                                                                                                                  name : new SFString("center"),
                                                                                                                  value : new SFString("0.00579999992623925 1.36249995231628 -0.0833000019192696")}),

                                                                                                                new fieldValue({
                                                                                                                  name : new SFString("children"),
                                                                                                                  children : new MFNode([
                                                                                                                    new ProtoInstance({
                                                                                                                      name : new SFString("Joint"),
                                                                                                                      DEF : new SFString("hanim_vt6_2"),
                                                                                                                      fieldValue : new MFNode([
                                                                                                                        new fieldValue({
                                                                                                                          name : new SFString("stiffness"),
                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                        new fieldValue({
                                                                                                                          name : new SFString("name"),
                                                                                                                          value : new SFString("vt6")}),

                                                                                                                        new fieldValue({
                                                                                                                          name : new SFString("center"),
                                                                                                                          value : new SFString("0.0059000002220273 1.38660001754761 -0.0799999982118607")}),

                                                                                                                        new fieldValue({
                                                                                                                          name : new SFString("children"),
                                                                                                                          children : new MFNode([
                                                                                                                            new ProtoInstance({
                                                                                                                              name : new SFString("Joint"),
                                                                                                                              DEF : new SFString("hanim_vt5_2"),
                                                                                                                              fieldValue : new MFNode([
                                                                                                                                new fieldValue({
                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                new fieldValue({
                                                                                                                                  name : new SFString("name"),
                                                                                                                                  value : new SFString("vt5")}),

                                                                                                                                new fieldValue({
                                                                                                                                  name : new SFString("center"),
                                                                                                                                  value : new SFString("0.00600000005215406 1.41019999980927 -0.0745000019669533")}),

                                                                                                                                new fieldValue({
                                                                                                                                  name : new SFString("children"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new ProtoInstance({
                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                      DEF : new SFString("hanim_vt4_2"),
                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                        new fieldValue({
                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                        new fieldValue({
                                                                                                                                          name : new SFString("name"),
                                                                                                                                          value : new SFString("vt4")}),

                                                                                                                                        new fieldValue({
                                                                                                                                          name : new SFString("center"),
                                                                                                                                          value : new SFString("0.00609999988228083 1.432000041008 -0.067500002682209")}),

                                                                                                                                        new fieldValue({
                                                                                                                                          name : new SFString("children"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new ProtoInstance({
                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                              DEF : new SFString("hanim_vt3_2"),
                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                new fieldValue({
                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                new fieldValue({
                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                  value : new SFString("vt3")}),

                                                                                                                                                new fieldValue({
                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                  value : new SFString("0.00620000017806888 1.45829999446869 -0.0570000000298023")}),

                                                                                                                                                new fieldValue({
                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                  children : new MFNode([
                                                                                                                                                    new ProtoInstance({
                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                      DEF : new SFString("hanim_vt2_2"),
                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                        new fieldValue({
                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                        new fieldValue({
                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                          value : new SFString("vt2")}),

                                                                                                                                                        new fieldValue({
                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                          value : new SFString("0.00630000000819564 1.47609996795654 -0.0483999997377396")}),

                                                                                                                                                        new fieldValue({
                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                          children : new MFNode([
                                                                                                                                                            new ProtoInstance({
                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                              DEF : new SFString("hanim_vt1_2"),
                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                new fieldValue({
                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                new fieldValue({
                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                  value : new SFString("vt1")}),

                                                                                                                                                                new fieldValue({
                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                  value : new SFString("0.00650000013411045 1.4951000213623 -0.0386999994516373")}),

                                                                                                                                                                new fieldValue({
                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                      DEF : new SFString("hanim_vc7_2"),
                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                          value : new SFString("vc7")}),

                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                          value : new SFString("0.00659999996423721 1.51320004463196 -0.0300999991595745")}),

                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                              DEF : new SFString("hanim_vc6_2"),
                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                  value : new SFString("vc6")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                  value : new SFString("0.00659999996423721 1.53569996356964 -0.014299999922514")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                      DEF : new SFString("hanim_vc5_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("vc5")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                          value : new SFString("0.00659999996423721 1.55200004577637 -0.00820000004023314")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                              DEF : new SFString("hanim_vc4_2"),
                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                  value : new SFString("vc4")}),

                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                  value : new SFString("0.00659999996423721 1.56620001792908 -0.00839999970048666")}),

                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                      DEF : new SFString("hanim_vc3_2"),
                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                          value : new SFString("vc3")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                          value : new SFString("0.00659999996423721 1.58000004291534 -0.0103000001981854")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                              DEF : new SFString("hanim_vc2_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("vc2")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                  value : new SFString("0.00659999996423721 1.59280002117157 -0.0103000001981854")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_vc1_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("vc1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                          value : new SFString("0.00659999996423721 1.61440002918243 -0.00340000004507601")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_skullbase_2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("skullbase")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                                  value : new SFString("0.00439999997615814 1.62090003490448 0.0236000008881092")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_eyeball_4"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("l_eyeball")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                                          value : new SFString("0.0335999988019466 1.63320004940033 0.0502000004053116")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_l_eyeball_3"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("l_eyeball")})])})])})])}),

                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_eyeball_4"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("r_eyeball")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                                          value : new SFString("-0.0236000008881092 1.6331000328064 0.0509999990463257")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_r_eyeball_3"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("r_eyeball")})])})])})])}),

                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_skull_2"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("skull")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_skull_tip_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("skull_tip")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("0.00499999988824129 1.75039994716644 0.00549999997019768")})])}),

                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_sellion_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("sellion")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("0.00579999992623925 1.63160002231598 0.0851999968290329")})])}),

                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_r_infraorbitale_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("r_infraorbitale")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("-0.023700000718236 1.61710000038147 0.0751999989151955")})])}),

                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_l_infraorbitale_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("l_infraorbitale")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("0.0340999998152256 1.61710000038147 0.0751999989151955")})])}),

                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_supramenton_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("supramenton")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("0.00609999988228083 1.54100000858307 0.0804999992251396")})])}),

                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_r_tragion_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("r_tragion")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("-0.0645999982953072 1.63469994068146 0.0302000008523464")})])}),

                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_r_gonion_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("r_gonion")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("-0.0520000010728836 1.55289995670319 0.0346999987959862")})])}),

                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_l_tragion_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("l_tragion")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("0.0738999992609024 1.63479995727539 0.0282000005245209")})])}),

                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_l_gonion_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("l_gonion")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("0.0631000027060509 1.55299997329712 0.0329999998211861")})])}),

                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_nuchale_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("nuchale")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("0.00389999989420176 1.59720003604889 -0.0795999988913536")})])})])})])})])})])}),

                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_c1_2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("c1")})])})])})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_c2_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("c2")})])})])})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                              DEF : new SFString("hanim_c3_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("c3")})])})])})])}),

                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                      DEF : new SFString("hanim_c4_2"),
                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                          value : new SFString("c4")})])})])})])}),

                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                              DEF : new SFString("hanim_c5_2"),
                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                  value : new SFString("c5")})])})])})])}),

                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                      DEF : new SFString("hanim_c6_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("c6")})])})])})])}),

                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                              DEF : new SFString("hanim_c7_2"),
                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                  value : new SFString("c7")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                      DEF : new SFString("hanim_r_neck_base_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("r_neck_base")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                          value : new SFString("-0.0419000014662743 1.51489996910095 -0.0219999998807907")})])}),

                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                      DEF : new SFString("hanim_l_neck_base_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("l_neck_base")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                          value : new SFString("0.0645999982953072 1.51409995555878 -0.0379999987781048")})])})])})])})])})])}),

                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                      DEF : new SFString("hanim_l_sternoclavicular_2"),
                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                          value : new SFString("l_sternoclavicular")}),

                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                          value : new SFString("0.0820000022649765 1.44879996776581 -0.035300001502037")}),

                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                              DEF : new SFString("hanim_l_acromioclavicular_2"),
                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                  value : new SFString("l_acromioclavicular")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                  value : new SFString("0.0961999967694283 1.42690002918243 -0.0423999987542629")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                      DEF : new SFString("hanim_l_shoulder_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("l_shoulder")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                          value : new SFString("0.202900007367134 1.43760001659393 -0.0386999994516373")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                              DEF : new SFString("hanim_l_elbow_2"),
                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                  value : new SFString("l_elbow")}),

                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                  value : new SFString("0.201399996876717 1.1356999874115 -0.0681999996304512")}),

                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                      DEF : new SFString("hanim_l_radiocarpal_2"),
                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                          value : new SFString("l_radiocarpal")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                          value : new SFString("0.198400005698204 0.866299986839294 -0.0582999996840954")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpometacarpal2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("l_carpometacarpal_1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                  value : new SFString("0.192399993538857 0.847199976444244 -0.0533999986946583")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_metacarpophalangeal_1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                          value : new SFString("0.195099994540215 0.82260000705719 0.0245999991893768")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpal_interphalangeal2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("l_carpal_interphalangeal_1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                                  value : new SFString("0.195500001311302 0.815900027751923 0.046399999409914")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx2"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("l_carpal_distal_phalanx_1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_1_tip_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("l_carpal_distal_phalanx_1_tip")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("0.19820000231266 0.806100010871887 0.0759000033140183")})])})])})])})])})])}),

                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_l_index_proximal_2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("l_index_proximal")})])})])})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_index_proximal_4"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_index_proximal")})])})])})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpometacarpal3"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("l_carpometacarpal_2")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                  value : new SFString("0.198300004005432 0.80239999294281 -0.0280000008642673")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal3"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_metacarpophalangeal_2")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                          value : new SFString("0.198300004005432 0.781499981880188 -0.0280000008642673")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpal_proximal_interphalangeal3"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("l_carpal_proximal_interphalangeal_2")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                                  value : new SFString("0.201700001955032 0.736299991607666 -0.0248000007122755")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_interphalangeal3"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("l_carpal_distal_interphalangeal_2")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                                          value : new SFString("0.202800005674362 0.713900029659271 -0.0236000008881092")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx3"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("l_carpal_distal_phalanx_2")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx_2_tip_2"),
                                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                                          value : new SFString("l_carpal_distal_phalanx_2_tip")}),

                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                                                          value : new SFString("0.20890000462532 0.685800015926361 -0.0244999993592501")})])}),

                                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_dactylion_2"),
                                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                                          value : new SFString("l_dactylion")}),

                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                                                          value : new SFString("0.205599993467331 0.674300014972687 -0.048200000077486")})])})])})])})])})])}),

                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_index_middle_2"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("l_index_middle")})])})])})])}),

                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_l_index_proximal_6"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("l_index_proximal")})])})])})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_index_metacarpal_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_index_metacarpal")})])})])})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpometacarpal4"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("l_carpometacarpal_3")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                  value : new SFString("0.198699995875359 0.802900016307831 -0.0529999993741512")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal4"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_metacarpophalangeal_3")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                          value : new SFString("0.198699995875359 0.781799972057343 -0.0529999993741512")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpal_proximal_interphalangeal4"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("l_carpal_proximal_interphalangeal_3")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                                  value : new SFString("0.201299995183945 0.727299988269806 -0.0502999983727932")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_interphalangeal4"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("l_carpal_distal_interphalangeal_3")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                                          value : new SFString("0.202600002288818 0.701099991798401 -0.0494000017642975")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx4"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("l_carpal_distal_phalanx_3")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx_3_tip_2"),
                                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                                          value : new SFString("l_carpal_distal_phalanx_3_tip")}),

                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                                                          value : new SFString("0.208000004291534 0.673099994659424 -0.049100000411272")})])})])})])})])})])}),

                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_middle_middle_2"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("l_middle_middle")})])})])})])}),

                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_l_middle_proximal_2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("l_middle_proximal")})])})])})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_middle_metacarpal_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_middle_metacarpal")})])})])})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpometacarpal5"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("l_carpometacarpal_4")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                  value : new SFString("0.195600003004074 0.801900029182434 -0.0794000029563904")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal5"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_metacarpophalangeal_4")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                          value : new SFString("0.195600003004074 0.781499981880188 -0.0794000029563904")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpal_proximal_interphalangeal5"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("l_carpal_proximal_interphalangeal_4")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                                  value : new SFString("0.197300001978874 0.72869998216629 -0.0776999965310097")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_interphalangeal5"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("l_carpal_distal_interphalangeal_4")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                                          value : new SFString("0.198300004005432 0.704500019550323 -0.0767000019550323")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx5"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("l_carpal_distal_phalanx_4")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx_4_tip_2"),
                                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                                          value : new SFString("l_carpal_distal_phalanx_4_tip")}),

                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                                                          value : new SFString("0.203500002622604 0.675000011920929 -0.0755999982357025")})])})])})])})])})])}),

                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_ring_middle_2"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("l_ring_middle")})])})])})])}),

                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_l_ring_proximal_2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("l_ring_proximal")})])})])})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_ring_metacarpal_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_ring_metacarpal")})])})])})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpometacarpal6"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("l_carpometacarpal_5")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                  value : new SFString("0.192499995231628 0.806599974632263 -0.10360000282526")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal6"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_metacarpophalangeal_5")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                          value : new SFString("0.192499995231628 0.78659999370575 -0.10360000282526")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpal_proximal_interphalangeal6"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("l_carpal_proximal_interphalangeal_5")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                                  value : new SFString("0.193800002336502 0.745199978351593 -0.102399997413158")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_interphalangeal6"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("l_carpal_distal_interphalangeal_5")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                                          value : new SFString("0.19480000436306 0.727699995040894 -0.101700000464916")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx6"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("l_carpal_distal_phalanx_5")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx_5_tip_2"),
                                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                                          value : new SFString("l_carpal_distal_phalanx_5_tip")}),

                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                                                          value : new SFString("0.201399996876717 0.700900018215179 -0.101199999451637")})])})])})])})])})])}),

                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_l_pinky_middle_2"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("l_pinky_middle")})])})])})])}),

                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_l_pinky_proximal_2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("l_pinky_proximal")})])})])})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_pinky_metacarpal_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_pinky_metacarpal")})])})])})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                              DEF : new SFString("hanim_l_hand_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("l_hand")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_metacarpal_phalanx3"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_metacarpal_phalanx_2")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                          value : new SFString("0.200900003314018 0.813899993896484 -0.023700000718236")})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_ulnar_styloid_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_ulnar_styloid")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                          value : new SFString("-0.214200004935265 0.85290002822876 -0.064800001680851")})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_l_metacarpal_phalanx6"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("l_metacarpal_phalanx_5")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                          value : new SFString("0.192900002002716 0.78600001335144 -0.112199999392033")})])})])})])})])})])}),

                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                      DEF : new SFString("hanim_l_forearm_2"),
                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                          value : new SFString("l_forearm")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                              DEF : new SFString("hanim_l_radial_styloid_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("l_radial_styloid")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                  value : new SFString("0.190099999308586 0.864499986171722 -0.0414999984204769")})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                              DEF : new SFString("hanim_l_olecranon_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("l_olecranon")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                  value : new SFString("-0.196199998259544 1.13750004768372 -0.112300001084805")})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                              DEF : new SFString("hanim_l_humeral_medial_epicondyles_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("l_humeral_medial_epicondyles")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                  value : new SFString("0.173500001430511 1.12720000743866 -0.111299999058247")})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                              DEF : new SFString("hanim_l_radiale_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("l_radiale")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                  value : new SFString("0.218199998140335 1.12119996547699 -0.116700001060963")})])})])})])})])})])}),

                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                              DEF : new SFString("hanim_l_upperarm_2"),
                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                  value : new SFString("l_upperarm")}),

                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                      DEF : new SFString("hanim_l_humeral_lateral_epicondyles_2"),
                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                          value : new SFString("l_humeral_lateral_epicondyles")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                          value : new SFString("0.228000000119209 1.14820003509521 -0.109999999403954")})])})])})])})])})])}),

                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                      DEF : new SFString("hanim_l_scapula_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("l_scapula")})])})])})])}),

                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                              DEF : new SFString("hanim_l_clavicle_2"),
                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                  value : new SFString("l_clavicle")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                      DEF : new SFString("hanim_l_clavicale_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("l_clavicale")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                          value : new SFString("0.0271000005304813 1.49430000782013 0.0394000001251698")})])}),

                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                      DEF : new SFString("hanim_l_acromion_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("l_acromion")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                          value : new SFString("0.203199997544289 1.47599995136261 -0.0489999987185001")})])}),

                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                      DEF : new SFString("hanim_l_axilla_proximal_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("l_axilla_proximal")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                          value : new SFString("0.177699998021126 1.40649998188019 -0.00749999983236194")})])}),

                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                      DEF : new SFString("hanim_l_axilla_distal_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("l_axilla_distal")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                          value : new SFString("0.17059999704361 1.40719997882843 -0.0874999985098839")})])})])})])})])})])}),

                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                      DEF : new SFString("hanim_r_sternoclavicular_2"),
                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                          value : new SFString("r_sternoclavicular")}),

                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                          value : new SFString("-0.0693999975919724 1.46000003814697 -0.0329999998211861")}),

                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                              DEF : new SFString("hanim_r_acromioclavicular_2"),
                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                  value : new SFString("r_acromioclavicular")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                  value : new SFString("-0.0835999995470047 1.42809998989105 -0.0401000007987022")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                      DEF : new SFString("hanim_r_shoulder_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("r_shoulder")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                          value : new SFString("-0.190699994564056 1.4407000541687 -0.0324999988079071")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                              DEF : new SFString("hanim_r_elbow_2"),
                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                  value : new SFString("r_elbow")}),

                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                  value : new SFString("-0.194900006055832 1.13880002498627 -0.061999998986721")}),

                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                      DEF : new SFString("hanim_r_radiocarpal_2"),
                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                          value : new SFString("r_radiocarpal")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                          value : new SFString("-0.195899993181229 0.869400024414063 -0.0520999990403652")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpometacarpal2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("r_carpometacarpal_1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                  value : new SFString("-0.189899995923042 0.850199997425079 -0.0472999997437")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_metacarpophalangeal_1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                          value : new SFString("-0.187399998307228 0.825600028038025 0.0306000001728535")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpal_interphalangeal2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("r_carpal_interphalangeal_1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                                  value : new SFString("-0.18639999628067 0.819000005722046 0.0505999997258186")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx2"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("r_carpal_distal_phalanx_1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_1_tip_2"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("r_carpal_distal_phalanx_1_tip")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                                                  value : new SFString("-0.18690000474453 0.809000015258789 0.0820000022649765")})])})])})])})])})])}),

                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_r_index_proximal_2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("r_index_proximal")})])})])})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_index_proximal_4"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_index_proximal")})])})])})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpometacarpal3"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("r_carpometacarpal_2")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                  value : new SFString("-0.196099996566772 0.805499970912933 -0.0218000002205372")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal3"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_metacarpophalangeal_2")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                          value : new SFString("-0.196099996566772 0.784600019454956 -0.0218000002205372")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpal_proximal_interphalangeal3"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("r_carpal_proximal_interphalangeal_2")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                                  value : new SFString("-0.19539999961853 0.739300012588501 -0.0185000002384186")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_interphalangeal3"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("r_carpal_distal_interphalangeal_2")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                                          value : new SFString("-0.194499999284744 0.716899991035461 -0.0173000004142523")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx3"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("r_carpal_distal_phalanx_2")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx_2_tip_2"),
                                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                                          value : new SFString("r_carpal_distal_phalanx_2_tip")}),

                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                                                          value : new SFString("-0.197999998927116 0.688300013542175 -0.0179999992251396")})])}),

                                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_dactylion_2"),
                                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                                          value : new SFString("r_dactylion")}),

                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                                                          value : new SFString("-0.194100007414818 0.677200019359589 -0.0423000007867813")})])})])})])})])})])}),

                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_index_middle_2"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("r_index_middle")})])})])})])}),

                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_r_index_proximal_6"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("r_index_proximal")})])})])})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_index_metacarpal_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_index_metacarpal")})])})])})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpometacarpal4"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("r_carpometacarpal_3")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                  value : new SFString("-0.197200000286102 0.805999994277954 -0.0467999987304211")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal4"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_metacarpophalangeal_3")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                          value : new SFString("-0.197200000286102 0.784900009632111 -0.0467999987304211")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpal_proximal_interphalangeal4"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("r_carpal_proximal_interphalangeal_3")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                                  value : new SFString("-0.194999992847443 0.730400025844574 -0.0441000014543533")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_interphalangeal4"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("r_carpal_distal_interphalangeal_3")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                                          value : new SFString("-0.193900004029274 0.704200029373169 -0.0432000011205673")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx4"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("r_carpal_distal_phalanx_3")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx_3_tip_2"),
                                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                                          value : new SFString("r_carpal_distal_phalanx_3_tip")}),

                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                                                          value : new SFString("-0.196899995207787 0.675800025463104 -0.0427000001072884")})])})])})])})])})])}),

                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_middle_middle_2"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("r_middle_middle")})])})])})])}),

                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_r_middle_proximal_2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("r_middle_proximal")})])})])})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_middle_metacarpal_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_middle_metacarpal")})])})])})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpometacarpal5"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("r_carpometacarpal_4")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                  value : new SFString("-0.195099994540215 0.804899990558624 -0.0732000023126602")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal5"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_metacarpophalangeal_4")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                          value : new SFString("-0.195099994540215 0.784500002861023 -0.0732000023126602")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpal_proximal_interphalangeal5"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("r_carpal_proximal_interphalangeal_4")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                                  value : new SFString("-0.19200000166893 0.731800019741058 -0.0715999975800514")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_interphalangeal5"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("r_carpal_distal_interphalangeal_4")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                                          value : new SFString("-0.190799996256828 0.70770001411438 -0.0706000030040741")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx5"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("r_carpal_distal_phalanx_4")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx_4_tip_2"),
                                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                                          value : new SFString("r_carpal_distal_phalanx_4_tip")}),

                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                                                          value : new SFString("-0.193399995565414 0.677799999713898 -0.069300003349781")})])})])})])})])})])}),

                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_ring_middle_2"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("r_ring_middle")})])})])})])}),

                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_r_ring_proximal_2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("r_ring_proximal")})])})])})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_ring_metacarpal_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_ring_metacarpal")})])})])})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpometacarpal6"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("r_carpometacarpal_5")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                  value : new SFString("-0.1925999969244 0.809599995613098 -0.0974999964237213")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal6"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_metacarpophalangeal_5")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                          value : new SFString("-0.1925999969244 0.789600014686584 -0.0974999964237213")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Joint"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpal_proximal_interphalangeal6"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("stiffness"),
                                                                                                                                                                                                                                  value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("r_carpal_proximal_interphalangeal_5")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("center"),
                                                                                                                                                                                                                                  value : new SFString("-0.190200001001358 0.748300015926361 -0.0962999984622002")}),

                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Joint"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_interphalangeal6"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("stiffness"),
                                                                                                                                                                                                                                          value : new SFString("1 1 1")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("r_carpal_distal_interphalangeal_5")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("center"),
                                                                                                                                                                                                                                          value : new SFString("-0.190799996256828 0.754000008106232 -0.096000000834465")}),

                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx6"),
                                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                                  value : new SFString("r_carpal_distal_phalanx_5")}),

                                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx_5_tip_2"),
                                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                                          value : new SFString("r_carpal_distal_phalanx_5_tip")}),

                                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                                                          value : new SFString("-0.193800002336502 0.703499972820282 -0.0948999971151352")})])})])})])})])})])}),

                                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                                      DEF : new SFString("hanim_r_pinky_middle_2"),
                                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                                          value : new SFString("r_pinky_middle")})])})])})])}),

                                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                                              DEF : new SFString("hanim_r_pinky_proximal_2"),
                                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                                  value : new SFString("r_pinky_proximal")})])})])})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_pinky_metacarpal_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_pinky_metacarpal")})])})])})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                                              DEF : new SFString("hanim_r_hand_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("r_hand")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_metacarpal_phalanx3"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_metacarpal_phalanx_2")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                          value : new SFString("-0.197699993848801 0.816900014877319 -0.0176999997347593")})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_ulnar_styloid_2"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_ulnar_styloid")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                          value : new SFString("-0.21170000731945 0.856199979782104 -0.0584000013768673")})])}),

                                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                                      DEF : new SFString("hanim_r_metacarpal_phalanx6"),
                                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                                          value : new SFString("r_metacarpal_phalanx_5")}),

                                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                                          value : new SFString("-0.192900002002716 0.788999974727631 -0.10639999806881")})])})])})])})])})])}),

                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                                      DEF : new SFString("hanim_r_forearm_2"),
                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                          value : new SFString("r_forearm")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                              DEF : new SFString("hanim_r_radial_styloid_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("r_radial_styloid")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                  value : new SFString("-0.188400000333786 0.86760002374649 -0.0359999984502792")})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                              DEF : new SFString("hanim_r_olecranon_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("r_olecranon")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                  value : new SFString("-0.190699994564056 1.14049994945526 -0.106499999761581")})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                              DEF : new SFString("hanim_r_humeral_medial_epicondyles_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("r_humeral_medial_epicondyles")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                  value : new SFString("-0.167999997735024 1.12979996204376 -0.106200002133846")})])}),

                                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                                                              DEF : new SFString("hanim_r_radiale_2"),
                                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                                  value : new SFString("r_radiale")}),

                                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                                                  value : new SFString("-0.212999999523163 1.130499958992 -0.109099999070168")})])})])})])})])})])}),

                                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                                              DEF : new SFString("hanim_r_upperarm_2"),
                                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                                  value : new SFString("r_upperarm")}),

                                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                                      DEF : new SFString("hanim_r_humeral_lateral_epicondyles_2"),
                                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                                          value : new SFString("r_humeral_lateral_epicondyles")}),

                                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                                          value : new SFString("-0.222399994730949 1.15170001983643 -0.103299997746944")})])})])})])})])})])}),

                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                                      DEF : new SFString("hanim_r_scapula_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("r_scapula")})])})])})])}),

                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                                              DEF : new SFString("hanim_r_clavicle_2"),
                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                  value : new SFString("r_clavicle")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("children"),
                                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                      DEF : new SFString("hanim_r_clavicale_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("r_clavicale")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                          value : new SFString("-0.0115000000223517 1.49430000782013 0.0399999991059303")})])}),

                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                      DEF : new SFString("hanim_r_acromion_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("r_acromion")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                          value : new SFString("-0.190500006079674 1.47909998893738 -0.0430999994277954")})])}),

                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                      DEF : new SFString("hanim_r_axilla_proximal_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("r_axilla_proximal")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                          value : new SFString("-0.162599995732307 1.40719997882843 -0.00310000008903444")})])}),

                                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                                      name : new SFString("Site"),
                                                                                                                                                                                      DEF : new SFString("hanim_r_axilla_distal_2"),
                                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                                          value : new SFString("r_axilla_distal")}),

                                                                                                                                                                                        new fieldValue({
                                                                                                                                                                                          name : new SFString("translation"),
                                                                                                                                                                                          value : new SFString("-0.160300001502037 1.40980005264282 -0.0825999975204468")})])})])})])})])})])}),

                                                                                                                                                                    new ProtoInstance({
                                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                                      DEF : new SFString("hanim_t1_2"),
                                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                                          value : new SFString("t1")}),

                                                                                                                                                                        new fieldValue({
                                                                                                                                                                          name : new SFString("children"),
                                                                                                                                                                          children : new MFNode([
                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                              DEF : new SFString("hanim_suprasternale_2"),
                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                  value : new SFString("suprasternale")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                  value : new SFString("0.00839999970048666 1.47140002250671 0.0551000013947487")})])}),

                                                                                                                                                                            new ProtoInstance({
                                                                                                                                                                              name : new SFString("Site"),
                                                                                                                                                                              DEF : new SFString("hanim_cervicale_2"),
                                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                                  value : new SFString("cervicale")}),

                                                                                                                                                                                new fieldValue({
                                                                                                                                                                                  name : new SFString("translation"),
                                                                                                                                                                                  value : new SFString("0.0063999998383224 1.51999998092651 -0.0815000012516975")})])})])})])})])})])}),

                                                                                                                                                            new ProtoInstance({
                                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                                              DEF : new SFString("hanim_t2_2"),
                                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                                new fieldValue({
                                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                                  value : new SFString("t2")})])})])})])}),

                                                                                                                                                    new ProtoInstance({
                                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                                      DEF : new SFString("hanim_t3_2"),
                                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                                        new fieldValue({
                                                                                                                                                          name : new SFString("name"),
                                                                                                                                                          value : new SFString("t3")})])})])})])}),

                                                                                                                                            new ProtoInstance({
                                                                                                                                              name : new SFString("Segment"),
                                                                                                                                              DEF : new SFString("hanim_t4_2"),
                                                                                                                                              fieldValue : new MFNode([
                                                                                                                                                new fieldValue({
                                                                                                                                                  name : new SFString("name"),
                                                                                                                                                  value : new SFString("t4")})])})])})])}),

                                                                                                                                    new ProtoInstance({
                                                                                                                                      name : new SFString("Segment"),
                                                                                                                                      DEF : new SFString("hanim_t5_2"),
                                                                                                                                      fieldValue : new MFNode([
                                                                                                                                        new fieldValue({
                                                                                                                                          name : new SFString("name"),
                                                                                                                                          value : new SFString("t5")})])})])})])}),

                                                                                                                            new ProtoInstance({
                                                                                                                              name : new SFString("Segment"),
                                                                                                                              DEF : new SFString("hanim_t6_2"),
                                                                                                                              fieldValue : new MFNode([
                                                                                                                                new fieldValue({
                                                                                                                                  name : new SFString("name"),
                                                                                                                                  value : new SFString("t6")})])})])})])}),

                                                                                                                    new ProtoInstance({
                                                                                                                      name : new SFString("Segment"),
                                                                                                                      DEF : new SFString("hanim_t7_2"),
                                                                                                                      fieldValue : new MFNode([
                                                                                                                        new fieldValue({
                                                                                                                          name : new SFString("name"),
                                                                                                                          value : new SFString("t7")})])})])})])}),

                                                                                                            new ProtoInstance({
                                                                                                              name : new SFString("Segment"),
                                                                                                              DEF : new SFString("hanim_t8_2"),
                                                                                                              fieldValue : new MFNode([
                                                                                                                new fieldValue({
                                                                                                                  name : new SFString("name"),
                                                                                                                  value : new SFString("t8")})])})])})])}),

                                                                                                    new ProtoInstance({
                                                                                                      name : new SFString("Segment"),
                                                                                                      DEF : new SFString("hanim_t9_2"),
                                                                                                      fieldValue : new MFNode([
                                                                                                        new fieldValue({
                                                                                                          name : new SFString("name"),
                                                                                                          value : new SFString("t9")}),

                                                                                                        new fieldValue({
                                                                                                          name : new SFString("children"),
                                                                                                          children : new MFNode([
                                                                                                            new ProtoInstance({
                                                                                                              name : new SFString("Site"),
                                                                                                              DEF : new SFString("hanim_r_thelion_2"),
                                                                                                              fieldValue : new MFNode([
                                                                                                                new fieldValue({
                                                                                                                  name : new SFString("name"),
                                                                                                                  value : new SFString("r_thelion")}),

                                                                                                                new fieldValue({
                                                                                                                  name : new SFString("translation"),
                                                                                                                  value : new SFString("-0.0736000016331673 1.33850002288818 0.121699996292591")})])}),

                                                                                                            new ProtoInstance({
                                                                                                              name : new SFString("Site"),
                                                                                                              DEF : new SFString("hanim_l_thelion_2"),
                                                                                                              fieldValue : new MFNode([
                                                                                                                new fieldValue({
                                                                                                                  name : new SFString("name"),
                                                                                                                  value : new SFString("l_thelion")}),

                                                                                                                new fieldValue({
                                                                                                                  name : new SFString("translation"),
                                                                                                                  value : new SFString("0.0917999967932701 1.33819997310638 0.119199998676777")})])})])})])})])})])}),

                                                                                            new ProtoInstance({
                                                                                              name : new SFString("Segment"),
                                                                                              DEF : new SFString("hanim_t10_2"),
                                                                                              fieldValue : new MFNode([
                                                                                                new fieldValue({
                                                                                                  name : new SFString("name"),
                                                                                                  value : new SFString("t10")}),

                                                                                                new fieldValue({
                                                                                                  name : new SFString("children"),
                                                                                                  children : new MFNode([
                                                                                                    new ProtoInstance({
                                                                                                      name : new SFString("Site"),
                                                                                                      DEF : new SFString("hanim_substernale_2"),
                                                                                                      fieldValue : new MFNode([
                                                                                                        new fieldValue({
                                                                                                          name : new SFString("name"),
                                                                                                          value : new SFString("substernale")}),

                                                                                                        new fieldValue({
                                                                                                          name : new SFString("translation"),
                                                                                                          value : new SFString("0.008500000461936 1.29949998855591 0.114699997007847")})])})])})])})])})])}),

                                                                                    new ProtoInstance({
                                                                                      name : new SFString("Segment"),
                                                                                      DEF : new SFString("hanim_t11_2"),
                                                                                      fieldValue : new MFNode([
                                                                                        new fieldValue({
                                                                                          name : new SFString("name"),
                                                                                          value : new SFString("t11")})])})])})])}),

                                                                            new ProtoInstance({
                                                                              name : new SFString("Segment"),
                                                                              DEF : new SFString("hanim_t12_2"),
                                                                              fieldValue : new MFNode([
                                                                                new fieldValue({
                                                                                  name : new SFString("name"),
                                                                                  value : new SFString("t12")})])})])})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Segment"),
                                                                      DEF : new SFString("hanim_l1_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l1")})])})])})])}),

                                                            new ProtoInstance({
                                                              name : new SFString("Segment"),
                                                              DEF : new SFString("hanim_l2_2"),
                                                              fieldValue : new MFNode([
                                                                new fieldValue({
                                                                  name : new SFString("name"),
                                                                  value : new SFString("l2")}),

                                                                new fieldValue({
                                                                  name : new SFString("children"),
                                                                  children : new MFNode([
                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_r_rib10_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("r_rib10")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("-0.0710999965667725 1.19410002231598 0.101599998772144")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_l_rib10_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("l_rib10")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.0870999991893768 1.19249999523163 0.099200002849102")})])}),

                                                                    new ProtoInstance({
                                                                      name : new SFString("Site"),
                                                                      DEF : new SFString("hanim_spine_2_lower_back_2"),
                                                                      fieldValue : new MFNode([
                                                                        new fieldValue({
                                                                          name : new SFString("name"),
                                                                          value : new SFString("spine_2_lower_back")}),

                                                                        new fieldValue({
                                                                          name : new SFString("translation"),
                                                                          value : new SFString("0.00490000005811453 1.19079995155334 -0.111299999058247")})])})])})])})])})])}),

                                                    new ProtoInstance({
                                                      name : new SFString("Segment"),
                                                      DEF : new SFString("hanim_l3_2"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("name"),
                                                          value : new SFString("l3")})])})])})])}),

                                            new ProtoInstance({
                                              name : new SFString("Segment"),
                                              DEF : new SFString("hanim_l4_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("l4")})])})])})])}),

                                    new ProtoInstance({
                                      name : new SFString("Segment"),
                                      DEF : new SFString("hanim_l5_2"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("name"),
                                          value : new SFString("l5")}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_waist_preferred_posterior_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("waist_preferred_posterior")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.28999999165535 1.09150004386902 -0.109099999070168")})])}),

                                            new ProtoInstance({
                                              name : new SFString("Site"),
                                              DEF : new SFString("hanim_navel_2"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("name"),
                                                  value : new SFString("navel")}),

                                                new fieldValue({
                                                  name : new SFString("translation"),
                                                  value : new SFString("0.00689999992027879 1.09660005569458 0.101700000464916")})])})])})])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Segment"),
                              DEF : new SFString("hanim_sacrum_2"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("name"),
                                  value : new SFString("sacrum")})])})])})])})])}),

                new fieldValue({
                  name : new SFString("joints"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("hanim_humanoid_root_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_sacroiliac_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_hip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_knee_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_talocrural_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_tarsotarsal_interphalangeal__2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_metatarsophalangeal__2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_tarsal_interphalangeal__2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_hip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_knee_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_talocrural_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_tarsotarsal_interphalangeal__2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_metatarsophalangeal__2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_tarsal_interphalangeal__2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vl5_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vl4_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vl3_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vl2_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vl1_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt12_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt11_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt10_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt9_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt8_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt7_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt6_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt5_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt4_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt3_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt2_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vt1_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vc7_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vc6_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vc5_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vc4_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vc3_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vc2_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_vc1_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_skullbase_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_eyeball_4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_eyeball_4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_sternoclavicular_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_acromioclavicular_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_shoulder_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_elbow_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_radiocarpal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpometacarpal2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_metacarpophalangeal2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_interphalangeal2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpometacarpal3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_metacarpophalangeal3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_proximal_interphalangeal3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_interphalangeal3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpometacarpal4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_metacarpophalangeal4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_proximal_interphalangeal4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_interphalangeal4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpometacarpal5")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_metacarpophalangeal5")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_proximal_interphalangeal5")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_interphalangeal5")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpometacarpal6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_metacarpophalangeal6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_proximal_interphalangeal6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_interphalangeal6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_sternoclavicular_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_acromioclavicular_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_shoulder_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_elbow_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_radiocarpal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpometacarpal2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_metacarpophalangeal2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_interphalangeal2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpometacarpal3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_metacarpophalangeal3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_proximal_interphalangeal3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_interphalangeal3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpometacarpal4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_metacarpophalangeal4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_proximal_interphalangeal4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_interphalangeal4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpometacarpal5")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_metacarpophalangeal5")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_proximal_interphalangeal5")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_interphalangeal5")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpometacarpal6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_metacarpophalangeal6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_proximal_interphalangeal6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_interphalangeal6")})])}),

                new fieldValue({
                  name : new SFString("sites"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("hanim_l_tarsal_distal_phalanx_1_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_tarsal_interphalangeal_phalanx6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_tarsal_distal_phalanx3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_tarsal_interphalangeal_phalanx2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_lateral_malleolus_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_medial_malleolus_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_sphyrion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_calcaneus_posterior_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_knee_crease_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_femoral_lateral_epicondyles_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_femoral_medial_epicondyles_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_tarsal_distal_phalanx_1_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_tarsal_interphalangeal_phalanx6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_tarsal_distal_phalanx3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_tarsal_interphalangeal_phalanx2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_lateral_malleolus_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_medial_malleolus_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_sphyrion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_calcaneus_posterior_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_knee_crease_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_femoral_lateral_epicondyles_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_femoral_medial_epicondyles_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_iliocristale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_trochanterion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_iliocristale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_trochanterion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_asis_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_asis_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_psis_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_psis_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_crotch_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_skull_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_sellion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_infraorbitale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_infraorbitale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_supramenton_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_tragion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_gonion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_tragion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_gonion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_nuchale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_neck_base_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_neck_base_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_phalanx_1_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_phalanx_2_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_dactylion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_phalanx_3_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_phalanx_4_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_phalanx_5_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_metacarpal_phalanx3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_ulnar_styloid_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_metacarpal_phalanx6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_radial_styloid_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_olecranon_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_humeral_medial_epicondyles_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_radiale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_humeral_lateral_epicondyles_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_clavicale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_acromion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_axilla_proximal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_axilla_distal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_phalanx_1_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_phalanx_2_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_dactylion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_phalanx_3_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_phalanx_4_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_phalanx_5_tip_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_metacarpal_phalanx3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_ulnar_styloid_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_metacarpal_phalanx6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_radial_styloid_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_olecranon_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_humeral_medial_epicondyles_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_radiale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_humeral_lateral_epicondyles_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_clavicale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_acromion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_axilla_proximal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_axilla_distal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_suprasternale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_cervicale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_thelion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_thelion_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_substernale_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_rib10_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_rib10_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_spine_2_lower_back_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_waist_preferred_posterior_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_navel_2")})])}),

                new fieldValue({
                  name : new SFString("segments"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("hanim_l_tarsal_distal_phalanx2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_middistal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_midproximal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_hindfoot_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_calf_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_thigh_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_tarsal_distal_phalanx2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_middistal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_midproximal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_hindfoot_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_calf_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_thigh_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_pelvis_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_eyeball_4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_eyeball_4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_skull_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_c1_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_c2_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_c3_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_c4_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_c5_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_c6_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_c7_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_phalanx2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_index_proximal_6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_index_proximal_6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_phalanx3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_index_middle_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_index_proximal_6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_index_metacarpal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_phalanx4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_middle_middle_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_middle_proximal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_middle_metacarpal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_phalanx5")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_ring_middle_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_ring_proximal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_ring_metacarpal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_carpal_distal_phalanx6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_pinky_middle_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_pinky_proximal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_pinky_metacarpal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_hand_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_forearm_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_upperarm_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_scapula_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l_clavicle_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_phalanx2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_index_proximal_6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_index_proximal_6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_phalanx3")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_index_middle_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_index_proximal_6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_index_metacarpal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_phalanx4")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_middle_middle_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_middle_proximal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_middle_metacarpal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_phalanx5")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_ring_middle_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_ring_proximal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_ring_metacarpal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_carpal_distal_phalanx6")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_pinky_middle_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_pinky_proximal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_pinky_metacarpal_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_hand_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_forearm_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_upperarm_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_scapula_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_r_clavicle_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t1_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t2_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t3_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t4_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t5_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t6_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t7_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t8_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t9_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t10_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t11_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_t12_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l1_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l2_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l3_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l4_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_l5_2")}),

                    new ProtoInstance({
                      USE : new SFString("hanim_sacrum_2")})])}),

                new fieldValue({
                  name : new SFString("name"),
                  value : new SFString("humanoid")}),

                new fieldValue({
                  name : new SFString("info"),
                  value : new SFString("\"authorName=Matthew T. Beitler\" \"authorEmail=beitler@cis.upenn.edu or beitler@acm.org\" \"creationDate=05/12/99\" \"copyright=Copyright 1999-2003, Matthew T. Beitler\" \"humanoidVersion=JointCenters 200x, LOA&#8209;3\" \"usageRestrictions= PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED, PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided 'as-is' and without warranty of any kind, express, implied or otherwise, including without limitation, any warranty of merchantability or fitness for a particular purpose.\" \"modificationDate=08/12/03\"")})])}),

            new Group({
              DEF : new SFString("JointCenters_WorldInfo"),
              children : new MFNode([
                new WorldInfo({
                  title : new SFString("HANIM 200x Default Joint Centers, LOA&#8209;3"),
                  info : new MFString([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 --------------------------------------------------------- HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://H-Anim.org/Specifications/H-Anim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human modelling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])})])}),

            new NavigationInfo({
              avatarSize : new MFFloat([0.25,1.60000002384186,0.75]),
              speed : new SFFloat(1.5)})])}))});
console.log(X3D0.toXMLNode());