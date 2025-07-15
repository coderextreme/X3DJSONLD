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
              content_ : SFString('ArtDecoPrototypes.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Prototype declarations defining values for X3D/VRML materials, originally converted from SG\' Open Inventor material examples.')),

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
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d')),

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
              title_ : SFString('ArtDecoPrototypes.x3d')),

            ProtoDeclare(
              name_ : SFString('ArtDeco00'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.25,
                      diffuseColor_ : SFColor([SFDouble(0.282435), SFDouble(0.085159), SFDouble(0.134462)]),
                      shininess_ : 0.127273,
                      specularColor_ : SFColor([SFDouble(0.276305), SFDouble(0.11431), SFDouble(0.139857)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco01'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.254777,
                      diffuseColor_ : SFColor([SFDouble(0.685208), SFDouble(0.134679), SFDouble(0.332385)]),
                      shininess_ : 0.071429,
                      specularColor_ : SFColor([SFDouble(0.122449), SFDouble(0.050035), SFDouble(0.050035)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco02'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              /*computed conversion ambientIntensity=1.745282, normalized to 1.0*/
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 1,
                      diffuseColor_ : SFColor([SFDouble(0.536861), SFDouble(0.0529), SFDouble(0.245479)]),
                      shininess_ : 0.832432,
                      specularColor_ : SFColor([SFDouble(0.805292), SFDouble(0.765198), SFDouble(0.747416)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco03'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.248649,
                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(0.452381), SFDouble(0.40339)]),
                      shininess_ : 0.902703,
                      specularColor_ : SFColor([SFDouble(0.686486), SFDouble(0.396903), SFDouble(0.419275)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco04'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.25,
                      diffuseColor_ : SFColor([SFDouble(0.748016), SFDouble(0.298362), SFDouble(0.342624)]),
                      shininess_ : 0.69697,
                      specularColor_ : SFColor([SFDouble(0.345455), SFDouble(0.345455), SFDouble(0.345455)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco05'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.24359,
                      diffuseColor_ : SFColor([SFDouble(0.945455), SFDouble(0.318988), SFDouble(0.321717)]),
                      shininess_ : 0.018182,
                      specularColor_ : SFColor([SFDouble(0.072727), SFDouble(0.021705), SFDouble(0.010732)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco06'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.25946,
                      diffuseColor_ : SFColor([SFDouble(0.228655), SFDouble(0.195513), SFDouble(0.425484)]),
                      shininess_ : 0.542553,
                      specularColor_ : SFColor([SFDouble(0.324504), SFDouble(0.404255), SFDouble(0.404255)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco07'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.333333,
                      diffuseColor_ : SFColor([SFDouble(0.200348), SFDouble(0.100857), SFDouble(0.320833)]),
                      shininess_ : 0.133333,
                      specularColor_ : SFColor([SFDouble(0.311358), SFDouble(0.387879), SFDouble(0.387879)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco08'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.242424,
                      diffuseColor_ : SFColor([SFDouble(0.330519), SFDouble(0.3389), SFDouble(0.6)]),
                      shininess_ : 0.787879,
                      specularColor_ : SFColor([SFDouble(0.290909), SFDouble(0.290909), SFDouble(0.290909)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco09'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.333333,
                      diffuseColor_ : SFColor([SFDouble(0.237059), SFDouble(0.096273), SFDouble(0.215625)]),
                      shininess_ : 0.133333,
                      specularColor_ : SFColor([SFDouble(0.311358), SFDouble(0.387879), SFDouble(0.387879)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco10'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.242425,
                      diffuseColor_ : SFColor([SFDouble(0.304), SFDouble(0.09025), SFDouble(0.207364)]),
                      shininess_ : 0.072727,
                      specularColor_ : SFColor([SFDouble(0.6665), SFDouble(0.579046), SFDouble(0.830303)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco11'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.258928,
                      diffuseColor_ : SFColor([SFDouble(0.335631), SFDouble(0.207672), SFDouble(0.238304)]),
                      emissiveColor_ : SFColor([SFDouble(0.010638), SFDouble(0.010638), SFDouble(0.010638)]),
                      shininess_ : 0.021277,
                      specularColor_ : SFColor([SFDouble(0.198631), SFDouble(0.075403), SFDouble(0.138803)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco12'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.240838,
                      diffuseColor_ : SFColor([SFDouble(0.876873), SFDouble(0.14715), SFDouble(0.00856)]),
                      shininess_ : 0.076531,
                      specularColor_ : SFColor([SFDouble(0.193878), SFDouble(0.029416), SFDouble(0.029416)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco13'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.25,
                      diffuseColor_ : SFColor([SFDouble(0.794445), SFDouble(0.249425), SFDouble(0)]),
                      shininess_ : 0.551515,
                      specularColor_ : SFColor([SFDouble(0.62904), SFDouble(0.194211), SFDouble(0.033663)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco14'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.25,
                      diffuseColor_ : SFColor([SFDouble(0.510609), SFDouble(0.17264), SFDouble(0.059872)]),
                      shininess_ : 0.933333,
                      specularColor_ : SFColor([SFDouble(0.533333), SFDouble(0.533333), SFDouble(0.533333)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco15'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.255814,
                      diffuseColor_ : SFColor([SFDouble(0.914894), SFDouble(0.444404), SFDouble(0.348914)]),
                      shininess_ : 0.12766,
                      specularColor_ : SFColor([SFDouble(0.345745), SFDouble(0.143066), SFDouble(0)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco16'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.240838,
                      diffuseColor_ : SFColor([SFDouble(0.876873), SFDouble(0.323147), SFDouble(0.199564)]),
                      shininess_ : 0.80102,
                      specularColor_ : SFColor([SFDouble(0.816327), SFDouble(0.278677), SFDouble(0.278677)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco17'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.242424,
                      diffuseColor_ : SFColor([SFDouble(0.515625), SFDouble(0.315496), SFDouble(0.252441)]),
                      shininess_ : 0.933333,
                      specularColor_ : SFColor([SFDouble(0.533333), SFDouble(0.533333), SFDouble(0.533333)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco18'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.264706,
                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0.346939), SFDouble(0.253624)]),
                      shininess_ : 0.316327,
                      specularColor_ : SFColor([SFDouble(0), SFDouble(0.311074), SFDouble(0.357143)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco19'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.259259,
                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0.251004), SFDouble(0.239248)]),
                      shininess_ : 0.060606,
                      specularColor_ : SFColor([SFDouble(0.177935), SFDouble(0.249369), SFDouble(0.229278)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco20'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.24,
                      diffuseColor_ : SFColor([SFDouble(0.228298), SFDouble(0.385771), SFDouble(0.186794)]),
                      shininess_ : 0.393939,
                      specularColor_ : SFColor([SFDouble(0.200464), SFDouble(0.300145), SFDouble(0.293518)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco21'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.25,
                      diffuseColor_ : SFColor([SFDouble(0.315389), SFDouble(0.544), SFDouble(0.258052)]),
                      shininess_ : 0.509389,
                      specularColor_ : SFColor([SFDouble(0.456), SFDouble(0.456), SFDouble(0.456)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco22'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.246032,
                      diffuseColor_ : SFColor([SFDouble(0.251104), SFDouble(0.312562), SFDouble(0.201724)]),
                      shininess_ : 0.086735,
                      specularColor_ : SFColor([SFDouble(0.209184), SFDouble(0.113842), SFDouble(0.111328)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco23'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.242424,
                      diffuseColor_ : SFColor([SFDouble(0.392348), SFDouble(0.456), SFDouble(0.417708)]),
                      shininess_ : 0.933333,
                      specularColor_ : SFColor([SFDouble(0.533333), SFDouble(0.533333), SFDouble(0.533333)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco24'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.253968,
                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(0.854922), SFDouble(0)]),
                      shininess_ : 1,
                      specularColor_ : SFColor([SFDouble(0.872449), SFDouble(0.247119), SFDouble(0.254214)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco25'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.25641,
                      diffuseColor_ : SFColor([SFDouble(0.795918), SFDouble(0.505869), SFDouble(0.093315)]),
                      shininess_ : 0.397959,
                      specularColor_ : SFColor([SFDouble(0.923469), SFDouble(0.428866), SFDouble(0.006369)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco26'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              /*computed conversion ambientIntensity=2.226234, normalized to 1.0*/
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 1,
                      diffuseColor_ : SFColor([SFDouble(0.331633), SFDouble(0.296582), SFDouble(0.279057)]),
                      shininess_ : 0.096939,
                      specularColor_ : SFColor([SFDouble(0.311224), SFDouble(0.25183), SFDouble(0.133042)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco27'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.263158,
                      diffuseColor_ : SFColor([SFDouble(0.345455), SFDouble(0.163262), SFDouble(0.122622)]),
                      shininess_ : 0.048649,
                      specularColor_ : SFColor([SFDouble(0.212121), SFDouble(0.107475), SFDouble(0)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco28'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.240506,
                      diffuseColor_ : SFColor([SFDouble(0.277281), SFDouble(0.104336), SFDouble(0.0799)]),
                      shininess_ : 0.09697,
                      specularColor_ : SFColor([SFDouble(0.305587), SFDouble(0.141916), SFDouble(0.270572)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco29'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.215686,
                      diffuseColor_ : SFColor([SFDouble(0.087034), SFDouble(0.025888), SFDouble(0)]),
                      shininess_ : 0.045918,
                      specularColor_ : SFColor([SFDouble(0.224138), SFDouble(0.104091), SFDouble(0.104091)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco30'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0,
                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      shininess_ : 0.081633,
                      specularColor_ : SFColor([SFDouble(0.293243), SFDouble(0.297387), SFDouble(0.290421)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco31'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.25641,
                      diffuseColor_ : SFColor([SFDouble(0.236364), SFDouble(0.236364), SFDouble(0.236364)]),
                      shininess_ : 0.054546,
                      specularColor_ : SFColor([SFDouble(0.29697), SFDouble(0.245839), SFDouble(0.295962)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco32'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.242424,
                      diffuseColor_ : SFColor([SFDouble(0.38087), SFDouble(0.382957), SFDouble(0.417708)]),
                      shininess_ : 0.933333,
                      specularColor_ : SFColor([SFDouble(0.533333), SFDouble(0.533333), SFDouble(0.533333)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco33'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.230089,
                      diffuseColor_ : SFColor([SFDouble(0.610811), SFDouble(0.610811), SFDouble(0.610811)]),
                      shininess_ : 0.897297,
                      specularColor_ : SFColor([SFDouble(0.767568), SFDouble(0.756757), SFDouble(0.764964)]))])),

            ProtoDeclare(
              name_ : SFString('ArtDeco34'),
              appinfo_ : SFString('UniversalMediaMaterials prototype'),
              documentation_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials'),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Material(
                      ambientIntensity_ : 0.25,
                      shininess_ : 0,
                      specularColor_ : SFColor([SFDouble(0.2), SFDouble(0.2), SFDouble(0.2)]))])),

            Anchor(
              description_ : SFString('ArtDecoPrototypeExample'),
              parameter_ : MFString([SFString("target=_blank")]),
              url_ : MFString([SFString("../data/ArtDecoExamples.json"), SFString("../data/ArtDecoExamples.x3d"), SFString("ArtDecoExamples.json"), SFString("ArtDecoExamples.x3d")]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(0.8), SFDouble(0.4), SFDouble(0)]))),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("ArtDecoExamples.x3d"), SFString("is a Materials Prototype declaration file."), SFString(""), SFString("For an example scene using these node,"), SFString("click this text and view"), SFString("ArtDecoExamples.x3d")]),
                      fontStyle_ : 
                        FontStyle(
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                          size_ : 0.8)))])]));
void main() { exit(0); }
