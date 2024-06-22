function ArtDecoPrototypes: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group13: TGroupNode;
WorldInfo14: TWorldInfoNode;
ProtoDeclare15: TProtoDeclareNode;
ProtoBody16: TProtoBodyNode;
Material17: TMaterialNode;
ProtoDeclare18: TProtoDeclareNode;
ProtoBody19: TProtoBodyNode;
Material20: TMaterialNode;
ProtoDeclare21: TProtoDeclareNode;
ProtoBody22: TProtoBodyNode;
Material23: TMaterialNode;
ProtoDeclare24: TProtoDeclareNode;
ProtoBody25: TProtoBodyNode;
Material26: TMaterialNode;
ProtoDeclare27: TProtoDeclareNode;
ProtoBody28: TProtoBodyNode;
Material29: TMaterialNode;
ProtoDeclare30: TProtoDeclareNode;
ProtoBody31: TProtoBodyNode;
Material32: TMaterialNode;
ProtoDeclare33: TProtoDeclareNode;
ProtoBody34: TProtoBodyNode;
Material35: TMaterialNode;
ProtoDeclare36: TProtoDeclareNode;
ProtoBody37: TProtoBodyNode;
Material38: TMaterialNode;
ProtoDeclare39: TProtoDeclareNode;
ProtoBody40: TProtoBodyNode;
Material41: TMaterialNode;
ProtoDeclare42: TProtoDeclareNode;
ProtoBody43: TProtoBodyNode;
Material44: TMaterialNode;
ProtoDeclare45: TProtoDeclareNode;
ProtoBody46: TProtoBodyNode;
Material47: TMaterialNode;
ProtoDeclare48: TProtoDeclareNode;
ProtoBody49: TProtoBodyNode;
Material50: TMaterialNode;
ProtoDeclare51: TProtoDeclareNode;
ProtoBody52: TProtoBodyNode;
Material53: TMaterialNode;
ProtoDeclare54: TProtoDeclareNode;
ProtoBody55: TProtoBodyNode;
Material56: TMaterialNode;
ProtoDeclare57: TProtoDeclareNode;
ProtoBody58: TProtoBodyNode;
Material59: TMaterialNode;
ProtoDeclare60: TProtoDeclareNode;
ProtoBody61: TProtoBodyNode;
Material62: TMaterialNode;
ProtoDeclare63: TProtoDeclareNode;
ProtoBody64: TProtoBodyNode;
Material65: TMaterialNode;
ProtoDeclare66: TProtoDeclareNode;
ProtoBody67: TProtoBodyNode;
Material68: TMaterialNode;
ProtoDeclare69: TProtoDeclareNode;
ProtoBody70: TProtoBodyNode;
Material71: TMaterialNode;
ProtoDeclare72: TProtoDeclareNode;
ProtoBody73: TProtoBodyNode;
Material74: TMaterialNode;
ProtoDeclare75: TProtoDeclareNode;
ProtoBody76: TProtoBodyNode;
Material77: TMaterialNode;
ProtoDeclare78: TProtoDeclareNode;
ProtoBody79: TProtoBodyNode;
Material80: TMaterialNode;
ProtoDeclare81: TProtoDeclareNode;
ProtoBody82: TProtoBodyNode;
Material83: TMaterialNode;
ProtoDeclare84: TProtoDeclareNode;
ProtoBody85: TProtoBodyNode;
Material86: TMaterialNode;
ProtoDeclare87: TProtoDeclareNode;
ProtoBody88: TProtoBodyNode;
Material89: TMaterialNode;
ProtoDeclare90: TProtoDeclareNode;
ProtoBody91: TProtoBodyNode;
Material92: TMaterialNode;
ProtoDeclare93: TProtoDeclareNode;
ProtoBody94: TProtoBodyNode;
Material95: TMaterialNode;
ProtoDeclare96: TProtoDeclareNode;
ProtoBody97: TProtoBodyNode;
Material98: TMaterialNode;
ProtoDeclare99: TProtoDeclareNode;
ProtoBody100: TProtoBodyNode;
Material101: TMaterialNode;
ProtoDeclare102: TProtoDeclareNode;
ProtoBody103: TProtoBodyNode;
Material104: TMaterialNode;
ProtoDeclare105: TProtoDeclareNode;
ProtoBody106: TProtoBodyNode;
Material107: TMaterialNode;
ProtoDeclare108: TProtoDeclareNode;
ProtoBody109: TProtoBodyNode;
Material110: TMaterialNode;
ProtoDeclare111: TProtoDeclareNode;
ProtoBody112: TProtoBodyNode;
Material113: TMaterialNode;
ProtoDeclare114: TProtoDeclareNode;
ProtoBody115: TProtoBodyNode;
Material116: TMaterialNode;
ProtoDeclare117: TProtoDeclareNode;
ProtoBody118: TProtoBodyNode;
Material119: TMaterialNode;
Anchor120: TAnchorNode;
Shape121: TShapeNode;
Appearance122: TAppearanceNode;
Material123: TMaterialNode;
Text124: TTextNode;
FontStyle125: TFontStyleNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ArtDecoPrototypes.x3d';
X3D0.Meta['description'] := 'Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.';
X3D0.Meta['creator'] := 'David Roussel';
X3D0.Meta['translator'] := 'James Harney, Don Brutzman NPS';
X3D0.Meta['created'] := '7 April 2002';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['reference'] := 'http://vrmlstuff.free.fr/materials';
X3D0.Meta['subject'] := 'Universal Media Material Library';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d';
X3D0.Meta['generator'] := 'Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html';
X3D0.Meta['license'] := '../license.html';
Group13 := TGroupNode.Create;
WorldInfo14 := TWorldInfoNode.Create;
WorldInfo14.Title := 'ArtDecoPrototypes.x3d';
{ .AddChildren }
Group13.AddChildren([WorldInfo14]);
ProtoDeclare15 := TProtoDeclareNode.Create;
ProtoDeclare15.NameField := 'ArtDeco00';
ProtoDeclare15.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare15.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody16 := TProtoBodyNode.Create;
Material17 := TMaterialNode.Create;
Material17.AmbientIntensity := 0.25;
Material17.DiffuseColor := Vector3(0.282435,0.085159,0.134462);
Material17.Shininess := 0.127273;
Material17.SpecularColor := Vector3(0.276305,0.11431,0.139857);
{ .AddChildren }
ProtoBody16.AddChildren([Material17]);
{ .SetProtoBody }
ProtoDeclare15.ProtoBody := ProtoBody16;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare15]);
ProtoDeclare18 := TProtoDeclareNode.Create;
ProtoDeclare18.NameField := 'ArtDeco01';
ProtoDeclare18.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare18.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody19 := TProtoBodyNode.Create;
Material20 := TMaterialNode.Create;
Material20.AmbientIntensity := 0.254777;
Material20.DiffuseColor := Vector3(0.685208,0.134679,0.332385);
Material20.Shininess := 0.071429;
Material20.SpecularColor := Vector3(0.122449,0.050035,0.050035);
{ .AddChildren }
ProtoBody19.AddChildren([Material20]);
{ .SetProtoBody }
ProtoDeclare18.ProtoBody := ProtoBody19;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare18]);
ProtoDeclare21 := TProtoDeclareNode.Create;
ProtoDeclare21.NameField := 'ArtDeco02';
ProtoDeclare21.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare21.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
{ computed conversion ambientIntensity=1.745282, normalized to 1.0 }
ProtoBody22 := TProtoBodyNode.Create;
Material23 := TMaterialNode.Create;
Material23.AmbientIntensity := 1;
Material23.DiffuseColor := Vector3(0.536861,0.0529,0.245479);
Material23.Shininess := 0.832432;
Material23.SpecularColor := Vector3(0.805292,0.765198,0.747416);
{ .AddChildren }
ProtoBody22.AddChildren([Material23]);
{ .SetProtoBody }
ProtoDeclare21.ProtoBody := ProtoBody22;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare21]);
ProtoDeclare24 := TProtoDeclareNode.Create;
ProtoDeclare24.NameField := 'ArtDeco03';
ProtoDeclare24.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare24.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody25 := TProtoBodyNode.Create;
Material26 := TMaterialNode.Create;
Material26.AmbientIntensity := 0.248649;
Material26.DiffuseColor := Vector3(1,0.452381,0.40339);
Material26.Shininess := 0.902703;
Material26.SpecularColor := Vector3(0.686486,0.396903,0.419275);
{ .AddChildren }
ProtoBody25.AddChildren([Material26]);
{ .SetProtoBody }
ProtoDeclare24.ProtoBody := ProtoBody25;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare24]);
ProtoDeclare27 := TProtoDeclareNode.Create;
ProtoDeclare27.NameField := 'ArtDeco04';
ProtoDeclare27.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare27.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody28 := TProtoBodyNode.Create;
Material29 := TMaterialNode.Create;
Material29.AmbientIntensity := 0.25;
Material29.DiffuseColor := Vector3(0.748016,0.298362,0.342624);
Material29.Shininess := 0.69697;
Material29.SpecularColor := Vector3(0.345455,0.345455,0.345455);
{ .AddChildren }
ProtoBody28.AddChildren([Material29]);
{ .SetProtoBody }
ProtoDeclare27.ProtoBody := ProtoBody28;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare27]);
ProtoDeclare30 := TProtoDeclareNode.Create;
ProtoDeclare30.NameField := 'ArtDeco05';
ProtoDeclare30.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare30.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody31 := TProtoBodyNode.Create;
Material32 := TMaterialNode.Create;
Material32.AmbientIntensity := 0.24359;
Material32.DiffuseColor := Vector3(0.945455,0.318988,0.321717);
Material32.Shininess := 0.018182;
Material32.SpecularColor := Vector3(0.072727,0.021705,0.010732);
{ .AddChildren }
ProtoBody31.AddChildren([Material32]);
{ .SetProtoBody }
ProtoDeclare30.ProtoBody := ProtoBody31;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare30]);
ProtoDeclare33 := TProtoDeclareNode.Create;
ProtoDeclare33.NameField := 'ArtDeco06';
ProtoDeclare33.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare33.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody34 := TProtoBodyNode.Create;
Material35 := TMaterialNode.Create;
Material35.AmbientIntensity := 0.25946;
Material35.DiffuseColor := Vector3(0.228655,0.195513,0.425484);
Material35.Shininess := 0.542553;
Material35.SpecularColor := Vector3(0.324504,0.404255,0.404255);
{ .AddChildren }
ProtoBody34.AddChildren([Material35]);
{ .SetProtoBody }
ProtoDeclare33.ProtoBody := ProtoBody34;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare33]);
ProtoDeclare36 := TProtoDeclareNode.Create;
ProtoDeclare36.NameField := 'ArtDeco07';
ProtoDeclare36.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare36.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody37 := TProtoBodyNode.Create;
Material38 := TMaterialNode.Create;
Material38.AmbientIntensity := 0.333333;
Material38.DiffuseColor := Vector3(0.200348,0.100857,0.320833);
Material38.Shininess := 0.133333;
Material38.SpecularColor := Vector3(0.311358,0.387879,0.387879);
{ .AddChildren }
ProtoBody37.AddChildren([Material38]);
{ .SetProtoBody }
ProtoDeclare36.ProtoBody := ProtoBody37;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare36]);
ProtoDeclare39 := TProtoDeclareNode.Create;
ProtoDeclare39.NameField := 'ArtDeco08';
ProtoDeclare39.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare39.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody40 := TProtoBodyNode.Create;
Material41 := TMaterialNode.Create;
Material41.AmbientIntensity := 0.242424;
Material41.DiffuseColor := Vector3(0.330519,0.3389,0.6);
Material41.Shininess := 0.787879;
Material41.SpecularColor := Vector3(0.290909,0.290909,0.290909);
{ .AddChildren }
ProtoBody40.AddChildren([Material41]);
{ .SetProtoBody }
ProtoDeclare39.ProtoBody := ProtoBody40;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare39]);
ProtoDeclare42 := TProtoDeclareNode.Create;
ProtoDeclare42.NameField := 'ArtDeco09';
ProtoDeclare42.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare42.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody43 := TProtoBodyNode.Create;
Material44 := TMaterialNode.Create;
Material44.AmbientIntensity := 0.333333;
Material44.DiffuseColor := Vector3(0.237059,0.096273,0.215625);
Material44.Shininess := 0.133333;
Material44.SpecularColor := Vector3(0.311358,0.387879,0.387879);
{ .AddChildren }
ProtoBody43.AddChildren([Material44]);
{ .SetProtoBody }
ProtoDeclare42.ProtoBody := ProtoBody43;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare42]);
ProtoDeclare45 := TProtoDeclareNode.Create;
ProtoDeclare45.NameField := 'ArtDeco10';
ProtoDeclare45.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare45.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody46 := TProtoBodyNode.Create;
Material47 := TMaterialNode.Create;
Material47.AmbientIntensity := 0.242425;
Material47.DiffuseColor := Vector3(0.304,0.09025,0.207364);
Material47.Shininess := 0.072727;
Material47.SpecularColor := Vector3(0.6665,0.579046,0.830303);
{ .AddChildren }
ProtoBody46.AddChildren([Material47]);
{ .SetProtoBody }
ProtoDeclare45.ProtoBody := ProtoBody46;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare45]);
ProtoDeclare48 := TProtoDeclareNode.Create;
ProtoDeclare48.NameField := 'ArtDeco11';
ProtoDeclare48.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare48.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody49 := TProtoBodyNode.Create;
Material50 := TMaterialNode.Create;
Material50.AmbientIntensity := 0.258928;
Material50.DiffuseColor := Vector3(0.335631,0.207672,0.238304);
Material50.EmissiveColor := Vector3(0.010638,0.010638,0.010638);
Material50.Shininess := 0.021277;
Material50.SpecularColor := Vector3(0.198631,0.075403,0.138803);
{ .AddChildren }
ProtoBody49.AddChildren([Material50]);
{ .SetProtoBody }
ProtoDeclare48.ProtoBody := ProtoBody49;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare48]);
ProtoDeclare51 := TProtoDeclareNode.Create;
ProtoDeclare51.NameField := 'ArtDeco12';
ProtoDeclare51.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare51.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody52 := TProtoBodyNode.Create;
Material53 := TMaterialNode.Create;
Material53.AmbientIntensity := 0.240838;
Material53.DiffuseColor := Vector3(0.876873,0.14715,0.00856);
Material53.Shininess := 0.076531;
Material53.SpecularColor := Vector3(0.193878,0.029416,0.029416);
{ .AddChildren }
ProtoBody52.AddChildren([Material53]);
{ .SetProtoBody }
ProtoDeclare51.ProtoBody := ProtoBody52;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare51]);
ProtoDeclare54 := TProtoDeclareNode.Create;
ProtoDeclare54.NameField := 'ArtDeco13';
ProtoDeclare54.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare54.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody55 := TProtoBodyNode.Create;
Material56 := TMaterialNode.Create;
Material56.AmbientIntensity := 0.25;
Material56.DiffuseColor := Vector3(0.794445,0.249425,0);
Material56.Shininess := 0.551515;
Material56.SpecularColor := Vector3(0.62904,0.194211,0.033663);
{ .AddChildren }
ProtoBody55.AddChildren([Material56]);
{ .SetProtoBody }
ProtoDeclare54.ProtoBody := ProtoBody55;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare54]);
ProtoDeclare57 := TProtoDeclareNode.Create;
ProtoDeclare57.NameField := 'ArtDeco14';
ProtoDeclare57.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare57.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody58 := TProtoBodyNode.Create;
Material59 := TMaterialNode.Create;
Material59.AmbientIntensity := 0.25;
Material59.DiffuseColor := Vector3(0.510609,0.17264,0.059872);
Material59.Shininess := 0.933333;
Material59.SpecularColor := Vector3(0.533333,0.533333,0.533333);
{ .AddChildren }
ProtoBody58.AddChildren([Material59]);
{ .SetProtoBody }
ProtoDeclare57.ProtoBody := ProtoBody58;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare57]);
ProtoDeclare60 := TProtoDeclareNode.Create;
ProtoDeclare60.NameField := 'ArtDeco15';
ProtoDeclare60.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare60.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody61 := TProtoBodyNode.Create;
Material62 := TMaterialNode.Create;
Material62.AmbientIntensity := 0.255814;
Material62.DiffuseColor := Vector3(0.914894,0.444404,0.348914);
Material62.Shininess := 0.12766;
Material62.SpecularColor := Vector3(0.345745,0.143066,0);
{ .AddChildren }
ProtoBody61.AddChildren([Material62]);
{ .SetProtoBody }
ProtoDeclare60.ProtoBody := ProtoBody61;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare60]);
ProtoDeclare63 := TProtoDeclareNode.Create;
ProtoDeclare63.NameField := 'ArtDeco16';
ProtoDeclare63.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare63.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody64 := TProtoBodyNode.Create;
Material65 := TMaterialNode.Create;
Material65.AmbientIntensity := 0.240838;
Material65.DiffuseColor := Vector3(0.876873,0.323147,0.199564);
Material65.Shininess := 0.80102;
Material65.SpecularColor := Vector3(0.816327,0.278677,0.278677);
{ .AddChildren }
ProtoBody64.AddChildren([Material65]);
{ .SetProtoBody }
ProtoDeclare63.ProtoBody := ProtoBody64;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare63]);
ProtoDeclare66 := TProtoDeclareNode.Create;
ProtoDeclare66.NameField := 'ArtDeco17';
ProtoDeclare66.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare66.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody67 := TProtoBodyNode.Create;
Material68 := TMaterialNode.Create;
Material68.AmbientIntensity := 0.242424;
Material68.DiffuseColor := Vector3(0.515625,0.315496,0.252441);
Material68.Shininess := 0.933333;
Material68.SpecularColor := Vector3(0.533333,0.533333,0.533333);
{ .AddChildren }
ProtoBody67.AddChildren([Material68]);
{ .SetProtoBody }
ProtoDeclare66.ProtoBody := ProtoBody67;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare66]);
ProtoDeclare69 := TProtoDeclareNode.Create;
ProtoDeclare69.NameField := 'ArtDeco18';
ProtoDeclare69.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare69.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody70 := TProtoBodyNode.Create;
Material71 := TMaterialNode.Create;
Material71.AmbientIntensity := 0.264706;
Material71.DiffuseColor := Vector3(0,0.346939,0.253624);
Material71.Shininess := 0.316327;
Material71.SpecularColor := Vector3(0,0.311074,0.357143);
{ .AddChildren }
ProtoBody70.AddChildren([Material71]);
{ .SetProtoBody }
ProtoDeclare69.ProtoBody := ProtoBody70;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare69]);
ProtoDeclare72 := TProtoDeclareNode.Create;
ProtoDeclare72.NameField := 'ArtDeco19';
ProtoDeclare72.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare72.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody73 := TProtoBodyNode.Create;
Material74 := TMaterialNode.Create;
Material74.AmbientIntensity := 0.259259;
Material74.DiffuseColor := Vector3(0,0.251004,0.239248);
Material74.Shininess := 0.060606;
Material74.SpecularColor := Vector3(0.177935,0.249369,0.229278);
{ .AddChildren }
ProtoBody73.AddChildren([Material74]);
{ .SetProtoBody }
ProtoDeclare72.ProtoBody := ProtoBody73;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare72]);
ProtoDeclare75 := TProtoDeclareNode.Create;
ProtoDeclare75.NameField := 'ArtDeco20';
ProtoDeclare75.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare75.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody76 := TProtoBodyNode.Create;
Material77 := TMaterialNode.Create;
Material77.AmbientIntensity := 0.24;
Material77.DiffuseColor := Vector3(0.228298,0.385771,0.186794);
Material77.Shininess := 0.393939;
Material77.SpecularColor := Vector3(0.200464,0.300145,0.293518);
{ .AddChildren }
ProtoBody76.AddChildren([Material77]);
{ .SetProtoBody }
ProtoDeclare75.ProtoBody := ProtoBody76;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare75]);
ProtoDeclare78 := TProtoDeclareNode.Create;
ProtoDeclare78.NameField := 'ArtDeco21';
ProtoDeclare78.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare78.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody79 := TProtoBodyNode.Create;
Material80 := TMaterialNode.Create;
Material80.AmbientIntensity := 0.25;
Material80.DiffuseColor := Vector3(0.315389,0.544,0.258052);
Material80.Shininess := 0.509389;
Material80.SpecularColor := Vector3(0.456,0.456,0.456);
{ .AddChildren }
ProtoBody79.AddChildren([Material80]);
{ .SetProtoBody }
ProtoDeclare78.ProtoBody := ProtoBody79;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare78]);
ProtoDeclare81 := TProtoDeclareNode.Create;
ProtoDeclare81.NameField := 'ArtDeco22';
ProtoDeclare81.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare81.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody82 := TProtoBodyNode.Create;
Material83 := TMaterialNode.Create;
Material83.AmbientIntensity := 0.246032;
Material83.DiffuseColor := Vector3(0.251104,0.312562,0.201724);
Material83.Shininess := 0.086735;
Material83.SpecularColor := Vector3(0.209184,0.113842,0.111328);
{ .AddChildren }
ProtoBody82.AddChildren([Material83]);
{ .SetProtoBody }
ProtoDeclare81.ProtoBody := ProtoBody82;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare81]);
ProtoDeclare84 := TProtoDeclareNode.Create;
ProtoDeclare84.NameField := 'ArtDeco23';
ProtoDeclare84.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare84.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody85 := TProtoBodyNode.Create;
Material86 := TMaterialNode.Create;
Material86.AmbientIntensity := 0.242424;
Material86.DiffuseColor := Vector3(0.392348,0.456,0.417708);
Material86.Shininess := 0.933333;
Material86.SpecularColor := Vector3(0.533333,0.533333,0.533333);
{ .AddChildren }
ProtoBody85.AddChildren([Material86]);
{ .SetProtoBody }
ProtoDeclare84.ProtoBody := ProtoBody85;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare84]);
ProtoDeclare87 := TProtoDeclareNode.Create;
ProtoDeclare87.NameField := 'ArtDeco24';
ProtoDeclare87.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare87.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody88 := TProtoBodyNode.Create;
Material89 := TMaterialNode.Create;
Material89.AmbientIntensity := 0.253968;
Material89.DiffuseColor := Vector3(1,0.854922,0);
Material89.Shininess := 1;
Material89.SpecularColor := Vector3(0.872449,0.247119,0.254214);
{ .AddChildren }
ProtoBody88.AddChildren([Material89]);
{ .SetProtoBody }
ProtoDeclare87.ProtoBody := ProtoBody88;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare87]);
ProtoDeclare90 := TProtoDeclareNode.Create;
ProtoDeclare90.NameField := 'ArtDeco25';
ProtoDeclare90.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare90.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody91 := TProtoBodyNode.Create;
Material92 := TMaterialNode.Create;
Material92.AmbientIntensity := 0.25641;
Material92.DiffuseColor := Vector3(0.795918,0.505869,0.093315);
Material92.Shininess := 0.397959;
Material92.SpecularColor := Vector3(0.923469,0.428866,0.006369);
{ .AddChildren }
ProtoBody91.AddChildren([Material92]);
{ .SetProtoBody }
ProtoDeclare90.ProtoBody := ProtoBody91;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare90]);
ProtoDeclare93 := TProtoDeclareNode.Create;
ProtoDeclare93.NameField := 'ArtDeco26';
ProtoDeclare93.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare93.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
{ computed conversion ambientIntensity=2.226234, normalized to 1.0 }
ProtoBody94 := TProtoBodyNode.Create;
Material95 := TMaterialNode.Create;
Material95.AmbientIntensity := 1;
Material95.DiffuseColor := Vector3(0.331633,0.296582,0.279057);
Material95.Shininess := 0.096939;
Material95.SpecularColor := Vector3(0.311224,0.25183,0.133042);
{ .AddChildren }
ProtoBody94.AddChildren([Material95]);
{ .SetProtoBody }
ProtoDeclare93.ProtoBody := ProtoBody94;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare93]);
ProtoDeclare96 := TProtoDeclareNode.Create;
ProtoDeclare96.NameField := 'ArtDeco27';
ProtoDeclare96.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare96.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody97 := TProtoBodyNode.Create;
Material98 := TMaterialNode.Create;
Material98.AmbientIntensity := 0.263158;
Material98.DiffuseColor := Vector3(0.345455,0.163262,0.122622);
Material98.Shininess := 0.048649;
Material98.SpecularColor := Vector3(0.212121,0.107475,0);
{ .AddChildren }
ProtoBody97.AddChildren([Material98]);
{ .SetProtoBody }
ProtoDeclare96.ProtoBody := ProtoBody97;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare96]);
ProtoDeclare99 := TProtoDeclareNode.Create;
ProtoDeclare99.NameField := 'ArtDeco28';
ProtoDeclare99.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare99.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody100 := TProtoBodyNode.Create;
Material101 := TMaterialNode.Create;
Material101.AmbientIntensity := 0.240506;
Material101.DiffuseColor := Vector3(0.277281,0.104336,0.0799);
Material101.Shininess := 0.09697;
Material101.SpecularColor := Vector3(0.305587,0.141916,0.270572);
{ .AddChildren }
ProtoBody100.AddChildren([Material101]);
{ .SetProtoBody }
ProtoDeclare99.ProtoBody := ProtoBody100;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare99]);
ProtoDeclare102 := TProtoDeclareNode.Create;
ProtoDeclare102.NameField := 'ArtDeco29';
ProtoDeclare102.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare102.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody103 := TProtoBodyNode.Create;
Material104 := TMaterialNode.Create;
Material104.AmbientIntensity := 0.215686;
Material104.DiffuseColor := Vector3(0.087034,0.025888,0);
Material104.Shininess := 0.045918;
Material104.SpecularColor := Vector3(0.224138,0.104091,0.104091);
{ .AddChildren }
ProtoBody103.AddChildren([Material104]);
{ .SetProtoBody }
ProtoDeclare102.ProtoBody := ProtoBody103;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare102]);
ProtoDeclare105 := TProtoDeclareNode.Create;
ProtoDeclare105.NameField := 'ArtDeco30';
ProtoDeclare105.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare105.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody106 := TProtoBodyNode.Create;
Material107 := TMaterialNode.Create;
Material107.AmbientIntensity := 0;
Material107.DiffuseColor := Vector3(0,0,0);
Material107.Shininess := 0.081633;
Material107.SpecularColor := Vector3(0.293243,0.297387,0.290421);
{ .AddChildren }
ProtoBody106.AddChildren([Material107]);
{ .SetProtoBody }
ProtoDeclare105.ProtoBody := ProtoBody106;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare105]);
ProtoDeclare108 := TProtoDeclareNode.Create;
ProtoDeclare108.NameField := 'ArtDeco31';
ProtoDeclare108.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare108.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody109 := TProtoBodyNode.Create;
Material110 := TMaterialNode.Create;
Material110.AmbientIntensity := 0.25641;
Material110.DiffuseColor := Vector3(0.236364,0.236364,0.236364);
Material110.Shininess := 0.054546;
Material110.SpecularColor := Vector3(0.29697,0.245839,0.295962);
{ .AddChildren }
ProtoBody109.AddChildren([Material110]);
{ .SetProtoBody }
ProtoDeclare108.ProtoBody := ProtoBody109;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare108]);
ProtoDeclare111 := TProtoDeclareNode.Create;
ProtoDeclare111.NameField := 'ArtDeco32';
ProtoDeclare111.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare111.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody112 := TProtoBodyNode.Create;
Material113 := TMaterialNode.Create;
Material113.AmbientIntensity := 0.242424;
Material113.DiffuseColor := Vector3(0.38087,0.382957,0.417708);
Material113.Shininess := 0.933333;
Material113.SpecularColor := Vector3(0.533333,0.533333,0.533333);
{ .AddChildren }
ProtoBody112.AddChildren([Material113]);
{ .SetProtoBody }
ProtoDeclare111.ProtoBody := ProtoBody112;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare111]);
ProtoDeclare114 := TProtoDeclareNode.Create;
ProtoDeclare114.NameField := 'ArtDeco33';
ProtoDeclare114.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare114.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody115 := TProtoBodyNode.Create;
Material116 := TMaterialNode.Create;
Material116.AmbientIntensity := 0.230089;
Material116.DiffuseColor := Vector3(0.610811,0.610811,0.610811);
Material116.Shininess := 0.897297;
Material116.SpecularColor := Vector3(0.767568,0.756757,0.764964);
{ .AddChildren }
ProtoBody115.AddChildren([Material116]);
{ .SetProtoBody }
ProtoDeclare114.ProtoBody := ProtoBody115;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare114]);
ProtoDeclare117 := TProtoDeclareNode.Create;
ProtoDeclare117.NameField := 'ArtDeco34';
ProtoDeclare117.Appinfo := 'UniversalMediaMaterials prototype';
ProtoDeclare117.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
ProtoBody118 := TProtoBodyNode.Create;
Material119 := TMaterialNode.Create;
Material119.AmbientIntensity := 0.25;
Material119.Shininess := 0;
Material119.SpecularColor := Vector3(0.2,0.2,0.2);
{ .AddChildren }
ProtoBody118.AddChildren([Material119]);
{ .SetProtoBody }
ProtoDeclare117.ProtoBody := ProtoBody118;
{ .AddChildren }
Group13.AddChildren([ProtoDeclare117]);
Anchor120 := TAnchorNode.Create;
Anchor120.Description := 'ArtDecoPrototypeExample';
Anchor120.SetParameter(['target=_blank']);
Anchor120.SetUrl(['../data/ArtDecoExamples.json','../data/ArtDecoExamples.x3d','ArtDecoExamples.json','ArtDecoExamples.x3d']);
Shape121 := TShapeNode.Create;
Appearance122 := TAppearanceNode.Create;
Material123 := TMaterialNode.Create;
Material123.DiffuseColor := Vector3(0.8,0.4,0);
{ .SetMaterial }
Appearance122.Material := Material123;
{ .SetAppearance }
Shape121.Appearance := Appearance122;
Text124 := TTextNode.Create;
Text124.SetText(['ArtDecoExamples.x3d','is a Materials Prototype declaration file.','','For an example scene using these node,','click this text and view','ArtDecoExamples.x3d']);
FontStyle125 := TFontStyleNode.Create;
FontStyle125.Justify := fjMiddle;
FontStyle125.JustifyMinor := fjMiddle;
FontStyle125.Size := 0.8;
{ .SetFontStyle }
Text124.FontStyle := FontStyle125;
{ .SetGeometry }
Shape121.Geometry := Text124;
{ .AddChildren }
Anchor120.AddChildren([Shape121]);
{ .AddChildren }
Group13.AddChildren([Anchor120]);
{ .AddGroup }
X3D0.AddChildren([Group13]);
Result := X3D0;
end;
