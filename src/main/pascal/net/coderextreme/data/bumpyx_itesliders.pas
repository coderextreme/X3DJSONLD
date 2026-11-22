unit bumpyx_itesliders;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createbumpyx_itesliders: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group16: TGroupNode;
LayerSet17: TLayerSetNode;
Layer18: TLayerNode;
NavigationInfo19: TNavigationInfoNode;
DirectionalLight20: TDirectionalLightNode;
DirectionalLight21: TDirectionalLightNode;
Viewpoint22: TViewpointNode;
Group23: TGroupNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Cylinder26: TCylinderNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
Cone31: TConeNode;
Appearance32: TAppearanceNode;
Material33: TMaterialNode;
Transform34: TTransformNode;
Shape35: TShapeNode;
Cylinder36: TCylinderNode;
Appearance37: TAppearanceNode;
Material38: TMaterialNode;
Transform39: TTransformNode;
Shape40: TShapeNode;
Cone41: TConeNode;
Appearance42: TAppearanceNode;
Material43: TMaterialNode;
Transform44: TTransformNode;
Shape45: TShapeNode;
Cylinder46: TCylinderNode;
Appearance47: TAppearanceNode;
Material48: TMaterialNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
Cone51: TConeNode;
Appearance52: TAppearanceNode;
Material53: TMaterialNode;
Transform54: TTransformNode;
Background55: TBackgroundNode;
Transform56: TTransformNode;
Shape57: TShapeNode;
IndexedFaceSet58: TIndexedFaceSetNode;
Coordinate59: TCoordinateNode;
Appearance60: TAppearanceNode;
Material61: TMaterialNode;
ComposedCubeMapTexture62: TComposedCubeMapTextureNode;
ImageTexture63: TImageTextureNode;
ImageTexture64: TImageTextureNode;
ImageTexture65: TImageTextureNode;
ImageTexture66: TImageTextureNode;
ImageTexture67: TImageTextureNode;
ImageTexture68: TImageTextureNode;
ComposedShader69: TComposedShaderNode;
SFVec3f70: TSFVec3f;
SFNode71: TSFNode;
ComposedCubeMapTexture72: TComposedCubeMapTextureNode;
SFFloat73: TSFFloat;
SFFloat74: TSFFloat;
SFFloat75: TSFFloat;
SFFloat76: TSFFloat;
SFFloat77: TSFFloat;
SFFloat78: TSFFloat;
SFFloat79: TSFFloat;
SFFloat80: TSFFloat;
SFFloat81: TSFFloat;
ShaderPart82: TShaderPartNode;
ShaderPart83: TShaderPartNode;
Script84: TScriptNode;
MFVec3f85: TMFVec3f;
MFInt3286: TMFInt32;
SFFloat87: TSFFloat;
SFFloat88: TSFFloat;
SFFloat89: TSFFloat;
SFFloat90: TSFFloat;
SFFloat91: TSFFloat;
SFFloat92: TSFFloat;
LayoutLayer95: TLayoutLayerNode;
Layout96: TLayoutNode;
Viewport97: TViewportNode;
Transform98: TTransformNode;
Shape99: TShapeNode;
Appearance100: TAppearanceNode;
Material101: TMaterialNode;
Box102: TBoxNode;
Transform103: TTransformNode;
Transform104: TTransformNode;
Shape105: TShapeNode;
Text106: TTextNode;
FontStyle107: TFontStyleNode;
Appearance108: TAppearanceNode;
Material109: TMaterialNode;
X3DPrototype110: TX3DPrototype;
X3DInterfaceDeclaration111: TX3DInterfaceDeclaration;
SFVec3f112: TSFVec3f;
SFVec3f113: TSFVec3f;
SFVec3f114: TSFVec3f;
MFString115: TMFString;
SFFloat116: TSFFloat;
SFString117: TSFString;
MFString118: TMFString;
SFNode119: TSFNode;
X3DPrototype120: TX3DPrototype;
Group121: TGroupNode;
Transform122: TTransformNode;
IS123: TIS;
connect124: Tconnect;
Transform125: TTransformNode;
IS126: TIS;
connect127: Tconnect;
PlaneSensor128: TPlaneSensorNode;
Transform129: TTransformNode;
TouchSensor130: TTouchSensorNode;
Transform131: TTransformNode;
Shape132: TShapeNode;
Text133: TTextNode;
IS134: TIS;
connect135: Tconnect;
FontStyle136: TFontStyleNode;
Appearance137: TAppearanceNode;
Material138: TMaterialNode;
Script139: TScriptNode;
SFFloat140: TSFFloat;
MFString141: TMFString;
SFString142: TSFString;
SFNode143: TSFNode;
SFVec3f144: TSFVec3f;
SFFloat145: TSFFloat;
MFString146: TMFString;
IS147: TIS;
connect148: Tconnect;
connect149: Tconnect;
connect150: Tconnect;
connect151: Tconnect;
X3DPrototype155: TX3DPrototypeNode;
SFVec3f156: TSFVec3f;
SFVec3f157: TSFVec3f;
SFVec3f158: TSFVec3f;
MFString159: TMFString;
SFFloat160: TSFFloat;
SFString161: TSFString;
MFString162: TMFString;
SFNode163: TSFNode;
ComposedShader164: TComposedShaderNode;
X3DPrototype165: TX3DPrototypeNode;
SFVec3f166: TSFVec3f;
SFVec3f167: TSFVec3f;
SFVec3f168: TSFVec3f;
MFString169: TMFString;
SFFloat170: TSFFloat;
SFString171: TSFString;
MFString172: TMFString;
SFNode173: TSFNode;
ComposedShader174: TComposedShaderNode;
X3DPrototype175: TX3DPrototypeNode;
SFVec3f176: TSFVec3f;
SFVec3f177: TSFVec3f;
SFVec3f178: TSFVec3f;
MFString179: TMFString;
SFFloat180: TSFFloat;
SFString181: TSFString;
MFString182: TMFString;
SFNode183: TSFNode;
ComposedShader184: TComposedShaderNode;
X3DPrototype185: TX3DPrototypeNode;
SFVec3f186: TSFVec3f;
SFVec3f187: TSFVec3f;
SFVec3f188: TSFVec3f;
MFString189: TMFString;
SFFloat190: TSFFloat;
SFString191: TSFString;
MFString192: TMFString;
SFNode193: TSFNode;
ComposedShader194: TComposedShaderNode;
X3DPrototype195: TX3DPrototypeNode;
SFVec3f196: TSFVec3f;
SFVec3f197: TSFVec3f;
SFVec3f198: TSFVec3f;
MFString199: TMFString;
SFFloat200: TSFFloat;
SFString201: TSFString;
MFString202: TMFString;
SFNode203: TSFNode;
ComposedShader204: TComposedShaderNode;
X3DPrototype205: TX3DPrototypeNode;
SFVec3f206: TSFVec3f;
SFVec3f207: TSFVec3f;
SFVec3f208: TSFVec3f;
MFString209: TMFString;
SFFloat210: TSFFloat;
SFString211: TSFString;
MFString212: TMFString;
SFNode213: TSFNode;
ComposedShader214: TComposedShaderNode;
Layer215: TLayerNode;
Viewpoint216: TViewpointNode;
Script217: TScriptNode;
Group218: TGroupNode;
Group219: TGroupNode;

