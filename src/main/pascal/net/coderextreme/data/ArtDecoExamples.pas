unit ArtDecoExamples;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateArtDecoExamples: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group13: TGroupNode;
WorldInfo14: TWorldInfoNode;
X3DExternalPrototype15: TX3DExternalPrototype;
X3DExternalPrototype16: TX3DExternalPrototype;
X3DExternalPrototype17: TX3DExternalPrototype;
X3DExternalPrototype18: TX3DExternalPrototype;
X3DExternalPrototype19: TX3DExternalPrototype;
X3DExternalPrototype20: TX3DExternalPrototype;
X3DExternalPrototype21: TX3DExternalPrototype;
X3DExternalPrototype22: TX3DExternalPrototype;
X3DExternalPrototype23: TX3DExternalPrototype;
X3DExternalPrototype24: TX3DExternalPrototype;
X3DExternalPrototype25: TX3DExternalPrototype;
X3DExternalPrototype26: TX3DExternalPrototype;
X3DExternalPrototype27: TX3DExternalPrototype;
X3DExternalPrototype28: TX3DExternalPrototype;
X3DExternalPrototype29: TX3DExternalPrototype;
X3DExternalPrototype30: TX3DExternalPrototype;
X3DExternalPrototype31: TX3DExternalPrototype;
X3DExternalPrototype32: TX3DExternalPrototype;
X3DExternalPrototype33: TX3DExternalPrototype;
X3DExternalPrototype34: TX3DExternalPrototype;
X3DExternalPrototype35: TX3DExternalPrototype;
X3DExternalPrototype36: TX3DExternalPrototype;
X3DExternalPrototype37: TX3DExternalPrototype;
X3DExternalPrototype38: TX3DExternalPrototype;
X3DExternalPrototype39: TX3DExternalPrototype;
X3DExternalPrototype40: TX3DExternalPrototype;
X3DExternalPrototype41: TX3DExternalPrototype;
X3DExternalPrototype42: TX3DExternalPrototype;
X3DExternalPrototype43: TX3DExternalPrototype;
X3DExternalPrototype44: TX3DExternalPrototype;
X3DExternalPrototype45: TX3DExternalPrototype;
X3DExternalPrototype46: TX3DExternalPrototype;
X3DExternalPrototype47: TX3DExternalPrototype;
X3DExternalPrototype48: TX3DExternalPrototype;
X3DExternalPrototype49: TX3DExternalPrototype;
Group50: TGroupNode;
NavigationInfo51: TNavigationInfoNode;
Viewpoint52: TViewpointNode;
Viewpoint53: TViewpointNode;
Viewpoint54: TViewpointNode;
Viewpoint55: TViewpointNode;
Transform56: TTransformNode;
PositionInterpolator57: TPositionInterpolatorNode;
TimeSensor58: TTimeSensorNode;
Viewpoint59: TViewpointNode;
DirectionalLight60: TDirectionalLightNode;
DirectionalLight61: TDirectionalLightNode;
Anchor62: TAnchorNode;
Transform63: TTransformNode;
Inline64: TInlineNode;
Viewpoint65: TViewpointNode;
Transform66: TTransformNode;
Anchor67: TAnchorNode;
Shape68: TShapeNode;
Appearance69: TAppearanceNode;
X3DPrototype70: TX3DPrototypeNode;
Sphere71: TSphereNode;
Transform72: TTransformNode;
Anchor73: TAnchorNode;
Shape74: TShapeNode;
Appearance75: TAppearanceNode;
Material76: TMaterialNode;
Text77: TTextNode;
FontStyle78: TFontStyleNode;
Viewpoint79: TViewpointNode;
Transform80: TTransformNode;
Anchor81: TAnchorNode;
Shape82: TShapeNode;
Appearance83: TAppearanceNode;
X3DPrototype84: TX3DPrototypeNode;
Sphere85: TSphereNode;
Transform86: TTransformNode;
Anchor87: TAnchorNode;
Shape88: TShapeNode;
Appearance89: TAppearanceNode;
Material90: TMaterialNode;
Text91: TTextNode;
FontStyle92: TFontStyleNode;
Viewpoint93: TViewpointNode;
Transform94: TTransformNode;
Anchor95: TAnchorNode;
Shape96: TShapeNode;
Appearance97: TAppearanceNode;
X3DPrototype98: TX3DPrototypeNode;
Sphere99: TSphereNode;
Transform100: TTransformNode;
Anchor101: TAnchorNode;
Shape102: TShapeNode;
Appearance103: TAppearanceNode;
Material104: TMaterialNode;
Text105: TTextNode;
FontStyle106: TFontStyleNode;
Viewpoint107: TViewpointNode;
Transform108: TTransformNode;
Anchor109: TAnchorNode;
Shape110: TShapeNode;
Appearance111: TAppearanceNode;
X3DPrototype112: TX3DPrototypeNode;
Sphere113: TSphereNode;
Transform114: TTransformNode;
Anchor115: TAnchorNode;
Shape116: TShapeNode;
Appearance117: TAppearanceNode;
Material118: TMaterialNode;
Text119: TTextNode;
FontStyle120: TFontStyleNode;
Viewpoint121: TViewpointNode;
Transform122: TTransformNode;
Anchor123: TAnchorNode;
Shape124: TShapeNode;
Appearance125: TAppearanceNode;
X3DPrototype126: TX3DPrototypeNode;
Sphere127: TSphereNode;
Transform128: TTransformNode;
Anchor129: TAnchorNode;
Shape130: TShapeNode;
Appearance131: TAppearanceNode;
Material132: TMaterialNode;
Text133: TTextNode;
FontStyle134: TFontStyleNode;
Viewpoint135: TViewpointNode;
Transform136: TTransformNode;
Anchor137: TAnchorNode;
Shape138: TShapeNode;
Appearance139: TAppearanceNode;
X3DPrototype140: TX3DPrototypeNode;
Sphere141: TSphereNode;
Transform142: TTransformNode;
Anchor143: TAnchorNode;
Shape144: TShapeNode;
Appearance145: TAppearanceNode;
Material146: TMaterialNode;
Text147: TTextNode;
FontStyle148: TFontStyleNode;
Viewpoint149: TViewpointNode;
Transform150: TTransformNode;
Anchor151: TAnchorNode;
Shape152: TShapeNode;
Appearance153: TAppearanceNode;
X3DPrototype154: TX3DPrototypeNode;
Sphere155: TSphereNode;
Transform156: TTransformNode;
Anchor157: TAnchorNode;
Shape158: TShapeNode;
Appearance159: TAppearanceNode;
Material160: TMaterialNode;
Text161: TTextNode;
FontStyle162: TFontStyleNode;
Viewpoint163: TViewpointNode;
Transform164: TTransformNode;
Anchor165: TAnchorNode;
Shape166: TShapeNode;
Appearance167: TAppearanceNode;
X3DPrototype168: TX3DPrototypeNode;
Sphere169: TSphereNode;
Transform170: TTransformNode;
Anchor171: TAnchorNode;
Shape172: TShapeNode;
Appearance173: TAppearanceNode;
Material174: TMaterialNode;
Text175: TTextNode;
FontStyle176: TFontStyleNode;
Viewpoint177: TViewpointNode;
Transform178: TTransformNode;
Anchor179: TAnchorNode;
Shape180: TShapeNode;
Appearance181: TAppearanceNode;
X3DPrototype182: TX3DPrototypeNode;
Sphere183: TSphereNode;
Transform184: TTransformNode;
Anchor185: TAnchorNode;
Shape186: TShapeNode;
Appearance187: TAppearanceNode;
Material188: TMaterialNode;
Text189: TTextNode;
FontStyle190: TFontStyleNode;
Viewpoint191: TViewpointNode;
Transform192: TTransformNode;
Anchor193: TAnchorNode;
Shape194: TShapeNode;
Appearance195: TAppearanceNode;
X3DPrototype196: TX3DPrototypeNode;
Sphere197: TSphereNode;
Transform198: TTransformNode;
Anchor199: TAnchorNode;
Shape200: TShapeNode;
Appearance201: TAppearanceNode;
Material202: TMaterialNode;
Text203: TTextNode;
FontStyle204: TFontStyleNode;
Viewpoint205: TViewpointNode;
Transform206: TTransformNode;
Anchor207: TAnchorNode;
Shape208: TShapeNode;
Appearance209: TAppearanceNode;
X3DPrototype210: TX3DPrototypeNode;
Sphere211: TSphereNode;
Transform212: TTransformNode;
Anchor213: TAnchorNode;
Shape214: TShapeNode;
Appearance215: TAppearanceNode;
Material216: TMaterialNode;
Text217: TTextNode;
FontStyle218: TFontStyleNode;
Viewpoint219: TViewpointNode;
Transform220: TTransformNode;
Anchor221: TAnchorNode;
Shape222: TShapeNode;
Appearance223: TAppearanceNode;
X3DPrototype224: TX3DPrototypeNode;
Sphere225: TSphereNode;
Transform226: TTransformNode;
Anchor227: TAnchorNode;
Shape228: TShapeNode;
Appearance229: TAppearanceNode;
Material230: TMaterialNode;
Text231: TTextNode;
FontStyle232: TFontStyleNode;
Viewpoint233: TViewpointNode;
Transform234: TTransformNode;
Anchor235: TAnchorNode;
Shape236: TShapeNode;
Appearance237: TAppearanceNode;
X3DPrototype238: TX3DPrototypeNode;
Sphere239: TSphereNode;
Transform240: TTransformNode;
Anchor241: TAnchorNode;
Shape242: TShapeNode;
Appearance243: TAppearanceNode;
Material244: TMaterialNode;
Text245: TTextNode;
FontStyle246: TFontStyleNode;
Viewpoint247: TViewpointNode;
Transform248: TTransformNode;
Anchor249: TAnchorNode;
Shape250: TShapeNode;
Appearance251: TAppearanceNode;
X3DPrototype252: TX3DPrototypeNode;
Sphere253: TSphereNode;
Transform254: TTransformNode;
Anchor255: TAnchorNode;
Shape256: TShapeNode;
Appearance257: TAppearanceNode;
Material258: TMaterialNode;
Text259: TTextNode;
FontStyle260: TFontStyleNode;
Viewpoint261: TViewpointNode;
Transform262: TTransformNode;
Anchor263: TAnchorNode;
Shape264: TShapeNode;
Appearance265: TAppearanceNode;
X3DPrototype266: TX3DPrototypeNode;
Sphere267: TSphereNode;
Transform268: TTransformNode;
Anchor269: TAnchorNode;
Shape270: TShapeNode;
Appearance271: TAppearanceNode;
Material272: TMaterialNode;
Text273: TTextNode;
FontStyle274: TFontStyleNode;
Viewpoint275: TViewpointNode;
Transform276: TTransformNode;
Anchor277: TAnchorNode;
Shape278: TShapeNode;
Appearance279: TAppearanceNode;
X3DPrototype280: TX3DPrototypeNode;
Sphere281: TSphereNode;
Transform282: TTransformNode;
Anchor283: TAnchorNode;
Shape284: TShapeNode;
Appearance285: TAppearanceNode;
Material286: TMaterialNode;
Text287: TTextNode;
FontStyle288: TFontStyleNode;
Viewpoint289: TViewpointNode;
Transform290: TTransformNode;
Anchor291: TAnchorNode;
Shape292: TShapeNode;
Appearance293: TAppearanceNode;
X3DPrototype294: TX3DPrototypeNode;
Sphere295: TSphereNode;
Transform296: TTransformNode;
Anchor297: TAnchorNode;
Shape298: TShapeNode;
Appearance299: TAppearanceNode;
Material300: TMaterialNode;
Text301: TTextNode;
FontStyle302: TFontStyleNode;
Viewpoint303: TViewpointNode;
Transform304: TTransformNode;
Anchor305: TAnchorNode;
Shape306: TShapeNode;
Appearance307: TAppearanceNode;
X3DPrototype308: TX3DPrototypeNode;
Sphere309: TSphereNode;
Transform310: TTransformNode;
Anchor311: TAnchorNode;
Shape312: TShapeNode;
Appearance313: TAppearanceNode;
Material314: TMaterialNode;
Text315: TTextNode;
FontStyle316: TFontStyleNode;
Viewpoint317: TViewpointNode;
Transform318: TTransformNode;
Anchor319: TAnchorNode;
Shape320: TShapeNode;
Appearance321: TAppearanceNode;
X3DPrototype322: TX3DPrototypeNode;
Sphere323: TSphereNode;
Transform324: TTransformNode;
Anchor325: TAnchorNode;
Shape326: TShapeNode;
Appearance327: TAppearanceNode;
Material328: TMaterialNode;
Text329: TTextNode;
FontStyle330: TFontStyleNode;
Viewpoint331: TViewpointNode;
Transform332: TTransformNode;
Anchor333: TAnchorNode;
Shape334: TShapeNode;
Appearance335: TAppearanceNode;
X3DPrototype336: TX3DPrototypeNode;
Sphere337: TSphereNode;
Transform338: TTransformNode;
Anchor339: TAnchorNode;
Shape340: TShapeNode;
Appearance341: TAppearanceNode;
Material342: TMaterialNode;
Text343: TTextNode;
FontStyle344: TFontStyleNode;
Viewpoint345: TViewpointNode;
Transform346: TTransformNode;
Anchor347: TAnchorNode;
Shape348: TShapeNode;
Appearance349: TAppearanceNode;
X3DPrototype350: TX3DPrototypeNode;
Sphere351: TSphereNode;
Transform352: TTransformNode;
Anchor353: TAnchorNode;
Shape354: TShapeNode;
Appearance355: TAppearanceNode;
Material356: TMaterialNode;
Text357: TTextNode;
FontStyle358: TFontStyleNode;
Viewpoint359: TViewpointNode;
Transform360: TTransformNode;
Anchor361: TAnchorNode;
Shape362: TShapeNode;
Appearance363: TAppearanceNode;
X3DPrototype364: TX3DPrototypeNode;
Sphere365: TSphereNode;
Transform366: TTransformNode;
Anchor367: TAnchorNode;
Shape368: TShapeNode;
Appearance369: TAppearanceNode;
Material370: TMaterialNode;
Text371: TTextNode;
FontStyle372: TFontStyleNode;
Viewpoint373: TViewpointNode;
Transform374: TTransformNode;
Anchor375: TAnchorNode;
Shape376: TShapeNode;
Appearance377: TAppearanceNode;
X3DPrototype378: TX3DPrototypeNode;
Sphere379: TSphereNode;
Transform380: TTransformNode;
Anchor381: TAnchorNode;
Shape382: TShapeNode;
Appearance383: TAppearanceNode;
Material384: TMaterialNode;
Text385: TTextNode;
FontStyle386: TFontStyleNode;
Viewpoint387: TViewpointNode;
Transform388: TTransformNode;
Anchor389: TAnchorNode;
Shape390: TShapeNode;
Appearance391: TAppearanceNode;
X3DPrototype392: TX3DPrototypeNode;
Sphere393: TSphereNode;
Transform394: TTransformNode;
Anchor395: TAnchorNode;
Shape396: TShapeNode;
Appearance397: TAppearanceNode;
Material398: TMaterialNode;
Text399: TTextNode;
FontStyle400: TFontStyleNode;
Viewpoint401: TViewpointNode;
Transform402: TTransformNode;
Anchor403: TAnchorNode;
Shape404: TShapeNode;
Appearance405: TAppearanceNode;
X3DPrototype406: TX3DPrototypeNode;
Sphere407: TSphereNode;
Transform408: TTransformNode;
Anchor409: TAnchorNode;
Shape410: TShapeNode;
Appearance411: TAppearanceNode;
Material412: TMaterialNode;
Text413: TTextNode;
FontStyle414: TFontStyleNode;
Viewpoint415: TViewpointNode;
Transform416: TTransformNode;
Anchor417: TAnchorNode;
Shape418: TShapeNode;
Appearance419: TAppearanceNode;
X3DPrototype420: TX3DPrototypeNode;
Sphere421: TSphereNode;
Transform422: TTransformNode;
Anchor423: TAnchorNode;
Shape424: TShapeNode;
Appearance425: TAppearanceNode;
Material426: TMaterialNode;
Text427: TTextNode;
FontStyle428: TFontStyleNode;
Viewpoint429: TViewpointNode;
Transform430: TTransformNode;
Anchor431: TAnchorNode;
Shape432: TShapeNode;
Appearance433: TAppearanceNode;
X3DPrototype434: TX3DPrototypeNode;
Sphere435: TSphereNode;
Transform436: TTransformNode;
Anchor437: TAnchorNode;
Shape438: TShapeNode;
Appearance439: TAppearanceNode;
Material440: TMaterialNode;
Text441: TTextNode;
FontStyle442: TFontStyleNode;
Viewpoint443: TViewpointNode;
Transform444: TTransformNode;
Anchor445: TAnchorNode;
Shape446: TShapeNode;
Appearance447: TAppearanceNode;
X3DPrototype448: TX3DPrototypeNode;
Sphere449: TSphereNode;
Transform450: TTransformNode;
Anchor451: TAnchorNode;
Shape452: TShapeNode;
Appearance453: TAppearanceNode;
Material454: TMaterialNode;
Text455: TTextNode;
FontStyle456: TFontStyleNode;
Viewpoint457: TViewpointNode;
Transform458: TTransformNode;
Anchor459: TAnchorNode;
Shape460: TShapeNode;
Appearance461: TAppearanceNode;
X3DPrototype462: TX3DPrototypeNode;
Sphere463: TSphereNode;
Transform464: TTransformNode;
Anchor465: TAnchorNode;
Shape466: TShapeNode;
Appearance467: TAppearanceNode;
Material468: TMaterialNode;
Text469: TTextNode;
FontStyle470: TFontStyleNode;
Viewpoint471: TViewpointNode;
Transform472: TTransformNode;
Anchor473: TAnchorNode;
Shape474: TShapeNode;
Appearance475: TAppearanceNode;
X3DPrototype476: TX3DPrototypeNode;
Sphere477: TSphereNode;
Transform478: TTransformNode;
Anchor479: TAnchorNode;
Shape480: TShapeNode;
Appearance481: TAppearanceNode;
Material482: TMaterialNode;
Text483: TTextNode;
FontStyle484: TFontStyleNode;
Viewpoint485: TViewpointNode;
Transform486: TTransformNode;
Anchor487: TAnchorNode;
Shape488: TShapeNode;
Appearance489: TAppearanceNode;
X3DPrototype490: TX3DPrototypeNode;
Sphere491: TSphereNode;
Transform492: TTransformNode;
Anchor493: TAnchorNode;
Shape494: TShapeNode;
Appearance495: TAppearanceNode;
Material496: TMaterialNode;
Text497: TTextNode;
FontStyle498: TFontStyleNode;
Viewpoint499: TViewpointNode;
Transform500: TTransformNode;
Anchor501: TAnchorNode;
Shape502: TShapeNode;
Appearance503: TAppearanceNode;
X3DPrototype504: TX3DPrototypeNode;
Sphere505: TSphereNode;
Transform506: TTransformNode;
Anchor507: TAnchorNode;
Shape508: TShapeNode;
Appearance509: TAppearanceNode;
Material510: TMaterialNode;
Text511: TTextNode;
FontStyle512: TFontStyleNode;
Viewpoint513: TViewpointNode;
Transform514: TTransformNode;
Anchor515: TAnchorNode;
Shape516: TShapeNode;
Appearance517: TAppearanceNode;
X3DPrototype518: TX3DPrototypeNode;
Sphere519: TSphereNode;
Transform520: TTransformNode;
Anchor521: TAnchorNode;
Shape522: TShapeNode;
Appearance523: TAppearanceNode;
Material524: TMaterialNode;
Text525: TTextNode;
FontStyle526: TFontStyleNode;
Viewpoint527: TViewpointNode;
Transform528: TTransformNode;
Anchor529: TAnchorNode;
Shape530: TShapeNode;
Appearance531: TAppearanceNode;
X3DPrototype532: TX3DPrototypeNode;
Sphere533: TSphereNode;
Transform534: TTransformNode;
Anchor535: TAnchorNode;
Shape536: TShapeNode;
Appearance537: TAppearanceNode;
Material538: TMaterialNode;
Text539: TTextNode;
FontStyle540: TFontStyleNode;
Viewpoint541: TViewpointNode;
Transform542: TTransformNode;
Anchor543: TAnchorNode;
Shape544: TShapeNode;
Appearance545: TAppearanceNode;
X3DPrototype546: TX3DPrototypeNode;
Sphere547: TSphereNode;
Transform548: TTransformNode;
Anchor549: TAnchorNode;
Shape550: TShapeNode;
Appearance551: TAppearanceNode;
Material552: TMaterialNode;
Text553: TTextNode;
FontStyle554: TFontStyleNode;

