'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { X3DScript } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("browser.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/browser.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a script test with embedded \\n between single quotes, a double backslash \\\\\\\\ a backslash \\\\ and a closing quote \"")})])})),
      Scene : new SFNode(
        new Scene({
          X3DScript : new SFNode(
            new X3DScript({
              DEF : new SFString("Clouds")}))}))});
console.log(X3D0.toXMLNode());