procedure Initbumpyx_iteslidersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
{ <component name='DIS' level='2'></component> }
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Components['EnvironmentalEffects'] := 3;
{ METHOD .Component }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Components['CubeMapTexturing'] := 1;
{ METHOD .Component }
X3D0.Components['Texturing'] := 1;
{ METHOD .Component }
X3D0.Components['Rendering'] := 1;
{ METHOD .Component }
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'bumpyx_itesliders.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := '*Bumpy flower with prototype sliders*';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'PSPad, http://www.pspad.com/';
{ METHOD .Meta }
X3D0.Meta['license'] := 'license.html';
{ METHOD .Meta }
{ METHOD .Head }
{ "The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution, }
{ It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) }
{ open for their "discussion about the teapot" }
Group16 := TGroupNode.Create;
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet17 := TLayerSetNode.Create;
LayerSet17.ActiveLayer := 1;
LayerSet17.SetOrder([1,2,3]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
Layer18 := TLayerNode.Create;
Layer18.Pickable := True;
Layer18.SetObjectType(['ALL']);
{ basic nodes, which might be present in any scene }
NavigationInfo19 := TNavigationInfoNode.Create;
NavigationInfo19.SetType(['EXAMINE']);
NavigationInfo19.SetAvatarSize([0.25,1.75,0.75]);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(NavigationInfo19);
DirectionalLight20 := TDirectionalLightNode.Create;
DirectionalLight20.AmbientIntensity := 0.2;
DirectionalLight20.Direction := Vector3(0,-1,0);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(DirectionalLight20);
DirectionalLight21 := TDirectionalLightNode.Create;
DirectionalLight21.AmbientIntensity := 0.2;
DirectionalLight21.Direction := Vector3(-1,-0.1,-1);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(DirectionalLight21);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.Description := 'My Overview';
Viewpoint22.FieldOfView := 1.570796;
end;

procedure Initbumpyx_iteslidersPart1;
begin

Viewpoint22.Position := Vector3(0,1.75,60);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(Viewpoint22);
{ this group contains the red/green/blue 3D crosshair }
Group23 := TGroupNode.Create;
{ Arrow X }
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(25,0,0);
Transform24.Rotation := Vector4(0,0,-1,1.57);
Shape25 := TShapeNode.Create;
Cylinder26 := TCylinderNode.Create;
Cylinder26.Radius := 0.35;
Cylinder26.Height := 50;
{ METHOD .Geometry }
Shape25.Geometry := Cylinder26;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(1,0,0);
Material28.EmissiveColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance27.Material := Material28;
{ METHOD .Appearance }
Shape25.Appearance := Appearance27;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform24);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(50,0,0);
Transform29.Rotation := Vector4(0,0,-1,1.57);
Shape30 := TShapeNode.Create;
Cone31 := TConeNode.Create;
Cone31.BottomRadius := 0.8;
Cone31.Height := 3;
{ METHOD .Geometry }
Shape30.Geometry := Cone31;
Appearance32 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance32.Material := Material28;
{ METHOD .Appearance }
Shape30.Appearance := Appearance32;
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Shape30);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform29);
{ Arrow Y }
Transform34 := TTransformNode.Create;
Transform34.Translation := Vector3(0,25,0);
Shape35 := TShapeNode.Create;
{ METHOD .Geometry }
Shape35.Geometry := Cylinder26;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
Material38.DiffuseColor := Vector3(0,1,0);
Material38.EmissiveColor := Vector3(0,1,0);
end;