procedure InitArtDecoExamplesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ArtDecoExamples.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGIs Open Inventor material examples.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'David Roussel';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'James Harney, Don Brutzman NPS';
{ METHOD .Meta }
X3D0.Meta['created'] := '7 April 2002';
{ METHOD .Meta }
X3D0.Meta['modified'] := '19 January 2025';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://vrmlstuff.free.fr/materials';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'Universal Media Material Library';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group13 := TGroupNode.Create;
WorldInfo14 := TWorldInfoNode.Create;
WorldInfo14.Title := 'ArtDecoExamples.x3d';
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(WorldInfo14);
X3DExternalPrototype15 := TX3DExternalPrototype.Create;
X3DExternalPrototype15.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype15.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype15.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco00\" \"../data/ArtDecoPrototypes.json#ArtDeco00\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00\" \"ArtDecoPrototypes.wrl#ArtDeco00\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype15]);
X3DExternalPrototype16 := TX3DExternalPrototype.Create;
X3DExternalPrototype16.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype16.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype16.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco01\" \"../data/ArtDecoPrototypes.json#ArtDeco01\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01\" \"ArtDecoPrototypes.wrl#ArtDeco01\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype16]);
X3DExternalPrototype17 := TX3DExternalPrototype.Create;
X3DExternalPrototype17.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype17.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype17.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco02\" \"../data/ArtDecoPrototypes.json#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02\" \"ArtDecoPrototypes.wrl#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype17]);
X3DExternalPrototype18 := TX3DExternalPrototype.Create;
X3DExternalPrototype18.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype18.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype18.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco03\" \"../data/ArtDecoPrototypes.json#ArtDeco03\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03\" \"ArtDecoPrototypes.wrl#ArtDeco03\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype18]);
X3DExternalPrototype19 := TX3DExternalPrototype.Create;
end;

procedure InitArtDecoExamplesPart1;
begin

X3DExternalPrototype19.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype19.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype19.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco04\" \"../data/ArtDecoPrototypes.json#ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04\" \"ArtDecoPrototypes.wrl#ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype19]);
X3DExternalPrototype20 := TX3DExternalPrototype.Create;
X3DExternalPrototype20.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype20.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype20.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco05\" \"../data/ArtDecoPrototypes.json#ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05\" \"ArtDecoPrototypes.wrl#ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype20]);
X3DExternalPrototype21 := TX3DExternalPrototype.Create;
X3DExternalPrototype21.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype21.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype21.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco06\" \"../data/ArtDecoPrototypes.json#ArtDeco06\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06\" \"ArtDecoPrototypes.wrl#ArtDeco06\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype21]);
X3DExternalPrototype22 := TX3DExternalPrototype.Create;
X3DExternalPrototype22.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype22.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype22.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco07\" \"../data/ArtDecoPrototypes.json#ArtDeco07\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07\" \"ArtDecoPrototypes.wrl#ArtDeco07\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype22]);
X3DExternalPrototype23 := TX3DExternalPrototype.Create;
X3DExternalPrototype23.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype23.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype23.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco08\" \"../data/ArtDecoPrototypes.json#ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08\" \"ArtDecoPrototypes.wrl#ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype23]);
X3DExternalPrototype24 := TX3DExternalPrototype.Create;
X3DExternalPrototype24.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype24.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype24.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco09\" \"../data/ArtDecoPrototypes.json#ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09\" \"ArtDecoPrototypes.wrl#ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype24]);
X3DExternalPrototype25 := TX3DExternalPrototype.Create;
X3DExternalPrototype25.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype25.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype25.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco10\" \"../data/ArtDecoPrototypes.json#ArtDeco10\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10\" \"ArtDecoPrototypes.wrl#ArtDeco10\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype25]);
X3DExternalPrototype26 := TX3DExternalPrototype.Create;
X3DExternalPrototype26.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype26.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype26.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco11\" \"../data/ArtDecoPrototypes.json#ArtDeco11\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11\" \"ArtDecoPrototypes.wrl#ArtDeco11\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype26]);
X3DExternalPrototype27 := TX3DExternalPrototype.Create;
end;

procedure InitArtDecoExamplesPart2;
begin

