unit bumpyfreewrljsonverse;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createbumpyfreewrljsonverse: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group30: TGroupNode;
NavigationInfo31: TNavigationInfoNode;
DirectionalLight32: TDirectionalLightNode;
DirectionalLight33: TDirectionalLightNode;
Viewpoint34: TViewpointNode;
LayerSet35: TLayerSetNode;
Layer36: TLayerNode;
Group37: TGroupNode;
Transform38: TTransformNode;
Shape39: TShapeNode;
Cylinder40: TCylinderNode;
Appearance41: TAppearanceNode;
Material42: TMaterialNode;
Transform43: TTransformNode;
Shape44: TShapeNode;
Cone45: TConeNode;
Appearance46: TAppearanceNode;
Material47: TMaterialNode;
Transform48: TTransformNode;
Shape49: TShapeNode;
Cylinder50: TCylinderNode;
Appearance51: TAppearanceNode;
Material52: TMaterialNode;
Transform53: TTransformNode;
Shape54: TShapeNode;
Cone55: TConeNode;
Appearance56: TAppearanceNode;
Material57: TMaterialNode;
Transform58: TTransformNode;
Shape59: TShapeNode;
Cylinder60: TCylinderNode;
Appearance61: TAppearanceNode;
Material62: TMaterialNode;
Transform63: TTransformNode;
Shape64: TShapeNode;
Cone65: TConeNode;
Appearance66: TAppearanceNode;
Material67: TMaterialNode;
Transform68: TTransformNode;
Background69: TBackgroundNode;
Transform70: TTransformNode;
Shape71: TShapeNode;
IndexedFaceSet72: TIndexedFaceSetNode;
Coordinate73: TCoordinateNode;
Appearance74: TAppearanceNode;
Material75: TMaterialNode;
ComposedCubeMapTexture76: TComposedCubeMapTextureNode;
ImageTexture77: TImageTextureNode;
ImageTexture78: TImageTextureNode;
ImageTexture79: TImageTextureNode;
ImageTexture80: TImageTextureNode;
ImageTexture81: TImageTextureNode;
ImageTexture82: TImageTextureNode;
ComposedShader83: TComposedShaderNode;
SFVec3f84: TSFVec3f;
SFInt3285: TSFInt32;
SFFloat86: TSFFloat;
SFFloat87: TSFFloat;
SFFloat88: TSFFloat;
SFFloat89: TSFFloat;
SFFloat90: TSFFloat;
SFFloat91: TSFFloat;
SFFloat92: TSFFloat;
SFFloat93: TSFFloat;
SFFloat94: TSFFloat;
ShaderPart95: TShaderPartNode;
ShaderPart96: TShaderPartNode;
Script97: TScriptNode;
MFVec3f98: TMFVec3f;
MFInt3299: TMFInt32;
SFFloat100: TSFFloat;
SFFloat101: TSFFloat;
SFFloat102: TSFFloat;
SFFloat103: TSFFloat;
SFFloat104: TSFFloat;
SFFloat105: TSFFloat;
DISEntityManager108: TDISEntityManagerNode;
DISEntityTypeMapping109: TDISEntityTypeMappingNode;
DISEntityTypeMapping110: TDISEntityTypeMappingNode;
DISEntityTypeMapping111: TDISEntityTypeMappingNode;
DISEntityTypeMapping112: TDISEntityTypeMappingNode;
Collision113: TCollisionNode;
Group114: TGroupNode;
LayoutLayer117: TLayoutLayerNode;
Transform118: TTransformNode;
Shape119: TShapeNode;
Appearance120: TAppearanceNode;
Material121: TMaterialNode;
Box122: TBoxNode;
Transform123: TTransformNode;
Transform124: TTransformNode;
Shape125: TShapeNode;
Text126: TTextNode;
FontStyle127: TFontStyleNode;
Appearance128: TAppearanceNode;
Material129: TMaterialNode;
X3DPrototype130: TX3DPrototype;
X3DInterfaceDeclaration131: TX3DInterfaceDeclaration;
SFVec3f132: TSFVec3f;
SFVec3f133: TSFVec3f;
SFVec3f134: TSFVec3f;
MFString135: TMFString;
SFFloat136: TSFFloat;
SFString137: TSFString;
SFNode138: TSFNode;
X3DPrototype139: TX3DPrototype;
Group140: TGroupNode;
Transform141: TTransformNode;
IS142: TIS;
connect143: Tconnect;
Transform144: TTransformNode;
IS145: TIS;
connect146: Tconnect;
PlaneSensor147: TPlaneSensorNode;
Transform148: TTransformNode;
TouchSensor149: TTouchSensorNode;
Transform150: TTransformNode;
Shape151: TShapeNode;
Text152: TTextNode;
IS153: TIS;
connect154: Tconnect;
FontStyle155: TFontStyleNode;
Appearance156: TAppearanceNode;
Material157: TMaterialNode;
Script158: TScriptNode;
SFFloat159: TSFFloat;
SFString160: TSFString;
SFNode161: TSFNode;
SFVec3f162: TSFVec3f;
SFFloat163: TSFFloat;
MFString164: TMFString;
IS165: TIS;
connect166: Tconnect;
connect167: Tconnect;
connect168: Tconnect;
X3DPrototype172: TX3DPrototypeNode;
SFVec3f173: TSFVec3f;
SFVec3f174: TSFVec3f;
SFVec3f175: TSFVec3f;
MFString176: TMFString;
SFFloat177: TSFFloat;
SFString178: TSFString;
SFNode179: TSFNode;
ComposedShader180: TComposedShaderNode;
X3DPrototype181: TX3DPrototypeNode;
SFVec3f182: TSFVec3f;
SFVec3f183: TSFVec3f;
SFVec3f184: TSFVec3f;
MFString185: TMFString;
SFFloat186: TSFFloat;
SFString187: TSFString;
SFNode188: TSFNode;
ComposedShader189: TComposedShaderNode;
X3DPrototype190: TX3DPrototypeNode;
SFVec3f191: TSFVec3f;
SFVec3f192: TSFVec3f;
SFVec3f193: TSFVec3f;
MFString194: TMFString;
SFFloat195: TSFFloat;
SFString196: TSFString;
SFNode197: TSFNode;
ComposedShader198: TComposedShaderNode;
X3DPrototype199: TX3DPrototypeNode;
SFVec3f200: TSFVec3f;
SFVec3f201: TSFVec3f;
SFVec3f202: TSFVec3f;
MFString203: TMFString;
SFFloat204: TSFFloat;
SFString205: TSFString;
SFNode206: TSFNode;
ComposedShader207: TComposedShaderNode;
X3DPrototype208: TX3DPrototypeNode;
SFVec3f209: TSFVec3f;
SFVec3f210: TSFVec3f;
SFVec3f211: TSFVec3f;
MFString212: TMFString;
SFFloat213: TSFFloat;
SFString214: TSFString;
SFNode215: TSFNode;
ComposedShader216: TComposedShaderNode;
X3DPrototype217: TX3DPrototypeNode;
SFVec3f218: TSFVec3f;
SFVec3f219: TSFVec3f;
SFVec3f220: TSFVec3f;
MFString221: TMFString;
SFFloat222: TSFFloat;
SFString223: TSFString;
SFNode224: TSFNode;
ComposedShader225: TComposedShaderNode;
Layout226: TLayoutNode;
Viewport227: TViewportNode;

procedure InitbumpyfreewrljsonversePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
{ Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces https://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L }
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
X3D0.Components['DIS'] := 2;
{ METHOD .Component }
X3D0.Meta['title'] := 'bumpyfreewrljsonverse.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := '*enter description here, short-sentence summaries preferred*';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
{ METHOD .Meta }
X3D0.Meta['translator'] := '*if manually translating VRML-to-X3D, enter name of person translating here*';
{ METHOD .Meta }
X3D0.Meta['created'] := '*enter date of initial version here*';
{ METHOD .Meta }
X3D0.Meta['translated'] := '*enter date of translation here*';
{ METHOD .Meta }
X3D0.Meta['modified'] := '*enter date of latest revision here*';
{ METHOD .Meta }
X3D0.Meta['version'] := '*enter version here, if any*';
{ METHOD .Meta }
X3D0.Meta['reference'] := '*enter reference citation or relative/online url here*';
{ METHOD .Meta }
X3D0.Meta['reference'] := '*enter additional url/bibliographic reference information here*';
{ METHOD .Meta }
X3D0.Meta['requires'] := '*enter reference resource here if required to support function, delivery, or coherence of content*';
{ METHOD .Meta }
X3D0.Meta['drawing'] := '*enter drawing filename/url here*';
{ METHOD .Meta }
X3D0.Meta['MovingImage'] := '*enter movie filename/url here*';
{ METHOD .Meta }
X3D0.Meta['photo'] := '*enter photo filename/url here*';
{ METHOD .Meta }
X3D0.Meta['subject'] := '*enter subject keywords here*';
{ METHOD .Meta }
X3D0.Meta['accessRights'] := '*enter permission statements or url here*';
{ METHOD .Meta }
X3D0.Meta['identifier'] := '*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'PSPad, http://www.pspad.com/';
{ METHOD .Meta }
X3D0.Meta['license'] := 'license.html';
{ METHOD .Meta }
{ METHOD .Head }
{ "The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution, }
{ It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) }
{ open for their "discussion about the teapot" }
Group30 := TGroupNode.Create;
{ basic nodes, which might be present in any scene }
NavigationInfo31 := TNavigationInfoNode.Create;
NavigationInfo31.SetType(['EXAMINE']);
NavigationInfo31.SetAvatarSize([0.25,1.75,0.75]);
{ METHOD .FdChildren.Add }
Group30.FdChildren.Add(NavigationInfo31);
DirectionalLight32 := TDirectionalLightNode.Create;
DirectionalLight32.AmbientIntensity := 0.2;
DirectionalLight32.Direction := Vector3(0,-1,0);
end;

procedure InitbumpyfreewrljsonversePart1;
begin

{ METHOD .FdChildren.Add }
Group30.FdChildren.Add(DirectionalLight32);
DirectionalLight33 := TDirectionalLightNode.Create;
DirectionalLight33.AmbientIntensity := 0.2;
DirectionalLight33.Direction := Vector3(-1,-0.1,-1);
{ METHOD .FdChildren.Add }
Group30.FdChildren.Add(DirectionalLight33);
Viewpoint34 := TViewpointNode.Create;
Viewpoint34.Description := 'My Overview';
Viewpoint34.FieldOfView := 1.570796;
Viewpoint34.Position := Vector3(0,1.75,60);
{ METHOD .FdChildren.Add }
Group30.FdChildren.Add(Viewpoint34);
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet35 := TLayerSetNode.Create;
LayerSet35.ActiveLayer := 1;
LayerSet35.SetOrder([1,2]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
{ the second layer contains the sliders that are moved with the user's display }
{ like a HUD (heads up display) }
Layer36 := TLayerNode.Create;
Layer36.Pickable := True;
Layer36.SetObjectType(['ALL']);
{ this group contains the red/green/blue 3D crosshair }
Group37 := TGroupNode.Create;
{ Arrow X }
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(25,0,0);
Transform38.Rotation := Vector4(0,0,-1,1.57);
Shape39 := TShapeNode.Create;
Cylinder40 := TCylinderNode.Create;
Cylinder40.Radius := 0.35;
Cylinder40.Height := 50;
{ METHOD .Geometry }
Shape39.Geometry := Cylinder40;
Appearance41 := TAppearanceNode.Create;
Material42 := TMaterialNode.Create;
Material42.DiffuseColor := Vector3(1,0,0);
Material42.EmissiveColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance41.Material := Material42;
{ METHOD .Appearance }
Shape39.Appearance := Appearance41;
{ METHOD .FdChildren.Add }
Transform38.FdChildren.Add(Shape39);
{ METHOD .FdChildren.Add }
Group37.FdChildren.Add(Transform38);
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(50,0,0);
Transform43.Rotation := Vector4(0,0,-1,1.57);
Shape44 := TShapeNode.Create;
Cone45 := TConeNode.Create;
Cone45.BottomRadius := 0.8;
Cone45.Height := 3;
end;

procedure InitbumpyfreewrljsonversePart2;
begin

{ METHOD .Geometry }
Shape44.Geometry := Cone45;
Appearance46 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance46.Material := Material42;
{ METHOD .Appearance }
Shape44.Appearance := Appearance46;
{ METHOD .FdChildren.Add }
Transform43.FdChildren.Add(Shape44);
{ METHOD .FdChildren.Add }
Group37.FdChildren.Add(Transform43);
{ Arrow Y }
Transform48 := TTransformNode.Create;
Transform48.Translation := Vector3(0,25,0);
Shape49 := TShapeNode.Create;
{ METHOD .Geometry }
Shape49.Geometry := Cylinder40;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.DiffuseColor := Vector3(0,1,0);
Material52.EmissiveColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance51.Material := Material52;
{ METHOD .Appearance }
Shape49.Appearance := Appearance51;
{ METHOD .FdChildren.Add }
Transform48.FdChildren.Add(Shape49);
{ METHOD .FdChildren.Add }
Group37.FdChildren.Add(Transform48);
Transform53 := TTransformNode.Create;
Transform53.Translation := Vector3(0,50,0);
Shape54 := TShapeNode.Create;
{ METHOD .Geometry }
Shape54.Geometry := Cone45;
Appearance56 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance56.Material := Material52;
{ METHOD .Appearance }
Shape54.Appearance := Appearance56;
{ METHOD .FdChildren.Add }
Transform53.FdChildren.Add(Shape54);
{ METHOD .FdChildren.Add }
Group37.FdChildren.Add(Transform53);
{ Arrow Z }
Transform58 := TTransformNode.Create;
Transform58.Translation := Vector3(0,0,25);
Transform58.Rotation := Vector4(1,0,0,1.57);
Shape59 := TShapeNode.Create;
{ METHOD .Geometry }
Shape59.Geometry := Cylinder40;
Appearance61 := TAppearanceNode.Create;
Material62 := TMaterialNode.Create;
Material62.DiffuseColor := Vector3(0,0,1);
Material62.EmissiveColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance61.Material := Material62;
{ METHOD .Appearance }
Shape59.Appearance := Appearance61;
{ METHOD .FdChildren.Add }
Transform58.FdChildren.Add(Shape59);
{ METHOD .FdChildren.Add }
Group37.FdChildren.Add(Transform58);
end;

procedure InitbumpyfreewrljsonversePart3;
begin

Transform63 := TTransformNode.Create;
Transform63.Translation := Vector3(0,0,50);
Transform63.Rotation := Vector4(1,0,0,1.57);
Shape64 := TShapeNode.Create;
{ METHOD .Geometry }
Shape64.Geometry := Cone45;
Appearance66 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance66.Material := Material62;
{ METHOD .Appearance }
Shape64.Appearance := Appearance66;
{ METHOD .FdChildren.Add }
Transform63.FdChildren.Add(Shape64);
{ METHOD .FdChildren.Add }
Group37.FdChildren.Add(Transform63);
{ METHOD .FdChildren.Add }
Layer36.FdChildren.Add(Group37);
{ the model that is being reviewed by the users of this scene }
Transform68 := TTransformNode.Create;
{ <Inline DEF="Flower" url='"bumpyfreewrl.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background69 := TBackgroundNode.Create;
Background69.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background69.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background69.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background69.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background69.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background69.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Transform68.FdChildren.Add(Background69);
Transform70 := TTransformNode.Create;
Shape71 := TShapeNode.Create;
{ <Sphere radius='40'></Sphere> }
IndexedFaceSet72 := TIndexedFaceSetNode.Create;
IndexedFaceSet72.Convex := False;
Coordinate73 := TCoordinateNode.Create;
{ METHOD .Coord }
IndexedFaceSet72.Coord := Coordinate73;
{ METHOD .Geometry }
Shape71.Geometry := IndexedFaceSet72;
Appearance74 := TAppearanceNode.Create;
Material75 := TMaterialNode.Create;
Material75.DiffuseColor := Vector3(0.7,0.7,0.7);
Material75.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance74.Material := Material75;
ComposedCubeMapTexture76 := TComposedCubeMapTextureNode.Create;
ImageTexture77 := TImageTextureNode.Create;
ImageTexture77.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .SetBackTexture }
ComposedCubeMapTexture76.BackTexture := ImageTexture77;
ImageTexture78 := TImageTextureNode.Create;
ImageTexture78.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture76.BottomTexture := ImageTexture78;
ImageTexture79 := TImageTextureNode.Create;
end;

procedure InitbumpyfreewrljsonversePart4;
begin

ImageTexture79.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture76.FrontTexture := ImageTexture79;
ImageTexture80 := TImageTextureNode.Create;
ImageTexture80.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture76.LeftTexture := ImageTexture80;
ImageTexture81 := TImageTextureNode.Create;
ImageTexture81.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture76.RightTexture := ImageTexture81;
ImageTexture82 := TImageTextureNode.Create;
ImageTexture82.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture76.TopTexture := ImageTexture82;
{ METHOD .Texture }
Appearance74.Texture := ComposedCubeMapTexture76;
ComposedShader83 := TComposedShaderNode.Create;
ComposedShader83.Language := 'GLSL';
SFVec3f84 := TSFVec3f.CreateUndefined(ComposedShader83, false, 'chromaticDispertion');
SFVec3f84.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader83.AddSFVec3f([SFVec3f84]);
SFInt3285 := TSFInt32.CreateUndefined(ComposedShader83, false, 'fw_textureCoordGenType');
SFInt3285.Value := '0';
{ METHOD .AddSFInt32 }
ComposedShader83.AddSFInt32([SFInt3285]);
SFFloat86 := TSFFloat.CreateUndefined(ComposedShader83, false, 'bias');
SFFloat86.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader83.AddSFFloat([SFFloat86]);
SFFloat87 := TSFFloat.CreateUndefined(ComposedShader83, false, 'scale');
SFFloat87.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader83.AddSFFloat([SFFloat87]);
SFFloat88 := TSFFloat.CreateUndefined(ComposedShader83, false, 'power');
SFFloat88.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader83.AddSFFloat([SFFloat88]);
SFFloat89 := TSFFloat.CreateUndefined(ComposedShader83, false, 'a');
SFFloat89.Value := '15';
{ METHOD .AddSFFloat }
ComposedShader83.AddSFFloat([SFFloat89]);
SFFloat90 := TSFFloat.CreateUndefined(ComposedShader83, false, 'b');
SFFloat90.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader83.AddSFFloat([SFFloat90]);
SFFloat91 := TSFFloat.CreateUndefined(ComposedShader83, false, 'c');
SFFloat91.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader83.AddSFFloat([SFFloat91]);
SFFloat92 := TSFFloat.CreateUndefined(ComposedShader83, false, 'd');
SFFloat92.Value := '5';
end;

procedure InitbumpyfreewrljsonversePart5;
begin

{ METHOD .AddSFFloat }
ComposedShader83.AddSFFloat([SFFloat92]);
SFFloat93 := TSFFloat.CreateUndefined(ComposedShader83, false, 'tdelta');
SFFloat93.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader83.AddSFFloat([SFFloat93]);
SFFloat94 := TSFFloat.CreateUndefined(ComposedShader83, false, 'pdelta');
SFFloat94.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader83.AddSFFloat([SFFloat94]);
ShaderPart95 := TShaderPartNode.Create;
ShaderPart95.SetUrl(['../shaders/freewrl_flowers_chromatic.vs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs']);
ShaderPart95.FdType.Value := 'VERTEX';
{ METHOD .Parts }
ComposedShader83.Parts := ShaderPart95;
ShaderPart96 := TShaderPartNode.Create;
ShaderPart96.SetUrl(['../shaders/freewrl.fs','https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs']);
ShaderPart96.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
ComposedShader83.Parts := ShaderPart96;
{ TO CONVERT TO A SPHERE }
{ <ShaderPart url='"../shaders/freewrl.vs"'></ShaderPart> }
{ <ShaderPart url='"../shaders/freewrl_bubbles.fs"' type='FRAGMENT'></ShaderPart> }
{ METHOD .AddChildren }
Appearance74.AddChildren([ComposedShader83]);
{ METHOD .Appearance }
Shape71.Appearance := Appearance74;
{ METHOD .FdChildren.Add }
Transform70.FdChildren.Add(Shape71);
{ METHOD .FdChildren.Add }
Transform68.FdChildren.Add(Transform70);
{ METHOD .FdChildren.Add }
Layer36.FdChildren.Add(Transform68);
Script97 := TScriptNode.Create;
MFVec3f98 := TMFVec3f.CreateUndefined(Script97, false, 'coordinates');
{ METHOD .Fd.AddCustomField }
Script97.AddCustomField(MFVec3f98);
MFInt3299 := TMFInt32.CreateUndefined(Script97, false, 'coordIndexes');
{ METHOD .Fd.AddCustomField }
Script97.AddCustomField(MFInt3299);
SFFloat100 := TSFFloat.CreateUndefined(Script97, false, 'a');
SFFloat100.Value := '10';
{ METHOD .Fd.AddCustomField }
Script97.AddCustomField(SFFloat100);
SFFloat101 := TSFFloat.CreateUndefined(Script97, false, 'b');
SFFloat101.Value := '10';
{ METHOD .Fd.AddCustomField }
Script97.AddCustomField(SFFloat101);
SFFloat102 := TSFFloat.CreateUndefined(Script97, false, 'c');
SFFloat102.Value := '2';
{ METHOD .Fd.AddCustomField }
Script97.AddCustomField(SFFloat102);
SFFloat103 := TSFFloat.CreateUndefined(Script97, false, 'd');
SFFloat103.Value := '2';
{ METHOD .Fd.AddCustomField }
Script97.AddCustomField(SFFloat103);
SFFloat104 := TSFFloat.CreateUndefined(Script97, false, 'pdelta');
SFFloat104.Value := '0';
{ METHOD .Fd.AddCustomField }
Script97.AddCustomField(SFFloat104);
end;

procedure InitbumpyfreewrljsonversePart6;
begin

SFFloat105 := TSFFloat.CreateUndefined(Script97, false, 'tdelta');
SFFloat105.Value := '0';
{ METHOD .Fd.AddCustomField }
Script97.AddCustomField(SFFloat105);

Script97.SetSourceCode('''ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     var vecCount = 0;\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds[vecCount] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		vecCount++;\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"     // coordinates = new MFVec3f(...crds);\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     var intCount = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis[intCount++] = i*resolution+j;\n"+
"	     cis[intCount++] = i*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j;\n"+
"	     cis[intCount++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"    // coordIndexes = new MFInt32(...cis);\n"+
"}''');
{ METHOD .FdChildren.Add }
Layer36.FdChildren.Add(Script97);
{ Original "OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex }
{ Sample OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex}
Layer36.AddRoute(OrbitScript.[object Object], IndexedFaceSet72.EventSet_coordIndex);
{ METHOD .AddX3DROUTE }
{ Original "OrbitScript.coordinates TO OrbitCoordinates.EventSet_point }
{ Sample OrbitScript.coordinates TO OrbitCoordinates.EventSet_point}
Layer36.AddRoute(OrbitScript.[object Object], Coordinate73.EventSet_point);
{ METHOD .AddX3DROUTE }
{ DIS multiuser facilities }
DISEntityManager108 := TDISEntityManagerNode.Create;
DISEntityTypeMapping109 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping109.Category := 77;
DISEntityTypeMapping109.Specific := 1;
DISEntityTypeMapping109.SetUrl(['../data/Gramps8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager108.FdChildren.Add(DISEntityTypeMapping109);
DISEntityTypeMapping110 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping110.Category := 77;
DISEntityTypeMapping110.Specific := 2;
DISEntityTypeMapping110.SetUrl(['../data/Leif8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager108.FdChildren.Add(DISEntityTypeMapping110);
DISEntityTypeMapping111 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping111.Category := 77;
DISEntityTypeMapping111.Specific := 3;
DISEntityTypeMapping111.SetUrl(['../data/Lily8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager108.FdChildren.Add(DISEntityTypeMapping111);
DISEntityTypeMapping112 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping112.Category := 77;
DISEntityTypeMapping112.Specific := 4;
DISEntityTypeMapping112.SetUrl(['../data/Tufani8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager108.FdChildren.Add(DISEntityTypeMapping112);
{ METHOD .FdChildren.Add }
Layer36.FdChildren.Add(DISEntityManager108);
Collision113 := TCollisionNode.Create;
Collision113.Enabled := False;
Group114 := TGroupNode.Create;
{ METHOD .Proxy }
Collision113.Proxy := Group114;
{ METHOD .FdChildren.Add }
Layer36.FdChildren.Add(Collision113);
{ Original "EntityManager.EventAddedEntities TO AvatarHolder.addChildren }
{ Sample EntityManager.EventAddedEntities TO AvatarHolder.addChildren}
Layer36.AddRoute(DISEntityManager108.EventAddedEntities, Group114.addChildren);
{ METHOD .AddX3DROUTE }
{ Original "EntityManager.EventRemovedEntities TO AvatarHolder.removeChildren }
{ Sample EntityManager.EventRemovedEntities TO AvatarHolder.removeChildren}
Layer36.AddRoute(DISEntityManager108.EventRemovedEntities, Group114.removeChildren);
{ METHOD .AddX3DROUTE }
{ METHOD .FdLayers.Add }
LayerSet35.FdLayers.Add(Layer36);
LayoutLayer117 := TLayoutLayerNode.Create;
LayoutLayer117.Pickable := True;
LayoutLayer117.SetObjectType(['ALL']);
{ positioning the LayoutLayer }
{ clipping the LayoutLayer }
{ the content (children) of the LayoutLayer }
{ first, the slider for scaling the model }
Transform118 := TTransformNode.Create;
Transform118.Translation := Vector3(0,0,-3);
Shape119 := TShapeNode.Create;
Appearance120 := TAppearanceNode.Create;
Material121 := TMaterialNode.Create;
Material121.DiffuseColor := Vector3(0,0,0);
Material121.Transparency := 0.7;
{ METHOD .SetMaterial }
Appearance120.Material := Material121;
{ METHOD .Appearance }
Shape119.Appearance := Appearance120;
Box122 := TBoxNode.Create;
Box122.Size := Vector3(100,100,0.02);
{ METHOD .Geometry }
Shape119.Geometry := Box122;
{ METHOD .FdChildren.Add }
Transform118.FdChildren.Add(Shape119);
{ METHOD .FdChildren.Add }
LayoutLayer117.FdChildren.Add(Transform118);
Transform123 := TTransformNode.Create;
Transform124 := TTransformNode.Create;
Transform124.Translation := Vector3(0,0,-20);
Shape125 := TShapeNode.Create;
Text126 := TTextNode.Create;
Text126.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle127 := TFontStyleNode.Create;
FontStyle127.Size := 0.09;
{ METHOD .FontStyle }
Text126.FontStyle := FontStyle127;
{ METHOD .Geometry }
Shape125.Geometry := Text126;
Appearance128 := TAppearanceNode.Create;
Material129 := TMaterialNode.Create;
Material129.DiffuseColor := Vector3(1,1,0);
{ METHOD .SetMaterial }
Appearance128.Material := Material129;
{ METHOD .Appearance }
Shape125.Appearance := Appearance128;
{ METHOD .FdChildren.Add }
Transform124.FdChildren.Add(Shape125);
{ METHOD .FdChildren.Add }
Transform123.FdChildren.Add(Transform124);
{ METHOD .FdChildren.Add }
LayoutLayer117.FdChildren.Add(Transform123);
X3DPrototype130 := TX3DPrototype.Create;
X3DInterfaceDeclaration131 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f132 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration131, false, 'sliderTranslation');
SFVec3f132.Value := '0 0.7 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration131.AddSFVec3f([SFVec3f132]);
SFVec3f133 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration131, false, 'transformTranslation');
SFVec3f133.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration131.AddSFVec3f([SFVec3f133]);
SFVec3f134 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration131, false, 'sensorTranslation');
SFVec3f134.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration131.AddSFVec3f([SFVec3f134]);
MFString135 := TMFString.CreateUndefined(X3DInterfaceDeclaration131, false, 'textString');
MFString135.Value := '\"a=\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration131.AddMFString([MFString135]);
SFFloat136 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration131, false, 'parameterScale');
SFFloat136.Value := '30';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration131.AddSFFloat([SFFloat136]);
SFString137 := TSFString.CreateUndefined(X3DInterfaceDeclaration131, false, 'parameterName');
SFString137.Value := 'a';
{ METHOD .AddSFString }
X3DInterfaceDeclaration131.AddSFString([SFString137]);
SFNode138 := TSFNode.CreateUndefined(X3DInterfaceDeclaration131, false, 'shaderNode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration131.AddSFNode([SFNode138]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype130.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration131]);
X3DPrototype139 := TX3DPrototype.Create;
Group140 := TGroupNode.Create;
Transform141 := TTransformNode.Create;
Transform141.Translation := Vector3(0,0.7,0);
IS142 := TIS.Create;
connect143 := Tconnect.Create;
connect143.NodeField := 'translation';
connect143.ProtoField := 'sliderTranslation';
{ METHOD .Connect }
IS142.Connect := connect143;
{ METHOD .IS }
Transform141.IS := IS142;
Transform144 := TTransformNode.Create;
Transform144.Translation := Vector3(0,0,0.1);
IS145 := TIS.Create;
connect146 := Tconnect.Create;
connect146.NodeField := 'translation';
connect146.ProtoField := 'sensorTranslation';
{ METHOD .Connect }
IS145.Connect := connect146;
{ METHOD .IS }
Transform144.IS := IS145;
PlaneSensor147 := TPlaneSensorNode.Create;
PlaneSensor147.MaxPosition := Vector2(1,0);
{ METHOD .FdChildren.Add }
Transform144.FdChildren.Add(PlaneSensor147);
Transform148 := TTransformNode.Create;
Transform148.Translation := Vector3(0,0,0);
TouchSensor149 := TTouchSensorNode.Create;
{ METHOD .FdChildren.Add }
Transform148.FdChildren.Add(TouchSensor149);
{ METHOD .FdChildren.Add }
Transform144.FdChildren.Add(Transform148);
Transform150 := TTransformNode.Create;
Shape151 := TShapeNode.Create;
Text152 := TTextNode.Create;
Text152.SetText(['a=']);
IS153 := TIS.Create;
connect154 := Tconnect.Create;
connect154.NodeField := 'string';
connect154.ProtoField := 'textString';
{ METHOD .Connect }
IS153.Connect := connect154;
{ METHOD .IS }
Text152.IS := IS153;
FontStyle155 := TFontStyleNode.Create;
FontStyle155.Size := 0.23;
{ METHOD .FontStyle }
Text152.FontStyle := FontStyle155;
{ METHOD .Geometry }
Shape151.Geometry := Text152;
Appearance156 := TAppearanceNode.Create;
Material157 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance156.Material := Material157;
{ METHOD .Appearance }
Shape151.Appearance := Appearance156;
{ METHOD .FdChildren.Add }
Transform150.FdChildren.Add(Shape151);
{ METHOD .FdChildren.Add }
Transform144.FdChildren.Add(Transform150);
{ METHOD .FdChildren.Add }
Transform141.FdChildren.Add(Transform144);
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(Transform141);
Script158 := TScriptNode.Create;
Script158.DirectOutput := True;
Script158.MustEvaluate := True;
SFFloat159 := TSFFloat.CreateUndefined(Script158, false, 'protoScale');
SFFloat159.Value := '30';
{ METHOD .Fd.AddCustomField }
Script158.AddCustomField(SFFloat159);
SFString160 := TSFString.CreateUndefined(Script158, false, 'protoParameterName');
SFString160.Value := 'a';
{ METHOD .Fd.AddCustomField }
Script158.AddCustomField(SFString160);
SFNode161 := TSFNode.CreateUndefined(Script158, false, 'shader');
{ METHOD .Fd.AddCustomField }
Script158.AddCustomField(SFNode161);
SFVec3f162 := TSFVec3f.CreateUndefined(Script158, false, 'newTranslation');
SFVec3f162.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script158.AddCustomField(SFVec3f162);
SFFloat163 := TSFFloat.CreateUndefined(Script158, false, 'protoValue_changed');
SFFloat163.Value := '1';
{ METHOD .Fd.AddCustomField }
Script158.AddCustomField(SFFloat163);
MFString164 := TMFString.CreateUndefined(Script158, false, 'protoText_changed');
MFString164.Value := '\"1.0\"';
{ METHOD .Fd.AddCustomField }
Script158.AddCustomField(MFString164);
IS165 := TIS.Create;
connect166 := Tconnect.Create;
connect166.NodeField := 'protoScale';
connect166.ProtoField := 'parameterScale';
{ METHOD .Connect }
IS165.Connect := connect166;
connect167 := Tconnect.Create;
connect167.NodeField := 'protoParameterName';
connect167.ProtoField := 'parameterName';
{ METHOD .Connect }
IS165.Connect := connect167;
connect168 := Tconnect.Create;
connect168.NodeField := 'shader';
connect168.ProtoField := 'shaderNode';
{ METHOD .Connect }
IS165.Connect := connect168;
{ METHOD .Fd.AddCustomField }
Script158.AddCustomField(IS165);

Script158.SetSourceCode('''ecmascript:\n"+
"const newTranslation = function(Value) {\n"+
"	'use strict';\\n	protoValue_changed = Value.x * protoScale;\\n	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));\n"+
"\n"+
"        var orientation = Value.x;\n"+
"\n"+
"        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");\n"+
"        var t = Browser.currentScene.getNamedNode(\"protoTransform\");\n"+
"        var txt = Browser.currentScene.getNamedNode(\"protoText\");\n"+
"        if (shader) {\n"+
"            shader.getField(protoParameterName).setValue(orientation * protoScale);\n"+
"        }\n"+
"        if (txt) {\n"+
"            var stringField = txt.getField(\"string\");\n"+
"            var label = protoParameterName;\n"+
"            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));\n"+
"        }\n"+
"        if (ps) {\n"+
"            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);\n"+
"        }\n"+
"        if (t) {\n"+
"            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);\n"+
"        }\n"+
"}''');
{ METHOD .FdChildren.Add }
Group140.FdChildren.Add(Script158);
{ Original "protoSensor.EventTranslation_changed TO protoTransform.FdTranslation.EventIn }
{ Sample protoSensor.EventTranslation_changed TO protoTransform.FdTranslation.EventIn}
Group140.AddRoute(PlaneSensor147.EventTranslation_changed, Transform144.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation }
{ Sample protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation}
Group140.AddRoute(PlaneSensor147.EventTranslation_changed, SFVec3f162);
{ METHOD .AddX3DROUTE }
{ Original "protoValueTransformerScript.EventProtoText_changed TO protoText.string }
{ Sample protoValueTransformerScript.EventProtoText_changed TO protoText.string}
Group140.AddRoute(Script158.EventProtoText_changed, Text152.string);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype139.AddChildren([Group140]);
{ METHOD .AddX3DPrototype }
X3DPrototype130.AddX3DPrototype([X3DPrototype139]);
{ METHOD .AddX3DPrototype }
LayoutLayer117.AddX3DPrototype([X3DPrototype130]);
X3DPrototype172 := TX3DPrototypeNode.Create;
SFVec3f173 := TSFVec3f.CreateUndefined(X3DPrototype172, false, 'sliderTranslation');
SFVec3f173.Value := '0 0.7 0';
{ METHOD .AddSFVec3f }
X3DPrototype172.AddSFVec3f([SFVec3f173]);
SFVec3f174 := TSFVec3f.CreateUndefined(X3DPrototype172, false, 'transformTranslation');
SFVec3f174.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype172.AddSFVec3f([SFVec3f174]);
SFVec3f175 := TSFVec3f.CreateUndefined(X3DPrototype172, false, 'sensorTranslation');
SFVec3f175.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype172.AddSFVec3f([SFVec3f175]);
MFString176 := TMFString.CreateUndefined(X3DPrototype172, false, 'textString');
MFString176.Value := '\"a=\"';
{ METHOD .AddMFString }
X3DPrototype172.AddMFString([MFString176]);
SFFloat177 := TSFFloat.CreateUndefined(X3DPrototype172, false, 'parameterScale');
SFFloat177.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype172.AddSFFloat([SFFloat177]);
SFString178 := TSFString.CreateUndefined(X3DPrototype172, false, 'parameterName');
SFString178.Value := 'a';
{ METHOD .AddSFString }
X3DPrototype172.AddSFString([SFString178]);
SFNode179 := TSFNode.CreateUndefined(X3DPrototype172, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode179.AddComposedShader([ComposedShader83]);
{ METHOD .AddSFNode }
X3DPrototype172.AddSFNode([SFNode179]);
{ METHOD .AddX3DPrototype }
LayoutLayer117.AddX3DPrototype([X3DPrototype172]);
X3DPrototype181 := TX3DPrototypeNode.Create;
SFVec3f182 := TSFVec3f.CreateUndefined(X3DPrototype181, false, 'sliderTranslation');
SFVec3f182.Value := '0 0.4 0';
{ METHOD .AddSFVec3f }
X3DPrototype181.AddSFVec3f([SFVec3f182]);
SFVec3f183 := TSFVec3f.CreateUndefined(X3DPrototype181, false, 'transformTranslation');
SFVec3f183.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype181.AddSFVec3f([SFVec3f183]);
SFVec3f184 := TSFVec3f.CreateUndefined(X3DPrototype181, false, 'sensorTranslation');
SFVec3f184.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype181.AddSFVec3f([SFVec3f184]);
MFString185 := TMFString.CreateUndefined(X3DPrototype181, false, 'textString');
MFString185.Value := '\"b=\"';
{ METHOD .AddMFString }
X3DPrototype181.AddMFString([MFString185]);
SFFloat186 := TSFFloat.CreateUndefined(X3DPrototype181, false, 'parameterScale');
SFFloat186.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype181.AddSFFloat([SFFloat186]);
SFString187 := TSFString.CreateUndefined(X3DPrototype181, false, 'parameterName');
SFString187.Value := 'b';
{ METHOD .AddSFString }
X3DPrototype181.AddSFString([SFString187]);
SFNode188 := TSFNode.CreateUndefined(X3DPrototype181, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode188.AddComposedShader([ComposedShader83]);
{ METHOD .AddSFNode }
X3DPrototype181.AddSFNode([SFNode188]);
{ METHOD .AddX3DPrototype }
LayoutLayer117.AddX3DPrototype([X3DPrototype181]);
X3DPrototype190 := TX3DPrototypeNode.Create;
SFVec3f191 := TSFVec3f.CreateUndefined(X3DPrototype190, false, 'sliderTranslation');
SFVec3f191.Value := '0 0.1 0';
{ METHOD .AddSFVec3f }
X3DPrototype190.AddSFVec3f([SFVec3f191]);
SFVec3f192 := TSFVec3f.CreateUndefined(X3DPrototype190, false, 'transformTranslation');
SFVec3f192.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype190.AddSFVec3f([SFVec3f192]);
SFVec3f193 := TSFVec3f.CreateUndefined(X3DPrototype190, false, 'sensorTranslation');
SFVec3f193.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype190.AddSFVec3f([SFVec3f193]);
MFString194 := TMFString.CreateUndefined(X3DPrototype190, false, 'textString');
MFString194.Value := '\"c=\"';
{ METHOD .AddMFString }
X3DPrototype190.AddMFString([MFString194]);
SFFloat195 := TSFFloat.CreateUndefined(X3DPrototype190, false, 'parameterScale');
SFFloat195.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype190.AddSFFloat([SFFloat195]);
SFString196 := TSFString.CreateUndefined(X3DPrototype190, false, 'parameterName');
SFString196.Value := 'c';
{ METHOD .AddSFString }
X3DPrototype190.AddSFString([SFString196]);
SFNode197 := TSFNode.CreateUndefined(X3DPrototype190, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode197.AddComposedShader([ComposedShader83]);
{ METHOD .AddSFNode }
X3DPrototype190.AddSFNode([SFNode197]);
{ METHOD .AddX3DPrototype }
LayoutLayer117.AddX3DPrototype([X3DPrototype190]);
X3DPrototype199 := TX3DPrototypeNode.Create;
SFVec3f200 := TSFVec3f.CreateUndefined(X3DPrototype199, false, 'sliderTranslation');
SFVec3f200.Value := '0 -0.2 0';
{ METHOD .AddSFVec3f }
X3DPrototype199.AddSFVec3f([SFVec3f200]);
SFVec3f201 := TSFVec3f.CreateUndefined(X3DPrototype199, false, 'transformTranslation');
SFVec3f201.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype199.AddSFVec3f([SFVec3f201]);
SFVec3f202 := TSFVec3f.CreateUndefined(X3DPrototype199, false, 'sensorTranslation');
SFVec3f202.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype199.AddSFVec3f([SFVec3f202]);
MFString203 := TMFString.CreateUndefined(X3DPrototype199, false, 'textString');
MFString203.Value := '\"d=\"';
{ METHOD .AddMFString }
X3DPrototype199.AddMFString([MFString203]);
SFFloat204 := TSFFloat.CreateUndefined(X3DPrototype199, false, 'parameterScale');
SFFloat204.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype199.AddSFFloat([SFFloat204]);
SFString205 := TSFString.CreateUndefined(X3DPrototype199, false, 'parameterName');
SFString205.Value := 'd';
{ METHOD .AddSFString }
X3DPrototype199.AddSFString([SFString205]);
SFNode206 := TSFNode.CreateUndefined(X3DPrototype199, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode206.AddComposedShader([ComposedShader83]);
{ METHOD .AddSFNode }
X3DPrototype199.AddSFNode([SFNode206]);
{ METHOD .AddX3DPrototype }
LayoutLayer117.AddX3DPrototype([X3DPrototype199]);
X3DPrototype208 := TX3DPrototypeNode.Create;
SFVec3f209 := TSFVec3f.CreateUndefined(X3DPrototype208, false, 'sliderTranslation');
SFVec3f209.Value := '0 -0.5 0';
{ METHOD .AddSFVec3f }
X3DPrototype208.AddSFVec3f([SFVec3f209]);
SFVec3f210 := TSFVec3f.CreateUndefined(X3DPrototype208, false, 'transformTranslation');
SFVec3f210.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype208.AddSFVec3f([SFVec3f210]);
SFVec3f211 := TSFVec3f.CreateUndefined(X3DPrototype208, false, 'sensorTranslation');
SFVec3f211.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype208.AddSFVec3f([SFVec3f211]);
MFString212 := TMFString.CreateUndefined(X3DPrototype208, false, 'textString');
MFString212.Value := '\"tdelta=\"';
{ METHOD .AddMFString }
X3DPrototype208.AddMFString([MFString212]);
SFFloat213 := TSFFloat.CreateUndefined(X3DPrototype208, false, 'parameterScale');
SFFloat213.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype208.AddSFFloat([SFFloat213]);
SFString214 := TSFString.CreateUndefined(X3DPrototype208, false, 'parameterName');
SFString214.Value := 'tdelta';
{ METHOD .AddSFString }
X3DPrototype208.AddSFString([SFString214]);
SFNode215 := TSFNode.CreateUndefined(X3DPrototype208, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode215.AddComposedShader([ComposedShader83]);
{ METHOD .AddSFNode }
X3DPrototype208.AddSFNode([SFNode215]);
{ METHOD .AddX3DPrototype }
LayoutLayer117.AddX3DPrototype([X3DPrototype208]);
X3DPrototype217 := TX3DPrototypeNode.Create;
SFVec3f218 := TSFVec3f.CreateUndefined(X3DPrototype217, false, 'sliderTranslation');
SFVec3f218.Value := '0 -0.8 0';
{ METHOD .AddSFVec3f }
X3DPrototype217.AddSFVec3f([SFVec3f218]);
SFVec3f219 := TSFVec3f.CreateUndefined(X3DPrototype217, false, 'transformTranslation');
SFVec3f219.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype217.AddSFVec3f([SFVec3f219]);
SFVec3f220 := TSFVec3f.CreateUndefined(X3DPrototype217, false, 'sensorTranslation');
SFVec3f220.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype217.AddSFVec3f([SFVec3f220]);
MFString221 := TMFString.CreateUndefined(X3DPrototype217, false, 'textString');
MFString221.Value := '\"pdelta=\"';
{ METHOD .AddMFString }
X3DPrototype217.AddMFString([MFString221]);
SFFloat222 := TSFFloat.CreateUndefined(X3DPrototype217, false, 'parameterScale');
SFFloat222.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype217.AddSFFloat([SFFloat222]);
SFString223 := TSFString.CreateUndefined(X3DPrototype217, false, 'parameterName');
SFString223.Value := 'pdelta';
{ METHOD .AddSFString }
X3DPrototype217.AddSFString([SFString223]);
SFNode224 := TSFNode.CreateUndefined(X3DPrototype217, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode224.AddComposedShader([ComposedShader83]);
{ METHOD .AddSFNode }
X3DPrototype217.AddSFNode([SFNode224]);
{ METHOD .AddX3DPrototype }
LayoutLayer117.AddX3DPrototype([X3DPrototype217]);
Layout226 := TLayoutNode.Create;
Layout226.SetAlign(['LEFT','BOTTOM']);
Layout226.SetOffset([-0.2,0.19]);
Layout226.SetOffsetUnits(['WORLD','WORLD']);
Layout226.SetScaleMode(['NONE','NONE']);
Layout226.SetSize([0.4,0.6]);
Layout226.SetSizeUnits(['WORLD','WORLD']);
{ METHOD .SetLayout }
LayoutLayer117.Layout := Layout226;
Viewport227 := TViewportNode.Create;
Viewport227.SetClipBoundary([0,1,0,1]);
{ METHOD .Viewport }
LayoutLayer117.Viewport := Viewport227;
{ METHOD .FdLayers.Add }
LayerSet35.FdLayers.Add(LayoutLayer117);
{ METHOD .FdChildren.Add }
Group30.FdChildren.Add(LayerSet35);
{ METHOD .AddGroup }
X3D0.AddChildren([Group30]);
end;

function Createbumpyfreewrljsonverse: TX3DRootNode;
begin
InitbumpyfreewrljsonversePart0;
InitbumpyfreewrljsonversePart1;
InitbumpyfreewrljsonversePart2;
InitbumpyfreewrljsonversePart3;
InitbumpyfreewrljsonversePart4;
InitbumpyfreewrljsonversePart5;
InitbumpyfreewrljsonversePart6;
Result := X3D0;
end;

begin
end.