procedure Initbumpyx_iteslidersPart2;
begin

{ METHOD .SetMaterial }
Appearance37.Material := Material38;
{ METHOD .Appearance }
Shape35.Appearance := Appearance37;
{ METHOD .FdChildren.Add }
Transform34.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform34);
Transform39 := TTransformNode.Create;
Transform39.Translation := Vector3(0,50,0);
Shape40 := TShapeNode.Create;
{ METHOD .Geometry }
Shape40.Geometry := Cone31;
Appearance42 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance42.Material := Material38;
{ METHOD .Appearance }
Shape40.Appearance := Appearance42;
{ METHOD .FdChildren.Add }
Transform39.FdChildren.Add(Shape40);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform39);
{ Arrow Z }
Transform44 := TTransformNode.Create;
Transform44.Translation := Vector3(0,0,25);
Transform44.Rotation := Vector4(1,0,0,1.57);
Shape45 := TShapeNode.Create;
{ METHOD .Geometry }
Shape45.Geometry := Cylinder26;
Appearance47 := TAppearanceNode.Create;
Material48 := TMaterialNode.Create;
Material48.DiffuseColor := Vector3(0,0,1);
Material48.EmissiveColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance47.Material := Material48;
{ METHOD .Appearance }
Shape45.Appearance := Appearance47;
{ METHOD .FdChildren.Add }
Transform44.FdChildren.Add(Shape45);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform44);
Transform49 := TTransformNode.Create;
Transform49.Translation := Vector3(0,0,50);
Transform49.Rotation := Vector4(1,0,0,1.57);
Shape50 := TShapeNode.Create;
{ METHOD .Geometry }
Shape50.Geometry := Cone31;
Appearance52 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance52.Material := Material48;
{ METHOD .Appearance }
Shape50.Appearance := Appearance52;
{ METHOD .FdChildren.Add }
Transform49.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform49);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(Group23);
{ the model that is being reviewed by the users of this scene }
Transform54 := TTransformNode.Create;
{ <Inline DEF="Flower" url='"bumpyx_ite.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background55 := TBackgroundNode.Create;
Background55.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
end;

procedure Initbumpyx_iteslidersPart3;
begin

Background55.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background55.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background55.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background55.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background55.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Transform54.FdChildren.Add(Background55);
Transform56 := TTransformNode.Create;
Shape57 := TShapeNode.Create;
{ <Sphere radius='40'></Sphere> }
IndexedFaceSet58 := TIndexedFaceSetNode.Create;
IndexedFaceSet58.Convex := False;
Coordinate59 := TCoordinateNode.Create;
{ METHOD .Coord }
IndexedFaceSet58.Coord := Coordinate59;
{ METHOD .Geometry }
Shape57.Geometry := IndexedFaceSet58;
Appearance60 := TAppearanceNode.Create;
Material61 := TMaterialNode.Create;
Material61.DiffuseColor := Vector3(0.7,0.7,0.7);
Material61.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance60.Material := Material61;
ComposedCubeMapTexture62 := TComposedCubeMapTextureNode.Create;
ImageTexture63 := TImageTextureNode.Create;
ImageTexture63.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .SetBackTexture }
ComposedCubeMapTexture62.BackTexture := ImageTexture63;
ImageTexture64 := TImageTextureNode.Create;
ImageTexture64.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture62.BottomTexture := ImageTexture64;
ImageTexture65 := TImageTextureNode.Create;
ImageTexture65.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture62.FrontTexture := ImageTexture65;
ImageTexture66 := TImageTextureNode.Create;
ImageTexture66.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture62.LeftTexture := ImageTexture66;
ImageTexture67 := TImageTextureNode.Create;
ImageTexture67.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture62.RightTexture := ImageTexture67;
ImageTexture68 := TImageTextureNode.Create;
ImageTexture68.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture62.TopTexture := ImageTexture68;
{ METHOD .Texture }
Appearance60.Texture := ComposedCubeMapTexture62;
ComposedShader69 := TComposedShaderNode.Create;
ComposedShader69.Language := 'GLSL';
end;

procedure Initbumpyx_iteslidersPart4;
begin