X3DExternalPrototype27.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype27.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype27.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco12\" \"../data/ArtDecoPrototypes.json#ArtDeco12\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12\" \"ArtDecoPrototypes.wrl#ArtDeco12\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype27]);
X3DExternalPrototype28 := TX3DExternalPrototype.Create;
X3DExternalPrototype28.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype28.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype28.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco13\" \"../data/ArtDecoPrototypes.json#ArtDeco13\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13\" \"ArtDecoPrototypes.wrl#ArtDeco13\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype28]);
X3DExternalPrototype29 := TX3DExternalPrototype.Create;
X3DExternalPrototype29.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype29.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype29.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco14\" \"../data/ArtDecoPrototypes.json#ArtDeco14\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14\" \"ArtDecoPrototypes.wrl#ArtDeco14\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype29]);
X3DExternalPrototype30 := TX3DExternalPrototype.Create;
X3DExternalPrototype30.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype30.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype30.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco15\" \"../data/ArtDecoPrototypes.json#ArtDeco15\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15\" \"ArtDecoPrototypes.wrl#ArtDeco15\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype30]);
X3DExternalPrototype31 := TX3DExternalPrototype.Create;
X3DExternalPrototype31.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype31.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype31.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco16\" \"../data/ArtDecoPrototypes.json#ArtDeco16\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16\" \"ArtDecoPrototypes.wrl#ArtDeco16\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype31]);
X3DExternalPrototype32 := TX3DExternalPrototype.Create;
X3DExternalPrototype32.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype32.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype32.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco17\" \"../data/ArtDecoPrototypes.json#ArtDeco17\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17\" \"ArtDecoPrototypes.wrl#ArtDeco17\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype32]);
X3DExternalPrototype33 := TX3DExternalPrototype.Create;
X3DExternalPrototype33.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype33.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype33.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco18\" \"../data/ArtDecoPrototypes.json#ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18\" \"ArtDecoPrototypes.wrl#ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype33]);
X3DExternalPrototype34 := TX3DExternalPrototype.Create;
X3DExternalPrototype34.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype34.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype34.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco19\" \"../data/ArtDecoPrototypes.json#ArtDeco19\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19\" \"ArtDecoPrototypes.wrl#ArtDeco19\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype34]);
X3DExternalPrototype35 := TX3DExternalPrototype.Create;
end;

procedure InitArtDecoExamplesPart3;
begin

X3DExternalPrototype35.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype35.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype35.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco20\" \"../data/ArtDecoPrototypes.json#ArtDeco20\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20\" \"ArtDecoPrototypes.wrl#ArtDeco20\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype35]);
X3DExternalPrototype36 := TX3DExternalPrototype.Create;
X3DExternalPrototype36.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype36.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype36.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco21\" \"../data/ArtDecoPrototypes.json#ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21\" \"ArtDecoPrototypes.wrl#ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype36]);
X3DExternalPrototype37 := TX3DExternalPrototype.Create;
X3DExternalPrototype37.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype37.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype37.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco22\" \"../data/ArtDecoPrototypes.json#ArtDeco22\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22\" \"ArtDecoPrototypes.wrl#ArtDeco22\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype37]);
X3DExternalPrototype38 := TX3DExternalPrototype.Create;
X3DExternalPrototype38.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype38.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype38.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco23\" \"../data/ArtDecoPrototypes.json#ArtDeco23\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23\" \"ArtDecoPrototypes.wrl#ArtDeco23\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype38]);
X3DExternalPrototype39 := TX3DExternalPrototype.Create;
X3DExternalPrototype39.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype39.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype39.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco24\" \"../data/ArtDecoPrototypes.json#ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24\" \"ArtDecoPrototypes.wrl#ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype39]);
X3DExternalPrototype40 := TX3DExternalPrototype.Create;
X3DExternalPrototype40.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype40.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype40.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco25\" \"../data/ArtDecoPrototypes.json#ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25\" \"ArtDecoPrototypes.wrl#ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype40]);
X3DExternalPrototype41 := TX3DExternalPrototype.Create;
X3DExternalPrototype41.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype41.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype41.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco26\" \"../data/ArtDecoPrototypes.json#ArtDeco26\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26\" \"ArtDecoPrototypes.wrl#ArtDeco26\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype41]);
X3DExternalPrototype42 := TX3DExternalPrototype.Create;
X3DExternalPrototype42.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype42.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype42.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco27\" \"../data/ArtDecoPrototypes.json#ArtDeco27\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27\" \"ArtDecoPrototypes.wrl#ArtDeco27\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype42]);
X3DExternalPrototype43 := TX3DExternalPrototype.Create;
end;

procedure InitArtDecoExamplesPart4;
begin

X3DExternalPrototype43.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype43.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype43.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco28\" \"../data/ArtDecoPrototypes.json#ArtDeco28\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28\" \"ArtDecoPrototypes.wrl#ArtDeco28\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype43]);
X3DExternalPrototype44 := TX3DExternalPrototype.Create;
X3DExternalPrototype44.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype44.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype44.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco29\" \"../data/ArtDecoPrototypes.json#ArtDeco29\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29\" \"ArtDecoPrototypes.wrl#ArtDeco29\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype44]);
X3DExternalPrototype45 := TX3DExternalPrototype.Create;
X3DExternalPrototype45.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype45.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype45.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco30\" \"../data/ArtDecoPrototypes.json#ArtDeco30\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30\" \"ArtDecoPrototypes.wrl#ArtDeco30\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype45]);
X3DExternalPrototype46 := TX3DExternalPrototype.Create;
X3DExternalPrototype46.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype46.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype46.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco31\" \"../data/ArtDecoPrototypes.json#ArtDeco31\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31\" \"ArtDecoPrototypes.wrl#ArtDeco31\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype46]);
X3DExternalPrototype47 := TX3DExternalPrototype.Create;
X3DExternalPrototype47.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype47.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype47.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco32\" \"../data/ArtDecoPrototypes.json#ArtDeco32\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32\" \"ArtDecoPrototypes.wrl#ArtDeco32\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype47]);
X3DExternalPrototype48 := TX3DExternalPrototype.Create;
X3DExternalPrototype48.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype48.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype48.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco33\" \"../data/ArtDecoPrototypes.json#ArtDeco33\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33\" \"ArtDecoPrototypes.wrl#ArtDeco33\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype48]);
X3DExternalPrototype49 := TX3DExternalPrototype.Create;
X3DExternalPrototype49.Appinfo := 'UniversalMediaMaterials prototype';
X3DExternalPrototype49.Documentation := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials';
X3DExternalPrototype49.Url := '\"../data/ArtDecoPrototypes.x3dj#ArtDeco34\" \"../data/ArtDecoPrototypes.json#ArtDeco34\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34\" \"ArtDecoPrototypes.wrl#ArtDeco34\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34\"';
{ METHOD .AddX3DExternalPrototype }
Group13.AddX3DExternalPrototype([X3DExternalPrototype49]);
Group50 := TGroupNode.Create;
NavigationInfo51 := TNavigationInfoNode.Create;
NavigationInfo51.Headlight := False;
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(NavigationInfo51);
Viewpoint52 := TViewpointNode.Create;
Viewpoint52.Description := 'Front view';
end;

procedure InitArtDecoExamplesPart5;
begin

Viewpoint52.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint52);
Viewpoint53 := TViewpointNode.Create;
Viewpoint53.Description := 'Low Right';
Viewpoint53.Orientation := Vector4(0.74291,0.30772,0.59447,1.2171);
Viewpoint53.Position := Vector3(6.9282,-6.9282,6.9282);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint53);
Viewpoint54 := TViewpointNode.Create;
Viewpoint54.Description := 'Low Left';
Viewpoint54.Orientation := Vector4(0.74291,-0.30772,-0.59447,1.2171);
Viewpoint54.Position := Vector3(-6.9282,-6.9282,6.9282);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint54);
Viewpoint55 := TViewpointNode.Create;
Viewpoint55.Description := 'Back view';
Viewpoint55.Orientation := Vector4(0,1,0,3.1416);
Viewpoint55.Position := Vector3(0,0,-12);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint55);
Transform56 := TTransformNode.Create;
PositionInterpolator57 := TPositionInterpolatorNode.Create;
PositionInterpolator57.SetKey([0,0.25,0.5,0.75,1]);
PositionInterpolator57.SetKeyValue([Vector3(0,2.5,0),Vector3(0,0,0),Vector3(0,-2.5,0),Vector3(0,0,0),Vector3(0,2.5,0)]);
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(PositionInterpolator57);
TimeSensor58 := TTimeSensorNode.Create;
TimeSensor58.CycleInterval := 12;
TimeSensor58.Loop := True;
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(TimeSensor58);
Viewpoint59 := TViewpointNode.Create;
Viewpoint59.Description := 'Close Front';
Viewpoint59.Position := Vector3(0,0,6);
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(Viewpoint59);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform56);
DirectionalLight60 := TDirectionalLightNode.Create;
DirectionalLight60.Direction := Vector3(1,-1,-1);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(DirectionalLight60);
DirectionalLight61 := TDirectionalLightNode.Create;
DirectionalLight61.Direction := Vector3(0,1,-0.5);
DirectionalLight61.Intensity := 0.5;
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(DirectionalLight61);
Anchor62 := TAnchorNode.Create;
Anchor62.Description := 'Return to front view';
end;

procedure InitArtDecoExamplesPart6;
begin

Anchor62.SetUrl(['#Front']);
Transform63 := TTransformNode.Create;
Transform63.Translation := Vector3(0,0,-0.5);
Inline64 := TInlineNode.Create;
Inline64.SetUrl(['../data/gridBack.x3dj','../data/gridBack.json','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d','gridBack.wrl','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl']);
{ METHOD .FdChildren.Add }
Transform63.FdChildren.Add(Inline64);
{ METHOD .FdChildren.Add }
Anchor62.FdChildren.Add(Transform63);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Anchor62);
Viewpoint65 := TViewpointNode.Create;
Viewpoint65.Description := 'ArtDeco00';
Viewpoint65.Position := Vector3(-3.75,3.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint65);
Transform66 := TTransformNode.Create;
Transform66.Translation := Vector3(-3.75,3.75,0);
Anchor67 := TAnchorNode.Create;
Anchor67.Description := 'ArtDeco00 view';
Anchor67.SetUrl(['#View00']);
Shape68 := TShapeNode.Create;
Appearance69 := TAppearanceNode.Create;
X3DPrototype70 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance69.Material := X3DPrototype70;
{ METHOD .Appearance }
Shape68.Appearance := Appearance69;
Sphere71 := TSphereNode.Create;
Sphere71.Radius := 0.5;
{ METHOD .Geometry }
Shape68.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor67.FdChildren.Add(Shape68);
{ METHOD .FdChildren.Add }
Transform66.FdChildren.Add(Anchor67);
Transform72 := TTransformNode.Create;
Transform72.Translation := Vector3(0,0.3,0.5);
Anchor73 := TAnchorNode.Create;
Anchor73.Description := 'ArtDeco00 view source documentation';
Anchor73.SetParameter(['target=_source']);
Anchor73.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00']);
Shape74 := TShapeNode.Create;
Appearance75 := TAppearanceNode.Create;
Material76 := TMaterialNode.Create;
Material76.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance75.Material := Material76;
{ METHOD .Appearance }
Shape74.Appearance := Appearance75;
Text77 := TTextNode.Create;
end;

procedure InitArtDecoExamplesPart7;
begin

Text77.SetText(['ArtDeco00']);
FontStyle78 := TFontStyleNode.Create;
FontStyle78.Family := ffSANS;
FontStyle78.Justify := fjMIDDLE;
FontStyle78.JustifyMinor := fjMIDDLE;
FontStyle78.Size := 0.3;
FontStyle78.Style := fsBOLD;
{ METHOD .FontStyle }
Text77.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape74.Geometry := Text77;
{ METHOD .FdChildren.Add }
Anchor73.FdChildren.Add(Shape74);
{ METHOD .FdChildren.Add }
Transform72.FdChildren.Add(Anchor73);
{ METHOD .FdChildren.Add }
Transform66.FdChildren.Add(Transform72);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform66);
Viewpoint79 := TViewpointNode.Create;
Viewpoint79.Description := 'ArtDeco01';
Viewpoint79.Position := Vector3(-2.25,3.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint79);
Transform80 := TTransformNode.Create;
Transform80.Translation := Vector3(-2.25,3.75,0);
Anchor81 := TAnchorNode.Create;
Anchor81.Description := 'ArtDeco01 view';
Anchor81.SetUrl(['#View01']);
Shape82 := TShapeNode.Create;
Appearance83 := TAppearanceNode.Create;
X3DPrototype84 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance83.Material := X3DPrototype84;
{ METHOD .Appearance }
Shape82.Appearance := Appearance83;
{ METHOD .Geometry }
Shape82.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor81.FdChildren.Add(Shape82);
{ METHOD .FdChildren.Add }
Transform80.FdChildren.Add(Anchor81);
Transform86 := TTransformNode.Create;
Transform86.Translation := Vector3(0,0.3,0.5);
Anchor87 := TAnchorNode.Create;
Anchor87.Description := 'ArtDeco01 view source documentation';
Anchor87.SetParameter(['target=_source']);
Anchor87.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01']);
Shape88 := TShapeNode.Create;
Appearance89 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance89.Material := Material76;
{ METHOD .Appearance }
Shape88.Appearance := Appearance89;
end;

