'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { ExternProtoDeclare } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { Collision } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { fieldValue } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { OrientationInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFRotation } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { Inline } from './x3d.mjs';
import { IMPORT } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Geospatial"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("NURBS"),
              level : new SFInt32(2)})),
          component : new SFNode(
            new component({
              name : new SFString("Core"),
              level : new SFInt32(2)})),
          component : new SFNode(
            new component({
              name : new SFString("Navigation"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Text"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("X3dHeaderPrototypeSyntaxExamples.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding.")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("14 October 2002")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("27 May 2017")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("specificationSection"),
              content : new SFString("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax")}),

            new meta({
              name : new SFString("specificationUrl"),
              content : new SFString("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("ViewPositionOrientation"),
              url : new MFString(["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("traceEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_traceEnabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("position_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("orientation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("outputViewpointString"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ProtoDeclare({
              name : new SFString("NewWorldInfoNode"),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new WorldInfo({
                      DEF : new SFString("ExamplePrototypeBody")})])}))}),

            new ProtoInstance({
              name : new SFString("NewWorldInfoNode")}),

            new ProtoDeclare({
              name : new SFString("EmissiveMaterial"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("onlyColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  /*Override default diffuseColor value 0.8 0.8 0.8*/
                  children : new MFNode([
                    new Material({
                      diffuseColor : new SFColor([0,0,0]),
                      /*Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.*/
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("emissiveColor"),
                              protoField : new SFString("onlyColor")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("ShiftGroupUp2m"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("DefaultNodeValue"),
                          bboxSize : new SFVec3f([2,2,2]),
                          /*Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\"*/})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,2,0]),
                      children : new MFNode([
                        new Group({
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("children"),
                                  protoField : new SFString("children")})])}))})])})])}))}),

            new ProtoInstance({
              name : new SFString("ShiftGroupUp2m")}),
          /*====================*/

            new Viewpoint({
              DEF : new SFString("ExampleSingleElement"),
              description : new SFString("Hello syntax")}),

            new Group({
              DEF : new SFString("ExampleChildElement"),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Box({})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.6,0.4,0.2])}))}))})])}),

            new Transform({
              DEF : new SFString("TransformExampleUSE"),
              rotation : new SFRotation([0,1,0,0.78]),
              translation : new SFVec3f([0,2.5,0]),
              children : new MFNode([
                new Group({
                  USE : new SFString("ExampleChildElement")})])}),

            new Collision({
              proxy : new SFNode(
                new Shape({
                  /*note that Collision proxy Shape is not rendered*/
                  geometry : new SFNode(
                    new Sphere({})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))}))})),
              proxy : new SFNode(
                new Group({
                  USE : new SFString("ExampleChildElement")}))}),

            new Transform({
              translation : new SFVec3f([0,-2.5,0]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      shaders : new SFNode(
                        new ProtoInstance({
                          name : new SFString("EmissiveMaterial"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("onlyColor"),
                              value : new SFString("0.2 0.6 0.6")})])}))})),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          justify : new MFString(["MIDDLE","MIDDLE"]),
                          size : new SFFloat(0.6)}))}))})])}),

            new ProtoInstance({
              name : new SFString("ViewPositionOrientation"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("enabled"),
                  value : new SFString("true")})])}),

            new TimeSensor({
              DEF : new SFString("Clock"),
              cycleInterval : new SFTime(4),
              loop : new SFBool(true)}),

            new OrientationInterpolator({
              DEF : new SFString("Spinner"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFRotation([0,1,0,0,0,1,0,3.14159,0,1,0,6.28318])}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Spinner")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Spinner"),
              toField : new SFString("rotation"),
              toNode : new SFString("TransformExampleUSE")}),

            new Inline({
              DEF : new SFString("someInline"),
              url : new MFString(["someUrl.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"])}),

            new IMPORT({
              aS : new SFString("someInlineRoot"),
              importedDEF : new SFString("someName"),
              inlineDEF : new SFString("someInline")}),

            new PositionInterpolator({
              DEF : new SFString("StayInPlace"),
              key : new MFFloat([0,1]),
              keyValue : new MFVec3f([0,0,0,0,0,0])}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("StayInPlace")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("StayInPlace"),
              toField : new SFString("set_translation"),
              toNode : new SFString("someInlineRoot")})])}))});
console.log(X3D0.toXMLNode());
