unit ArtDecoPrototypes;

interface

uses X3DNodes;

function CreateArtDecoPrototypes: TX3DRootNode;

implementation

uses CastleVectors;

function CreateArtDecoPrototypes: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group13: TGroupNode;
WorldInfo14: TWorldInfoNode;
X3DPrototype15: TX3DPrototype;
X3DPrototype16: TX3DPrototype;
Material17: TMaterialNode;
X3DPrototype18: TX3DPrototype;
X3DPrototype19: TX3DPrototype;
Material20: TMaterialNode;
X3DPrototype21: TX3DPrototype;
X3DPrototype22: TX3DPrototype;
Material23: TMaterialNode;
X3DPrototype24: TX3DPrototype;
X3DPrototype25: TX3DPrototype;
Material26: TMaterialNode;
X3DPrototype27: TX3DPrototype;
X3DPrototype28: TX3DPrototype;
Material29: TMaterialNode;
X3DPrototype30: TX3DPrototype;
X3DPrototype31: TX3DPrototype;
Material32: TMaterialNode;
X3DPrototype33: TX3DPrototype;
X3DPrototype34: TX3DPrototype;
Material35: TMaterialNode;
X3DPrototype36: TX3DPrototype;
X3DPrototype37: TX3DPrototype;
Material38: TMaterialNode;
X3DPrototype39: TX3DPrototype;
X3DPrototype40: TX3DPrototype;
Material41: TMaterialNode;
X3DPrototype42: TX3DPrototype;
X3DPrototype43: TX3DPrototype;
Material44: TMaterialNode;
X3DPrototype45: TX3DPrototype;
X3DPrototype46: TX3DPrototype;
Material47: TMaterialNode;
X3DPrototype48: TX3DPrototype;
X3DPrototype49: TX3DPrototype;
Material50: TMaterialNode;
X3DPrototype51: TX3DPrototype;
X3DPrototype52: TX3DPrototype;
Material53: TMaterialNode;
X3DPrototype54: TX3DPrototype;
X3DPrototype55: TX3DPrototype;
Material56: TMaterialNode;
X3DPrototype57: TX3DPrototype;
X3DPrototype58: TX3DPrototype;
Material59: TMaterialNode;
X3DPrototype60: TX3DPrototype;
X3DPrototype61: TX3DPrototype;
Material62: TMaterialNode;
X3DPrototype63: TX3DPrototype;
X3DPrototype64: TX3DPrototype;
Material65: TMaterialNode;
X3DPrototype66: TX3DPrototype;
X3DPrototype67: TX3DPrototype;
Material68: TMaterialNode;
X3DPrototype69: TX3DPrototype;
X3DPrototype70: TX3DPrototype;
Material71: TMaterialNode;
X3DPrototype72: TX3DPrototype;
X3DPrototype73: TX3DPrototype;
Material74: TMaterialNode;
X3DPrototype75: TX3DPrototype;
X3DPrototype76: TX3DPrototype;
Material77: TMaterialNode;
X3DPrototype78: TX3DPrototype;
X3DPrototype79: TX3DPrototype;
Material80: TMaterialNode;
X3DPrototype81: TX3DPrototype;
X3DPrototype82: TX3DPrototype;
Material83: TMaterialNode;
X3DPrototype84: TX3DPrototype;
X3DPrototype85: TX3DPrototype;
Material86: TMaterialNode;
X3DPrototype87: TX3DPrototype;
X3DPrototype88: TX3DPrototype;
Material89: TMaterialNode;
X3DPrototype90: TX3DPrototype;
X3DPrototype91: TX3DPrototype;
Material92: TMaterialNode;
X3DPrototype93: TX3DPrototype;
X3DPrototype94: TX3DPrototype;
Material95: TMaterialNode;
X3DPrototype96: TX3DPrototype;
X3DPrototype97: TX3DPrototype;
Material98: TMaterialNode;
X3DPrototype99: TX3DPrototype;
X3DPrototype100: TX3DPrototype;
Material101: TMaterialNode;
X3DPrototype102: TX3DPrototype;
X3DPrototype103: TX3DPrototype;
Material104: TMaterialNode;
X3DPrototype105: TX3DPrototype;
X3DPrototype106: TX3DPrototype;
Material107: TMaterialNode;
X3DPrototype108: TX3DPrototype;
X3DPrototype109: TX3DPrototype;
Material110: TMaterialNode;
X3DPrototype111: TX3DPrototype;
X3DPrototype112: TX3DPrototype;
Material113: TMaterialNode;
X3DPrototype114: TX3DPrototype;
X3DPrototype115: TX3DPrototype;
Material116: TMaterialNode;
X3DPrototype117: TX3DPrototype;
X3DPrototype118: TX3DPrototype;
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
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ArtDecoPrototypes.x3d';
X3D0.Meta['description'] := 'Prototype declarations defining values for X3D/VRML materials, originally converted from SGIs Open Inventor material examples.';
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
X3DPrototype15 := TX3DPrototype.Create;
X3DPrototype15.NameField := 'ArtDeco00';
X3DPrototype15.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype15.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype16 := TX3DPrototype.Create;
Material17 := TMaterialNode.Create;
Material17.AmbientIntensity := 0.25;
Material17.DiffuseColor := Vector3(0.282435,0.085159,0.134462);
Material17.Shininess := 0.127273;
Material17.SpecularColor := Vector3(0.276305,0.11431,0.139857);
{ .SetMaterial }
X3DPrototype16.Material := Material17;
{ .SetX3DPrototype }
X3DPrototype15.X3DPrototype := X3DPrototype16;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype15;
X3DPrototype18 := TX3DPrototype.Create;
X3DPrototype18.NameField := 'ArtDeco01';
X3DPrototype18.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype18.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype19 := TX3DPrototype.Create;
Material20 := TMaterialNode.Create;
Material20.AmbientIntensity := 0.254777;
Material20.DiffuseColor := Vector3(0.685208,0.134679,0.332385);
Material20.Shininess := 0.071429;
Material20.SpecularColor := Vector3(0.122449,0.050035,0.050035);
{ .SetMaterial }
X3DPrototype19.Material := Material20;
{ .SetX3DPrototype }
X3DPrototype18.X3DPrototype := X3DPrototype19;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype18;
X3DPrototype21 := TX3DPrototype.Create;
X3DPrototype21.NameField := 'ArtDeco02';
X3DPrototype21.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype21.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
{ computed conversion ambientIntensity=1.745282, normalized to 1.0 }
X3DPrototype22 := TX3DPrototype.Create;
Material23 := TMaterialNode.Create;
Material23.AmbientIntensity := 1;
Material23.DiffuseColor := Vector3(0.536861,0.0529,0.245479);
Material23.Shininess := 0.832432;
Material23.SpecularColor := Vector3(0.805292,0.765198,0.747416);
{ .SetMaterial }
X3DPrototype22.Material := Material23;
{ .AddX3DPrototype }
X3DPrototype21.X3DPrototype := X3DPrototype22;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype21;
X3DPrototype24 := TX3DPrototype.Create;
X3DPrototype24.NameField := 'ArtDeco03';
X3DPrototype24.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype24.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype25 := TX3DPrototype.Create;
Material26 := TMaterialNode.Create;
Material26.AmbientIntensity := 0.248649;
Material26.DiffuseColor := Vector3(1,0.452381,0.40339);
Material26.Shininess := 0.902703;
Material26.SpecularColor := Vector3(0.686486,0.396903,0.419275);
{ .SetMaterial }
X3DPrototype25.Material := Material26;
{ .SetX3DPrototype }
X3DPrototype24.X3DPrototype := X3DPrototype25;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype24;
X3DPrototype27 := TX3DPrototype.Create;
X3DPrototype27.NameField := 'ArtDeco04';
X3DPrototype27.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype27.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype28 := TX3DPrototype.Create;
Material29 := TMaterialNode.Create;
Material29.AmbientIntensity := 0.25;
Material29.DiffuseColor := Vector3(0.748016,0.298362,0.342624);
Material29.Shininess := 0.69697;
Material29.SpecularColor := Vector3(0.345455,0.345455,0.345455);
{ .SetMaterial }
X3DPrototype28.Material := Material29;
{ .SetX3DPrototype }
X3DPrototype27.X3DPrototype := X3DPrototype28;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype27;
X3DPrototype30 := TX3DPrototype.Create;
X3DPrototype30.NameField := 'ArtDeco05';
X3DPrototype30.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype30.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype31 := TX3DPrototype.Create;
Material32 := TMaterialNode.Create;
Material32.AmbientIntensity := 0.24359;
Material32.DiffuseColor := Vector3(0.945455,0.318988,0.321717);
Material32.Shininess := 0.018182;
Material32.SpecularColor := Vector3(0.072727,0.021705,0.010732);
{ .SetMaterial }
X3DPrototype31.Material := Material32;
{ .SetX3DPrototype }
X3DPrototype30.X3DPrototype := X3DPrototype31;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype30;
X3DPrototype33 := TX3DPrototype.Create;
X3DPrototype33.NameField := 'ArtDeco06';
X3DPrototype33.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype33.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype34 := TX3DPrototype.Create;
Material35 := TMaterialNode.Create;
Material35.AmbientIntensity := 0.25946;
Material35.DiffuseColor := Vector3(0.228655,0.195513,0.425484);
Material35.Shininess := 0.542553;
Material35.SpecularColor := Vector3(0.324504,0.404255,0.404255);
{ .SetMaterial }
X3DPrototype34.Material := Material35;
{ .SetX3DPrototype }
X3DPrototype33.X3DPrototype := X3DPrototype34;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype33;
X3DPrototype36 := TX3DPrototype.Create;
X3DPrototype36.NameField := 'ArtDeco07';
X3DPrototype36.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype36.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype37 := TX3DPrototype.Create;
Material38 := TMaterialNode.Create;
Material38.AmbientIntensity := 0.333333;
Material38.DiffuseColor := Vector3(0.200348,0.100857,0.320833);
Material38.Shininess := 0.133333;
Material38.SpecularColor := Vector3(0.311358,0.387879,0.387879);
{ .SetMaterial }
X3DPrototype37.Material := Material38;
{ .SetX3DPrototype }
X3DPrototype36.X3DPrototype := X3DPrototype37;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype36;
X3DPrototype39 := TX3DPrototype.Create;
X3DPrototype39.NameField := 'ArtDeco08';
X3DPrototype39.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype39.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype40 := TX3DPrototype.Create;
Material41 := TMaterialNode.Create;
Material41.AmbientIntensity := 0.242424;
Material41.DiffuseColor := Vector3(0.330519,0.3389,0.6);
Material41.Shininess := 0.787879;
Material41.SpecularColor := Vector3(0.290909,0.290909,0.290909);
{ .SetMaterial }
X3DPrototype40.Material := Material41;
{ .SetX3DPrototype }
X3DPrototype39.X3DPrototype := X3DPrototype40;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype39;
X3DPrototype42 := TX3DPrototype.Create;
X3DPrototype42.NameField := 'ArtDeco09';
X3DPrototype42.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype42.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype43 := TX3DPrototype.Create;
Material44 := TMaterialNode.Create;
Material44.AmbientIntensity := 0.333333;
Material44.DiffuseColor := Vector3(0.237059,0.096273,0.215625);
Material44.Shininess := 0.133333;
Material44.SpecularColor := Vector3(0.311358,0.387879,0.387879);
{ .SetMaterial }
X3DPrototype43.Material := Material44;
{ .SetX3DPrototype }
X3DPrototype42.X3DPrototype := X3DPrototype43;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype42;
X3DPrototype45 := TX3DPrototype.Create;
X3DPrototype45.NameField := 'ArtDeco10';
X3DPrototype45.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype45.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype46 := TX3DPrototype.Create;
Material47 := TMaterialNode.Create;
Material47.AmbientIntensity := 0.242425;
Material47.DiffuseColor := Vector3(0.304,0.09025,0.207364);
Material47.Shininess := 0.072727;
Material47.SpecularColor := Vector3(0.6665,0.579046,0.830303);
{ .SetMaterial }
X3DPrototype46.Material := Material47;
{ .SetX3DPrototype }
X3DPrototype45.X3DPrototype := X3DPrototype46;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype45;
X3DPrototype48 := TX3DPrototype.Create;
X3DPrototype48.NameField := 'ArtDeco11';
X3DPrototype48.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype48.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype49 := TX3DPrototype.Create;
Material50 := TMaterialNode.Create;
Material50.AmbientIntensity := 0.258928;
Material50.DiffuseColor := Vector3(0.335631,0.207672,0.238304);
Material50.EmissiveColor := Vector3(0.010638,0.010638,0.010638);
Material50.Shininess := 0.021277;
Material50.SpecularColor := Vector3(0.198631,0.075403,0.138803);
{ .SetMaterial }
X3DPrototype49.Material := Material50;
{ .SetX3DPrototype }
X3DPrototype48.X3DPrototype := X3DPrototype49;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype48;
X3DPrototype51 := TX3DPrototype.Create;
X3DPrototype51.NameField := 'ArtDeco12';
X3DPrototype51.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype51.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype52 := TX3DPrototype.Create;
Material53 := TMaterialNode.Create;
Material53.AmbientIntensity := 0.240838;
Material53.DiffuseColor := Vector3(0.876873,0.14715,0.00856);
Material53.Shininess := 0.076531;
Material53.SpecularColor := Vector3(0.193878,0.029416,0.029416);
{ .SetMaterial }
X3DPrototype52.Material := Material53;
{ .SetX3DPrototype }
X3DPrototype51.X3DPrototype := X3DPrototype52;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype51;
X3DPrototype54 := TX3DPrototype.Create;
X3DPrototype54.NameField := 'ArtDeco13';
X3DPrototype54.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype54.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype55 := TX3DPrototype.Create;
Material56 := TMaterialNode.Create;
Material56.AmbientIntensity := 0.25;
Material56.DiffuseColor := Vector3(0.794445,0.249425,0);
Material56.Shininess := 0.551515;
Material56.SpecularColor := Vector3(0.62904,0.194211,0.033663);
{ .SetMaterial }
X3DPrototype55.Material := Material56;
{ .SetX3DPrototype }
X3DPrototype54.X3DPrototype := X3DPrototype55;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype54;
X3DPrototype57 := TX3DPrototype.Create;
X3DPrototype57.NameField := 'ArtDeco14';
X3DPrototype57.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype57.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype58 := TX3DPrototype.Create;
Material59 := TMaterialNode.Create;
Material59.AmbientIntensity := 0.25;
Material59.DiffuseColor := Vector3(0.510609,0.17264,0.059872);
Material59.Shininess := 0.933333;
Material59.SpecularColor := Vector3(0.533333,0.533333,0.533333);
{ .SetMaterial }
X3DPrototype58.Material := Material59;
{ .SetX3DPrototype }
X3DPrototype57.X3DPrototype := X3DPrototype58;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype57;
X3DPrototype60 := TX3DPrototype.Create;
X3DPrototype60.NameField := 'ArtDeco15';
X3DPrototype60.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype60.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype61 := TX3DPrototype.Create;
Material62 := TMaterialNode.Create;
Material62.AmbientIntensity := 0.255814;
Material62.DiffuseColor := Vector3(0.914894,0.444404,0.348914);
Material62.Shininess := 0.12766;
Material62.SpecularColor := Vector3(0.345745,0.143066,0);
{ .SetMaterial }
X3DPrototype61.Material := Material62;
{ .SetX3DPrototype }
X3DPrototype60.X3DPrototype := X3DPrototype61;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype60;
X3DPrototype63 := TX3DPrototype.Create;
X3DPrototype63.NameField := 'ArtDeco16';
X3DPrototype63.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype63.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype64 := TX3DPrototype.Create;
Material65 := TMaterialNode.Create;
Material65.AmbientIntensity := 0.240838;
Material65.DiffuseColor := Vector3(0.876873,0.323147,0.199564);
Material65.Shininess := 0.80102;
Material65.SpecularColor := Vector3(0.816327,0.278677,0.278677);
{ .SetMaterial }
X3DPrototype64.Material := Material65;
{ .SetX3DPrototype }
X3DPrototype63.X3DPrototype := X3DPrototype64;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype63;
X3DPrototype66 := TX3DPrototype.Create;
X3DPrototype66.NameField := 'ArtDeco17';
X3DPrototype66.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype66.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype67 := TX3DPrototype.Create;
Material68 := TMaterialNode.Create;
Material68.AmbientIntensity := 0.242424;
Material68.DiffuseColor := Vector3(0.515625,0.315496,0.252441);
Material68.Shininess := 0.933333;
Material68.SpecularColor := Vector3(0.533333,0.533333,0.533333);
{ .SetMaterial }
X3DPrototype67.Material := Material68;
{ .SetX3DPrototype }
X3DPrototype66.X3DPrototype := X3DPrototype67;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype66;
X3DPrototype69 := TX3DPrototype.Create;
X3DPrototype69.NameField := 'ArtDeco18';
X3DPrototype69.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype69.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype70 := TX3DPrototype.Create;
Material71 := TMaterialNode.Create;
Material71.AmbientIntensity := 0.264706;
Material71.DiffuseColor := Vector3(0,0.346939,0.253624);
Material71.Shininess := 0.316327;
Material71.SpecularColor := Vector3(0,0.311074,0.357143);
{ .SetMaterial }
X3DPrototype70.Material := Material71;
{ .SetX3DPrototype }
X3DPrototype69.X3DPrototype := X3DPrototype70;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype69;
X3DPrototype72 := TX3DPrototype.Create;
X3DPrototype72.NameField := 'ArtDeco19';
X3DPrototype72.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype72.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype73 := TX3DPrototype.Create;
Material74 := TMaterialNode.Create;
Material74.AmbientIntensity := 0.259259;
Material74.DiffuseColor := Vector3(0,0.251004,0.239248);
Material74.Shininess := 0.060606;
Material74.SpecularColor := Vector3(0.177935,0.249369,0.229278);
{ .SetMaterial }
X3DPrototype73.Material := Material74;
{ .SetX3DPrototype }
X3DPrototype72.X3DPrototype := X3DPrototype73;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype72;
X3DPrototype75 := TX3DPrototype.Create;
X3DPrototype75.NameField := 'ArtDeco20';
X3DPrototype75.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype75.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype76 := TX3DPrototype.Create;
Material77 := TMaterialNode.Create;
Material77.AmbientIntensity := 0.24;
Material77.DiffuseColor := Vector3(0.228298,0.385771,0.186794);
Material77.Shininess := 0.393939;
Material77.SpecularColor := Vector3(0.200464,0.300145,0.293518);
{ .SetMaterial }
X3DPrototype76.Material := Material77;
{ .SetX3DPrototype }
X3DPrototype75.X3DPrototype := X3DPrototype76;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype75;
X3DPrototype78 := TX3DPrototype.Create;
X3DPrototype78.NameField := 'ArtDeco21';
X3DPrototype78.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype78.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype79 := TX3DPrototype.Create;
Material80 := TMaterialNode.Create;
Material80.AmbientIntensity := 0.25;
Material80.DiffuseColor := Vector3(0.315389,0.544,0.258052);
Material80.Shininess := 0.509389;
Material80.SpecularColor := Vector3(0.456,0.456,0.456);
{ .SetMaterial }
X3DPrototype79.Material := Material80;
{ .SetX3DPrototype }
X3DPrototype78.X3DPrototype := X3DPrototype79;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype78;
X3DPrototype81 := TX3DPrototype.Create;
X3DPrototype81.NameField := 'ArtDeco22';
X3DPrototype81.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype81.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype82 := TX3DPrototype.Create;
Material83 := TMaterialNode.Create;
Material83.AmbientIntensity := 0.246032;
Material83.DiffuseColor := Vector3(0.251104,0.312562,0.201724);
Material83.Shininess := 0.086735;
Material83.SpecularColor := Vector3(0.209184,0.113842,0.111328);
{ .SetMaterial }
X3DPrototype82.Material := Material83;
{ .SetX3DPrototype }
X3DPrototype81.X3DPrototype := X3DPrototype82;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype81;
X3DPrototype84 := TX3DPrototype.Create;
X3DPrototype84.NameField := 'ArtDeco23';
X3DPrototype84.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype84.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype85 := TX3DPrototype.Create;
Material86 := TMaterialNode.Create;
Material86.AmbientIntensity := 0.242424;
Material86.DiffuseColor := Vector3(0.392348,0.456,0.417708);
Material86.Shininess := 0.933333;
Material86.SpecularColor := Vector3(0.533333,0.533333,0.533333);
{ .SetMaterial }
X3DPrototype85.Material := Material86;
{ .SetX3DPrototype }
X3DPrototype84.X3DPrototype := X3DPrototype85;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype84;
X3DPrototype87 := TX3DPrototype.Create;
X3DPrototype87.NameField := 'ArtDeco24';
X3DPrototype87.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype87.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype88 := TX3DPrototype.Create;
Material89 := TMaterialNode.Create;
Material89.AmbientIntensity := 0.253968;
Material89.DiffuseColor := Vector3(1,0.854922,0);
Material89.Shininess := 1;
Material89.SpecularColor := Vector3(0.872449,0.247119,0.254214);
{ .SetMaterial }
X3DPrototype88.Material := Material89;
{ .SetX3DPrototype }
X3DPrototype87.X3DPrototype := X3DPrototype88;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype87;
X3DPrototype90 := TX3DPrototype.Create;
X3DPrototype90.NameField := 'ArtDeco25';
X3DPrototype90.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype90.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype91 := TX3DPrototype.Create;
Material92 := TMaterialNode.Create;
Material92.AmbientIntensity := 0.25641;
Material92.DiffuseColor := Vector3(0.795918,0.505869,0.093315);
Material92.Shininess := 0.397959;
Material92.SpecularColor := Vector3(0.923469,0.428866,0.006369);
{ .SetMaterial }
X3DPrototype91.Material := Material92;
{ .SetX3DPrototype }
X3DPrototype90.X3DPrototype := X3DPrototype91;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype90;
X3DPrototype93 := TX3DPrototype.Create;
X3DPrototype93.NameField := 'ArtDeco26';
X3DPrototype93.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype93.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
{ computed conversion ambientIntensity=2.226234, normalized to 1.0 }
X3DPrototype94 := TX3DPrototype.Create;
Material95 := TMaterialNode.Create;
Material95.AmbientIntensity := 1;
Material95.DiffuseColor := Vector3(0.331633,0.296582,0.279057);
Material95.Shininess := 0.096939;
Material95.SpecularColor := Vector3(0.311224,0.25183,0.133042);
{ .SetMaterial }
X3DPrototype94.Material := Material95;
{ .AddX3DPrototype }
X3DPrototype93.X3DPrototype := X3DPrototype94;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype93;
X3DPrototype96 := TX3DPrototype.Create;
X3DPrototype96.NameField := 'ArtDeco27';
X3DPrototype96.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype96.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype97 := TX3DPrototype.Create;
Material98 := TMaterialNode.Create;
Material98.AmbientIntensity := 0.263158;
Material98.DiffuseColor := Vector3(0.345455,0.163262,0.122622);
Material98.Shininess := 0.048649;
Material98.SpecularColor := Vector3(0.212121,0.107475,0);
{ .SetMaterial }
X3DPrototype97.Material := Material98;
{ .SetX3DPrototype }
X3DPrototype96.X3DPrototype := X3DPrototype97;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype96;
X3DPrototype99 := TX3DPrototype.Create;
X3DPrototype99.NameField := 'ArtDeco28';
X3DPrototype99.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype99.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype100 := TX3DPrototype.Create;
Material101 := TMaterialNode.Create;
Material101.AmbientIntensity := 0.240506;
Material101.DiffuseColor := Vector3(0.277281,0.104336,0.0799);
Material101.Shininess := 0.09697;
Material101.SpecularColor := Vector3(0.305587,0.141916,0.270572);
{ .SetMaterial }
X3DPrototype100.Material := Material101;
{ .SetX3DPrototype }
X3DPrototype99.X3DPrototype := X3DPrototype100;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype99;
X3DPrototype102 := TX3DPrototype.Create;
X3DPrototype102.NameField := 'ArtDeco29';
X3DPrototype102.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype102.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype103 := TX3DPrototype.Create;
Material104 := TMaterialNode.Create;
Material104.AmbientIntensity := 0.215686;
Material104.DiffuseColor := Vector3(0.087034,0.025888,0);
Material104.Shininess := 0.045918;
Material104.SpecularColor := Vector3(0.224138,0.104091,0.104091);
{ .SetMaterial }
X3DPrototype103.Material := Material104;
{ .SetX3DPrototype }
X3DPrototype102.X3DPrototype := X3DPrototype103;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype102;
X3DPrototype105 := TX3DPrototype.Create;
X3DPrototype105.NameField := 'ArtDeco30';
X3DPrototype105.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype105.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype106 := TX3DPrototype.Create;
Material107 := TMaterialNode.Create;
Material107.AmbientIntensity := 0;
Material107.DiffuseColor := Vector3(0,0,0);
Material107.Shininess := 0.081633;
Material107.SpecularColor := Vector3(0.293243,0.297387,0.290421);
{ .SetMaterial }
X3DPrototype106.Material := Material107;
{ .SetX3DPrototype }
X3DPrototype105.X3DPrototype := X3DPrototype106;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype105;
X3DPrototype108 := TX3DPrototype.Create;
X3DPrototype108.NameField := 'ArtDeco31';
X3DPrototype108.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype108.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype109 := TX3DPrototype.Create;
Material110 := TMaterialNode.Create;
Material110.AmbientIntensity := 0.25641;
Material110.DiffuseColor := Vector3(0.236364,0.236364,0.236364);
Material110.Shininess := 0.054546;
Material110.SpecularColor := Vector3(0.29697,0.245839,0.295962);
{ .SetMaterial }
X3DPrototype109.Material := Material110;
{ .SetX3DPrototype }
X3DPrototype108.X3DPrototype := X3DPrototype109;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype108;
X3DPrototype111 := TX3DPrototype.Create;
X3DPrototype111.NameField := 'ArtDeco32';
X3DPrototype111.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype111.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype112 := TX3DPrototype.Create;
Material113 := TMaterialNode.Create;
Material113.AmbientIntensity := 0.242424;
Material113.DiffuseColor := Vector3(0.38087,0.382957,0.417708);
Material113.Shininess := 0.933333;
Material113.SpecularColor := Vector3(0.533333,0.533333,0.533333);
{ .SetMaterial }
X3DPrototype112.Material := Material113;
{ .SetX3DPrototype }
X3DPrototype111.X3DPrototype := X3DPrototype112;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype111;
X3DPrototype114 := TX3DPrototype.Create;
X3DPrototype114.NameField := 'ArtDeco33';
X3DPrototype114.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype114.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype115 := TX3DPrototype.Create;
Material116 := TMaterialNode.Create;
Material116.AmbientIntensity := 0.230089;
Material116.DiffuseColor := Vector3(0.610811,0.610811,0.610811);
Material116.Shininess := 0.897297;
Material116.SpecularColor := Vector3(0.767568,0.756757,0.764964);
{ .SetMaterial }
X3DPrototype115.Material := Material116;
{ .SetX3DPrototype }
X3DPrototype114.X3DPrototype := X3DPrototype115;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype114;
X3DPrototype117 := TX3DPrototype.Create;
X3DPrototype117.NameField := 'ArtDeco34';
X3DPrototype117.Appinfo := 'UniversalMediaMaterials prototype';
X3DPrototype117.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DPrototype118 := TX3DPrototype.Create;
Material119 := TMaterialNode.Create;
Material119.AmbientIntensity := 0.25;
Material119.Shininess := 0;
Material119.SpecularColor := Vector3(0.2,0.2,0.2);
{ .SetMaterial }
X3DPrototype118.Material := Material119;
{ .SetX3DPrototype }
X3DPrototype117.X3DPrototype := X3DPrototype118;
{ .AddX3DPrototype }
Group13.X3DPrototype := X3DPrototype117;
Anchor120 := TAnchorNode.Create;
Anchor120.Description := 'ArtDecoPrototypeExample';
Anchor120.SetParameter(['target=_blank']);
Anchor120.SetUrl(['../data/ArtDecoExamples.x3dj','../data/ArtDecoExamples.json','../data/ArtDecoExamples.x3d','ArtDecoExamples.x3dj','ArtDecoExamples.json','ArtDecoExamples.x3d']);
Shape121 := TShapeNode.Create;
Appearance122 := TAppearanceNode.Create;
Material123 := TMaterialNode.Create;
Material123.DiffuseColor := Vector3(0.8,0.4,0);
{ .SetMaterial }
Appearance122.Material := Material123;
{ .SetAppearance }
Shape121.Appearance := Appearance122;
Text124 := TTextNode.Create;
Text124.SetText(['ArtDecoExamples.x3d','is a Materials Prototype declaration file.','For an example scene using these node,','click this text and view','ArtDecoExamples.x3d']);
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

begin
end.