procedure InitArtDecoExamplesPart8;
begin

Text91 := TTextNode.Create;
Text91.SetText(['ArtDeco01']);
{ METHOD .FontStyle }
Text91.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape88.Geometry := Text91;
{ METHOD .FdChildren.Add }
Anchor87.FdChildren.Add(Shape88);
{ METHOD .FdChildren.Add }
Transform86.FdChildren.Add(Anchor87);
{ METHOD .FdChildren.Add }
Transform80.FdChildren.Add(Transform86);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform80);
Viewpoint93 := TViewpointNode.Create;
Viewpoint93.Description := 'ArtDeco02';
Viewpoint93.Position := Vector3(-0.75,3.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint93);
Transform94 := TTransformNode.Create;
Transform94.Translation := Vector3(-0.75,3.75,0);
Anchor95 := TAnchorNode.Create;
Anchor95.Description := 'ArtDeco02 view';
Anchor95.SetUrl(['#View02']);
Shape96 := TShapeNode.Create;
Appearance97 := TAppearanceNode.Create;
X3DPrototype98 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance97.Material := X3DPrototype98;
{ METHOD .Appearance }
Shape96.Appearance := Appearance97;
{ METHOD .Geometry }
Shape96.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor95.FdChildren.Add(Shape96);
{ METHOD .FdChildren.Add }
Transform94.FdChildren.Add(Anchor95);
Transform100 := TTransformNode.Create;
Transform100.Translation := Vector3(0,0.3,0.5);
Anchor101 := TAnchorNode.Create;
Anchor101.Description := 'ArtDeco02 view source documentation';
Anchor101.SetParameter(['target=_source']);
Anchor101.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02']);
Shape102 := TShapeNode.Create;
Appearance103 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance103.Material := Material76;
{ METHOD .Appearance }
Shape102.Appearance := Appearance103;
Text105 := TTextNode.Create;
Text105.SetText(['ArtDeco02']);
{ METHOD .FontStyle }
Text105.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape102.Geometry := Text105;
{ METHOD .FdChildren.Add }
Anchor101.FdChildren.Add(Shape102);
end;

procedure InitArtDecoExamplesPart9;
begin

{ METHOD .FdChildren.Add }
Transform100.FdChildren.Add(Anchor101);
{ METHOD .FdChildren.Add }
Transform94.FdChildren.Add(Transform100);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform94);
Viewpoint107 := TViewpointNode.Create;
Viewpoint107.Description := 'ArtDeco03';
Viewpoint107.Position := Vector3(0.75,3.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint107);
Transform108 := TTransformNode.Create;
Transform108.Translation := Vector3(0.75,3.75,0);
Anchor109 := TAnchorNode.Create;
Anchor109.Description := 'ArtDeco03 view';
Anchor109.SetUrl(['#View03']);
Shape110 := TShapeNode.Create;
Appearance111 := TAppearanceNode.Create;
X3DPrototype112 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance111.Material := X3DPrototype112;
{ METHOD .Appearance }
Shape110.Appearance := Appearance111;
{ METHOD .Geometry }
Shape110.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor109.FdChildren.Add(Shape110);
{ METHOD .FdChildren.Add }
Transform108.FdChildren.Add(Anchor109);
Transform114 := TTransformNode.Create;
Transform114.Translation := Vector3(0,0.3,0.5);
Anchor115 := TAnchorNode.Create;
Anchor115.Description := 'ArtDeco03 view source documentation';
Anchor115.SetParameter(['target=_source']);
Anchor115.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03']);
Shape116 := TShapeNode.Create;
Appearance117 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance117.Material := Material76;
{ METHOD .Appearance }
Shape116.Appearance := Appearance117;
Text119 := TTextNode.Create;
Text119.SetText(['ArtDeco03']);
{ METHOD .FontStyle }
Text119.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape116.Geometry := Text119;
{ METHOD .FdChildren.Add }
Anchor115.FdChildren.Add(Shape116);
{ METHOD .FdChildren.Add }
Transform114.FdChildren.Add(Anchor115);
{ METHOD .FdChildren.Add }
Transform108.FdChildren.Add(Transform114);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform108);
Viewpoint121 := TViewpointNode.Create;
Viewpoint121.Description := 'ArtDeco04';
end;

procedure InitArtDecoExamplesPart10;
begin

Viewpoint121.Position := Vector3(2.25,3.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint121);
Transform122 := TTransformNode.Create;
Transform122.Translation := Vector3(2.25,3.75,0);
Anchor123 := TAnchorNode.Create;
Anchor123.Description := 'ArtDeco04 view';
Anchor123.SetUrl(['#View04']);
Shape124 := TShapeNode.Create;
Appearance125 := TAppearanceNode.Create;
X3DPrototype126 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance125.Material := X3DPrototype126;
{ METHOD .Appearance }
Shape124.Appearance := Appearance125;
{ METHOD .Geometry }
Shape124.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor123.FdChildren.Add(Shape124);
{ METHOD .FdChildren.Add }
Transform122.FdChildren.Add(Anchor123);
Transform128 := TTransformNode.Create;
Transform128.Translation := Vector3(0,0.3,0.5);
Anchor129 := TAnchorNode.Create;
Anchor129.Description := 'ArtDeco04 view source documentation';
Anchor129.SetParameter(['target=_source']);
Anchor129.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04']);
Shape130 := TShapeNode.Create;
Appearance131 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance131.Material := Material76;
{ METHOD .Appearance }
Shape130.Appearance := Appearance131;
Text133 := TTextNode.Create;
Text133.SetText(['ArtDeco04']);
{ METHOD .FontStyle }
Text133.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape130.Geometry := Text133;
{ METHOD .FdChildren.Add }
Anchor129.FdChildren.Add(Shape130);
{ METHOD .FdChildren.Add }
Transform128.FdChildren.Add(Anchor129);
{ METHOD .FdChildren.Add }
Transform122.FdChildren.Add(Transform128);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform122);
Viewpoint135 := TViewpointNode.Create;
Viewpoint135.Description := 'ArtDeco05';
Viewpoint135.Position := Vector3(3.75,3.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint135);
Transform136 := TTransformNode.Create;
Transform136.Translation := Vector3(3.75,3.75,0);
Anchor137 := TAnchorNode.Create;
end;

procedure InitArtDecoExamplesPart11;
begin

Anchor137.Description := 'ArtDeco05 view';
Anchor137.SetUrl(['#View05']);
Shape138 := TShapeNode.Create;
Appearance139 := TAppearanceNode.Create;
X3DPrototype140 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance139.Material := X3DPrototype140;
{ METHOD .Appearance }
Shape138.Appearance := Appearance139;
{ METHOD .Geometry }
Shape138.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor137.FdChildren.Add(Shape138);
{ METHOD .FdChildren.Add }
Transform136.FdChildren.Add(Anchor137);
Transform142 := TTransformNode.Create;
Transform142.Translation := Vector3(0,0.3,0.5);
Anchor143 := TAnchorNode.Create;
Anchor143.Description := 'ArtDeco05 view source documentation';
Anchor143.SetParameter(['target=_source']);
Anchor143.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05']);
Shape144 := TShapeNode.Create;
Appearance145 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance145.Material := Material76;
{ METHOD .Appearance }
Shape144.Appearance := Appearance145;
Text147 := TTextNode.Create;
Text147.SetText(['ArtDeco05']);
{ METHOD .FontStyle }
Text147.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape144.Geometry := Text147;
{ METHOD .FdChildren.Add }
Anchor143.FdChildren.Add(Shape144);
{ METHOD .FdChildren.Add }
Transform142.FdChildren.Add(Anchor143);
{ METHOD .FdChildren.Add }
Transform136.FdChildren.Add(Transform142);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform136);
Viewpoint149 := TViewpointNode.Create;
Viewpoint149.Description := 'ArtDeco06';
Viewpoint149.Position := Vector3(-3.75,2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint149);
Transform150 := TTransformNode.Create;
Transform150.Translation := Vector3(-3.75,2.25,0);
Anchor151 := TAnchorNode.Create;
Anchor151.Description := 'ArtDeco06 view';
Anchor151.SetUrl(['#View06']);
Shape152 := TShapeNode.Create;
Appearance153 := TAppearanceNode.Create;
X3DPrototype154 := TX3DPrototypeNode.Create;
end;

procedure InitArtDecoExamplesPart12;
begin

{ METHOD .SetMaterial }
Appearance153.Material := X3DPrototype154;
{ METHOD .Appearance }
Shape152.Appearance := Appearance153;
{ METHOD .Geometry }
Shape152.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor151.FdChildren.Add(Shape152);
{ METHOD .FdChildren.Add }
Transform150.FdChildren.Add(Anchor151);
Transform156 := TTransformNode.Create;
Transform156.Translation := Vector3(0,0.3,0.5);
Anchor157 := TAnchorNode.Create;
Anchor157.Description := 'ArtDeco06 view source documentation';
Anchor157.SetParameter(['target=_source']);
Anchor157.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06']);
Shape158 := TShapeNode.Create;
Appearance159 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance159.Material := Material76;
{ METHOD .Appearance }
Shape158.Appearance := Appearance159;
Text161 := TTextNode.Create;
Text161.SetText(['ArtDeco06']);
{ METHOD .FontStyle }
Text161.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape158.Geometry := Text161;
{ METHOD .FdChildren.Add }
Anchor157.FdChildren.Add(Shape158);
{ METHOD .FdChildren.Add }
Transform156.FdChildren.Add(Anchor157);
{ METHOD .FdChildren.Add }
Transform150.FdChildren.Add(Transform156);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform150);
Viewpoint163 := TViewpointNode.Create;
Viewpoint163.Description := 'ArtDeco07';
Viewpoint163.Position := Vector3(-2.25,2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint163);
Transform164 := TTransformNode.Create;
Transform164.Translation := Vector3(-2.25,2.25,0);
Anchor165 := TAnchorNode.Create;
Anchor165.Description := 'ArtDeco07 view';
Anchor165.SetUrl(['#View07']);
Shape166 := TShapeNode.Create;
Appearance167 := TAppearanceNode.Create;
X3DPrototype168 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance167.Material := X3DPrototype168;
{ METHOD .Appearance }
Shape166.Appearance := Appearance167;
{ METHOD .Geometry }
Shape166.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor165.FdChildren.Add(Shape166);
{ METHOD .FdChildren.Add }
Transform164.FdChildren.Add(Anchor165);
end;

procedure InitArtDecoExamplesPart13;
begin

Transform170 := TTransformNode.Create;
Transform170.Translation := Vector3(0,0.3,0.5);
Anchor171 := TAnchorNode.Create;
Anchor171.Description := 'ArtDeco07 view source documentation';
Anchor171.SetParameter(['target=_source']);
Anchor171.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07']);
Shape172 := TShapeNode.Create;
Appearance173 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance173.Material := Material76;
{ METHOD .Appearance }
Shape172.Appearance := Appearance173;
Text175 := TTextNode.Create;
Text175.SetText(['ArtDeco07']);
{ METHOD .FontStyle }
Text175.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape172.Geometry := Text175;
{ METHOD .FdChildren.Add }
Anchor171.FdChildren.Add(Shape172);
{ METHOD .FdChildren.Add }
Transform170.FdChildren.Add(Anchor171);
{ METHOD .FdChildren.Add }
Transform164.FdChildren.Add(Transform170);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform164);
Viewpoint177 := TViewpointNode.Create;
Viewpoint177.Description := 'ArtDeco08';
Viewpoint177.Position := Vector3(-0.75,2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint177);
Transform178 := TTransformNode.Create;
Transform178.Translation := Vector3(-0.75,2.25,0);
Anchor179 := TAnchorNode.Create;
Anchor179.Description := 'ArtDeco08 view';
Anchor179.SetUrl(['#View08']);
Shape180 := TShapeNode.Create;
Appearance181 := TAppearanceNode.Create;
X3DPrototype182 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance181.Material := X3DPrototype182;
{ METHOD .Appearance }
Shape180.Appearance := Appearance181;
{ METHOD .Geometry }
Shape180.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor179.FdChildren.Add(Shape180);
{ METHOD .FdChildren.Add }
Transform178.FdChildren.Add(Anchor179);
Transform184 := TTransformNode.Create;
Transform184.Translation := Vector3(0,0.3,0.5);
Anchor185 := TAnchorNode.Create;
Anchor185.Description := 'ArtDeco08 view source documentation';
Anchor185.SetParameter(['target=_source']);
end;

