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
import { NavigationInfo } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("KoreanCharacterAnnexD01Jin.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Jin Hoon Lee and Min Joo Lee")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Chul Hee Jung and Myeong Won Lee")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("31 March 2011")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("1 November 2014")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("28 May 2018")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("KoreanCharacter00ReadMe.txt")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("KoreanCharacterHumanMotion_Infotech2014_140706.pdf")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("KoreanCharactersIllustrated.pdf")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/KoreanCharacterAnnexD01Jin.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Suwon HAnim Converter")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Gnu Image Manipulation Program, http://www.gimp.org")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              speed : new SFFloat(1.5)}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,1,0]),
              description : new SFString("AnnexD01Jin"),
              position : new SFVec3f([0,1,3])})])}))});
console.log(X3D0.toXMLNode());
