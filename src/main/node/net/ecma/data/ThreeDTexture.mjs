'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
import { fieldValue } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ThreeDTexture.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/ThreeDTexture.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a kind of ThreeDTexture cube with spheres")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              type : ["EXAMINE"]}),

            new Viewpoint({
              description : new SFString("Rubiks Cube"),
              position : new SFVec3f([0,0,12])}),

            new ProtoDeclare({
              name : new SFString("sphereproto"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("xtranslation"),
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
                              nodeField : new SFString("translation"),
                              protoField : new SFString("xtranslation")})])})),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Sphere({})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1])}))}))})])})])}))}),

            new ProtoDeclare({
              name : new SFString("three"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ytranslation"),
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
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ytranslation")})])})),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("sphereproto"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("xtranslation"),
                              value : new SFString("0 0 0")})])}),

                        new ProtoInstance({
                          name : new SFString("sphereproto"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("xtranslation"),
                              value : new SFString("2 0 0")})])}),

                        new ProtoInstance({
                          name : new SFString("sphereproto"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("xtranslation"),
                              value : new SFString("-2 0 0")})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("nine"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ztranslation"),
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
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ztranslation")})])})),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("three"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ytranslation"),
                              value : new SFString("0 0 0")})])}),

                        new ProtoInstance({
                          name : new SFString("three"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ytranslation"),
                              value : new SFString("0 2 0")})])}),

                        new ProtoInstance({
                          name : new SFString("three"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ytranslation"),
                              value : new SFString("0 -2 0")})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("twentyseven"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ttranslation"),
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
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ttranslation")})])})),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("nine"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ztranslation"),
                              value : new SFString("0 0 0")})])}),

                        new ProtoInstance({
                          name : new SFString("nine"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ztranslation"),
                              value : new SFString("0 0 2")})])}),

                        new ProtoInstance({
                          name : new SFString("nine"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ztranslation"),
                              value : new SFString("0 0 -2")})])})])})])}))}),

            new ProtoInstance({
              name : new SFString("twentyseven"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("ttranslation"),
                  value : new SFString("0 0 0")})])})])}))});
console.log(X3D0.toXMLNode());