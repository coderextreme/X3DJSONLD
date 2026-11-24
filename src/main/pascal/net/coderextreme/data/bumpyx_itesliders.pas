unit bumpyx_itesliders;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
Transform124: TTransformNode;
PlaneSensor126: TPlaneSensorNode;
Transform127: TTransformNode;
TouchSensor128: TTouchSensorNode;
Transform129: TTransformNode;
Shape130: TShapeNode;
Text131: TTextNode;
FontStyle133: TFontStyleNode;
Appearance134: TAppearanceNode;
Material135: TMaterialNode;
Script136: TScriptNode;
SFFloat137: TSFFloat;
MFString138: TMFString;
SFString139: TSFString;
SFNode140: TSFNode;
SFVec3f141: TSFVec3f;
SFFloat142: TSFFloat;
MFString143: TMFString;
X3DPrototype148: TX3DPrototypeNode;
SFVec3f149: TSFVec3f;
SFVec3f150: TSFVec3f;
SFVec3f151: TSFVec3f;
MFString152: TMFString;
SFFloat153: TSFFloat;
SFString154: TSFString;
MFString155: TMFString;
SFNode156: TSFNode;
ComposedShader157: TComposedShaderNode;
X3DPrototype158: TX3DPrototypeNode;
SFVec3f159: TSFVec3f;
SFVec3f160: TSFVec3f;
SFVec3f161: TSFVec3f;
MFString162: TMFString;
SFFloat163: TSFFloat;
SFString164: TSFString;
MFString165: TMFString;
SFNode166: TSFNode;
ComposedShader167: TComposedShaderNode;
X3DPrototype168: TX3DPrototypeNode;
SFVec3f169: TSFVec3f;
SFVec3f170: TSFVec3f;
SFVec3f171: TSFVec3f;
MFString172: TMFString;
SFFloat173: TSFFloat;
SFString174: TSFString;
MFString175: TMFString;
SFNode176: TSFNode;
ComposedShader177: TComposedShaderNode;
X3DPrototype178: TX3DPrototypeNode;
SFVec3f179: TSFVec3f;
SFVec3f180: TSFVec3f;
SFVec3f181: TSFVec3f;
MFString182: TMFString;
SFFloat183: TSFFloat;
SFString184: TSFString;
MFString185: TMFString;
SFNode186: TSFNode;
ComposedShader187: TComposedShaderNode;
X3DPrototype188: TX3DPrototypeNode;
SFVec3f189: TSFVec3f;
SFVec3f190: TSFVec3f;
SFVec3f191: TSFVec3f;
MFString192: TMFString;
SFFloat193: TSFFloat;
SFString194: TSFString;
MFString195: TMFString;
SFNode196: TSFNode;
ComposedShader197: TComposedShaderNode;
X3DPrototype198: TX3DPrototypeNode;
SFVec3f199: TSFVec3f;
SFVec3f200: TSFVec3f;
SFVec3f201: TSFVec3f;
MFString202: TMFString;
SFFloat203: TSFFloat;
SFString204: TSFString;
MFString205: TMFString;
SFNode206: TSFNode;
ComposedShader207: TComposedShaderNode;
Layer208: TLayerNode;
Viewpoint209: TViewpointNode;
Script210: TScriptNode;
Group211: TGroupNode;
Group212: TGroupNode;

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
Group16 := TGroupNode.Create;;
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet17 := TLayerSetNode.Create;;
LayerSet17.ActiveLayer := 1;
LayerSet17.SetOrder([1,2,3]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
Layer18 := TLayerNode.Create;;
Layer18.Pickable := True;
Layer18.SetObjectType(['ALL']);
{ basic nodes, which might be present in any scene }
NavigationInfo19 := TNavigationInfoNode.Create;;
NavigationInfo19.SetType(['EXAMINE']);
NavigationInfo19.SetAvatarSize([0.25,1.75,0.75]);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(NavigationInfo19);
DirectionalLight20 := TDirectionalLightNode.Create;;
DirectionalLight20.AmbientIntensity := 0.2;
DirectionalLight20.Direction := Vector3(0,-1,0);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(DirectionalLight20);
DirectionalLight21 := TDirectionalLightNode.Create;;
end;

procedure Initbumpyx_iteslidersPart1;
begin

DirectionalLight21.AmbientIntensity := 0.2;
DirectionalLight21.Direction := Vector3(-1,-0.1,-1);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(DirectionalLight21);
Viewpoint22 := TViewpointNode.Create;;
Viewpoint22.Description := 'My Overview';
Viewpoint22.FieldOfView := 1.570796;
Viewpoint22.Position := Vector3(0,1.75,60);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(Viewpoint22);
{ this group contains the red/green/blue 3D crosshair }
Group23 := TGroupNode.Create;;
{ Arrow X }
Transform24 := TTransformNode.Create;;
Transform24.Translation := Vector3(25,0,0);
Transform24.Rotation := Vector4(0,0,-1,1.57);
Shape25 := TShapeNode.Create;;
Cylinder26 := TCylinderNode.Create;;
Cylinder26.Radius := 0.35;
Cylinder26.Height := 50;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape25.Geometry := Cylinder26;
Appearance27 := TAppearanceNode.Create;;
Material28 := TMaterialNode.Create;;
Material28.DiffuseColor := Vector3(1,0,0);
Material28.EmissiveColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance27.Material := Material28;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape25.Appearance := Appearance27;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform24);
Transform29 := TTransformNode.Create;;
Transform29.Translation := Vector3(50,0,0);
Transform29.Rotation := Vector4(0,0,-1,1.57);
Shape30 := TShapeNode.Create;;
Cone31 := TConeNode.Create;;
end;