SFVec3f70 := TSFVec3f.CreateUndefined(ComposedShader69, false, 'chromaticDispertion');
SFVec3f70.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader69.AddSFVec3f([SFVec3f70]);
SFNode71 := TSFNode.CreateUndefined(ComposedShader69, false, 'cube');
{ METHOD .AddComposedCubeMapTexture }
SFNode71.AddComposedCubeMapTexture([ComposedCubeMapTexture62]);
{ METHOD .AddSFNode }
ComposedShader69.AddSFNode([SFNode71]);
SFFloat73 := TSFFloat.CreateUndefined(ComposedShader69, false, 'bias');
SFFloat73.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat73]);
SFFloat74 := TSFFloat.CreateUndefined(ComposedShader69, false, 'scale');
SFFloat74.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat74]);
SFFloat75 := TSFFloat.CreateUndefined(ComposedShader69, false, 'power');
SFFloat75.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat75]);
SFFloat76 := TSFFloat.CreateUndefined(ComposedShader69, false, 'a');
SFFloat76.Value := '15';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat76]);
SFFloat77 := TSFFloat.CreateUndefined(ComposedShader69, false, 'b');
SFFloat77.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat77]);
SFFloat78 := TSFFloat.CreateUndefined(ComposedShader69, false, 'c');
SFFloat78.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat78]);
SFFloat79 := TSFFloat.CreateUndefined(ComposedShader69, false, 'd');
SFFloat79.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat79]);
SFFloat80 := TSFFloat.CreateUndefined(ComposedShader69, false, 'tdelta');
SFFloat80.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat80]);
SFFloat81 := TSFFloat.CreateUndefined(ComposedShader69, false, 'pdelta');
SFFloat81.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat81]);
ShaderPart82 := TShaderPartNode.Create;
ShaderPart82.SetUrl(['../shaders/x_ite_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart82.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader69.Parts := ShaderPart82;
ShaderPart83 := TShaderPartNode.Create;
ShaderPart83.SetUrl(['../shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart83.FdType.Value := 'FRAGMENT';
end;

procedure Initbumpyx_iteslidersPart5;
begin

{ METHOD .Parts }
ComposedShader69.Parts := ShaderPart83;
{ TO CONVERT TO A SPHERE }
{ <ShaderPart url='"../shaders/x_ite.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"' type="VERTEX" containerField='parts'></ShaderPart> }
{ <ShaderPart url='"../shaders/x_itebubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs"' containerField='parts' type='FRAGMENT'></ShaderPart> }
{ METHOD .AddChildren }
Appearance60.AddChildren([ComposedShader69]);
{ METHOD .Appearance }
Shape57.Appearance := Appearance60;
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
Transform54.FdChildren.Add(Transform56);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(Transform54);
Script84 := TScriptNode.Create;
MFVec3f85 := TMFVec3f.CreateUndefined(Script84, false, 'coordinates');
{ METHOD .Fd.AddCustomField }
Script84.AddCustomField(MFVec3f85);
MFInt3286 := TMFInt32.CreateUndefined(Script84, false, 'coordIndexes');
{ METHOD .Fd.AddCustomField }
Script84.AddCustomField(MFInt3286);
SFFloat87 := TSFFloat.CreateUndefined(Script84, false, 'a');
SFFloat87.Value := '10';
{ METHOD .Fd.AddCustomField }
Script84.AddCustomField(SFFloat87);
SFFloat88 := TSFFloat.CreateUndefined(Script84, false, 'b');
SFFloat88.Value := '10';
{ METHOD .Fd.AddCustomField }
Script84.AddCustomField(SFFloat88);
SFFloat89 := TSFFloat.CreateUndefined(Script84, false, 'c');
SFFloat89.Value := '2';
{ METHOD .Fd.AddCustomField }
Script84.AddCustomField(SFFloat89);
SFFloat90 := TSFFloat.CreateUndefined(Script84, false, 'd');
SFFloat90.Value := '2';
{ METHOD .Fd.AddCustomField }
Script84.AddCustomField(SFFloat90);
SFFloat91 := TSFFloat.CreateUndefined(Script84, false, 'pdelta');
SFFloat91.Value := '0';
{ METHOD .Fd.AddCustomField }
Script84.AddCustomField(SFFloat91);
SFFloat92 := TSFFloat.CreateUndefined(Script84, false, 'tdelta');
SFFloat92.Value := '0';
{ METHOD .Fd.AddCustomField }
Script84.AddCustomField(SFFloat92);

Script84.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 300;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"}''');
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(Script84);
{ Original "OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex }
{ Sample OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex}
Layer18.AddRoute(OrbitScript.[object Object], IndexedFaceSet58.set_EventSet_coordIndex);
{ METHOD .AddX3DROUTE }
{ Original "OrbitScript.coordinates TO OrbitCoordinates.EventSet_point }
{ Sample OrbitScript.coordinates TO OrbitCoordinates.EventSet_point}
Layer18.AddRoute(OrbitScript.[object Object], Coordinate59.set_EventSet_point);
{ METHOD .AddX3DROUTE }
{ METHOD .FdLayers.Add }
LayerSet17.FdLayers.Add(Layer18);
LayoutLayer95 := TLayoutLayerNode.Create;
LayoutLayer95.Pickable := True;
LayoutLayer95.SetObjectType(['ALL']);
Layout96 := TLayoutNode.Create;
Layout96.SetAlign(['LEFT','BOTTOM']);
Layout96.SetOffset([-0.2,0.19]);
Layout96.SetSize([0.4,0.6]);
{ METHOD .SetLayout }
LayoutLayer95.Layout := Layout96;
Viewport97 := TViewportNode.Create;
Viewport97.SetClipBoundary([0,1,0,1]);
{ METHOD .Viewport }
LayoutLayer95.Viewport := Viewport97;
Transform98 := TTransformNode.Create;
Transform98.Translation := Vector3(0,0,-3);
Shape99 := TShapeNode.Create;
Appearance100 := TAppearanceNode.Create;
Material101 := TMaterialNode.Create;
Material101.DiffuseColor := Vector3(0,0,0);
Material101.Transparency := 0.7;
{ METHOD .SetMaterial }
Appearance100.Material := Material101;
{ METHOD .Appearance }
Shape99.Appearance := Appearance100;
Box102 := TBoxNode.Create;
Box102.Size := Vector3(100,100,0.02);
{ METHOD .Geometry }
Shape99.Geometry := Box102;
{ METHOD .FdChildren.Add }
Transform98.FdChildren.Add(Shape99);
{ METHOD .FdChildren.Add }
LayoutLayer95.FdChildren.Add(Transform98);
Transform103 := TTransformNode.Create;
Transform104 := TTransformNode.Create;
Transform104.Translation := Vector3(0,0,-20);
Shape105 := TShapeNode.Create;
Text106 := TTextNode.Create;
Text106.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle107 := TFontStyleNode.Create;
FontStyle107.Size := 0.09;
{ METHOD .FontStyle }
Text106.FontStyle := FontStyle107;
{ METHOD .Geometry }
Shape105.Geometry := Text106;
Appearance108 := TAppearanceNode.Create;
Material109 := TMaterialNode.Create;
Material109.DiffuseColor := Vector3(1,1,0);
{ METHOD .SetMaterial }
Appearance108.Material := Material109;
{ METHOD .Appearance }
Shape105.Appearance := Appearance108;
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Shape105);
{ METHOD .FdChildren.Add }
Transform103.FdChildren.Add(Transform104);
{ METHOD .FdChildren.Add }
LayoutLayer95.FdChildren.Add(Transform103);
X3DPrototype110 := TX3DPrototype.Create;
X3DInterfaceDeclaration111 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f112 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration111, false, 'sliderTranslation');
SFVec3f112.Value := '0 0.7 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration111.AddSFVec3f([SFVec3f112]);
SFVec3f113 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration111, false, 'transformTranslation');
SFVec3f113.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration111.AddSFVec3f([SFVec3f113]);
SFVec3f114 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration111, false, 'sensorTranslation');
SFVec3f114.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration111.AddSFVec3f([SFVec3f114]);
MFString115 := TMFString.CreateUndefined(X3DInterfaceDeclaration111, false, 'textString');
MFString115.Value := '\"a=\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration111.AddMFString([MFString115]);
SFFloat116 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration111, false, 'parameterScale');
SFFloat116.Value := '30';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration111.AddSFFloat([SFFloat116]);
SFString117 := TSFString.CreateUndefined(X3DInterfaceDeclaration111, false, 'parameterName');
SFString117.Value := 'a';
{ METHOD .AddSFString }
X3DInterfaceDeclaration111.AddSFString([SFString117]);
MFString118 := TMFString.CreateUndefined(X3DInterfaceDeclaration111, false, 'petNames');
{ METHOD .AddMFString }
X3DInterfaceDeclaration111.AddMFString([MFString118]);
SFNode119 := TSFNode.CreateUndefined(X3DInterfaceDeclaration111, false, 'shaderNode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration111.AddSFNode([SFNode119]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype110.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration111]);
X3DPrototype120 := TX3DPrototype.Create;
Group121 := TGroupNode.Create;
Transform122 := TTransformNode.Create;
Transform122.Translation := Vector3(0,0.7,0);
IS123 := TIS.Create;
connect124 := Tconnect.Create;
connect124.NodeField := 'translation';
connect124.ProtoField := 'sliderTranslation';
{ METHOD .Connect }
IS123.Connect := connect124;
{ METHOD .IS }
Transform122.IS := IS123;
Transform125 := TTransformNode.Create;
Transform125.Translation := Vector3(0,0,0.1);
IS126 := TIS.Create;
connect127 := Tconnect.Create;
connect127.NodeField := 'translation';
connect127.ProtoField := 'sensorTranslation';
{ METHOD .Connect }
IS126.Connect := connect127;
{ METHOD .IS }
Transform125.IS := IS126;
PlaneSensor128 := TPlaneSensorNode.Create;
PlaneSensor128.Description := 'Grab with mouse to adjust slider';
PlaneSensor128.MaxPosition := Vector2(1,0);
{ METHOD .FdChildren.Add }
Transform125.FdChildren.Add(PlaneSensor128);
Transform129 := TTransformNode.Create;
Transform129.Translation := Vector3(0,0,0);
TouchSensor130 := TTouchSensorNode.Create;
{ METHOD .FdChildren.Add }
Transform129.FdChildren.Add(TouchSensor130);
{ METHOD .FdChildren.Add }
Transform125.FdChildren.Add(Transform129);
Transform131 := TTransformNode.Create;
Shape132 := TShapeNode.Create;
Text133 := TTextNode.Create;
Text133.SetText(['a=']);
IS134 := TIS.Create;
connect135 := Tconnect.Create;
connect135.NodeField := 'string';
connect135.ProtoField := 'textString';
{ METHOD .Connect }
IS134.Connect := connect135;
{ METHOD .IS }
Text133.IS := IS134;
FontStyle136 := TFontStyleNode.Create;
FontStyle136.Size := 0.23;
{ METHOD .FontStyle }
Text133.FontStyle := FontStyle136;
{ METHOD .Geometry }
Shape132.Geometry := Text133;
Appearance137 := TAppearanceNode.Create;
Material138 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance137.Material := Material138;
{ METHOD .Appearance }
Shape132.Appearance := Appearance137;
{ METHOD .FdChildren.Add }
Transform131.FdChildren.Add(Shape132);
{ METHOD .FdChildren.Add }
Transform125.FdChildren.Add(Transform131);
{ METHOD .FdChildren.Add }
Transform122.FdChildren.Add(Transform125);
{ METHOD .FdChildren.Add }
Group121.FdChildren.Add(Transform122);
Script139 := TScriptNode.Create;
Script139.SetUrl(['../javascripts/X3DUser.js','https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js']);
Script139.DirectOutput := True;
Script139.MustEvaluate := True;
SFFloat140 := TSFFloat.CreateUndefined(Script139, false, 'protoScale');
{ METHOD .Fd.AddCustomField }
Script139.AddCustomField(SFFloat140);
MFString141 := TMFString.CreateUndefined(Script139, false, 'petNames');
{ METHOD .Fd.AddCustomField }
Script139.AddCustomField(MFString141);
SFString142 := TSFString.CreateUndefined(Script139, false, 'protoParameterName');
{ METHOD .Fd.AddCustomField }
Script139.AddCustomField(SFString142);
SFNode143 := TSFNode.CreateUndefined(Script139, false, 'shader');
{ METHOD .Fd.AddCustomField }
Script139.AddCustomField(SFNode143);
SFVec3f144 := TSFVec3f.CreateUndefined(Script139, false, 'newTranslation');
SFVec3f144.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script139.AddCustomField(SFVec3f144);
SFFloat145 := TSFFloat.CreateUndefined(Script139, false, 'protoValue_changed');
SFFloat145.Value := '1';
{ METHOD .Fd.AddCustomField }
Script139.AddCustomField(SFFloat145);
MFString146 := TMFString.CreateUndefined(Script139, false, 'protoText_changed');
MFString146.Value := '\"1.0\"';
{ METHOD .Fd.AddCustomField }
Script139.AddCustomField(MFString146);
IS147 := TIS.Create;
connect148 := Tconnect.Create;
connect148.NodeField := 'protoScale';
connect148.ProtoField := 'parameterScale';
{ METHOD .Connect }
IS147.Connect := connect148;
connect149 := Tconnect.Create;
connect149.NodeField := 'petNames';
connect149.ProtoField := 'petNames';
{ METHOD .Connect }
IS147.Connect := connect149;
connect150 := Tconnect.Create;
connect150.NodeField := 'protoParameterName';
connect150.ProtoField := 'parameterName';
{ METHOD .Connect }
IS147.Connect := connect150;
connect151 := Tconnect.Create;
connect151.NodeField := 'shader';
connect151.ProtoField := 'shaderNode';
{ METHOD .Connect }
IS147.Connect := connect151;
{ METHOD .Fd.AddCustomField }
Script139.AddCustomField(IS147);
{ METHOD .FdChildren.Add }
Group121.FdChildren.Add(Script139);
{ Original "protoSensor.EventTranslation_changed TO protoTransform.EventSet_translation }
{ Sample protoSensor.EventTranslation_changed TO protoTransform.EventSet_translation}
Group121.AddRoute(PlaneSensor128.EventTranslation_changed, Transform125.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation }
{ Sample protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation}
Group121.AddRoute(PlaneSensor128.EventTranslation_changed, SFVec3f144);
{ METHOD .AddX3DROUTE }
{ Original "protoValueTransformerScript.EventProtoText_changed TO protoText.string }
{ Sample protoValueTransformerScript.EventProtoText_changed TO protoText.string}
Group121.AddRoute(Script139.EventProtoText_changed, Text133.set_string);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype120.AddChildren([Group121]);
{ METHOD .AddX3DPrototype }
X3DPrototype110.AddX3DPrototype([X3DPrototype120]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype110]);
X3DPrototype155 := TX3DPrototypeNode.Create;
SFVec3f156 := TSFVec3f.CreateUndefined(X3DPrototype155, false, 'sliderTranslation');
SFVec3f156.Value := '0 0.7 0';
{ METHOD .AddSFVec3f }
X3DPrototype155.AddSFVec3f([SFVec3f156]);
SFVec3f157 := TSFVec3f.CreateUndefined(X3DPrototype155, false, 'transformTranslation');
SFVec3f157.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype155.AddSFVec3f([SFVec3f157]);
SFVec3f158 := TSFVec3f.CreateUndefined(X3DPrototype155, false, 'sensorTranslation');
SFVec3f158.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype155.AddSFVec3f([SFVec3f158]);
MFString159 := TMFString.CreateUndefined(X3DPrototype155, false, 'textString');
MFString159.Value := '\"a=\"';
{ METHOD .AddMFString }
X3DPrototype155.AddMFString([MFString159]);
SFFloat160 := TSFFloat.CreateUndefined(X3DPrototype155, false, 'parameterScale');
SFFloat160.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype155.AddSFFloat([SFFloat160]);
SFString161 := TSFString.CreateUndefined(X3DPrototype155, false, 'parameterName');
SFString161.Value := 'a';
{ METHOD .AddSFString }
X3DPrototype155.AddSFString([SFString161]);
MFString162 := TMFString.CreateUndefined(X3DPrototype155, false, 'petNames');
MFString162.Value := '\"yottzumm\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype155.AddMFString([MFString162]);
SFNode163 := TSFNode.CreateUndefined(X3DPrototype155, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode163.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype155.AddSFNode([SFNode163]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype155]);
X3DPrototype165 := TX3DPrototypeNode.Create;
SFVec3f166 := TSFVec3f.CreateUndefined(X3DPrototype165, false, 'sliderTranslation');
SFVec3f166.Value := '0 0.4 0';
{ METHOD .AddSFVec3f }
X3DPrototype165.AddSFVec3f([SFVec3f166]);
SFVec3f167 := TSFVec3f.CreateUndefined(X3DPrototype165, false, 'transformTranslation');
SFVec3f167.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype165.AddSFVec3f([SFVec3f167]);
SFVec3f168 := TSFVec3f.CreateUndefined(X3DPrototype165, false, 'sensorTranslation');
SFVec3f168.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype165.AddSFVec3f([SFVec3f168]);
MFString169 := TMFString.CreateUndefined(X3DPrototype165, false, 'textString');
MFString169.Value := '\"b=\"';
{ METHOD .AddMFString }
X3DPrototype165.AddMFString([MFString169]);
SFFloat170 := TSFFloat.CreateUndefined(X3DPrototype165, false, 'parameterScale');
SFFloat170.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype165.AddSFFloat([SFFloat170]);
SFString171 := TSFString.CreateUndefined(X3DPrototype165, false, 'parameterName');
SFString171.Value := 'b';
{ METHOD .AddSFString }
X3DPrototype165.AddSFString([SFString171]);
MFString172 := TMFString.CreateUndefined(X3DPrototype165, false, 'petNames');
MFString172.Value := '\"yottzumm\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype165.AddMFString([MFString172]);
SFNode173 := TSFNode.CreateUndefined(X3DPrototype165, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode173.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype165.AddSFNode([SFNode173]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype165]);
X3DPrototype175 := TX3DPrototypeNode.Create;
SFVec3f176 := TSFVec3f.CreateUndefined(X3DPrototype175, false, 'sliderTranslation');
SFVec3f176.Value := '0 0.1 0';
{ METHOD .AddSFVec3f }
X3DPrototype175.AddSFVec3f([SFVec3f176]);
SFVec3f177 := TSFVec3f.CreateUndefined(X3DPrototype175, false, 'transformTranslation');
SFVec3f177.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype175.AddSFVec3f([SFVec3f177]);
SFVec3f178 := TSFVec3f.CreateUndefined(X3DPrototype175, false, 'sensorTranslation');
SFVec3f178.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype175.AddSFVec3f([SFVec3f178]);
MFString179 := TMFString.CreateUndefined(X3DPrototype175, false, 'textString');
MFString179.Value := '\"c=\"';
{ METHOD .AddMFString }
X3DPrototype175.AddMFString([MFString179]);
SFFloat180 := TSFFloat.CreateUndefined(X3DPrototype175, false, 'parameterScale');
SFFloat180.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype175.AddSFFloat([SFFloat180]);
SFString181 := TSFString.CreateUndefined(X3DPrototype175, false, 'parameterName');
SFString181.Value := 'c';
{ METHOD .AddSFString }
X3DPrototype175.AddSFString([SFString181]);
MFString182 := TMFString.CreateUndefined(X3DPrototype175, false, 'petNames');
MFString182.Value := '\"yottzumm\" \"yottzumm2\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype175.AddMFString([MFString182]);
SFNode183 := TSFNode.CreateUndefined(X3DPrototype175, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode183.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype175.AddSFNode([SFNode183]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype175]);
X3DPrototype185 := TX3DPrototypeNode.Create;
SFVec3f186 := TSFVec3f.CreateUndefined(X3DPrototype185, false, 'sliderTranslation');
SFVec3f186.Value := '0 -0.2 0';
{ METHOD .AddSFVec3f }
X3DPrototype185.AddSFVec3f([SFVec3f186]);
SFVec3f187 := TSFVec3f.CreateUndefined(X3DPrototype185, false, 'transformTranslation');
SFVec3f187.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype185.AddSFVec3f([SFVec3f187]);
SFVec3f188 := TSFVec3f.CreateUndefined(X3DPrototype185, false, 'sensorTranslation');
SFVec3f188.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype185.AddSFVec3f([SFVec3f188]);
MFString189 := TMFString.CreateUndefined(X3DPrototype185, false, 'textString');
MFString189.Value := '\"d=\"';
{ METHOD .AddMFString }
X3DPrototype185.AddMFString([MFString189]);
SFFloat190 := TSFFloat.CreateUndefined(X3DPrototype185, false, 'parameterScale');
SFFloat190.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype185.AddSFFloat([SFFloat190]);
SFString191 := TSFString.CreateUndefined(X3DPrototype185, false, 'parameterName');
SFString191.Value := 'd';
{ METHOD .AddSFString }
X3DPrototype185.AddSFString([SFString191]);
MFString192 := TMFString.CreateUndefined(X3DPrototype185, false, 'petNames');
MFString192.Value := '\"yottzumm\" \"yottzumm2\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype185.AddMFString([MFString192]);
SFNode193 := TSFNode.CreateUndefined(X3DPrototype185, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode193.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype185.AddSFNode([SFNode193]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype185]);
X3DPrototype195 := TX3DPrototypeNode.Create;
SFVec3f196 := TSFVec3f.CreateUndefined(X3DPrototype195, false, 'sliderTranslation');
SFVec3f196.Value := '0 -0.5 0';
{ METHOD .AddSFVec3f }
X3DPrototype195.AddSFVec3f([SFVec3f196]);
SFVec3f197 := TSFVec3f.CreateUndefined(X3DPrototype195, false, 'transformTranslation');
SFVec3f197.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype195.AddSFVec3f([SFVec3f197]);
SFVec3f198 := TSFVec3f.CreateUndefined(X3DPrototype195, false, 'sensorTranslation');
SFVec3f198.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype195.AddSFVec3f([SFVec3f198]);
MFString199 := TMFString.CreateUndefined(X3DPrototype195, false, 'textString');
MFString199.Value := '\"tdelta=\"';
{ METHOD .AddMFString }
X3DPrototype195.AddMFString([MFString199]);
SFFloat200 := TSFFloat.CreateUndefined(X3DPrototype195, false, 'parameterScale');
SFFloat200.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype195.AddSFFloat([SFFloat200]);
SFString201 := TSFString.CreateUndefined(X3DPrototype195, false, 'parameterName');
SFString201.Value := 'tdelta';
{ METHOD .AddSFString }
X3DPrototype195.AddSFString([SFString201]);
MFString202 := TMFString.CreateUndefined(X3DPrototype195, false, 'petNames');
MFString202.Value := '\"yottzumm2\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype195.AddMFString([MFString202]);
SFNode203 := TSFNode.CreateUndefined(X3DPrototype195, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode203.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype195.AddSFNode([SFNode203]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype195]);
X3DPrototype205 := TX3DPrototypeNode.Create;
SFVec3f206 := TSFVec3f.CreateUndefined(X3DPrototype205, false, 'sliderTranslation');
SFVec3f206.Value := '0 -0.8 0';
{ METHOD .AddSFVec3f }
X3DPrototype205.AddSFVec3f([SFVec3f206]);
SFVec3f207 := TSFVec3f.CreateUndefined(X3DPrototype205, false, 'transformTranslation');
SFVec3f207.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype205.AddSFVec3f([SFVec3f207]);
SFVec3f208 := TSFVec3f.CreateUndefined(X3DPrototype205, false, 'sensorTranslation');
SFVec3f208.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype205.AddSFVec3f([SFVec3f208]);
MFString209 := TMFString.CreateUndefined(X3DPrototype205, false, 'textString');
MFString209.Value := '\"pdelta=\"';
{ METHOD .AddMFString }
X3DPrototype205.AddMFString([MFString209]);
SFFloat210 := TSFFloat.CreateUndefined(X3DPrototype205, false, 'parameterScale');
SFFloat210.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype205.AddSFFloat([SFFloat210]);
SFString211 := TSFString.CreateUndefined(X3DPrototype205, false, 'parameterName');
SFString211.Value := 'pdelta';
{ METHOD .AddSFString }
X3DPrototype205.AddSFString([SFString211]);
MFString212 := TMFString.CreateUndefined(X3DPrototype205, false, 'petNames');
MFString212.Value := '\"yottzumm2\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype205.AddMFString([MFString212]);
SFNode213 := TSFNode.CreateUndefined(X3DPrototype205, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode213.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype205.AddSFNode([SFNode213]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype205]);
{ METHOD .FdLayers.Add }
LayerSet17.FdLayers.Add(LayoutLayer95);
Layer215 := TLayerNode.Create;
Layer215.Pickable := True;
Layer215.SetObjectType(['ALL']);
Viewpoint216 := TViewpointNode.Create;
Viewpoint216.Description := 'My Humanoids';
Viewpoint216.FieldOfView := 1.570796;
Viewpoint216.Position := Vector3(0,1.75,80);
{ METHOD .FdChildren.Add }
Layer215.FdChildren.Add(Viewpoint216);
Script217 := TScriptNode.Create;
Script217.SetUrl(['../javascripts/X3DAvatar.js','https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js']);
Script217.DirectOutput := True;
Script217.MustEvaluate := True;
{ METHOD .FdChildren.Add }
Layer215.FdChildren.Add(Script217);
Group218 := TGroupNode.Create;
Group219 := TGroupNode.Create;
{ METHOD .FdChildren.Add }
Group218.FdChildren.Add(Group219);
{ METHOD .FdChildren.Add }
Layer215.FdChildren.Add(Group218);
{ METHOD .FdLayers.Add }
LayerSet17.FdLayers.Add(Layer215);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(LayerSet17);
{ METHOD .AddGroup }
X3D0.AddChildren([Group16]);
end;

function Createbumpyx_itesliders: TX3DRootNode;
begin
Initbumpyx_iteslidersPart0;
Initbumpyx_iteslidersPart1;
Initbumpyx_iteslidersPart2;
Initbumpyx_iteslidersPart3;
Initbumpyx_iteslidersPart4;
Initbumpyx_iteslidersPart5;
Result := X3D0;
end;

begin
end.
