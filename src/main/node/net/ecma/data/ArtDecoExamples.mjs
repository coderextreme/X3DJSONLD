'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { ExternProtoDeclare } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { DirectionalLight } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Anchor } from './x3d.mjs';
import { Inline } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ArtDecoExamples.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("David Roussel")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("James Harney, Don Brutzman NPS")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("7 April 2002")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://vrmlstuff.free.fr/materials")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("Universal Media Material Library")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("ArtDecoExamples.x3d")}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco00"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco01"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco02"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco03"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco04"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco05"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco06"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco07"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco08"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco09"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco10"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco11"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco12"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco13"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco14"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco15"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco16"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco17"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco18"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco19"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco20"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco21"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco22"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco23"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco24"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco25"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco26"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco27"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco28"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco29"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco30"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco31"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco32"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco33"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"])}),

            new ExternProtoDeclare({
              name : new SFString("ArtDeco34"),
              appinfo : new SFString("UniversalMediaMaterials prototype"),
              documentation : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"),
              url : new MFString(["ArtDecoPrototypes.x3d#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"])}),

            new Group({
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new NavigationInfo({
                  headlight : new SFBool(false)}),

                new Viewpoint({
                  DEF : new SFString("Front"),
                  description : new SFString("Front view"),
                  position : new SFVec3f([0,0,12])}),

                new Viewpoint({
                  DEF : new SFString("PersRight"),
                  description : new SFString("Low Right"),
                  orientation : new SFRotation([0.74291,0.30772,0.59447,1.2171]),
                  position : new SFVec3f([6.9282,-6.9282,6.9282])}),

                new Viewpoint({
                  DEF : new SFString("PersLeft"),
                  description : new SFString("Low Left"),
                  orientation : new SFRotation([0.74291,-0.30772,-0.59447,1.2171]),
                  position : new SFVec3f([-6.9282,-6.9282,6.9282])}),

                new Viewpoint({
                  DEF : new SFString("Back"),
                  description : new SFString("Back view"),
                  orientation : new SFRotation([0,1,0,3.1416]),
                  position : new SFVec3f([0,0,-12])}),

                new Transform({
                  DEF : new SFString("Close_travel"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new PositionInterpolator({
                      DEF : new SFString("Close_Mover"),
                      key : new MFFloat([0,0.25,0.5,0.75,1]),
                      keyValue : new MFVec3f([0,2.5,0,0,0,0,0,-2.5,0,0,0,0,0,2.5,0])}),

                    new TimeSensor({
                      DEF : new SFString("Close_Time"),
                      cycleInterval : new SFTime(12),
                      loop : new SFBool(true)}),

                    new Viewpoint({
                      DEF : new SFString("Close"),
                      description : new SFString("Close Front"),
                      position : new SFVec3f([0,0,6])})])}),

                new DirectionalLight({
                  direction : new SFVec3f([1,-1,-1])}),

                new DirectionalLight({
                  direction : new SFVec3f([0,1,-0.5]),
                  intensity : new SFFloat(0.5)}),

                new Anchor({
                  description : new SFString("Back to front view"),
                  url : new MFString(["#Front"]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,0,-0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Inline({
                          url : new MFString(["../data/gridBack.json"]),
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View00"),
                  description : new SFString("ArtDeco00"),
                  position : new SFVec3f([-3.75,3.75,3])}),

                new Transform({
                  translation : new SFVec3f([-3.75,3.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco00 view"),
                      url : new MFString(["#View00"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco00")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              DEF : new SFString("Ball"),
                              radius : new SFFloat(0.5)}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco00"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"]),
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
                                      DEF : new SFString("TextMat"),
                                      diffuseColor : new SFColor([1,1,1])}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco00"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      DEF : new SFString("Style"),
                                      family : new MFString(["SANS"]),
                                      justify : new MFString(["MIDDLE","MIDDLE"]),
                                      size : new SFFloat(0.3),
                                      style : new SFString("BOLD")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View01"),
                  description : new SFString("ArtDeco01"),
                  position : new SFVec3f([-2.25,3.75,3])}),

                new Transform({
                  translation : new SFVec3f([-2.25,3.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco01 view"),
                      url : new MFString(["#View01"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco01")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco01"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco01"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View02"),
                  description : new SFString("ArtDeco02"),
                  position : new SFVec3f([-0.75,3.75,3])}),

                new Transform({
                  translation : new SFVec3f([-0.75,3.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco02 view"),
                      url : new MFString(["#View02"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco02")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco02"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco02"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View03"),
                  description : new SFString("ArtDeco03"),
                  position : new SFVec3f([0.75,3.75,3])}),

                new Transform({
                  translation : new SFVec3f([0.75,3.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco03 view"),
                      url : new MFString(["#View03"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco03")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco03"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco03"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View04"),
                  description : new SFString("ArtDeco04"),
                  position : new SFVec3f([2.25,3.75,3])}),

                new Transform({
                  translation : new SFVec3f([2.25,3.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco04 view"),
                      url : new MFString(["#View04"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco04")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco04"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco04"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View05"),
                  description : new SFString("ArtDeco05"),
                  position : new SFVec3f([3.75,3.75,3])}),

                new Transform({
                  translation : new SFVec3f([3.75,3.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco05 view"),
                      url : new MFString(["#View05"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco05")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco05"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco05"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View06"),
                  description : new SFString("ArtDeco06"),
                  position : new SFVec3f([-3.75,2.25,3])}),

                new Transform({
                  translation : new SFVec3f([-3.75,2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco06 view"),
                      url : new MFString(["#View06"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco06")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco06"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco06"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View07"),
                  description : new SFString("ArtDeco07"),
                  position : new SFVec3f([-2.25,2.25,3])}),

                new Transform({
                  translation : new SFVec3f([-2.25,2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco07 view"),
                      url : new MFString(["#View07"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco07")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco07"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco07"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View08"),
                  description : new SFString("ArtDeco08"),
                  position : new SFVec3f([-0.75,2.25,3])}),

                new Transform({
                  translation : new SFVec3f([-0.75,2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco08 view"),
                      url : new MFString(["#View08"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco08")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco08"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco08"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View09"),
                  description : new SFString("ArtDeco09"),
                  position : new SFVec3f([0.75,2.25,3])}),

                new Transform({
                  translation : new SFVec3f([0.75,2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco09 view"),
                      url : new MFString(["#View09"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco09")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco09"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco09"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View10"),
                  description : new SFString("ArtDeco10"),
                  position : new SFVec3f([2.25,2.25,3])}),

                new Transform({
                  translation : new SFVec3f([2.25,2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco10 view"),
                      url : new MFString(["#View10"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco10")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco10"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco10"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View11"),
                  description : new SFString("ArtDeco11"),
                  position : new SFVec3f([3.75,2.25,3])}),

                new Transform({
                  translation : new SFVec3f([3.75,2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco11 view"),
                      url : new MFString(["#View11"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco11")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco11"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco11"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View12"),
                  description : new SFString("ArtDeco12"),
                  position : new SFVec3f([-3.75,0.75,3])}),

                new Transform({
                  translation : new SFVec3f([-3.75,0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco12 view"),
                      url : new MFString(["#View12"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco12")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco12"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco12"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View13"),
                  description : new SFString("ArtDeco13"),
                  position : new SFVec3f([-2.25,0.75,3])}),

                new Transform({
                  translation : new SFVec3f([-2.25,0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco13 view"),
                      url : new MFString(["#View13"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco13")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco13"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco13"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View14"),
                  description : new SFString("ArtDeco14"),
                  position : new SFVec3f([-0.75,0.75,3])}),

                new Transform({
                  translation : new SFVec3f([-0.75,0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco14 view"),
                      url : new MFString(["#View14"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco14")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco14"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco14"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View15"),
                  description : new SFString("ArtDeco15"),
                  position : new SFVec3f([0.75,0.75,3])}),

                new Transform({
                  translation : new SFVec3f([0.75,0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco15 view"),
                      url : new MFString(["#View15"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco15")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco15"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco15"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View16"),
                  description : new SFString("ArtDeco16"),
                  position : new SFVec3f([2.25,0.75,3])}),

                new Transform({
                  translation : new SFVec3f([2.25,0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco16 view"),
                      url : new MFString(["#View16"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco16")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco16"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco16"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View17"),
                  description : new SFString("ArtDeco17"),
                  position : new SFVec3f([3.75,0.75,3])}),

                new Transform({
                  translation : new SFVec3f([3.75,0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco17 view"),
                      url : new MFString(["#View17"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco17")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco17"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco17"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View18"),
                  description : new SFString("ArtDeco18"),
                  position : new SFVec3f([-3.75,-0.75,3])}),

                new Transform({
                  translation : new SFVec3f([-3.75,-0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco18 view"),
                      url : new MFString(["#View18"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco18")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco18"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco18"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View19"),
                  description : new SFString("ArtDeco19"),
                  position : new SFVec3f([-2.25,-0.75,3])}),

                new Transform({
                  translation : new SFVec3f([-2.25,-0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco19 view"),
                      url : new MFString(["#View19"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco19")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco19"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco19"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View20"),
                  description : new SFString("ArtDeco20"),
                  position : new SFVec3f([-0.75,-0.75,3])}),

                new Transform({
                  translation : new SFVec3f([-0.75,-0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco20 view"),
                      url : new MFString(["#View20"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco20")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco20"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco20"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View21"),
                  description : new SFString("ArtDeco21"),
                  position : new SFVec3f([0.75,-0.75,3])}),

                new Transform({
                  translation : new SFVec3f([0.75,-0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco21 view"),
                      url : new MFString(["#View21"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco21")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco21"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco21"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View22"),
                  description : new SFString("ArtDeco22"),
                  position : new SFVec3f([2.25,-0.75,3])}),

                new Transform({
                  translation : new SFVec3f([2.25,-0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco22 view"),
                      url : new MFString(["#View22"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco22")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco22"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco22"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View23"),
                  description : new SFString("ArtDeco23"),
                  position : new SFVec3f([3.75,-0.75,3])}),

                new Transform({
                  translation : new SFVec3f([3.75,-0.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco23 view"),
                      url : new MFString(["#View23"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco23")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco23"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco23"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View24"),
                  description : new SFString("ArtDeco24"),
                  position : new SFVec3f([-3.75,-2.25,3])}),

                new Transform({
                  translation : new SFVec3f([-3.75,-2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco24 view"),
                      url : new MFString(["#View24"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco24")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco24"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco24"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View25"),
                  description : new SFString("ArtDeco25"),
                  position : new SFVec3f([-2.25,-2.25,3])}),

                new Transform({
                  translation : new SFVec3f([-2.25,-2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco25 view"),
                      url : new MFString(["#View25"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco25")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco25"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco25"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View26"),
                  description : new SFString("ArtDeco26"),
                  position : new SFVec3f([-0.75,-2.25,3])}),

                new Transform({
                  translation : new SFVec3f([-0.75,-2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco26 view"),
                      url : new MFString(["#View26"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco26")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco26"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco26"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View27"),
                  description : new SFString("ArtDeco27"),
                  position : new SFVec3f([0.75,-2.25,3])}),

                new Transform({
                  translation : new SFVec3f([0.75,-2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco27 view"),
                      url : new MFString(["#View27"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco27")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco27"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco27"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View28"),
                  description : new SFString("ArtDeco28"),
                  position : new SFVec3f([2.25,-2.25,3])}),

                new Transform({
                  translation : new SFVec3f([2.25,-2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco28 view"),
                      url : new MFString(["#View28"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco28")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco28"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco28"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View29"),
                  description : new SFString("ArtDeco29"),
                  position : new SFVec3f([3.75,-2.25,3])}),

                new Transform({
                  translation : new SFVec3f([3.75,-2.25,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco29 view"),
                      url : new MFString(["#View29"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco29")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco29"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco29"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View30"),
                  description : new SFString("ArtDeco30"),
                  position : new SFVec3f([-3.75,-3.75,3])}),

                new Transform({
                  translation : new SFVec3f([-3.75,-3.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco30 view"),
                      url : new MFString(["#View30"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco30")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco30"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco30"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View31"),
                  description : new SFString("ArtDeco31"),
                  position : new SFVec3f([-2.25,-3.75,3])}),

                new Transform({
                  translation : new SFVec3f([-2.25,-3.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco31 view"),
                      url : new MFString(["#View31"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco31")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco31"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco31"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View32"),
                  description : new SFString("ArtDeco32"),
                  position : new SFVec3f([-0.75,-3.75,3])}),

                new Transform({
                  translation : new SFVec3f([-0.75,-3.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco32 view"),
                      url : new MFString(["#View32"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco32")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco32"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco32"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View33"),
                  description : new SFString("ArtDeco33"),
                  position : new SFVec3f([0.75,-3.75,3])}),

                new Transform({
                  translation : new SFVec3f([0.75,-3.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco33 view"),
                      url : new MFString(["#View33"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco33")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco33"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco33"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])}),

                new Viewpoint({
                  DEF : new SFString("View34"),
                  description : new SFString("ArtDeco34"),
                  position : new SFVec3f([2.25,-3.75,3])}),

                new Transform({
                  translation : new SFVec3f([2.25,-3.75,0]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new Anchor({
                      description : new SFString("ArtDeco34 view"),
                      url : new MFString(["#View34"]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              shaders : new SFNode(
                                new ProtoInstance({
                                  name : new SFString("ArtDeco34")}))})),
                          geometry : new SFNode(
                            new Sphere({
                              USE : new SFString("Ball")}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,0.3,0.5]),
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Anchor({
                          description : new SFString("ArtDeco34"),
                          parameter : new MFString(["target=_source"]),
                          url : new MFString(["ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"]),
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
                                      USE : new SFString("TextMat")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["ArtDeco34"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      USE : new SFString("Style")}))}))})])})])})])})])}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Close_Time"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Close_Mover")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Close_Mover"),
              toField : new SFString("set_translation"),
              toNode : new SFString("Close_travel")})])}))});
console.log(X3D0.toXMLNode());