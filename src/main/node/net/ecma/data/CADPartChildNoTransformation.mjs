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
import { WorldInfo } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { CADAssembly } from './x3d.mjs';
import { CADPart } from './x3d.mjs';
import { CADFace } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Cylinder } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { IndexedTriangleSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("CADInterchange"),
      version : new SFString("3.1"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("CADGeometry"),
              level : new SFInt32(2)})),
          component : new SFNode(
            new component({
              name : new SFString("EnvironmentalEffects"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("CADPartChildNoTransformation.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Vince Marchetti bushing generation using python scripts")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/member-only/mantis/view.php?id=528")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("This scene is intended for specification development only.")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("29 June 2012")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("CADPartChildNoTransformation.x3d")}),

            new Background({
              skyColor : new MFColor([0.9607843,1,0.9607843])}),

            new Viewpoint({
              description : new SFString("Hello CAD bushing"),
              orientation : new SFRotation([1,0,0,-0.321751]),
              position : new SFVec3f([0,5,15])}),

            new CADAssembly({
              name : new SFString("DesignPatternAssembly"),
              children : new MFNode([
                new CADPart({
                  name : new SFString("CADPartExample"),
                  /*the rotation and translation attributes serve to position the bushing within the assembly*/
                  children : new MFNode([
                    new CADFace({
                      name : new SFString("outerSurface"),
                      shape : new SFNode(
                        new Shape({
                          /*note solid='true' and so one-sided external rendering only*/
                          geometry : new SFNode(
                            new Cylinder({
                              bottom : new SFBool(false),
                              height : new SFFloat(3),
                              radius : new SFFloat(2),
                              top : new SFBool(false)})),
                          appearance : new SFNode(
                            new Appearance({
                              DEF : new SFString("AppearanceGrey"),
                              material : new SFNode(
                                new Material({}))}))}))}),

                    new CADFace({
                      name : new SFString("innerSurface"),
                      shape : new SFNode(
                        new Shape({
                          /*note solid='false' and so two-sided internal + external rendering*/
                          geometry : new SFNode(
                            new Cylinder({
                              bottom : new SFBool(false),
                              height : new SFFloat(3),
                              solid : new SFBool(false),
                              top : new SFBool(false)})),
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("AppearanceGrey")}))}))}),

                    new CADFace({
                      name : new SFString("topCap"),
                      shape : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new IndexedTriangleSet({
                              index : new MFInt32([0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([2,1.5,0,1,1.5,0,1.9616,1.5,0.3902,0.9808,1.5,0.1951,1.8478,1.5,0.7654,0.9239,1.5,0.3827,1.6629,1.5,1.1111,0.8315,1.5,0.5556,1.4142,1.5,1.4142,0.7071,1.5,0.7071,1.1111,1.5,1.6629,0.5556,1.5,0.8315,0.7654,1.5,1.8478,0.3827,1.5,0.9239,0.3902,1.5,1.9616,0.1951,1.5,0.9808,0,1.5,2,0,1.5,1,-0.3902,1.5,1.9616,-0.1951,1.5,0.9808,-0.7654,1.5,1.8478,-0.3827,1.5,0.9239,-1.1111,1.5,1.6629,-0.5556,1.5,0.8315,-1.4142,1.5,1.4142,-0.7071,1.5,0.7071,-1.6629,1.5,1.1111,-0.8315,1.5,0.5556,-1.8478,1.5,0.7654,-0.9239,1.5,0.3827,-1.9616,1.5,0.3902,-0.9808,1.5,0.1951,-2,1.5,0,-1,1.5,0,-1.9616,1.5,-0.3902,-0.9808,1.5,-0.1951,-1.8478,1.5,-0.7654,-0.9239,1.5,-0.3827,-1.6629,1.5,-1.1111,-0.8315,1.5,-0.5556,-1.4142,1.5,-1.4142,-0.7071,1.5,-0.7071,-1.1111,1.5,-1.6629,-0.5556,1.5,-0.8315,-0.7654,1.5,-1.8478,-0.3827,1.5,-0.9239,-0.3902,1.5,-1.9616,-0.1951,1.5,-0.9808,0,1.5,-2,0,1.5,-1,0.3902,1.5,-1.9616,0.1951,1.5,-0.9808,0.7654,1.5,-1.8478,0.3827,1.5,-0.9239,1.1111,1.5,-1.6629,0.5556,1.5,-0.8315,1.4142,1.5,-1.4142,0.7071,1.5,-0.7071,1.6629,1.5,-1.1111,0.8315,1.5,-0.5556,1.8478,1.5,-0.7654,0.9239,1.5,-0.3827,1.9616,1.5,-0.3902,0.9808,1.5,-0.1951,2,1.5,0,1,1.5,0])}))})),
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("AppearanceGrey")}))}))}),

                    new CADFace({
                      name : new SFString("bottomCap"),
                      shape : new SFNode(
                        new Shape({
                          geometry : new SFNode(
                            new IndexedTriangleSet({
                              index : new MFInt32([0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([2,-1.5,0,1,-1.5,0,1.9616,-1.5,-0.3902,0.9808,-1.5,-0.1951,1.8478,-1.5,-0.7654,0.9239,-1.5,-0.3827,1.6629,-1.5,-1.1111,0.8315,-1.5,-0.5556,1.4142,-1.5,-1.4142,0.7071,-1.5,-0.7071,1.1111,-1.5,-1.6629,0.5556,-1.5,-0.8315,0.7654,-1.5,-1.8478,0.3827,-1.5,-0.9239,0.3902,-1.5,-1.9616,0.1951,-1.5,-0.9808,0,-1.5,-2,0,-1.5,-1,-0.3902,-1.5,-1.9616,-0.1951,-1.5,-0.9808,-0.7654,-1.5,-1.8478,-0.3827,-1.5,-0.9239,-1.1111,-1.5,-1.6629,-0.5556,-1.5,-0.8315,-1.4142,-1.5,-1.4142,-0.7071,-1.5,-0.7071,-1.6629,-1.5,-1.1111,-0.8315,-1.5,-0.5556,-1.8478,-1.5,-0.7654,-0.9239,-1.5,-0.3827,-1.9616,-1.5,-0.3902,-0.9808,-1.5,-0.1951,-2,-1.5,0,-1,-1.5,0,-1.9616,-1.5,0.3902,-0.9808,-1.5,0.1951,-1.8478,-1.5,0.7654,-0.9239,-1.5,0.3827,-1.6629,-1.5,1.1111,-0.8315,-1.5,0.5556,-1.4142,-1.5,1.4142,-0.7071,-1.5,0.7071,-1.1111,-1.5,1.6629,-0.5556,-1.5,0.8315,-0.7654,-1.5,1.8478,-0.3827,-1.5,0.9239,-0.3902,-1.5,1.9616,-0.1951,-1.5,0.9808,0,-1.5,2,0,-1.5,1,0.3902,-1.5,1.9616,0.1951,-1.5,0.9808,0.7654,-1.5,1.8478,0.3827,-1.5,0.9239,1.1111,-1.5,1.6629,0.5556,-1.5,0.8315,1.4142,-1.5,1.4142,0.7071,-1.5,0.7071,1.6629,-1.5,1.1111,0.8315,-1.5,0.5556,1.8478,-1.5,0.7654,0.9239,-1.5,0.3827,1.9616,-1.5,0.3902,0.9808,-1.5,0.1951,2,-1.5,0,1,-1.5,0])}))})),
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("AppearanceGrey")}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());