procedure Initbumpyx_iteslidersPart2;
begin

Cone31.BottomRadius := 0.8;
Cone31.Height := 3;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape30.Geometry := Cone31;
Appearance32 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance32.Material := Material28;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape30.Appearance := Appearance32;
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Shape30);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform29);
{ Arrow Y }
Transform34 := TTransformNode.Create;;
Transform34.Translation := Vector3(0,25,0);
Shape35 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape35.Geometry := Cylinder26;
Appearance37 := TAppearanceNode.Create;;
Material38 := TMaterialNode.Create;;
Material38.DiffuseColor := Vector3(0,1,0);
Material38.EmissiveColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance37.Material := Material38;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape35.Appearance := Appearance37;
{ METHOD .FdChildren.Add }
Transform34.FdChildren.Add(Shape35);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform34);
Transform39 := TTransformNode.Create;;
Transform39.Translation := Vector3(0,50,0);
Shape40 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape40.Geometry := Cone31;
Appearance42 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance42.Material := Material38;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape40.Appearance := Appearance42;
{ METHOD .FdChildren.Add }
Transform39.FdChildren.Add(Shape40);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform39);
{ Arrow Z }
Transform44 := TTransformNode.Create;;
Transform44.Translation := Vector3(0,0,25);
end;

procedure Initbumpyx_iteslidersPart3;
begin

