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
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("StringArrayEncodingExamples.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Demonstrate simple X3D MFString (string array) encoding.")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("27 May 2017")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("27 May 2017")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("X3dHeaderPrototypeSyntaxExamples.x3d")}),

            new meta({
              name : new SFString("specificationSection"),
              content : new SFString("X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString")}),

            new meta({
              name : new SFString("specificationUrl"),
              content : new SFString("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString")}),

            new meta({
              name : new SFString("specificationSection"),
              content : new SFString("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString")}),

            new meta({
              name : new SFString("specificationUrl"),
              content : new SFString("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString")}),

            new meta({
              name : new SFString("specificationSection"),
              content : new SFString("X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString")}),

            new meta({
              name : new SFString("specificationUrl"),
              content : new SFString("https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Viewpoint({
              DEF : new SFString("EntryView"),
              description : new SFString("Hello MFString syntax")}),

            new Background({
              skyColor : new MFColor([0.6,1,0.8])}),

            new Shape({
              geometry : new SFNode(
                new Text({
                  string : new MFString(["One, Two, Three","","He said, \"Immel did it!\""]),
                  /*alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'*/
                  /*alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})*/
                  fontStyle : new SFNode(
                    new FontStyle({
                      justify : new MFString(["MIDDLE","MIDDLE"]),
                      style : new SFString("BOLD")}))})),
              appearance : new SFNode(
                new Appearance({
                  material : new SFNode(
                    new Material({
                      diffuseColor : new SFColor([0.6,0.4,0.2])}))}))})])}))});
console.log(X3D0.toXMLNode());
