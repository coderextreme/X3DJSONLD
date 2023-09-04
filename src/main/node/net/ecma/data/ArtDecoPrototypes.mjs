'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ArtDecoPrototypes.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.")}),

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
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("ArtDeco00"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.25),
                      diffuseColor : new SFColor([0.282435,0.085159,0.134462]),
                      specularColor : new SFColor([0.276305,0.11431,0.139857]),
                      shininess : new SFFloat(0.127273)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco01"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.254777),
                      diffuseColor : new SFColor([0.685208,0.134679,0.332385]),
                      specularColor : new SFColor([0.122449,0.050035,0.050035]),
                      shininess : new SFFloat(0.071429)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco02"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(1),
                      diffuseColor : new SFColor([0.536861,0.0529,0.245479]),
                      specularColor : new SFColor([0.805292,0.765198,0.747416]),
                      shininess : new SFFloat(0.832432)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco03"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.248649),
                      diffuseColor : new SFColor([1,0.452381,0.40339]),
                      specularColor : new SFColor([0.686486,0.396903,0.419275]),
                      shininess : new SFFloat(0.902703)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco04"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.25),
                      diffuseColor : new SFColor([0.748016,0.298362,0.342624]),
                      specularColor : new SFColor([0.345455,0.345455,0.345455]),
                      shininess : new SFFloat(0.69697)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco05"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.24359),
                      diffuseColor : new SFColor([0.945455,0.318988,0.321717]),
                      specularColor : new SFColor([0.072727,0.021705,0.010732]),
                      shininess : new SFFloat(0.018182)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco06"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.25946),
                      diffuseColor : new SFColor([0.228655,0.195513,0.425484]),
                      specularColor : new SFColor([0.324504,0.404255,0.404255]),
                      shininess : new SFFloat(0.542553)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco07"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.333333),
                      diffuseColor : new SFColor([0.200348,0.100857,0.320833]),
                      specularColor : new SFColor([0.311358,0.387879,0.387879]),
                      shininess : new SFFloat(0.133333)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco08"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.242424),
                      diffuseColor : new SFColor([0.330519,0.3389,0.6]),
                      specularColor : new SFColor([0.290909,0.290909,0.290909]),
                      shininess : new SFFloat(0.787879)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco09"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.333333),
                      diffuseColor : new SFColor([0.237059,0.096273,0.215625]),
                      specularColor : new SFColor([0.311358,0.387879,0.387879]),
                      shininess : new SFFloat(0.133333)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco10"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.242425),
                      diffuseColor : new SFColor([0.304,0.09025,0.207364]),
                      specularColor : new SFColor([0.6665,0.579046,0.830303]),
                      shininess : new SFFloat(0.072727)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco11"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.258928),
                      diffuseColor : new SFColor([0.335631,0.207672,0.238304]),
                      specularColor : new SFColor([0.198631,0.075403,0.138803]),
                      emissiveColor : new SFColor([0.010638,0.010638,0.010638]),
                      shininess : new SFFloat(0.021277)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco12"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.240838),
                      diffuseColor : new SFColor([0.876873,0.14715,0.00856]),
                      specularColor : new SFColor([0.193878,0.029416,0.029416]),
                      shininess : new SFFloat(0.076531)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco13"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.25),
                      diffuseColor : new SFColor([0.794445,0.249425,0]),
                      specularColor : new SFColor([0.62904,0.194211,0.033663]),
                      shininess : new SFFloat(0.551515)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco14"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.25),
                      diffuseColor : new SFColor([0.510609,0.17264,0.059872]),
                      specularColor : new SFColor([0.533333,0.533333,0.533333]),
                      shininess : new SFFloat(0.933333)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco15"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.255814),
                      diffuseColor : new SFColor([0.914894,0.444404,0.348914]),
                      specularColor : new SFColor([0.345745,0.143066,0]),
                      shininess : new SFFloat(0.12766)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco16"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.240838),
                      diffuseColor : new SFColor([0.876873,0.323147,0.199564]),
                      specularColor : new SFColor([0.816327,0.278677,0.278677]),
                      shininess : new SFFloat(0.80102)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco17"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.242424),
                      diffuseColor : new SFColor([0.515625,0.315496,0.252441]),
                      specularColor : new SFColor([0.533333,0.533333,0.533333]),
                      shininess : new SFFloat(0.933333)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco18"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.264706),
                      diffuseColor : new SFColor([0,0.346939,0.253624]),
                      specularColor : new SFColor([0,0.311074,0.357143]),
                      shininess : new SFFloat(0.316327)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco19"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.259259),
                      diffuseColor : new SFColor([0,0.251004,0.239248]),
                      specularColor : new SFColor([0.177935,0.249369,0.229278]),
                      shininess : new SFFloat(0.060606)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco20"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.24),
                      diffuseColor : new SFColor([0.228298,0.385771,0.186794]),
                      specularColor : new SFColor([0.200464,0.300145,0.293518]),
                      shininess : new SFFloat(0.393939)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco21"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.25),
                      diffuseColor : new SFColor([0.315389,0.544,0.258052]),
                      specularColor : new SFColor([0.456,0.456,0.456]),
                      shininess : new SFFloat(0.509389)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco22"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.246032),
                      diffuseColor : new SFColor([0.251104,0.312562,0.201724]),
                      specularColor : new SFColor([0.209184,0.113842,0.111328]),
                      shininess : new SFFloat(0.086735)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco23"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.242424),
                      diffuseColor : new SFColor([0.392348,0.456,0.417708]),
                      specularColor : new SFColor([0.533333,0.533333,0.533333]),
                      shininess : new SFFloat(0.933333)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco24"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.253968),
                      diffuseColor : new SFColor([1,0.854922,0]),
                      specularColor : new SFColor([0.872449,0.247119,0.254214]),
                      shininess : new SFFloat(1)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco25"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.25641),
                      diffuseColor : new SFColor([0.795918,0.505869,0.093315]),
                      specularColor : new SFColor([0.923469,0.428866,0.006369]),
                      shininess : new SFFloat(0.397959)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco26"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(1),
                      diffuseColor : new SFColor([0.331633,0.296582,0.279057]),
                      specularColor : new SFColor([0.311224,0.25183,0.133042]),
                      shininess : new SFFloat(0.096939)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco27"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.263158),
                      diffuseColor : new SFColor([0.345455,0.163262,0.122622]),
                      specularColor : new SFColor([0.212121,0.107475,0]),
                      shininess : new SFFloat(0.048649)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco28"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.240506),
                      diffuseColor : new SFColor([0.277281,0.104336,0.0799]),
                      specularColor : new SFColor([0.305587,0.141916,0.270572]),
                      shininess : new SFFloat(0.09697)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco29"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.215686),
                      diffuseColor : new SFColor([0.087034,0.025888,0]),
                      specularColor : new SFColor([0.224138,0.104091,0.104091]),
                      shininess : new SFFloat(0.045918)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco30"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0),
                      diffuseColor : new SFColor([0,0,0]),
                      specularColor : new SFColor([0.293243,0.297387,0.290421]),
                      shininess : new SFFloat(0.081633)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco31"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.25641),
                      diffuseColor : new SFColor([0.236364,0.236364,0.236364]),
                      specularColor : new SFColor([0.29697,0.245839,0.295962]),
                      shininess : new SFFloat(0.054546)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco32"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.242424),
                      diffuseColor : new SFColor([0.38087,0.382957,0.417708]),
                      specularColor : new SFColor([0.533333,0.533333,0.533333]),
                      shininess : new SFFloat(0.933333)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco33"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.230089),
                      diffuseColor : new SFColor([0.610811,0.610811,0.610811]),
                      specularColor : new SFColor([0.767568,0.756757,0.764964]),
                      shininess : new SFFloat(0.897297)})])}))}),

            new ProtoDeclare({
              name : new SFString("ArtDeco34"),
              ProtoInterface : new SFNode(
                new ProtoInterface({})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Material({
                      ambientIntensity : new SFFloat(0.25),
                      specularColor : new SFColor([0.2,0.2,0.2]),
                      shininess : new SFFloat(0)})])}))}),

            new WorldInfo({
              title : new SFString("ArtDecoPrototypes.x3d")}),

            new Anchor({
              description : new SFString("ArtDecoPrototypeExample"),
              url : new MFString(["../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d"]),
              parameter : new MFString(["target=_blank"]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.8,0.4,0])}))})),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          size : new SFFloat(0.8),
                          justify : new MFString(["MIDDLE","MIDDLE"])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
