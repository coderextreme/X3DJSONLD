'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Cylinder } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ScubaTank.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Scuba gear used by Nancy Diving example.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Etsuko Lippi")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("24 January 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("23 May 2020")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d")}),

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
              title : new SFString("ScubaTank.x3d")}),

            new Transform({
              DEF : new SFString("ScubaTank"),
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("tank"),
                              ambientIntensity : new SFFloat(0.3),
                              diffuseColor : new SFColor([0.3,0.3,0.5]),
                              shininess : new SFFloat(0.1),
                              specularColor : new SFColor([0.7,0.7,0.8])}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          height : new SFFloat(0.7),
                          radius : new SFFloat(0.1)}))})])}),

                new Transform({
                  translation : new SFVec3f([0,0.35,0]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("tank")}))})),
                      geometry : new SFNode(
                        new Sphere({
                          radius : new SFFloat(0.098)}))})])}),

                new Transform({
                  translation : new SFVec3f([0,-0.35,0]),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("tankBottom"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("black"),
                              ambientIntensity : new SFFloat(0.3),
                              diffuseColor : new SFColor([0,0,0])}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          height : new SFFloat(0.06),
                          radius : new SFFloat(0.115)}))})])}),

                new Group({
                  DEF : new SFString("tankNozzle"),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0,0.45,0]),
                          children : new MFNode([
                            new Shape({
                              DEF : new SFString("pressure"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("pressureColor"),
                                      ambientIntensity : new SFFloat(0.4),
                                      diffuseColor : new SFColor([0.91,0.91,0.91]),
                                      shininess : new SFFloat(0.16),
                                      specularColor : new SFColor([0.91,0.9,0.91])}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  height : new SFFloat(0.1),
                                  radius : new SFFloat(0.015)}))})])}),

                        new Transform({
                          translation : new SFVec3f([0,0.5,0]),
                          children : new MFNode([
                            new Shape({
                              DEF : new SFString("pressureTop"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("black")}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  height : new SFFloat(0.02),
                                  radius : new SFFloat(0.025)}))})])}),

                        new Transform({
                          rotation : new SFRotation([0,0,1,1.57]),
                          translation : new SFVec3f([-0.028,0.462,0]),
                          children : new MFNode([
                            new Transform({
                              children : new MFNode([
                                new Shape({
                                  DEF : new SFString("connectorToRegulator"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("pressureColor")}))})),
                                  geometry : new SFNode(
                                    new Cylinder({
                                      height : new SFFloat(0.03),
                                      radius : new SFFloat(0.01)}))})])}),

                            new Transform({
                              translation : new SFVec3f([0,0.02,0]),
                              children : new MFNode([
                                new Shape({
                                  DEF : new SFString("connectorToRegulatorTop"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          USE : new SFString("black")}))})),
                                  geometry : new SFNode(
                                    new Cylinder({
                                      height : new SFFloat(0.02),
                                      radius : new SFFloat(0.02)}))})])})])})])})])}),

                new Transform({
                  translation : new SFVec3f([0,0.2,0]),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("tankHoldBelt"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              USE : new SFString("black")}))})),
                      geometry : new SFNode(
                        new Cylinder({
                          height : new SFFloat(0.1),
                          radius : new SFFloat(0.115)}))})])})])}),

            new Background({
              skyColor : new MFColor([0.6,0.6,0.6])})])}))});
console.log(X3D0.toXMLNode());
