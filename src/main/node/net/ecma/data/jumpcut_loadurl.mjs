'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { TouchSensor } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("jumpcut_loadurl.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.nist.gov/vrml.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("http://www.itl.nist.gov/div897/ctg/vrml/members.html")}),

            new meta({
              name : new SFString("disclaimer"),
              content : new SFString("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Michael Kass NIST, Don Brutzman NPS")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("21 January 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("jumpcut_loadurl.x3d")}),

            new Background({
              groundAngle : new MFFloat([1.57]),
              groundColor : new MFColor([0,0.5,0,0,0.5,0]),
              skyColor : new MFColor([0,0,1])}),

            new NavigationInfo({
              type : ["EXAMINE","WALK","FLY","ANY"]}),

            new Viewpoint({
              DEF : new SFString("Front_View"),
              description : new SFString("Front View")}),

            new Viewpoint({
              DEF : new SFString("Top_View"),
              description : new SFString("Top View"),
              orientation : new SFRotation([1,0,0,-1.57]),
              position : new SFVec3f([0,10,0])}),

            new TouchSensor({
              DEF : new SFString("STARTER"),
              description : new SFString("touch to activate")}),

            new Transform({
              DEF : new SFString("ROOT"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new Box({}))})])}),

            new Script({
              DEF : new SFString("MYSCRIPT"),
              url : new MFString(["jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("myParameter"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("\"Top_View\"")}),

                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("myUrl"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\"")}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("trigger_event"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)})])}),

            new ROUTE({
              fromField : new SFString("isActive"),
              fromNode : new SFString("STARTER"),
              toField : new SFString("trigger_event"),
              toNode : new SFString("MYSCRIPT")})])}))});
console.log(X3D0.toXMLNode());
