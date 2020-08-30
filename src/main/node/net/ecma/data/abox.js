'use strict';
import fs from 'fs';
import { X3D } from './x3d.js';
import { SFString } from './x3d.js';
import { SFNode } from './x3d.js';
import { head } from './x3d.js';
import { MFNode } from './x3d.js';
import { meta } from './x3d.js';
import { Scene } from './x3d.js';
import { ProtoDeclare } from './x3d.js';
import { ProtoInterface } from './x3d.js';
import { field } from './x3d.js';
import { Shape } from './x3d.js';
import { SFVec3f } from './x3d.js';
import { Sphere } from './x3d.js';
import { ProtoBody } from './x3d.js';
import { Transform } from './x3d.js';
import { IS } from './x3d.js';
import { connect } from './x3d.js';
import { Cylinder } from './x3d.js';
import { ProtoInstance } from './x3d.js';
import { fieldValue } from './x3d.js';
import { Box } from './x3d.js';
import { SFBool } from './x3d.js';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("abox.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/abox.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a box")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("anyShape"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("myShape"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          geometry : new SFNode(
                            new Sphere({}))})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("myShape")})])}))})])}))}),

            new ProtoDeclare({
              name : new SFString("one"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("myShape"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          geometry : new SFNode(
                            new Cylinder({}))})])})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("anyShape"),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("myShape"),
                                  protoField : new SFString("myShape")})])}))})])})])}))}),

            new ProtoInstance({
              name : new SFString("one"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("myShape"),
                  children : new MFNode([
                    new Shape({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([140,140,140]),
                          solid : new SFBool(true)}))})])})])})])}))});
console.log(X3D0.toXMLNode());
