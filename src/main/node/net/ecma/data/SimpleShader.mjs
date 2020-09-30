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
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { ComposedShader } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { ShaderPart } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { MetadataSet } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { MetadataString } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { MetadataDouble } from './x3d.mjs';
import { MFDouble } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.2"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Shaders"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("SimpleShader.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Simple shader example")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Stewart")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("26 May 2009")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("15 October 2009")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.opengl.org/wiki/Fragment_Shader")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("X3D shader example")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/simpleShader.x3dv")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("ShaderTutorialInstantReality.pdf")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V3.0.3, http://titania.create3000.de")}),

            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("outputStyle"),
              content : new SFString("nicest")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("under development")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("myPrototype"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("myInputRange"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0.95 0.44 0.22")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("TR"),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.5,0.5,0.9])})),
                              shaders : new SFNode(
                                new ComposedShader({
                                  language : new SFString("GLSL"),
                                  field : new MFNode([
                                    new field({
                                      type : field.TYPE_SFVEC3F,
                                      name : new SFString("decis"),
                                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("decis"),
                                          protoField : new SFString("myInputRange")})])})),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "VERTEX"})),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "FRAGMENT"}))])})),
                              shaders : new SFNode(
                                new ComposedShader({
                                  DEF : new SFString("Cobweb"),
                                  language : new SFString("GLSL"),
                                  field : new MFNode([
                                    new field({
                                      type : field.TYPE_SFVEC3F,
                                      name : new SFString("decis"),
                                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                      value : new SFString("0.95 0.77 0.44")}),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "VERTEX"})),
                                  parts : new SFNode(
                                    new ShaderPart({
                                      type : "FRAGMENT",
                                      DEF : new SFString("_1")}))])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(1.75)}))})])})])}))}),

            new WorldInfo({
              title : new SFString("SimpleShader"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("nodes"),
                          DEF : new SFString("nodes"),
                          reference : new SFString("http://titania.create3000.de"),
                          { "#comment" : new CommentsBlock("NULL") }}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("NavigationInfo"),
                      DEF : new SFString("NavigationInfo"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFString(["EXAMINE"])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Viewpoint"),
                      DEF : new SFString("Viewpoint"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("position"),
                          DEF : new SFString("position"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([6.24067728185014,0.00250837343276661,2.92117542307615])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-0.808320198626341,-0.358072370409949,0.22817191560906])}))}))})])}),

            new ProtoInstance({
              name : new SFString("myPrototype")})])}))});
console.log(X3D0.toXMLNode());
