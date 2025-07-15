// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('ArtDecoExamples.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SG\' Open Inventor material examples.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('David Roussel')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('James Harney, Don Brutzman NPS')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('7 April 2002')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://vrmlstuff.free.fr/materials')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('Universal Media Material Library')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('ArtDecoExamples.x3d')),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco00'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco00"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00"), SFString("ArtDecoPrototypes.wrl#ArtDeco00"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco01'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco01"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01"), SFString("ArtDecoPrototypes.wrl#ArtDeco01"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco02'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco02"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02"), SFString("ArtDecoPrototypes.wrl#ArtDeco02"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco03'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco03"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03"), SFString("ArtDecoPrototypes.wrl#ArtDeco03"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco04'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco04"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04"), SFString("ArtDecoPrototypes.wrl#ArtDeco04"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco05'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco05"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05"), SFString("ArtDecoPrototypes.wrl#ArtDeco05"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco06'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco06"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06"), SFString("ArtDecoPrototypes.wrl#ArtDeco06"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco07'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco07"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07"), SFString("ArtDecoPrototypes.wrl#ArtDeco07"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco08'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco08"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08"), SFString("ArtDecoPrototypes.wrl#ArtDeco08"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco09'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco09"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09"), SFString("ArtDecoPrototypes.wrl#ArtDeco09"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco10'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco10"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10"), SFString("ArtDecoPrototypes.wrl#ArtDeco10"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco11'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco11"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11"), SFString("ArtDecoPrototypes.wrl#ArtDeco11"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco12'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco12"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12"), SFString("ArtDecoPrototypes.wrl#ArtDeco12"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco13'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco13"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13"), SFString("ArtDecoPrototypes.wrl#ArtDeco13"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco14'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco14"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14"), SFString("ArtDecoPrototypes.wrl#ArtDeco14"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco15'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco15"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15"), SFString("ArtDecoPrototypes.wrl#ArtDeco15"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco16'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco16"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16"), SFString("ArtDecoPrototypes.wrl#ArtDeco16"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco17'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco17"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17"), SFString("ArtDecoPrototypes.wrl#ArtDeco17"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco18'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco18"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18"), SFString("ArtDecoPrototypes.wrl#ArtDeco18"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco19'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco19"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19"), SFString("ArtDecoPrototypes.wrl#ArtDeco19"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco20'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco20"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20"), SFString("ArtDecoPrototypes.wrl#ArtDeco20"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco21'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco21"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21"), SFString("ArtDecoPrototypes.wrl#ArtDeco21"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco22'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco22"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22"), SFString("ArtDecoPrototypes.wrl#ArtDeco22"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco23'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco23"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23"), SFString("ArtDecoPrototypes.wrl#ArtDeco23"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco24'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco24"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24"), SFString("ArtDecoPrototypes.wrl#ArtDeco24"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco25'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco25"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25"), SFString("ArtDecoPrototypes.wrl#ArtDeco25"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco26'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco26"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26"), SFString("ArtDecoPrototypes.wrl#ArtDeco26"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco27'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco27"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27"), SFString("ArtDecoPrototypes.wrl#ArtDeco27"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco28'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco28"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28"), SFString("ArtDecoPrototypes.wrl#ArtDeco28"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco29'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco29"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29"), SFString("ArtDecoPrototypes.wrl#ArtDeco29"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco30'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco30"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30"), SFString("ArtDecoPrototypes.wrl#ArtDeco30"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco31'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco31"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31"), SFString("ArtDecoPrototypes.wrl#ArtDeco31"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco32'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco32"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32"), SFString("ArtDecoPrototypes.wrl#ArtDeco32"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco33'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco33"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33"), SFString("ArtDecoPrototypes.wrl#ArtDeco33"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33")])),

            ExternProtoDeclare(
              name_ : SFString('ArtDeco34'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              url_ : MFString([SFString("../data/ArtDecoPrototypes.x3d#ArtDeco34"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34"), SFString("ArtDecoPrototypes.wrl#ArtDeco34"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34")])),

            Group(
              children_ : [
                NavigationInfo(
                  headlight_ : false),

                Viewpoint(
                  DEF_ : SFString('Front'),
                  description_ : SFString('Front view'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),

                Viewpoint(
                  DEF_ : SFString('PersRight'),
                  description_ : SFString('Low Right'),
                  orientation_ : SFRotation([SFDouble(0.74291), SFDouble(0.30772), SFDouble(0.59447), SFDouble(1.2171)]),
                  position_ : SFVec3f([SFDouble(6.9282), SFDouble(-6.9282), SFDouble(6.9282)])),

                Viewpoint(
                  DEF_ : SFString('PersLeft'),
                  description_ : SFString('Low Left'),
                  orientation_ : SFRotation([SFDouble(0.74291), SFDouble(-0.30772), SFDouble(-0.59447), SFDouble(1.2171)]),
                  position_ : SFVec3f([SFDouble(-6.9282), SFDouble(-6.9282), SFDouble(6.9282)])),

                Viewpoint(
                  DEF_ : SFString('Back'),
                  description_ : SFString('Back view'),
                  orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.1416)]),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-12)])),

                Transform(
                  DEF_ : SFString('Close_travel'),
                  children_ : [
                    PositionInterpolator(
                      DEF_ : SFString('Close_Mover'),
                      key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.5), SFFloat(0.75), SFFloat(1)]),
                      keyValue_ : MFVec3f([SFVec3f([0,2.5,0]),SFVec3f([0,0,0]),SFVec3f([0,-2.5,0]),SFVec3f([0,0,0]),SFVec3f([0,2.5,0])])),

                    TimeSensor(
                      DEF_ : SFString('Close_Time'),
                      cycleInterval_ : 12,
                      loop_ : true),

                    Viewpoint(
                      DEF_ : SFString('Close'),
                      description_ : SFString('Close Front'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(6)]))]),

                DirectionalLight(
                  direction_ : SFVec3f([SFDouble(1), SFDouble(-1), SFDouble(-1)])),

                DirectionalLight(
                  direction_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(-0.5)]),
                  intensity_ : 0.5),

                Anchor(
                  description_ : SFString('Back to front view'),
                  url_ : MFString([SFString("#Front")]),
                  children_ : [
                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-0.5)]),
                      children_ : [
                        Inline(
                          url_ : MFString([SFString("../data/gridBack.json"), SFString("../data/gridBack.x3d"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"), SFString("gridBack.wrl"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl")]))])]),

                Viewpoint(
                  DEF_ : SFString('View00'),
                  description_ : SFString('ArtDeco00'),
                  position_ : SFVec3f([SFDouble(-3.75), SFDouble(3.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-3.75), SFDouble(3.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco00 view'),
                      url_ : MFString([SFString("#View00")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco00'))),
                          geometry_ : 
                            Sphere(
                              DEF_ : SFString('Ball'),
                              radius_ : 0.5))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco00'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('TextMat'),
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco00")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      DEF_ : SFString('Style'),
                                      family_ : MFString([SFString("SANS")]),
                                      justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                                      size_ : 0.3,
                                      style_ : SFString('BOLD'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View01'),
                  description_ : SFString('ArtDeco01'),
                  position_ : SFVec3f([SFDouble(-2.25), SFDouble(3.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-2.25), SFDouble(3.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco01 view'),
                      url_ : MFString([SFString("#View01")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco01'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco01'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco01")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View02'),
                  description_ : SFString('ArtDeco02'),
                  position_ : SFVec3f([SFDouble(-0.75), SFDouble(3.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-0.75), SFDouble(3.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco02 view'),
                      url_ : MFString([SFString("#View02")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco02'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco02'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco02")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View03'),
                  description_ : SFString('ArtDeco03'),
                  position_ : SFVec3f([SFDouble(0.75), SFDouble(3.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(0.75), SFDouble(3.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco03 view'),
                      url_ : MFString([SFString("#View03")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco03'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco03'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco03")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View04'),
                  description_ : SFString('ArtDeco04'),
                  position_ : SFVec3f([SFDouble(2.25), SFDouble(3.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(2.25), SFDouble(3.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco04 view'),
                      url_ : MFString([SFString("#View04")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco04'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco04'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco04")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View05'),
                  description_ : SFString('ArtDeco05'),
                  position_ : SFVec3f([SFDouble(3.75), SFDouble(3.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(3.75), SFDouble(3.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco05 view'),
                      url_ : MFString([SFString("#View05")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco05'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco05'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco05")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View06'),
                  description_ : SFString('ArtDeco06'),
                  position_ : SFVec3f([SFDouble(-3.75), SFDouble(2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-3.75), SFDouble(2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco06 view'),
                      url_ : MFString([SFString("#View06")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco06'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco06'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco06")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View07'),
                  description_ : SFString('ArtDeco07'),
                  position_ : SFVec3f([SFDouble(-2.25), SFDouble(2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-2.25), SFDouble(2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco07 view'),
                      url_ : MFString([SFString("#View07")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco07'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco07'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco07")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View08'),
                  description_ : SFString('ArtDeco08'),
                  position_ : SFVec3f([SFDouble(-0.75), SFDouble(2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-0.75), SFDouble(2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco08 view'),
                      url_ : MFString([SFString("#View08")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco08'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco08'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco08")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View09'),
                  description_ : SFString('ArtDeco09'),
                  position_ : SFVec3f([SFDouble(0.75), SFDouble(2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(0.75), SFDouble(2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco09 view'),
                      url_ : MFString([SFString("#View09")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco09'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco09'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco09")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View10'),
                  description_ : SFString('ArtDeco10'),
                  position_ : SFVec3f([SFDouble(2.25), SFDouble(2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(2.25), SFDouble(2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco10 view'),
                      url_ : MFString([SFString("#View10")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco10'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco10'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco10")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View11'),
                  description_ : SFString('ArtDeco11'),
                  position_ : SFVec3f([SFDouble(3.75), SFDouble(2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(3.75), SFDouble(2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco11 view'),
                      url_ : MFString([SFString("#View11")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco11'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco11'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco11")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View12'),
                  description_ : SFString('ArtDeco12'),
                  position_ : SFVec3f([SFDouble(-3.75), SFDouble(0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-3.75), SFDouble(0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco12 view'),
                      url_ : MFString([SFString("#View12")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco12'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco12'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco12")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View13'),
                  description_ : SFString('ArtDeco13'),
                  position_ : SFVec3f([SFDouble(-2.25), SFDouble(0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-2.25), SFDouble(0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco13 view'),
                      url_ : MFString([SFString("#View13")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco13'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco13'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco13")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View14'),
                  description_ : SFString('ArtDeco14'),
                  position_ : SFVec3f([SFDouble(-0.75), SFDouble(0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-0.75), SFDouble(0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco14 view'),
                      url_ : MFString([SFString("#View14")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco14'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco14'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco14")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View15'),
                  description_ : SFString('ArtDeco15'),
                  position_ : SFVec3f([SFDouble(0.75), SFDouble(0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(0.75), SFDouble(0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco15 view'),
                      url_ : MFString([SFString("#View15")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco15'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco15'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco15")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View16'),
                  description_ : SFString('ArtDeco16'),
                  position_ : SFVec3f([SFDouble(2.25), SFDouble(0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(2.25), SFDouble(0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco16 view'),
                      url_ : MFString([SFString("#View16")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco16'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco16'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco16")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View17'),
                  description_ : SFString('ArtDeco17'),
                  position_ : SFVec3f([SFDouble(3.75), SFDouble(0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(3.75), SFDouble(0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco17 view'),
                      url_ : MFString([SFString("#View17")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco17'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco17'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco17")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View18'),
                  description_ : SFString('ArtDeco18'),
                  position_ : SFVec3f([SFDouble(-3.75), SFDouble(-0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-3.75), SFDouble(-0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco18 view'),
                      url_ : MFString([SFString("#View18")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco18'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco18'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco18")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View19'),
                  description_ : SFString('ArtDeco19'),
                  position_ : SFVec3f([SFDouble(-2.25), SFDouble(-0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-2.25), SFDouble(-0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco19 view'),
                      url_ : MFString([SFString("#View19")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco19'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco19'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco19")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View20'),
                  description_ : SFString('ArtDeco20'),
                  position_ : SFVec3f([SFDouble(-0.75), SFDouble(-0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-0.75), SFDouble(-0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco20 view'),
                      url_ : MFString([SFString("#View20")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco20'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco20'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco20")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View21'),
                  description_ : SFString('ArtDeco21'),
                  position_ : SFVec3f([SFDouble(0.75), SFDouble(-0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(0.75), SFDouble(-0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco21 view'),
                      url_ : MFString([SFString("#View21")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco21'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco21'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco21")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View22'),
                  description_ : SFString('ArtDeco22'),
                  position_ : SFVec3f([SFDouble(2.25), SFDouble(-0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(2.25), SFDouble(-0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco22 view'),
                      url_ : MFString([SFString("#View22")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco22'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco22'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco22")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View23'),
                  description_ : SFString('ArtDeco23'),
                  position_ : SFVec3f([SFDouble(3.75), SFDouble(-0.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(3.75), SFDouble(-0.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco23 view'),
                      url_ : MFString([SFString("#View23")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco23'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco23'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco23")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View24'),
                  description_ : SFString('ArtDeco24'),
                  position_ : SFVec3f([SFDouble(-3.75), SFDouble(-2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-3.75), SFDouble(-2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco24 view'),
                      url_ : MFString([SFString("#View24")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco24'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco24'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco24")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View25'),
                  description_ : SFString('ArtDeco25'),
                  position_ : SFVec3f([SFDouble(-2.25), SFDouble(-2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-2.25), SFDouble(-2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco25 view'),
                      url_ : MFString([SFString("#View25")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco25'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco25'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco25")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View26'),
                  description_ : SFString('ArtDeco26'),
                  position_ : SFVec3f([SFDouble(-0.75), SFDouble(-2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-0.75), SFDouble(-2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco26 view'),
                      url_ : MFString([SFString("#View26")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco26'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco26'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco26")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View27'),
                  description_ : SFString('ArtDeco27'),
                  position_ : SFVec3f([SFDouble(0.75), SFDouble(-2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(0.75), SFDouble(-2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco27 view'),
                      url_ : MFString([SFString("#View27")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco27'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco27'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco27")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View28'),
                  description_ : SFString('ArtDeco28'),
                  position_ : SFVec3f([SFDouble(2.25), SFDouble(-2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(2.25), SFDouble(-2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco28 view'),
                      url_ : MFString([SFString("#View28")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco28'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco28'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco28")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View29'),
                  description_ : SFString('ArtDeco29'),
                  position_ : SFVec3f([SFDouble(3.75), SFDouble(-2.25), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(3.75), SFDouble(-2.25), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco29 view'),
                      url_ : MFString([SFString("#View29")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco29'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco29'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco29")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View30'),
                  description_ : SFString('ArtDeco30'),
                  position_ : SFVec3f([SFDouble(-3.75), SFDouble(-3.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-3.75), SFDouble(-3.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco30 view'),
                      url_ : MFString([SFString("#View30")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco30'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco30'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco30")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View31'),
                  description_ : SFString('ArtDeco31'),
                  position_ : SFVec3f([SFDouble(-2.25), SFDouble(-3.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-2.25), SFDouble(-3.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco31 view'),
                      url_ : MFString([SFString("#View31")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco31'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco31'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco31")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View32'),
                  description_ : SFString('ArtDeco32'),
                  position_ : SFVec3f([SFDouble(-0.75), SFDouble(-3.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(-0.75), SFDouble(-3.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco32 view'),
                      url_ : MFString([SFString("#View32")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco32'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco32'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco32")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View33'),
                  description_ : SFString('ArtDeco33'),
                  position_ : SFVec3f([SFDouble(0.75), SFDouble(-3.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(0.75), SFDouble(-3.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco33 view'),
                      url_ : MFString([SFString("#View33")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco33'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco33'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco33")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])]),

                Viewpoint(
                  DEF_ : SFString('View34'),
                  description_ : SFString('ArtDeco34'),
                  position_ : SFVec3f([SFDouble(2.25), SFDouble(-3.75), SFDouble(3)])),

                Transform(
                  translation_ : SFVec3f([SFDouble(2.25), SFDouble(-3.75), SFDouble(0)]),
                  children_ : [
                    Anchor(
                      description_ : SFString('ArtDeco34 view'),
                      url_ : MFString([SFString("#View34")]),
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              shaders_ : 
                                ProtoInstance(
                                  name_ : SFString('ArtDeco34'))),
                          geometry_ : 
                            Sphere(
                              USE_ : SFString('Ball')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.3), SFDouble(0.5)]),
                      children_ : [
                        Anchor(
                          description_ : SFString('ArtDeco34'),
                          parameter_ : MFString([SFString("target=_source")]),
                          url_ : MFString([SFString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"), SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34")]),
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMat'))),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("ArtDeco34")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      USE_ : SFString('Style'))))])])])]),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('Close_Time'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Close_Mover')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Close_Mover'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('Close_travel'))]));
void main() { exit(0); }
