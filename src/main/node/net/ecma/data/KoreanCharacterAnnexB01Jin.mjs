'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { OrientationInterpolator } from './x3d.mjs';
import { MFRotation } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("KoreanCharacterAnnexB01Jin.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Jin Hoon Lee and Min Joo Lee")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Chul Hee Jung and Myeong Won Lee")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("31 March 2011")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("1 November 2014")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("29 December 2014")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("KoreanCharacter00ReadMe.txt")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("KoreanCharacterHumanMotion_Infotech2014_140706.pdf")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("KoreanCharactersIllustrated.pdf")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/KoreanCharacterAnnexB01Jin.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Suwon HAnim Converter")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Gnu Image Manipulation Program, http://www.gimp.org")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              speed : new SFFloat(1.5)}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,1,0]),
              description : new SFString("AnnexB01Jin"),
              position : new SFVec3f([0,1,3])}),

            new Group({
              DEF : new SFString("KeyframeAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("KeyframeTimer"),
                  cycleInterval : new SFTime(8.033494),
                  loop : new SFBool(true)}),

                new PositionInterpolator({
                  DEF : new SFString("Keyframe_HumanoidRoot"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_HumanoidRoot"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_sacroiliac"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_l_shoulder"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,0,0,-1,0,0,3,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_l_elbow"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_l_radiocarpal"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_r_shoulder"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,0,0,-1,0,0,3,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_r_elbow"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_r_radiocarpal"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_vl5"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_skullbase"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_l_hip"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_l_knee"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_l_talocrural"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_l_metatarsophalangeal"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_r_hip"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_r_knee"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_r_talocrural"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Keyframe_r_metatarsophalangeal"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_HumanoidRoot")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_HumanoidRoot")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_l_shoulder")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_l_elbow")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_l_radiocarpal")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_r_shoulder")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_r_elbow")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_r_radiocarpal")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_vl5")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_skullbase")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_l_hip")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_l_knee")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_l_talocrural")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_l_metatarsophalangeal")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_r_hip")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_r_knee")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_r_talocrural")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KeyframeTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Keyframe_r_metatarsophalangeal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_HumanoidRoot"),
                  toField : new SFString("translation"),
                  toNode : new SFString("hanim_HumanoidRoot")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_HumanoidRoot"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_HumanoidRoot")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_sacroiliac"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_l_shoulder"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_l_elbow"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_l_radiocarpal"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_radiocarpal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_r_shoulder"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_r_elbow"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_r_radiocarpal"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_radiocarpal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_vl5"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_skullbase"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_skullbase")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_l_hip"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_l_knee"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_l_talocrural"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_talocrural")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_l_talocrural"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_metatarsophalangeal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_r_hip"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_r_knee"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_l_talocrural"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_talocrural")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Keyframe_l_talocrural"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_metatarsophalangeal")})])})])}))});
console.log(X3D0.toXMLNode());
