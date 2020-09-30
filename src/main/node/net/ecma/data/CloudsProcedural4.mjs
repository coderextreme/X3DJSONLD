'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { DirectionalLight } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Inline } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Rectangle2D } from './x3d.mjs';
import { SFVec2f } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { ImageTexture } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { X3DScript } from './x3d.mjs';
import { field } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.2"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("CloudsProcedural4.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Capt Darren W. Murphy")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("1 November 2007")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("14 January 2014")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../../license.html")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("fix links")})])})),
      Scene : new SFNode(
        new Scene({
          { "#comment" : new CommentsBlock("A png image file for the cloud texture must be designated in the ecmascript node.") },
          children : new MFNode([
            new Viewpoint({
              description : new SFString("Main"),
              jump : new SFBool(false),
              orientation : new SFRotation([0,1,0,1.57]),
              position : new SFVec3f([50000,1000,42000])}),

            new Viewpoint({
              description : new SFString("Light House Tower"),
              jump : new SFBool(false),
              orientation : new SFRotation([0,1,0,1.3]),
              position : new SFVec3f([45000,1290,44000])}),

            new Viewpoint({
              description : new SFString("centerWest"),
              jump : new SFBool(false),
              orientation : new SFRotation([0,1,0,2.5]),
              position : new SFVec3f([48000,1000,20000])}),

            new Background({
              groundColor : new MFColor([0,0,1]),
              skyColor : new MFColor([0,0,1]),
              transparency : new SFFloat(0)}),

            new DirectionalLight({
              ambientIntensity : new SFFloat(1),
              direction : new SFVec3f([-1,0,0]),
              global : new SFBool(true)}),

            new Group({
              DEF : new SFString("Terrain"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Transform({
                  scale : new SFVec3f([50,50,50]),
                  translation : new SFVec3f([25000,0,25000]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1])})])}),

                new Transform({
                  rotation : new SFRotation([1,0,0,1.57]),
                  translation : new SFVec3f([25000,0,25000]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Shape({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      geometry : new SFNode(
                        new Rectangle2D({
                          size : new SFVec2f([77000,55000])})),
                      appearance : new SFNode(
                        new Appearance({
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"])}))}))})])})])}),

            new Group({
              DEF : new SFString("Placemarks"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Transform({
                  scale : new SFVec3f([50,50,50]),
                  translation : new SFVec3f([45000,30,44000]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1])})])})])}),

            new Group({
              DEF : new SFString("Clouds"),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Cumulus"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1])}),

                new Transform({
                  DEF : new SFString("Cirrus"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1])}),

                new Transform({
                  DEF : new SFString("Fog"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1])}),

                new DirectionalLight({
                  ambientIntensity : new SFFloat(1),
                  color : new SFColor([1,0,0]),
                  direction : new SFVec3f([-1,-1,0]),
                  global : new SFBool(true)}),
              X3DScript : new SFNode(
                new X3DScript({
                  DEF : new SFString("PixelScript"),
                  directOutput : new SFBool(true),
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Cumulus"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("Cumulus")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Cirrus"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Transform({
                          USE : new SFString("Cirrus")})])}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Fog"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])}))])})])}))});
console.log(X3D0.toXMLNode());
