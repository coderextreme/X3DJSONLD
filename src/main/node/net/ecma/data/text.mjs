'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { field } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("creator"),
              content : new SFString("John W Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("December 13 2015")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("text.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/text.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("test \\n text")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Node\"\"\""]),
                      fontStyle : new SFNode(
                        new FontStyle({}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))}))}),

                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Node2","\\\\","\\\\\\\\","Node2"]),
                      fontStyle : new SFNode(
                        new FontStyle({}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))}))}),

                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["Node3 \\\\\\\\ \\\\ ","Node3\"\"\""]),
                      fontStyle : new SFNode(
                        new FontStyle({}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))}))}),

                new Script({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("frontUrls"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("\"rnl_front.png\" \"uffizi_front.png\"")}),
                  ]),
ecmascript:eval (0
			    var me = '"1" ""2" "\n3"';)})])})])}))});
console.log(X3D0.toXMLNode());
