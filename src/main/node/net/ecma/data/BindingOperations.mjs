'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { TouchSensor } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { IntegerSequencer } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { X3DScript } from './x3d.mjs';
import { field } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("BindingOperations.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("5 January 2008")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("22 July 2013")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("BindingOperations.console.txt")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("BindingStackOperations.png")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("X3D for Web Authors, Section 2.5.1, Figure 4.1")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://X3dGraphics.com")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.web3d.org/x3d/content/examples/X3dResources.html")}),

            new meta({
              name : new SFString("rights"),
              content : new SFString("Copyright Don Brutzman and Leonard Daly 2007")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              DEF : new SFString("View1"),
              centerOfRotation : new SFVec3f([-6,0,0]),
              description : new SFString("Viewpoint 1"),
              position : new SFVec3f([-6,0,5])}),

            new Viewpoint({
              DEF : new SFString("View2"),
              centerOfRotation : new SFVec3f([-2,0,0]),
              description : new SFString("Viewpoint 2"),
              position : new SFVec3f([-2,0,5])}),

            new Viewpoint({
              DEF : new SFString("View3"),
              centerOfRotation : new SFVec3f([2,0,0]),
              description : new SFString("Viewpoint 3"),
              position : new SFVec3f([2,0,5])}),

            new Viewpoint({
              DEF : new SFString("View4"),
              centerOfRotation : new SFVec3f([6,0,0]),
              description : new SFString("Viewpoint 4"),
              position : new SFVec3f([6,0,5])}),
          { "#comment" : new CommentsBlock("Script initialization ought to first bind view5 below.") },

            new Group({
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Text1"),
                  translation : new SFVec3f([-6,0,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Shape({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["View","# 1"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              DEF : new SFString("CenterJustify"),
                              justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,0,0])}))}))})])}),

                new Transform({
                  DEF : new SFString("Text2"),
                  translation : new SFVec3f([-2,0,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Shape({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["View","# 2"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("CenterJustify")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,1,0])}))}))})])}),

                new Transform({
                  DEF : new SFString("Text3"),
                  translation : new SFVec3f([2,0,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Shape({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["View","# 3"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("CenterJustify")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1])}))}))})])}),

                new Transform({
                  DEF : new SFString("Text4"),
                  translation : new SFVec3f([6,0,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Shape({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["View","# 4"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              USE : new SFString("CenterJustify")}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({}))}))})])})])}),
          { "#comment" : new CommentsBlock("The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9.") },
          { "#comment" : new CommentsBlock("It does not need to be studied in this chapter.") },

            new Transform({
              translation : new SFVec3f([0,-3,8]),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              { "#comment" : new CommentsBlock("notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script.") },
              children : new MFNode([
                new Viewpoint({
                  DEF : new SFString("ClickToAnimateView"),
                  description : new SFString("Select animation sequence"),
                  position : new SFVec3f([0,0,7])}),

                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Click here to animate"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          justify : new MFString(["MIDDLE","BEGIN"])}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.8,0.4,0])}))}))}),

                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([7,1,0.02]),
                      solid : new SFBool(true)})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(1)}))}))}),

                new TouchSensor({
                  DEF : new SFString("TextTouchSensor"),
                  description : new SFString("Click to begin animating viewpoint selections")}),

                new TimeSensor({
                  DEF : new SFString("Clock"),
                  cycleInterval : new SFTime(10)}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("TextTouchSensor"),
                  toField : new SFString("set_startTime"),
                  toNode : new SFString("Clock")}),

                new IntegerSequencer({
                  DEF : new SFString("TimingSequencer"),
                  key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]),
                  keyValue : new MFInt32([0,1,2,3,4,5,6,7,8,10])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("Clock"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("TimingSequencer")}),
              { "#comment" : new CommentsBlock("drive Script with TimeSensor clock") },

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("TimingSequencer"),
                  toField : new SFString("set_timeEvent"),
                  toNode : new SFString("BindingSequencerEngine")}),
              { "#comment" : new CommentsBlock("Script will bind and unbind Viewpoint nodes") },

                new ROUTE({
                  fromField : new SFString("bindView1"),
                  fromNode : new SFString("BindingSequencerEngine"),
                  toField : new SFString("set_bind"),
                  toNode : new SFString("View1")}),

                new ROUTE({
                  fromField : new SFString("bindView2"),
                  fromNode : new SFString("BindingSequencerEngine"),
                  toField : new SFString("set_bind"),
                  toNode : new SFString("View2")}),

                new ROUTE({
                  fromField : new SFString("bindView3"),
                  fromNode : new SFString("BindingSequencerEngine"),
                  toField : new SFString("set_bind"),
                  toNode : new SFString("View3")}),

                new ROUTE({
                  fromField : new SFString("bindView4"),
                  fromNode : new SFString("BindingSequencerEngine"),
                  toField : new SFString("set_bind"),
                  toNode : new SFString("View4")}),

                new ROUTE({
                  fromField : new SFString("bindView5"),
                  fromNode : new SFString("BindingSequencerEngine"),
                  toField : new SFString("set_bind"),
                  toNode : new SFString("ClickToAnimateView")}),
              { "#comment" : new CommentsBlock("Viewpoint nodes report bind and unbind events") },

                new ROUTE({
                  fromField : new SFString("isBound"),
                  fromNode : new SFString("View1"),
                  toField : new SFString("view1Bound"),
                  toNode : new SFString("BindingSequencerEngine")}),

                new ROUTE({
                  fromField : new SFString("isBound"),
                  fromNode : new SFString("View2"),
                  toField : new SFString("view2Bound"),
                  toNode : new SFString("BindingSequencerEngine")}),

                new ROUTE({
                  fromField : new SFString("isBound"),
                  fromNode : new SFString("View3"),
                  toField : new SFString("view3Bound"),
                  toNode : new SFString("BindingSequencerEngine")}),

                new ROUTE({
                  fromField : new SFString("isBound"),
                  fromNode : new SFString("View4"),
                  toField : new SFString("view4Bound"),
                  toNode : new SFString("BindingSequencerEngine")}),
              X3DScript : new SFNode(
                new X3DScript({
                  DEF : new SFString("BindingSequencerEngine"),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("set_timeEvent"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("bindView1"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("bindView2"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("bindView3"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("bindView4"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("bindView5"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("view1Bound"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("view2Bound"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("view3Bound"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("view4Bound"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("priorInputvalue"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-1")})])}))])})])}))});
console.log(X3D0.toXMLNode());