Transform44.Rotation := Vector4(1,0,0,1.57);
Shape45 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape45.Geometry := Cylinder26;
Appearance47 := TAppearanceNode.Create;;
Material48 := TMaterialNode.Create;;
Material48.DiffuseColor := Vector3(0,0,1);
Material48.EmissiveColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance47.Material := Material48;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape45.Appearance := Appearance47;
{ METHOD .FdChildren.Add }
Transform44.FdChildren.Add(Shape45);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform44);
Transform49 := TTransformNode.Create;;
Transform49.Translation := Vector3(0,0,50);
Transform49.Rotation := Vector4(1,0,0,1.57);
Shape50 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape50.Geometry := Cone31;
Appearance52 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance52.Material := Material48;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape50.Appearance := Appearance52;
{ METHOD .FdChildren.Add }
Transform49.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform49);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(Group23);
{ the model that is being reviewed by the users of this scene }
Transform54 := TTransformNode.Create;;
{ <Inline DEF="Flower" url='"bumpyx_ite.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background55 := TBackgroundNode.Create;;
Background55.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background55.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background55.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background55.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background55.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background55.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Transform54.FdChildren.Add(Background55);
Transform56 := TTransformNode.Create;
end;

procedure Initbumpyx_iteslidersPart4;
begin
;
Shape57 := TShapeNode.Create;;
{ <Sphere radius='40'></Sphere> }
IndexedFaceSet58 := TIndexedFaceSetNode.Create;;
IndexedFaceSet58.Convex := False;
Coordinate59 := TCoordinateNode.Create;;
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet58.Coord := Coordinate59;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape57.Geometry := IndexedFaceSet58;
Appearance60 := TAppearanceNode.Create;;
Material61 := TMaterialNode.Create;;
Material61.DiffuseColor := Vector3(0.7,0.7,0.7);
Material61.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance60.Material := Material61;
ComposedCubeMapTexture62 := TComposedCubeMapTextureNode.Create;;
ImageTexture63 := TImageTextureNode.Create;;
ImageTexture63.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture62.FdBackTexture.Set(ImageTexture63);
ImageTexture64 := TImageTextureNode.Create;;
ImageTexture64.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture62.FdBottomTexture.Set(ImageTexture64);
ImageTexture65 := TImageTextureNode.Create;;
ImageTexture65.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture62.FdFrontTexture.Set(ImageTexture65);
ImageTexture66 := TImageTextureNode.Create;;
ImageTexture66.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture62.FdLeftTexture.Set(ImageTexture66);
ImageTexture67 := TImageTextureNode.Create;;
ImageTexture67.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture62.FdRightTexture.Set(ImageTexture67);
ImageTexture68 := TImageTextureNode.Create;
end;

procedure Initbumpyx_iteslidersPart5;
begin
;
ImageTexture68.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture62.FdTopTexture.Set(ImageTexture68);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance60.Texture := ComposedCubeMapTexture62;
ComposedShader69 := TComposedShaderNode.Create;;
ComposedShader69.Language := 'GLSL';
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
end;

procedure Initbumpyx_iteslidersPart6;
begin

ShaderPart82 := TShaderPartNode.Create;;
ShaderPart82.SetUrl(['../shaders/x_ite_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs']);
ShaderPart82.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader69.Parts := ShaderPart82;
ShaderPart83 := TShaderPartNode.Create;;
ShaderPart83.SetUrl(['../shaders/x_ite.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart83.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader69.Parts := ShaderPart83;
{ TO CONVERT TO A SPHERE }
{ <ShaderPart url='"../shaders/x_ite.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"' type="VERTEX" containerField='parts'></ShaderPart> }
{ <ShaderPart url='"../shaders/x_itebubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs"' containerField='parts' type='FRAGMENT'></ShaderPart> }
{ METHOD .AddChildren }
Appearance60.AddChildren([ComposedShader69]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape57.Appearance := Appearance60;
{ METHOD .FdChildren.Add }
Transform56.FdChildren.Add(Shape57);
{ METHOD .FdChildren.Add }
Transform54.FdChildren.Add(Transform56);
{ METHOD .FdChildren.Add }
Layer18.FdChildren.Add(Transform54);
Script84 := TScriptNode.Create;;
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
Layer18.AddRoute(OrbitScript.undefined, IndexedFaceSet58.EventSet_coordIndex);
{ METHOD .AddX3DROUTE }
{ Original "OrbitScript.coordinates TO OrbitCoordinates.EventSet_point }
{ Sample OrbitScript.coordinates TO OrbitCoordinates.EventSet_point}
Layer18.AddRoute(OrbitScript.undefined, Coordinate59.EventSet_point);
{ METHOD .AddX3DROUTE }
{ METHOD .FdLayers.Add }
LayerSet17.FdLayers.Add(Layer18);
LayoutLayer95 := TLayoutLayerNode.Create;;
LayoutLayer95.Pickable := True;
LayoutLayer95.SetObjectType(['ALL']);
Layout96 := TLayoutNode.Create;;
Layout96.SetAlign(['LEFT','BOTTOM']);
Layout96.SetOffset([-0.2,0.19]);
Layout96.SetSize([0.4,0.6]);
{ METHOD .SetLayout }
LayoutLayer95.Layout := Layout96;
Viewport97 := TViewportNode.Create;;
Viewport97.SetClipBoundary([0,1,0,1]);
{ METHOD .Viewport }
{ METHOD.SET .Viewport }
LayoutLayer95.Viewport := Viewport97;
Transform98 := TTransformNode.Create;;
Transform98.Translation := Vector3(0,0,-3);
Shape99 := TShapeNode.Create;;
Appearance100 := TAppearanceNode.Create;;
Material101 := TMaterialNode.Create;;
Material101.DiffuseColor := Vector3(0,0,0);
Material101.Transparency := 0.7;
{ METHOD .SetMaterial }
Appearance100.Material := Material101;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape99.Appearance := Appearance100;
Box102 := TBoxNode.Create;;
Box102.Size := Vector3(100,100,0.02);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape99.Geometry := Box102;
{ METHOD .FdChildren.Add }
Transform98.FdChildren.Add(Shape99);
{ METHOD .FdChildren.Add }
LayoutLayer95.FdChildren.Add(Transform98);
Transform103 := TTransformNode.Create;;
Transform104 := TTransformNode.Create;;
Transform104.Translation := Vector3(0,0,-20);
Shape105 := TShapeNode.Create;;
Text106 := TTextNode.Create;;
Text106.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle107 := TFontStyleNode.Create;;
FontStyle107.Size := 0.09;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text106.FontStyle := FontStyle107;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape105.Geometry := Text106;
Appearance108 := TAppearanceNode.Create;;
Material109 := TMaterialNode.Create;;
Material109.DiffuseColor := Vector3(1,1,0);
{ METHOD .SetMaterial }
Appearance108.Material := Material109;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape105.Appearance := Appearance108;
{ METHOD .FdChildren.Add }
Transform104.FdChildren.Add(Shape105);
{ METHOD .FdChildren.Add }
Transform103.FdChildren.Add(Transform104);
{ METHOD .FdChildren.Add }
LayoutLayer95.FdChildren.Add(Transform103);
X3DPrototype110 := TX3DPrototype.Create;;
X3DInterfaceDeclaration111 := TX3DInterfaceDeclaration.Create(nil);;
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
X3DPrototype120 := TX3DPrototype.Create;;
Group121 := TGroupNode.Create;;
Transform122 := TTransformNode.Create;;
Transform122.Translation := Vector3(0,0.7,0);
Transform124 := TTransformNode.Create;;
Transform124.Translation := Vector3(0,0,0.1);
PlaneSensor126 := TPlaneSensorNode.Create;;
PlaneSensor126.Description := 'Grab with mouse to adjust slider';
PlaneSensor126.MaxPosition := Vector2(1,0);
{ METHOD .FdChildren.Add }
Transform124.FdChildren.Add(PlaneSensor126);
Transform127 := TTransformNode.Create;;
Transform127.Translation := Vector3(0,0,0);
TouchSensor128 := TTouchSensorNode.Create;;
{ METHOD .FdChildren.Add }
Transform127.FdChildren.Add(TouchSensor128);
{ METHOD .FdChildren.Add }
Transform124.FdChildren.Add(Transform127);
Transform129 := TTransformNode.Create;;
Shape130 := TShapeNode.Create;;
Text131 := TTextNode.Create;;
Text131.SetText(['a=']);
FontStyle133 := TFontStyleNode.Create;;
FontStyle133.Size := 0.23;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text131.FontStyle := FontStyle133;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape130.Geometry := Text131;
Appearance134 := TAppearanceNode.Create;;
Material135 := TMaterialNode.Create;;
{ METHOD .SetMaterial }
Appearance134.Material := Material135;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape130.Appearance := Appearance134;
{ METHOD .FdChildren.Add }
Transform129.FdChildren.Add(Shape130);
{ METHOD .FdChildren.Add }
Transform124.FdChildren.Add(Transform129);
{ METHOD .FdChildren.Add }
Transform122.FdChildren.Add(Transform124);
{ METHOD .FdChildren.Add }
Group121.FdChildren.Add(Transform122);
Script136 := TScriptNode.Create;;
Script136.SetUrl(['../javascripts/X3DUser.js','https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js']);
Script136.DirectOutput := True;
Script136.MustEvaluate := True;
SFFloat137 := TSFFloat.CreateUndefined(Script136, false, 'protoScale');
{ METHOD .Fd.AddCustomField }
Script136.AddCustomField(SFFloat137);
MFString138 := TMFString.CreateUndefined(Script136, false, 'petNames');
{ METHOD .Fd.AddCustomField }
Script136.AddCustomField(MFString138);
SFString139 := TSFString.CreateUndefined(Script136, false, 'protoParameterName');
{ METHOD .Fd.AddCustomField }
Script136.AddCustomField(SFString139);
SFNode140 := TSFNode.CreateUndefined(Script136, false, 'shader');
{ METHOD .Fd.AddCustomField }
Script136.AddCustomField(SFNode140);
SFVec3f141 := TSFVec3f.CreateUndefined(Script136, false, 'newTranslation');
SFVec3f141.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script136.AddCustomField(SFVec3f141);
SFFloat142 := TSFFloat.CreateUndefined(Script136, false, 'protoValue_changed');
SFFloat142.Value := '1';
{ METHOD .Fd.AddCustomField }
Script136.AddCustomField(SFFloat142);
MFString143 := TMFString.CreateUndefined(Script136, false, 'protoText_changed');
MFString143.Value := '\"1.0\"';
{ METHOD .Fd.AddCustomField }
Script136.AddCustomField(MFString143);
{ METHOD .FdChildren.Add }
Group121.FdChildren.Add(Script136);
{ Original "protoSensor.EventTranslation_changed TO protoTransform.FdTranslation.EventIn }
{ Sample protoSensor.EventTranslation_changed TO protoTransform.FdTranslation.EventIn}
Group121.AddRoute(PlaneSensor126.EventTranslation_changed, Transform124.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation }
{ Sample protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation}
Group121.AddRoute(PlaneSensor126.EventTranslation_changed, SFVec3f141);
{ METHOD .AddX3DROUTE }
{ Original "protoValueTransformerScript.EventProtoText_changed TO protoText.string }
{ Sample protoValueTransformerScript.EventProtoText_changed TO protoText.string}
Group121.AddRoute(Script136.EventProtoText_changed, Text131.string);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype120.AddChildren([Group121]);
{ METHOD .AddX3DPrototype }
X3DPrototype110.AddX3DPrototype([X3DPrototype120]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype110]);
X3DPrototype148 := TX3DPrototypeNode;
SFVec3f149 := TSFVec3f.CreateUndefined(X3DPrototype148, false, 'sliderTranslation');
SFVec3f149.Value := '0 0.7 0';
{ METHOD .AddSFVec3f }
X3DPrototype148.AddSFVec3f([SFVec3f149]);
SFVec3f150 := TSFVec3f.CreateUndefined(X3DPrototype148, false, 'transformTranslation');
SFVec3f150.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype148.AddSFVec3f([SFVec3f150]);
SFVec3f151 := TSFVec3f.CreateUndefined(X3DPrototype148, false, 'sensorTranslation');
SFVec3f151.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype148.AddSFVec3f([SFVec3f151]);
MFString152 := TMFString.CreateUndefined(X3DPrototype148, false, 'textString');
MFString152.Value := '\"a=\"';
{ METHOD .AddMFString }
X3DPrototype148.AddMFString([MFString152]);
SFFloat153 := TSFFloat.CreateUndefined(X3DPrototype148, false, 'parameterScale');
SFFloat153.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype148.AddSFFloat([SFFloat153]);
SFString154 := TSFString.CreateUndefined(X3DPrototype148, false, 'parameterName');
SFString154.Value := 'a';
{ METHOD .AddSFString }
X3DPrototype148.AddSFString([SFString154]);
MFString155 := TMFString.CreateUndefined(X3DPrototype148, false, 'petNames');
MFString155.Value := '\"yottzumm\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype148.AddMFString([MFString155]);
SFNode156 := TSFNode.CreateUndefined(X3DPrototype148, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode156.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype148.AddSFNode([SFNode156]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype148]);
X3DPrototype158 := TX3DPrototypeNode;
SFVec3f159 := TSFVec3f.CreateUndefined(X3DPrototype158, false, 'sliderTranslation');
SFVec3f159.Value := '0 0.4 0';
{ METHOD .AddSFVec3f }
X3DPrototype158.AddSFVec3f([SFVec3f159]);
SFVec3f160 := TSFVec3f.CreateUndefined(X3DPrototype158, false, 'transformTranslation');
SFVec3f160.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype158.AddSFVec3f([SFVec3f160]);
SFVec3f161 := TSFVec3f.CreateUndefined(X3DPrototype158, false, 'sensorTranslation');
SFVec3f161.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype158.AddSFVec3f([SFVec3f161]);
MFString162 := TMFString.CreateUndefined(X3DPrototype158, false, 'textString');
MFString162.Value := '\"b=\"';
{ METHOD .AddMFString }
X3DPrototype158.AddMFString([MFString162]);
SFFloat163 := TSFFloat.CreateUndefined(X3DPrototype158, false, 'parameterScale');
SFFloat163.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype158.AddSFFloat([SFFloat163]);
SFString164 := TSFString.CreateUndefined(X3DPrototype158, false, 'parameterName');
SFString164.Value := 'b';
{ METHOD .AddSFString }
X3DPrototype158.AddSFString([SFString164]);
MFString165 := TMFString.CreateUndefined(X3DPrototype158, false, 'petNames');
MFString165.Value := '\"yottzumm\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype158.AddMFString([MFString165]);
SFNode166 := TSFNode.CreateUndefined(X3DPrototype158, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode166.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype158.AddSFNode([SFNode166]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype158]);
X3DPrototype168 := TX3DPrototypeNode;
SFVec3f169 := TSFVec3f.CreateUndefined(X3DPrototype168, false, 'sliderTranslation');
SFVec3f169.Value := '0 0.1 0';
{ METHOD .AddSFVec3f }
X3DPrototype168.AddSFVec3f([SFVec3f169]);
SFVec3f170 := TSFVec3f.CreateUndefined(X3DPrototype168, false, 'transformTranslation');
SFVec3f170.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype168.AddSFVec3f([SFVec3f170]);
SFVec3f171 := TSFVec3f.CreateUndefined(X3DPrototype168, false, 'sensorTranslation');
SFVec3f171.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype168.AddSFVec3f([SFVec3f171]);
MFString172 := TMFString.CreateUndefined(X3DPrototype168, false, 'textString');
MFString172.Value := '\"c=\"';
{ METHOD .AddMFString }
X3DPrototype168.AddMFString([MFString172]);
SFFloat173 := TSFFloat.CreateUndefined(X3DPrototype168, false, 'parameterScale');
SFFloat173.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype168.AddSFFloat([SFFloat173]);
SFString174 := TSFString.CreateUndefined(X3DPrototype168, false, 'parameterName');
SFString174.Value := 'c';
{ METHOD .AddSFString }
X3DPrototype168.AddSFString([SFString174]);
MFString175 := TMFString.CreateUndefined(X3DPrototype168, false, 'petNames');
MFString175.Value := '\"yottzumm\" \"yottzumm2\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype168.AddMFString([MFString175]);
SFNode176 := TSFNode.CreateUndefined(X3DPrototype168, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode176.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype168.AddSFNode([SFNode176]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype168]);
X3DPrototype178 := TX3DPrototypeNode;
SFVec3f179 := TSFVec3f.CreateUndefined(X3DPrototype178, false, 'sliderTranslation');
SFVec3f179.Value := '0 -0.2 0';
{ METHOD .AddSFVec3f }
X3DPrototype178.AddSFVec3f([SFVec3f179]);
SFVec3f180 := TSFVec3f.CreateUndefined(X3DPrototype178, false, 'transformTranslation');
SFVec3f180.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype178.AddSFVec3f([SFVec3f180]);
SFVec3f181 := TSFVec3f.CreateUndefined(X3DPrototype178, false, 'sensorTranslation');
SFVec3f181.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype178.AddSFVec3f([SFVec3f181]);
MFString182 := TMFString.CreateUndefined(X3DPrototype178, false, 'textString');
MFString182.Value := '\"d=\"';
{ METHOD .AddMFString }
X3DPrototype178.AddMFString([MFString182]);
SFFloat183 := TSFFloat.CreateUndefined(X3DPrototype178, false, 'parameterScale');
SFFloat183.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype178.AddSFFloat([SFFloat183]);
SFString184 := TSFString.CreateUndefined(X3DPrototype178, false, 'parameterName');
SFString184.Value := 'd';
{ METHOD .AddSFString }
X3DPrototype178.AddSFString([SFString184]);
MFString185 := TMFString.CreateUndefined(X3DPrototype178, false, 'petNames');
MFString185.Value := '\"yottzumm\" \"yottzumm2\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype178.AddMFString([MFString185]);
SFNode186 := TSFNode.CreateUndefined(X3DPrototype178, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode186.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype178.AddSFNode([SFNode186]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype178]);
X3DPrototype188 := TX3DPrototypeNode;
SFVec3f189 := TSFVec3f.CreateUndefined(X3DPrototype188, false, 'sliderTranslation');
SFVec3f189.Value := '0 -0.5 0';
{ METHOD .AddSFVec3f }
X3DPrototype188.AddSFVec3f([SFVec3f189]);
SFVec3f190 := TSFVec3f.CreateUndefined(X3DPrototype188, false, 'transformTranslation');
SFVec3f190.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype188.AddSFVec3f([SFVec3f190]);
SFVec3f191 := TSFVec3f.CreateUndefined(X3DPrototype188, false, 'sensorTranslation');
SFVec3f191.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype188.AddSFVec3f([SFVec3f191]);
MFString192 := TMFString.CreateUndefined(X3DPrototype188, false, 'textString');
MFString192.Value := '\"tdelta=\"';
{ METHOD .AddMFString }
X3DPrototype188.AddMFString([MFString192]);
SFFloat193 := TSFFloat.CreateUndefined(X3DPrototype188, false, 'parameterScale');
SFFloat193.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype188.AddSFFloat([SFFloat193]);
SFString194 := TSFString.CreateUndefined(X3DPrototype188, false, 'parameterName');
SFString194.Value := 'tdelta';
{ METHOD .AddSFString }
X3DPrototype188.AddSFString([SFString194]);
MFString195 := TMFString.CreateUndefined(X3DPrototype188, false, 'petNames');
MFString195.Value := '\"yottzumm2\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype188.AddMFString([MFString195]);
SFNode196 := TSFNode.CreateUndefined(X3DPrototype188, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode196.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype188.AddSFNode([SFNode196]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype188]);
X3DPrototype198 := TX3DPrototypeNode;
SFVec3f199 := TSFVec3f.CreateUndefined(X3DPrototype198, false, 'sliderTranslation');
SFVec3f199.Value := '0 -0.8 0';
{ METHOD .AddSFVec3f }
X3DPrototype198.AddSFVec3f([SFVec3f199]);
SFVec3f200 := TSFVec3f.CreateUndefined(X3DPrototype198, false, 'transformTranslation');
SFVec3f200.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype198.AddSFVec3f([SFVec3f200]);
SFVec3f201 := TSFVec3f.CreateUndefined(X3DPrototype198, false, 'sensorTranslation');
SFVec3f201.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype198.AddSFVec3f([SFVec3f201]);
MFString202 := TMFString.CreateUndefined(X3DPrototype198, false, 'textString');
MFString202.Value := '\"pdelta=\"';
{ METHOD .AddMFString }
X3DPrototype198.AddMFString([MFString202]);
SFFloat203 := TSFFloat.CreateUndefined(X3DPrototype198, false, 'parameterScale');
SFFloat203.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype198.AddSFFloat([SFFloat203]);
SFString204 := TSFString.CreateUndefined(X3DPrototype198, false, 'parameterName');
SFString204.Value := 'pdelta';
{ METHOD .AddSFString }
X3DPrototype198.AddSFString([SFString204]);
MFString205 := TMFString.CreateUndefined(X3DPrototype198, false, 'petNames');
MFString205.Value := '\"yottzumm2\" \"group1-petname\"';
{ METHOD .AddMFString }
X3DPrototype198.AddMFString([MFString205]);
SFNode206 := TSFNode.CreateUndefined(X3DPrototype198, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode206.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype198.AddSFNode([SFNode206]);
{ METHOD .AddX3DPrototype }
LayoutLayer95.AddX3DPrototype([X3DPrototype198]);
{ METHOD .FdLayers.Add }
LayerSet17.FdLayers.Add(LayoutLayer95);
Layer208 := TLayerNode.Create;;
Layer208.Pickable := True;
Layer208.SetObjectType(['ALL']);
Viewpoint209 := TViewpointNode.Create;;
Viewpoint209.Description := 'My Humanoids';
Viewpoint209.FieldOfView := 1.570796;
Viewpoint209.Position := Vector3(0,1.75,80);
{ METHOD .FdChildren.Add }
Layer208.FdChildren.Add(Viewpoint209);
Script210 := TScriptNode.Create;;
Script210.SetUrl(['../javascripts/X3DAvatar.js','https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js']);
Script210.DirectOutput := True;
Script210.MustEvaluate := True;
{ METHOD .FdChildren.Add }
Layer208.FdChildren.Add(Script210);
Group211 := TGroupNode.Create;;
Group212 := TGroupNode.Create;;
{ METHOD .FdChildren.Add }
Group211.FdChildren.Add(Group212);
{ METHOD .FdChildren.Add }
Layer208.FdChildren.Add(Group211);
{ METHOD .FdLayers.Add }
LayerSet17.FdLayers.Add(Layer208);
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
Initbumpyx_iteslidersPart6;
Result := X3D0;
end;

begin
end.