procedure InitArtDecoExamplesPart14;
begin

Anchor185.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08']);
Shape186 := TShapeNode.Create;
Appearance187 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance187.Material := Material76;
{ METHOD .Appearance }
Shape186.Appearance := Appearance187;
Text189 := TTextNode.Create;
Text189.SetText(['ArtDeco08']);
{ METHOD .FontStyle }
Text189.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape186.Geometry := Text189;
{ METHOD .FdChildren.Add }
Anchor185.FdChildren.Add(Shape186);
{ METHOD .FdChildren.Add }
Transform184.FdChildren.Add(Anchor185);
{ METHOD .FdChildren.Add }
Transform178.FdChildren.Add(Transform184);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform178);
Viewpoint191 := TViewpointNode.Create;
Viewpoint191.Description := 'ArtDeco09';
Viewpoint191.Position := Vector3(0.75,2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint191);
Transform192 := TTransformNode.Create;
Transform192.Translation := Vector3(0.75,2.25,0);
Anchor193 := TAnchorNode.Create;
Anchor193.Description := 'ArtDeco09 view';
Anchor193.SetUrl(['#View09']);
Shape194 := TShapeNode.Create;
Appearance195 := TAppearanceNode.Create;
X3DPrototype196 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance195.Material := X3DPrototype196;
{ METHOD .Appearance }
Shape194.Appearance := Appearance195;
{ METHOD .Geometry }
Shape194.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor193.FdChildren.Add(Shape194);
{ METHOD .FdChildren.Add }
Transform192.FdChildren.Add(Anchor193);
Transform198 := TTransformNode.Create;
Transform198.Translation := Vector3(0,0.3,0.5);
Anchor199 := TAnchorNode.Create;
Anchor199.Description := 'ArtDeco09 view source documentation';
Anchor199.SetParameter(['target=_source']);
Anchor199.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09']);
Shape200 := TShapeNode.Create;
Appearance201 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance201.Material := Material76;
{ METHOD .Appearance }
Shape200.Appearance := Appearance201;
end;

procedure InitArtDecoExamplesPart15;
begin

Text203 := TTextNode.Create;
Text203.SetText(['ArtDeco09']);
{ METHOD .FontStyle }
Text203.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape200.Geometry := Text203;
{ METHOD .FdChildren.Add }
Anchor199.FdChildren.Add(Shape200);
{ METHOD .FdChildren.Add }
Transform198.FdChildren.Add(Anchor199);
{ METHOD .FdChildren.Add }
Transform192.FdChildren.Add(Transform198);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform192);
Viewpoint205 := TViewpointNode.Create;
Viewpoint205.Description := 'ArtDeco10';
Viewpoint205.Position := Vector3(2.25,2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint205);
Transform206 := TTransformNode.Create;
Transform206.Translation := Vector3(2.25,2.25,0);
Anchor207 := TAnchorNode.Create;
Anchor207.Description := 'ArtDeco10 view';
Anchor207.SetUrl(['#View10']);
Shape208 := TShapeNode.Create;
Appearance209 := TAppearanceNode.Create;
X3DPrototype210 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance209.Material := X3DPrototype210;
{ METHOD .Appearance }
Shape208.Appearance := Appearance209;
{ METHOD .Geometry }
Shape208.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor207.FdChildren.Add(Shape208);
{ METHOD .FdChildren.Add }
Transform206.FdChildren.Add(Anchor207);
Transform212 := TTransformNode.Create;
Transform212.Translation := Vector3(0,0.3,0.5);
Anchor213 := TAnchorNode.Create;
Anchor213.Description := 'ArtDeco10 view source documentation';
Anchor213.SetParameter(['target=_source']);
Anchor213.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10']);
Shape214 := TShapeNode.Create;
Appearance215 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance215.Material := Material76;
{ METHOD .Appearance }
Shape214.Appearance := Appearance215;
Text217 := TTextNode.Create;
Text217.SetText(['ArtDeco10']);
{ METHOD .FontStyle }
Text217.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape214.Geometry := Text217;
{ METHOD .FdChildren.Add }
Anchor213.FdChildren.Add(Shape214);
end;

procedure InitArtDecoExamplesPart16;
begin

{ METHOD .FdChildren.Add }
Transform212.FdChildren.Add(Anchor213);
{ METHOD .FdChildren.Add }
Transform206.FdChildren.Add(Transform212);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform206);
Viewpoint219 := TViewpointNode.Create;
Viewpoint219.Description := 'ArtDeco11';
Viewpoint219.Position := Vector3(3.75,2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint219);
Transform220 := TTransformNode.Create;
Transform220.Translation := Vector3(3.75,2.25,0);
Anchor221 := TAnchorNode.Create;
Anchor221.Description := 'ArtDeco11 view';
Anchor221.SetUrl(['#View11']);
Shape222 := TShapeNode.Create;
Appearance223 := TAppearanceNode.Create;
X3DPrototype224 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance223.Material := X3DPrototype224;
{ METHOD .Appearance }
Shape222.Appearance := Appearance223;
{ METHOD .Geometry }
Shape222.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor221.FdChildren.Add(Shape222);
{ METHOD .FdChildren.Add }
Transform220.FdChildren.Add(Anchor221);
Transform226 := TTransformNode.Create;
Transform226.Translation := Vector3(0,0.3,0.5);
Anchor227 := TAnchorNode.Create;
Anchor227.Description := 'ArtDeco11 view source documentation';
Anchor227.SetParameter(['target=_source']);
Anchor227.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11']);
Shape228 := TShapeNode.Create;
Appearance229 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance229.Material := Material76;
{ METHOD .Appearance }
Shape228.Appearance := Appearance229;
Text231 := TTextNode.Create;
Text231.SetText(['ArtDeco11']);
{ METHOD .FontStyle }
Text231.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape228.Geometry := Text231;
{ METHOD .FdChildren.Add }
Anchor227.FdChildren.Add(Shape228);
{ METHOD .FdChildren.Add }
Transform226.FdChildren.Add(Anchor227);
{ METHOD .FdChildren.Add }
Transform220.FdChildren.Add(Transform226);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform220);
Viewpoint233 := TViewpointNode.Create;
Viewpoint233.Description := 'ArtDeco12';
end;

procedure InitArtDecoExamplesPart17;
begin

Viewpoint233.Position := Vector3(-3.75,0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint233);
Transform234 := TTransformNode.Create;
Transform234.Translation := Vector3(-3.75,0.75,0);
Anchor235 := TAnchorNode.Create;
Anchor235.Description := 'ArtDeco12 view';
Anchor235.SetUrl(['#View12']);
Shape236 := TShapeNode.Create;
Appearance237 := TAppearanceNode.Create;
X3DPrototype238 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance237.Material := X3DPrototype238;
{ METHOD .Appearance }
Shape236.Appearance := Appearance237;
{ METHOD .Geometry }
Shape236.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor235.FdChildren.Add(Shape236);
{ METHOD .FdChildren.Add }
Transform234.FdChildren.Add(Anchor235);
Transform240 := TTransformNode.Create;
Transform240.Translation := Vector3(0,0.3,0.5);
Anchor241 := TAnchorNode.Create;
Anchor241.Description := 'ArtDeco12 view source documentation';
Anchor241.SetParameter(['target=_source']);
Anchor241.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12']);
Shape242 := TShapeNode.Create;
Appearance243 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance243.Material := Material76;
{ METHOD .Appearance }
Shape242.Appearance := Appearance243;
Text245 := TTextNode.Create;
Text245.SetText(['ArtDeco12']);
{ METHOD .FontStyle }
Text245.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape242.Geometry := Text245;
{ METHOD .FdChildren.Add }
Anchor241.FdChildren.Add(Shape242);
{ METHOD .FdChildren.Add }
Transform240.FdChildren.Add(Anchor241);
{ METHOD .FdChildren.Add }
Transform234.FdChildren.Add(Transform240);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform234);
Viewpoint247 := TViewpointNode.Create;
Viewpoint247.Description := 'ArtDeco13';
Viewpoint247.Position := Vector3(-2.25,0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint247);
Transform248 := TTransformNode.Create;
Transform248.Translation := Vector3(-2.25,0.75,0);
Anchor249 := TAnchorNode.Create;
end;

procedure InitArtDecoExamplesPart18;
begin

Anchor249.Description := 'ArtDeco13 view';
Anchor249.SetUrl(['#View13']);
Shape250 := TShapeNode.Create;
Appearance251 := TAppearanceNode.Create;
X3DPrototype252 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance251.Material := X3DPrototype252;
{ METHOD .Appearance }
Shape250.Appearance := Appearance251;
{ METHOD .Geometry }
Shape250.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor249.FdChildren.Add(Shape250);
{ METHOD .FdChildren.Add }
Transform248.FdChildren.Add(Anchor249);
Transform254 := TTransformNode.Create;
Transform254.Translation := Vector3(0,0.3,0.5);
Anchor255 := TAnchorNode.Create;
Anchor255.Description := 'ArtDeco13 view source documentation';
Anchor255.SetParameter(['target=_source']);
Anchor255.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13']);
Shape256 := TShapeNode.Create;
Appearance257 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance257.Material := Material76;
{ METHOD .Appearance }
Shape256.Appearance := Appearance257;
Text259 := TTextNode.Create;
Text259.SetText(['ArtDeco13']);
{ METHOD .FontStyle }
Text259.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape256.Geometry := Text259;
{ METHOD .FdChildren.Add }
Anchor255.FdChildren.Add(Shape256);
{ METHOD .FdChildren.Add }
Transform254.FdChildren.Add(Anchor255);
{ METHOD .FdChildren.Add }
Transform248.FdChildren.Add(Transform254);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform248);
Viewpoint261 := TViewpointNode.Create;
Viewpoint261.Description := 'ArtDeco14';
Viewpoint261.Position := Vector3(-0.75,0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint261);
Transform262 := TTransformNode.Create;
Transform262.Translation := Vector3(-0.75,0.75,0);
Anchor263 := TAnchorNode.Create;
Anchor263.Description := 'ArtDeco14 view';
Anchor263.SetUrl(['#View14']);
Shape264 := TShapeNode.Create;
Appearance265 := TAppearanceNode.Create;
X3DPrototype266 := TX3DPrototypeNode.Create;
end;

procedure InitArtDecoExamplesPart19;
begin

{ METHOD .SetMaterial }
Appearance265.Material := X3DPrototype266;
{ METHOD .Appearance }
Shape264.Appearance := Appearance265;
{ METHOD .Geometry }
Shape264.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor263.FdChildren.Add(Shape264);
{ METHOD .FdChildren.Add }
Transform262.FdChildren.Add(Anchor263);
Transform268 := TTransformNode.Create;
Transform268.Translation := Vector3(0,0.3,0.5);
Anchor269 := TAnchorNode.Create;
Anchor269.Description := 'ArtDeco14 view source documentation';
Anchor269.SetParameter(['target=_source']);
Anchor269.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14']);
Shape270 := TShapeNode.Create;
Appearance271 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance271.Material := Material76;
{ METHOD .Appearance }
Shape270.Appearance := Appearance271;
Text273 := TTextNode.Create;
Text273.SetText(['ArtDeco14']);
{ METHOD .FontStyle }
Text273.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape270.Geometry := Text273;
{ METHOD .FdChildren.Add }
Anchor269.FdChildren.Add(Shape270);
{ METHOD .FdChildren.Add }
Transform268.FdChildren.Add(Anchor269);
{ METHOD .FdChildren.Add }
Transform262.FdChildren.Add(Transform268);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform262);
Viewpoint275 := TViewpointNode.Create;
Viewpoint275.Description := 'ArtDeco15';
Viewpoint275.Position := Vector3(0.75,0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint275);
Transform276 := TTransformNode.Create;
Transform276.Translation := Vector3(0.75,0.75,0);
Anchor277 := TAnchorNode.Create;
Anchor277.Description := 'ArtDeco15 view';
Anchor277.SetUrl(['#View15']);
Shape278 := TShapeNode.Create;
Appearance279 := TAppearanceNode.Create;
X3DPrototype280 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance279.Material := X3DPrototype280;
{ METHOD .Appearance }
Shape278.Appearance := Appearance279;
{ METHOD .Geometry }
Shape278.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor277.FdChildren.Add(Shape278);
{ METHOD .FdChildren.Add }
Transform276.FdChildren.Add(Anchor277);
end;

