'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { PixelTexture } from './x3d.mjs';
import { SFImage } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { IndexedFaceSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("indexedfaceset_pixeltexture_entire.x3d")}),

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
              content : new SFString("13 January 2014")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d")}),

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
            new Viewpoint({
              description : new SFString("Front View")}),

            new Viewpoint({
              description : new SFString("Rear View"),
              orientation : new SFRotation([0,1,0,3.14]),
              position : new SFVec3f([0,0,-10])}),

            new Viewpoint({
              description : new SFString("Top View"),
              orientation : new SFRotation([1,0,0,-1.57]),
              position : new SFVec3f([0,10,0])}),

            new Viewpoint({
              description : new SFString("Bottom View"),
              orientation : new SFRotation([1,0,0,1.57]),
              position : new SFVec3f([0,-10,0])}),

            new Viewpoint({
              description : new SFString("Right View"),
              orientation : new SFRotation([0,1,0,1.57]),
              position : new SFVec3f([10,0,0])}),

            new Viewpoint({
              description : new SFString("Left View"),
              orientation : new SFRotation([0,1,0,-1.57]),
              position : new SFVec3f([-10,0,0])}),

            new NavigationInfo({
              type : ["EXAMINE","WALK","FLY","ANY"]}),

            new Shape({
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({})),
                  texture : new SFNode(
                    new PixelTexture({
                      image : new SFImage([2,2,4,4278190335,16711935,4294967295,4294902015]),
                      repeatS : new SFBool(false),
                      repeatT : new SFBool(false)}))})),
              geometry : new SFNode(
                new IndexedFaceSet({
                  coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]),
                  coord : new SFNode(
                    new Coordinate({
                      point : new MFVec3f([-2,1.5,1,-2,-1.5,1,2,1.5,1,2,-1.5,1,2,1.5,-1,2,-1.5,-1,-2,1.5,-1,-2,-1.5,-1])}))}))})])}))});
console.log(X3D0.toXMLNode());