procedure InitArtDecoExamplesPart20;
begin

Transform282 := TTransformNode.Create;
Transform282.Translation := Vector3(0,0.3,0.5);
Anchor283 := TAnchorNode.Create;
Anchor283.Description := 'ArtDeco15 view source documentation';
Anchor283.SetParameter(['target=_source']);
Anchor283.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15']);
Shape284 := TShapeNode.Create;
Appearance285 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance285.Material := Material76;
{ METHOD .Appearance }
Shape284.Appearance := Appearance285;
Text287 := TTextNode.Create;
Text287.SetText(['ArtDeco15']);
{ METHOD .FontStyle }
Text287.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape284.Geometry := Text287;
{ METHOD .FdChildren.Add }
Anchor283.FdChildren.Add(Shape284);
{ METHOD .FdChildren.Add }
Transform282.FdChildren.Add(Anchor283);
{ METHOD .FdChildren.Add }
Transform276.FdChildren.Add(Transform282);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform276);
Viewpoint289 := TViewpointNode.Create;
Viewpoint289.Description := 'ArtDeco16';
Viewpoint289.Position := Vector3(2.25,0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint289);
Transform290 := TTransformNode.Create;
Transform290.Translation := Vector3(2.25,0.75,0);
Anchor291 := TAnchorNode.Create;
Anchor291.Description := 'ArtDeco16 view';
Anchor291.SetUrl(['#View16']);
Shape292 := TShapeNode.Create;
Appearance293 := TAppearanceNode.Create;
X3DPrototype294 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance293.Material := X3DPrototype294;
{ METHOD .Appearance }
Shape292.Appearance := Appearance293;
{ METHOD .Geometry }
Shape292.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor291.FdChildren.Add(Shape292);
{ METHOD .FdChildren.Add }
Transform290.FdChildren.Add(Anchor291);
Transform296 := TTransformNode.Create;
Transform296.Translation := Vector3(0,0.3,0.5);
Anchor297 := TAnchorNode.Create;
Anchor297.Description := 'ArtDeco16 view source documentation';
Anchor297.SetParameter(['target=_source']);
end;

procedure InitArtDecoExamplesPart21;
begin

Anchor297.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16']);
Shape298 := TShapeNode.Create;
Appearance299 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance299.Material := Material76;
{ METHOD .Appearance }
Shape298.Appearance := Appearance299;
Text301 := TTextNode.Create;
Text301.SetText(['ArtDeco16']);
{ METHOD .FontStyle }
Text301.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape298.Geometry := Text301;
{ METHOD .FdChildren.Add }
Anchor297.FdChildren.Add(Shape298);
{ METHOD .FdChildren.Add }
Transform296.FdChildren.Add(Anchor297);
{ METHOD .FdChildren.Add }
Transform290.FdChildren.Add(Transform296);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform290);
Viewpoint303 := TViewpointNode.Create;
Viewpoint303.Description := 'ArtDeco17';
Viewpoint303.Position := Vector3(3.75,0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint303);
Transform304 := TTransformNode.Create;
Transform304.Translation := Vector3(3.75,0.75,0);
Anchor305 := TAnchorNode.Create;
Anchor305.Description := 'ArtDeco17 view';
Anchor305.SetUrl(['#View17']);
Shape306 := TShapeNode.Create;
Appearance307 := TAppearanceNode.Create;
X3DPrototype308 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance307.Material := X3DPrototype308;
{ METHOD .Appearance }
Shape306.Appearance := Appearance307;
{ METHOD .Geometry }
Shape306.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor305.FdChildren.Add(Shape306);
{ METHOD .FdChildren.Add }
Transform304.FdChildren.Add(Anchor305);
Transform310 := TTransformNode.Create;
Transform310.Translation := Vector3(0,0.3,0.5);
Anchor311 := TAnchorNode.Create;
Anchor311.Description := 'ArtDeco17 view source documentation';
Anchor311.SetParameter(['target=_source']);
Anchor311.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17']);
Shape312 := TShapeNode.Create;
Appearance313 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance313.Material := Material76;
{ METHOD .Appearance }
Shape312.Appearance := Appearance313;
end;

procedure InitArtDecoExamplesPart22;
begin

Text315 := TTextNode.Create;
Text315.SetText(['ArtDeco17']);
{ METHOD .FontStyle }
Text315.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape312.Geometry := Text315;
{ METHOD .FdChildren.Add }
Anchor311.FdChildren.Add(Shape312);
{ METHOD .FdChildren.Add }
Transform310.FdChildren.Add(Anchor311);
{ METHOD .FdChildren.Add }
Transform304.FdChildren.Add(Transform310);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform304);
Viewpoint317 := TViewpointNode.Create;
Viewpoint317.Description := 'ArtDeco18';
Viewpoint317.Position := Vector3(-3.75,-0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint317);
Transform318 := TTransformNode.Create;
Transform318.Translation := Vector3(-3.75,-0.75,0);
Anchor319 := TAnchorNode.Create;
Anchor319.Description := 'ArtDeco18 view';
Anchor319.SetUrl(['#View18']);
Shape320 := TShapeNode.Create;
Appearance321 := TAppearanceNode.Create;
X3DPrototype322 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance321.Material := X3DPrototype322;
{ METHOD .Appearance }
Shape320.Appearance := Appearance321;
{ METHOD .Geometry }
Shape320.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor319.FdChildren.Add(Shape320);
{ METHOD .FdChildren.Add }
Transform318.FdChildren.Add(Anchor319);
Transform324 := TTransformNode.Create;
Transform324.Translation := Vector3(0,0.3,0.5);
Anchor325 := TAnchorNode.Create;
Anchor325.Description := 'ArtDeco18 view source documentation';
Anchor325.SetParameter(['target=_source']);
Anchor325.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18']);
Shape326 := TShapeNode.Create;
Appearance327 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance327.Material := Material76;
{ METHOD .Appearance }
Shape326.Appearance := Appearance327;
Text329 := TTextNode.Create;
Text329.SetText(['ArtDeco18']);
{ METHOD .FontStyle }
Text329.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape326.Geometry := Text329;
{ METHOD .FdChildren.Add }
Anchor325.FdChildren.Add(Shape326);
end;

procedure InitArtDecoExamplesPart23;
begin

{ METHOD .FdChildren.Add }
Transform324.FdChildren.Add(Anchor325);
{ METHOD .FdChildren.Add }
Transform318.FdChildren.Add(Transform324);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform318);
Viewpoint331 := TViewpointNode.Create;
Viewpoint331.Description := 'ArtDeco19';
Viewpoint331.Position := Vector3(-2.25,-0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint331);
Transform332 := TTransformNode.Create;
Transform332.Translation := Vector3(-2.25,-0.75,0);
Anchor333 := TAnchorNode.Create;
Anchor333.Description := 'ArtDeco19 view';
Anchor333.SetUrl(['#View19']);
Shape334 := TShapeNode.Create;
Appearance335 := TAppearanceNode.Create;
X3DPrototype336 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance335.Material := X3DPrototype336;
{ METHOD .Appearance }
Shape334.Appearance := Appearance335;
{ METHOD .Geometry }
Shape334.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor333.FdChildren.Add(Shape334);
{ METHOD .FdChildren.Add }
Transform332.FdChildren.Add(Anchor333);
Transform338 := TTransformNode.Create;
Transform338.Translation := Vector3(0,0.3,0.5);
Anchor339 := TAnchorNode.Create;
Anchor339.Description := 'ArtDeco19 view source documentation';
Anchor339.SetParameter(['target=_source']);
Anchor339.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19']);
Shape340 := TShapeNode.Create;
Appearance341 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance341.Material := Material76;
{ METHOD .Appearance }
Shape340.Appearance := Appearance341;
Text343 := TTextNode.Create;
Text343.SetText(['ArtDeco19']);
{ METHOD .FontStyle }
Text343.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape340.Geometry := Text343;
{ METHOD .FdChildren.Add }
Anchor339.FdChildren.Add(Shape340);
{ METHOD .FdChildren.Add }
Transform338.FdChildren.Add(Anchor339);
{ METHOD .FdChildren.Add }
Transform332.FdChildren.Add(Transform338);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform332);
Viewpoint345 := TViewpointNode.Create;
Viewpoint345.Description := 'ArtDeco20';
end;

procedure InitArtDecoExamplesPart24;
begin

Viewpoint345.Position := Vector3(-0.75,-0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint345);
Transform346 := TTransformNode.Create;
Transform346.Translation := Vector3(-0.75,-0.75,0);
Anchor347 := TAnchorNode.Create;
Anchor347.Description := 'ArtDeco20 view';
Anchor347.SetUrl(['#View20']);
Shape348 := TShapeNode.Create;
Appearance349 := TAppearanceNode.Create;
X3DPrototype350 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance349.Material := X3DPrototype350;
{ METHOD .Appearance }
Shape348.Appearance := Appearance349;
{ METHOD .Geometry }
Shape348.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor347.FdChildren.Add(Shape348);
{ METHOD .FdChildren.Add }
Transform346.FdChildren.Add(Anchor347);
Transform352 := TTransformNode.Create;
Transform352.Translation := Vector3(0,0.3,0.5);
Anchor353 := TAnchorNode.Create;
Anchor353.Description := 'ArtDeco20 view source documentation';
Anchor353.SetParameter(['target=_source']);
Anchor353.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20']);
Shape354 := TShapeNode.Create;
Appearance355 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance355.Material := Material76;
{ METHOD .Appearance }
Shape354.Appearance := Appearance355;
Text357 := TTextNode.Create;
Text357.SetText(['ArtDeco20']);
{ METHOD .FontStyle }
Text357.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape354.Geometry := Text357;
{ METHOD .FdChildren.Add }
Anchor353.FdChildren.Add(Shape354);
{ METHOD .FdChildren.Add }
Transform352.FdChildren.Add(Anchor353);
{ METHOD .FdChildren.Add }
Transform346.FdChildren.Add(Transform352);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform346);
Viewpoint359 := TViewpointNode.Create;
Viewpoint359.Description := 'ArtDeco21';
Viewpoint359.Position := Vector3(0.75,-0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint359);
Transform360 := TTransformNode.Create;
Transform360.Translation := Vector3(0.75,-0.75,0);
Anchor361 := TAnchorNode.Create;
end;

procedure InitArtDecoExamplesPart25;
begin

Anchor361.Description := 'ArtDeco21 view';
Anchor361.SetUrl(['#View21']);
Shape362 := TShapeNode.Create;
Appearance363 := TAppearanceNode.Create;
X3DPrototype364 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance363.Material := X3DPrototype364;
{ METHOD .Appearance }
Shape362.Appearance := Appearance363;
{ METHOD .Geometry }
Shape362.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor361.FdChildren.Add(Shape362);
{ METHOD .FdChildren.Add }
Transform360.FdChildren.Add(Anchor361);
Transform366 := TTransformNode.Create;
Transform366.Translation := Vector3(0,0.3,0.5);
Anchor367 := TAnchorNode.Create;
Anchor367.Description := 'ArtDeco21 view source documentation';
Anchor367.SetParameter(['target=_source']);
Anchor367.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21']);
Shape368 := TShapeNode.Create;
Appearance369 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance369.Material := Material76;
{ METHOD .Appearance }
Shape368.Appearance := Appearance369;
Text371 := TTextNode.Create;
Text371.SetText(['ArtDeco21']);
{ METHOD .FontStyle }
Text371.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape368.Geometry := Text371;
{ METHOD .FdChildren.Add }
Anchor367.FdChildren.Add(Shape368);
{ METHOD .FdChildren.Add }
Transform366.FdChildren.Add(Anchor367);
{ METHOD .FdChildren.Add }
Transform360.FdChildren.Add(Transform366);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform360);
Viewpoint373 := TViewpointNode.Create;
Viewpoint373.Description := 'ArtDeco22';
Viewpoint373.Position := Vector3(2.25,-0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint373);
Transform374 := TTransformNode.Create;
Transform374.Translation := Vector3(2.25,-0.75,0);
Anchor375 := TAnchorNode.Create;
Anchor375.Description := 'ArtDeco22 view';
Anchor375.SetUrl(['#View22']);
Shape376 := TShapeNode.Create;
Appearance377 := TAppearanceNode.Create;
X3DPrototype378 := TX3DPrototypeNode.Create;
end;

procedure InitArtDecoExamplesPart26;
begin

{ METHOD .SetMaterial }
Appearance377.Material := X3DPrototype378;
{ METHOD .Appearance }
Shape376.Appearance := Appearance377;
{ METHOD .Geometry }
Shape376.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor375.FdChildren.Add(Shape376);
{ METHOD .FdChildren.Add }
Transform374.FdChildren.Add(Anchor375);
Transform380 := TTransformNode.Create;
Transform380.Translation := Vector3(0,0.3,0.5);
Anchor381 := TAnchorNode.Create;
Anchor381.Description := 'ArtDeco22 view source documentation';
Anchor381.SetParameter(['target=_source']);
Anchor381.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22']);
Shape382 := TShapeNode.Create;
Appearance383 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance383.Material := Material76;
{ METHOD .Appearance }
Shape382.Appearance := Appearance383;
Text385 := TTextNode.Create;
Text385.SetText(['ArtDeco22']);
{ METHOD .FontStyle }
Text385.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape382.Geometry := Text385;
{ METHOD .FdChildren.Add }
Anchor381.FdChildren.Add(Shape382);
{ METHOD .FdChildren.Add }
Transform380.FdChildren.Add(Anchor381);
{ METHOD .FdChildren.Add }
Transform374.FdChildren.Add(Transform380);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform374);
Viewpoint387 := TViewpointNode.Create;
Viewpoint387.Description := 'ArtDeco23';
Viewpoint387.Position := Vector3(3.75,-0.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint387);
Transform388 := TTransformNode.Create;
Transform388.Translation := Vector3(3.75,-0.75,0);
Anchor389 := TAnchorNode.Create;
Anchor389.Description := 'ArtDeco23 view';
Anchor389.SetUrl(['#View23']);
Shape390 := TShapeNode.Create;
Appearance391 := TAppearanceNode.Create;
X3DPrototype392 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance391.Material := X3DPrototype392;
{ METHOD .Appearance }
Shape390.Appearance := Appearance391;
{ METHOD .Geometry }
Shape390.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor389.FdChildren.Add(Shape390);
{ METHOD .FdChildren.Add }
Transform388.FdChildren.Add(Anchor389);
end;

procedure InitArtDecoExamplesPart27;
begin

Transform394 := TTransformNode.Create;
Transform394.Translation := Vector3(0,0.3,0.5);
Anchor395 := TAnchorNode.Create;
Anchor395.Description := 'ArtDeco23 view source documentation';
Anchor395.SetParameter(['target=_source']);
Anchor395.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23']);
Shape396 := TShapeNode.Create;
Appearance397 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance397.Material := Material76;
{ METHOD .Appearance }
Shape396.Appearance := Appearance397;
Text399 := TTextNode.Create;
Text399.SetText(['ArtDeco23']);
{ METHOD .FontStyle }
Text399.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape396.Geometry := Text399;
{ METHOD .FdChildren.Add }
Anchor395.FdChildren.Add(Shape396);
{ METHOD .FdChildren.Add }
Transform394.FdChildren.Add(Anchor395);
{ METHOD .FdChildren.Add }
Transform388.FdChildren.Add(Transform394);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform388);
Viewpoint401 := TViewpointNode.Create;
Viewpoint401.Description := 'ArtDeco24';
Viewpoint401.Position := Vector3(-3.75,-2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint401);
Transform402 := TTransformNode.Create;
Transform402.Translation := Vector3(-3.75,-2.25,0);
Anchor403 := TAnchorNode.Create;
Anchor403.Description := 'ArtDeco24 view';
Anchor403.SetUrl(['#View24']);
Shape404 := TShapeNode.Create;
Appearance405 := TAppearanceNode.Create;
X3DPrototype406 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance405.Material := X3DPrototype406;
{ METHOD .Appearance }
Shape404.Appearance := Appearance405;
{ METHOD .Geometry }
Shape404.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor403.FdChildren.Add(Shape404);
{ METHOD .FdChildren.Add }
Transform402.FdChildren.Add(Anchor403);
Transform408 := TTransformNode.Create;
Transform408.Translation := Vector3(0,0.3,0.5);
Anchor409 := TAnchorNode.Create;
Anchor409.Description := 'ArtDeco24 view source documentation';
Anchor409.SetParameter(['target=_source']);
end;

procedure InitArtDecoExamplesPart28;
begin

Anchor409.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24']);
Shape410 := TShapeNode.Create;
Appearance411 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance411.Material := Material76;
{ METHOD .Appearance }
Shape410.Appearance := Appearance411;
Text413 := TTextNode.Create;
Text413.SetText(['ArtDeco24']);
{ METHOD .FontStyle }
Text413.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape410.Geometry := Text413;
{ METHOD .FdChildren.Add }
Anchor409.FdChildren.Add(Shape410);
{ METHOD .FdChildren.Add }
Transform408.FdChildren.Add(Anchor409);
{ METHOD .FdChildren.Add }
Transform402.FdChildren.Add(Transform408);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform402);
Viewpoint415 := TViewpointNode.Create;
Viewpoint415.Description := 'ArtDeco25';
Viewpoint415.Position := Vector3(-2.25,-2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint415);
Transform416 := TTransformNode.Create;
Transform416.Translation := Vector3(-2.25,-2.25,0);
Anchor417 := TAnchorNode.Create;
Anchor417.Description := 'ArtDeco25 view';
Anchor417.SetUrl(['#View25']);
Shape418 := TShapeNode.Create;
Appearance419 := TAppearanceNode.Create;
X3DPrototype420 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance419.Material := X3DPrototype420;
{ METHOD .Appearance }
Shape418.Appearance := Appearance419;
{ METHOD .Geometry }
Shape418.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor417.FdChildren.Add(Shape418);
{ METHOD .FdChildren.Add }
Transform416.FdChildren.Add(Anchor417);
Transform422 := TTransformNode.Create;
Transform422.Translation := Vector3(0,0.3,0.5);
Anchor423 := TAnchorNode.Create;
Anchor423.Description := 'ArtDeco25 view source documentation';
Anchor423.SetParameter(['target=_source']);
Anchor423.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25']);
Shape424 := TShapeNode.Create;
Appearance425 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance425.Material := Material76;
{ METHOD .Appearance }
Shape424.Appearance := Appearance425;
end;

procedure InitArtDecoExamplesPart29;
begin

Text427 := TTextNode.Create;
Text427.SetText(['ArtDeco25']);
{ METHOD .FontStyle }
Text427.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape424.Geometry := Text427;
{ METHOD .FdChildren.Add }
Anchor423.FdChildren.Add(Shape424);
{ METHOD .FdChildren.Add }
Transform422.FdChildren.Add(Anchor423);
{ METHOD .FdChildren.Add }
Transform416.FdChildren.Add(Transform422);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform416);
Viewpoint429 := TViewpointNode.Create;
Viewpoint429.Description := 'ArtDeco26';
Viewpoint429.Position := Vector3(-0.75,-2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint429);
Transform430 := TTransformNode.Create;
Transform430.Translation := Vector3(-0.75,-2.25,0);
Anchor431 := TAnchorNode.Create;
Anchor431.Description := 'ArtDeco26 view';
Anchor431.SetUrl(['#View26']);
Shape432 := TShapeNode.Create;
Appearance433 := TAppearanceNode.Create;
X3DPrototype434 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance433.Material := X3DPrototype434;
{ METHOD .Appearance }
Shape432.Appearance := Appearance433;
{ METHOD .Geometry }
Shape432.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor431.FdChildren.Add(Shape432);
{ METHOD .FdChildren.Add }
Transform430.FdChildren.Add(Anchor431);
Transform436 := TTransformNode.Create;
Transform436.Translation := Vector3(0,0.3,0.5);
Anchor437 := TAnchorNode.Create;
Anchor437.Description := 'ArtDeco26 view source documentation';
Anchor437.SetParameter(['target=_source']);
Anchor437.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26']);
Shape438 := TShapeNode.Create;
Appearance439 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance439.Material := Material76;
{ METHOD .Appearance }
Shape438.Appearance := Appearance439;
Text441 := TTextNode.Create;
Text441.SetText(['ArtDeco26']);
{ METHOD .FontStyle }
Text441.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape438.Geometry := Text441;
{ METHOD .FdChildren.Add }
Anchor437.FdChildren.Add(Shape438);
end;

procedure InitArtDecoExamplesPart30;
begin

{ METHOD .FdChildren.Add }
Transform436.FdChildren.Add(Anchor437);
{ METHOD .FdChildren.Add }
Transform430.FdChildren.Add(Transform436);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform430);
Viewpoint443 := TViewpointNode.Create;
Viewpoint443.Description := 'ArtDeco27';
Viewpoint443.Position := Vector3(0.75,-2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint443);
Transform444 := TTransformNode.Create;
Transform444.Translation := Vector3(0.75,-2.25,0);
Anchor445 := TAnchorNode.Create;
Anchor445.Description := 'ArtDeco27 view';
Anchor445.SetUrl(['#View27']);
Shape446 := TShapeNode.Create;
Appearance447 := TAppearanceNode.Create;
X3DPrototype448 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance447.Material := X3DPrototype448;
{ METHOD .Appearance }
Shape446.Appearance := Appearance447;
{ METHOD .Geometry }
Shape446.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor445.FdChildren.Add(Shape446);
{ METHOD .FdChildren.Add }
Transform444.FdChildren.Add(Anchor445);
Transform450 := TTransformNode.Create;
Transform450.Translation := Vector3(0,0.3,0.5);
Anchor451 := TAnchorNode.Create;
Anchor451.Description := 'ArtDeco27 view source documentation';
Anchor451.SetParameter(['target=_source']);
Anchor451.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27']);
Shape452 := TShapeNode.Create;
Appearance453 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance453.Material := Material76;
{ METHOD .Appearance }
Shape452.Appearance := Appearance453;
Text455 := TTextNode.Create;
Text455.SetText(['ArtDeco27']);
{ METHOD .FontStyle }
Text455.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape452.Geometry := Text455;
{ METHOD .FdChildren.Add }
Anchor451.FdChildren.Add(Shape452);
{ METHOD .FdChildren.Add }
Transform450.FdChildren.Add(Anchor451);
{ METHOD .FdChildren.Add }
Transform444.FdChildren.Add(Transform450);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform444);
Viewpoint457 := TViewpointNode.Create;
Viewpoint457.Description := 'ArtDeco28';
end;

procedure InitArtDecoExamplesPart31;
begin

Viewpoint457.Position := Vector3(2.25,-2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint457);
Transform458 := TTransformNode.Create;
Transform458.Translation := Vector3(2.25,-2.25,0);
Anchor459 := TAnchorNode.Create;
Anchor459.Description := 'ArtDeco28 view';
Anchor459.SetUrl(['#View28']);
Shape460 := TShapeNode.Create;
Appearance461 := TAppearanceNode.Create;
X3DPrototype462 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance461.Material := X3DPrototype462;
{ METHOD .Appearance }
Shape460.Appearance := Appearance461;
{ METHOD .Geometry }
Shape460.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor459.FdChildren.Add(Shape460);
{ METHOD .FdChildren.Add }
Transform458.FdChildren.Add(Anchor459);
Transform464 := TTransformNode.Create;
Transform464.Translation := Vector3(0,0.3,0.5);
Anchor465 := TAnchorNode.Create;
Anchor465.Description := 'ArtDeco28 view source documentation';
Anchor465.SetParameter(['target=_source']);
Anchor465.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28']);
Shape466 := TShapeNode.Create;
Appearance467 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance467.Material := Material76;
{ METHOD .Appearance }
Shape466.Appearance := Appearance467;
Text469 := TTextNode.Create;
Text469.SetText(['ArtDeco28']);
{ METHOD .FontStyle }
Text469.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape466.Geometry := Text469;
{ METHOD .FdChildren.Add }
Anchor465.FdChildren.Add(Shape466);
{ METHOD .FdChildren.Add }
Transform464.FdChildren.Add(Anchor465);
{ METHOD .FdChildren.Add }
Transform458.FdChildren.Add(Transform464);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform458);
Viewpoint471 := TViewpointNode.Create;
Viewpoint471.Description := 'ArtDeco29';
Viewpoint471.Position := Vector3(3.75,-2.25,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint471);
Transform472 := TTransformNode.Create;
Transform472.Translation := Vector3(3.75,-2.25,0);
Anchor473 := TAnchorNode.Create;
end;

procedure InitArtDecoExamplesPart32;
begin

Anchor473.Description := 'ArtDeco29 view';
Anchor473.SetUrl(['#View29']);
Shape474 := TShapeNode.Create;
Appearance475 := TAppearanceNode.Create;
X3DPrototype476 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance475.Material := X3DPrototype476;
{ METHOD .Appearance }
Shape474.Appearance := Appearance475;
{ METHOD .Geometry }
Shape474.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor473.FdChildren.Add(Shape474);
{ METHOD .FdChildren.Add }
Transform472.FdChildren.Add(Anchor473);
Transform478 := TTransformNode.Create;
Transform478.Translation := Vector3(0,0.3,0.5);
Anchor479 := TAnchorNode.Create;
Anchor479.Description := 'ArtDeco29 view source documentation';
Anchor479.SetParameter(['target=_source']);
Anchor479.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29']);
Shape480 := TShapeNode.Create;
Appearance481 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance481.Material := Material76;
{ METHOD .Appearance }
Shape480.Appearance := Appearance481;
Text483 := TTextNode.Create;
Text483.SetText(['ArtDeco29']);
{ METHOD .FontStyle }
Text483.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape480.Geometry := Text483;
{ METHOD .FdChildren.Add }
Anchor479.FdChildren.Add(Shape480);
{ METHOD .FdChildren.Add }
Transform478.FdChildren.Add(Anchor479);
{ METHOD .FdChildren.Add }
Transform472.FdChildren.Add(Transform478);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform472);
Viewpoint485 := TViewpointNode.Create;
Viewpoint485.Description := 'ArtDeco30';
Viewpoint485.Position := Vector3(-3.75,-3.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint485);
Transform486 := TTransformNode.Create;
Transform486.Translation := Vector3(-3.75,-3.75,0);
Anchor487 := TAnchorNode.Create;
Anchor487.Description := 'ArtDeco30 view';
Anchor487.SetUrl(['#View30']);
Shape488 := TShapeNode.Create;
Appearance489 := TAppearanceNode.Create;
X3DPrototype490 := TX3DPrototypeNode.Create;
end;

procedure InitArtDecoExamplesPart33;
begin

{ METHOD .SetMaterial }
Appearance489.Material := X3DPrototype490;
{ METHOD .Appearance }
Shape488.Appearance := Appearance489;
{ METHOD .Geometry }
Shape488.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor487.FdChildren.Add(Shape488);
{ METHOD .FdChildren.Add }
Transform486.FdChildren.Add(Anchor487);
Transform492 := TTransformNode.Create;
Transform492.Translation := Vector3(0,0.3,0.5);
Anchor493 := TAnchorNode.Create;
Anchor493.Description := 'ArtDeco30 view source documentation';
Anchor493.SetParameter(['target=_source']);
Anchor493.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30']);
Shape494 := TShapeNode.Create;
Appearance495 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance495.Material := Material76;
{ METHOD .Appearance }
Shape494.Appearance := Appearance495;
Text497 := TTextNode.Create;
Text497.SetText(['ArtDeco30']);
{ METHOD .FontStyle }
Text497.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape494.Geometry := Text497;
{ METHOD .FdChildren.Add }
Anchor493.FdChildren.Add(Shape494);
{ METHOD .FdChildren.Add }
Transform492.FdChildren.Add(Anchor493);
{ METHOD .FdChildren.Add }
Transform486.FdChildren.Add(Transform492);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform486);
Viewpoint499 := TViewpointNode.Create;
Viewpoint499.Description := 'ArtDeco31';
Viewpoint499.Position := Vector3(-2.25,-3.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint499);
Transform500 := TTransformNode.Create;
Transform500.Translation := Vector3(-2.25,-3.75,0);
Anchor501 := TAnchorNode.Create;
Anchor501.Description := 'ArtDeco31 view';
Anchor501.SetUrl(['#View31']);
Shape502 := TShapeNode.Create;
Appearance503 := TAppearanceNode.Create;
X3DPrototype504 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance503.Material := X3DPrototype504;
{ METHOD .Appearance }
Shape502.Appearance := Appearance503;
{ METHOD .Geometry }
Shape502.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor501.FdChildren.Add(Shape502);
{ METHOD .FdChildren.Add }
Transform500.FdChildren.Add(Anchor501);
end;

procedure InitArtDecoExamplesPart34;
begin

Transform506 := TTransformNode.Create;
Transform506.Translation := Vector3(0,0.3,0.5);
Anchor507 := TAnchorNode.Create;
Anchor507.Description := 'ArtDeco31 view source documentation';
Anchor507.SetParameter(['target=_source']);
Anchor507.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31']);
Shape508 := TShapeNode.Create;
Appearance509 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance509.Material := Material76;
{ METHOD .Appearance }
Shape508.Appearance := Appearance509;
Text511 := TTextNode.Create;
Text511.SetText(['ArtDeco31']);
{ METHOD .FontStyle }
Text511.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape508.Geometry := Text511;
{ METHOD .FdChildren.Add }
Anchor507.FdChildren.Add(Shape508);
{ METHOD .FdChildren.Add }
Transform506.FdChildren.Add(Anchor507);
{ METHOD .FdChildren.Add }
Transform500.FdChildren.Add(Transform506);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform500);
Viewpoint513 := TViewpointNode.Create;
Viewpoint513.Description := 'ArtDeco32';
Viewpoint513.Position := Vector3(-0.75,-3.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint513);
Transform514 := TTransformNode.Create;
Transform514.Translation := Vector3(-0.75,-3.75,0);
Anchor515 := TAnchorNode.Create;
Anchor515.Description := 'ArtDeco32 view';
Anchor515.SetUrl(['#View32']);
Shape516 := TShapeNode.Create;
Appearance517 := TAppearanceNode.Create;
X3DPrototype518 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance517.Material := X3DPrototype518;
{ METHOD .Appearance }
Shape516.Appearance := Appearance517;
{ METHOD .Geometry }
Shape516.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor515.FdChildren.Add(Shape516);
{ METHOD .FdChildren.Add }
Transform514.FdChildren.Add(Anchor515);
Transform520 := TTransformNode.Create;
Transform520.Translation := Vector3(0,0.3,0.5);
Anchor521 := TAnchorNode.Create;
Anchor521.Description := 'ArtDeco32 view source documentation';
Anchor521.SetParameter(['target=_source']);
end;

procedure InitArtDecoExamplesPart35;
begin

Anchor521.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32']);
Shape522 := TShapeNode.Create;
Appearance523 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance523.Material := Material76;
{ METHOD .Appearance }
Shape522.Appearance := Appearance523;
Text525 := TTextNode.Create;
Text525.SetText(['ArtDeco32']);
{ METHOD .FontStyle }
Text525.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape522.Geometry := Text525;
{ METHOD .FdChildren.Add }
Anchor521.FdChildren.Add(Shape522);
{ METHOD .FdChildren.Add }
Transform520.FdChildren.Add(Anchor521);
{ METHOD .FdChildren.Add }
Transform514.FdChildren.Add(Transform520);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform514);
Viewpoint527 := TViewpointNode.Create;
Viewpoint527.Description := 'ArtDeco33';
Viewpoint527.Position := Vector3(0.75,-3.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint527);
Transform528 := TTransformNode.Create;
Transform528.Translation := Vector3(0.75,-3.75,0);
Anchor529 := TAnchorNode.Create;
Anchor529.Description := 'ArtDeco33 view';
Anchor529.SetUrl(['#View33']);
Shape530 := TShapeNode.Create;
Appearance531 := TAppearanceNode.Create;
X3DPrototype532 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance531.Material := X3DPrototype532;
{ METHOD .Appearance }
Shape530.Appearance := Appearance531;
{ METHOD .Geometry }
Shape530.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor529.FdChildren.Add(Shape530);
{ METHOD .FdChildren.Add }
Transform528.FdChildren.Add(Anchor529);
Transform534 := TTransformNode.Create;
Transform534.Translation := Vector3(0,0.3,0.5);
Anchor535 := TAnchorNode.Create;
Anchor535.Description := 'ArtDeco33 view source documentation';
Anchor535.SetParameter(['target=_source']);
Anchor535.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33']);
Shape536 := TShapeNode.Create;
Appearance537 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance537.Material := Material76;
{ METHOD .Appearance }
Shape536.Appearance := Appearance537;
end;

procedure InitArtDecoExamplesPart36;
begin

Text539 := TTextNode.Create;
Text539.SetText(['ArtDeco33']);
{ METHOD .FontStyle }
Text539.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape536.Geometry := Text539;
{ METHOD .FdChildren.Add }
Anchor535.FdChildren.Add(Shape536);
{ METHOD .FdChildren.Add }
Transform534.FdChildren.Add(Anchor535);
{ METHOD .FdChildren.Add }
Transform528.FdChildren.Add(Transform534);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform528);
Viewpoint541 := TViewpointNode.Create;
Viewpoint541.Description := 'ArtDeco34';
Viewpoint541.Position := Vector3(2.25,-3.75,3);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Viewpoint541);
Transform542 := TTransformNode.Create;
Transform542.Translation := Vector3(2.25,-3.75,0);
Anchor543 := TAnchorNode.Create;
Anchor543.Description := 'ArtDeco34 view';
Anchor543.SetUrl(['#View34']);
Shape544 := TShapeNode.Create;
Appearance545 := TAppearanceNode.Create;
X3DPrototype546 := TX3DPrototypeNode.Create;
{ METHOD .SetMaterial }
Appearance545.Material := X3DPrototype546;
{ METHOD .Appearance }
Shape544.Appearance := Appearance545;
{ METHOD .Geometry }
Shape544.Geometry := Sphere71;
{ METHOD .FdChildren.Add }
Anchor543.FdChildren.Add(Shape544);
{ METHOD .FdChildren.Add }
Transform542.FdChildren.Add(Anchor543);
Transform548 := TTransformNode.Create;
Transform548.Translation := Vector3(0,0.3,0.5);
Anchor549 := TAnchorNode.Create;
Anchor549.Description := 'ArtDeco34 view source documentation';
Anchor549.SetParameter(['target=_source']);
Anchor549.SetUrl(['../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34','https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34']);
Shape550 := TShapeNode.Create;
Appearance551 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance551.Material := Material76;
{ METHOD .Appearance }
Shape550.Appearance := Appearance551;
Text553 := TTextNode.Create;
Text553.SetText(['ArtDeco34']);
{ METHOD .FontStyle }
Text553.FontStyle := FontStyle78;
{ METHOD .Geometry }
Shape550.Geometry := Text553;
{ METHOD .FdChildren.Add }
Anchor549.FdChildren.Add(Shape550);
end;

procedure InitArtDecoExamplesPart37;
begin

{ METHOD .FdChildren.Add }
Transform548.FdChildren.Add(Anchor549);
{ METHOD .FdChildren.Add }
Transform542.FdChildren.Add(Transform548);
{ METHOD .FdChildren.Add }
Group50.FdChildren.Add(Transform542);
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Group50);
{ Original "Close_Time.EventFraction_changed TO Close_Mover.EventSet_fraction }
{ Sample Close_Time.EventFraction_changed TO Close_Mover.EventSet_fraction}
Group13.AddRoute(TimeSensor58.EventFraction_changed, PositionInterpolator57.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Close_Mover.EventValue_changed TO Close_travel.EventSet_translation }
{ Sample Close_Mover.EventValue_changed TO Close_travel.EventSet_translation}
Group13.AddRoute(PositionInterpolator57.EventValue_changed, Transform56.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group13]);
end;

function CreateArtDecoExamples: TX3DRootNode;
begin
InitArtDecoExamplesPart0;
InitArtDecoExamplesPart1;
InitArtDecoExamplesPart2;
InitArtDecoExamplesPart3;
InitArtDecoExamplesPart4;
InitArtDecoExamplesPart5;
InitArtDecoExamplesPart6;
InitArtDecoExamplesPart7;
InitArtDecoExamplesPart8;
InitArtDecoExamplesPart9;
InitArtDecoExamplesPart10;
InitArtDecoExamplesPart11;
InitArtDecoExamplesPart12;
InitArtDecoExamplesPart13;
InitArtDecoExamplesPart14;
InitArtDecoExamplesPart15;
InitArtDecoExamplesPart16;
InitArtDecoExamplesPart17;
InitArtDecoExamplesPart18;
InitArtDecoExamplesPart19;
InitArtDecoExamplesPart20;
InitArtDecoExamplesPart21;
InitArtDecoExamplesPart22;
InitArtDecoExamplesPart23;
InitArtDecoExamplesPart24;
InitArtDecoExamplesPart25;
InitArtDecoExamplesPart26;
InitArtDecoExamplesPart27;
InitArtDecoExamplesPart28;
InitArtDecoExamplesPart29;
InitArtDecoExamplesPart30;
InitArtDecoExamplesPart31;
InitArtDecoExamplesPart32;
InitArtDecoExamplesPart33;
InitArtDecoExamplesPart34;
InitArtDecoExamplesPart35;
InitArtDecoExamplesPart36;
InitArtDecoExamplesPart37;
Result := X3D0;
end;

begin
end.
