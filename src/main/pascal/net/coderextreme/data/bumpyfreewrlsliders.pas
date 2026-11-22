unit bumpyfreewrlsliders;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createbumpyfreewrlsliders: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group17: TGroupNode;
LayerSet18: TLayerSetNode;
Layer19: TLayerNode;
NavigationInfo20: TNavigationInfoNode;
DirectionalLight21: TDirectionalLightNode;
DirectionalLight22: TDirectionalLightNode;
Viewpoint23: TViewpointNode;
Group24: TGroupNode;
Transform25: TTransformNode;
Shape26: TShapeNode;
Cylinder27: TCylinderNode;
Appearance28: TAppearanceNode;
Material29: TMaterialNode;
Transform30: TTransformNode;
Shape31: TShapeNode;
Cone32: TConeNode;
Appearance33: TAppearanceNode;
Material34: TMaterialNode;
Transform35: TTransformNode;
Shape36: TShapeNode;
Cylinder37: TCylinderNode;
Appearance38: TAppearanceNode;
Material39: TMaterialNode;
Transform40: TTransformNode;
Shape41: TShapeNode;
Cone42: TConeNode;
Appearance43: TAppearanceNode;
Material44: TMaterialNode;
Transform45: TTransformNode;
Shape46: TShapeNode;
Cylinder47: TCylinderNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Transform50: TTransformNode;
Shape51: TShapeNode;
Cone52: TConeNode;
Appearance53: TAppearanceNode;
Material54: TMaterialNode;
Transform55: TTransformNode;
Background56: TBackgroundNode;
Transform57: TTransformNode;
Shape58: TShapeNode;
Sphere59: TSphereNode;
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
SFInt3270: TSFInt32;
SFVec3f71: TSFVec3f;
SFFloat72: TSFFloat;
SFFloat73: TSFFloat;
SFFloat74: TSFFloat;
SFFloat75: TSFFloat;
SFFloat76: TSFFloat;
SFFloat77: TSFFloat;
SFFloat78: TSFFloat;
SFFloat79: TSFFloat;
SFFloat80: TSFFloat;
ShaderPart81: TShaderPartNode;
IS82: TIS;
connect83: Tconnect;
ShaderPart84: TShaderPartNode;
IS85: TIS;
connect86: Tconnect;
DISEntityManager87: TDISEntityManagerNode;
DISEntityTypeMapping88: TDISEntityTypeMappingNode;
DISEntityTypeMapping89: TDISEntityTypeMappingNode;
DISEntityTypeMapping90: TDISEntityTypeMappingNode;
DISEntityTypeMapping91: TDISEntityTypeMappingNode;
Collision92: TCollisionNode;
Group93: TGroupNode;
LayoutLayer96: TLayoutLayerNode;
Transform97: TTransformNode;
Shape98: TShapeNode;
Appearance99: TAppearanceNode;
Material100: TMaterialNode;
Box101: TBoxNode;
Transform102: TTransformNode;
Transform103: TTransformNode;
Shape104: TShapeNode;
Text105: TTextNode;
FontStyle106: TFontStyleNode;
Appearance107: TAppearanceNode;
Material108: TMaterialNode;
X3DPrototype109: TX3DPrototype;
X3DInterfaceDeclaration110: TX3DInterfaceDeclaration;
SFVec3f111: TSFVec3f;
SFVec3f112: TSFVec3f;
SFVec3f113: TSFVec3f;
SFVec3f114: TSFVec3f;
MFString115: TMFString;
SFString116: TSFString;
SFFloat117: TSFFloat;
SFNode118: TSFNode;
X3DPrototype119: TX3DPrototype;
Group120: TGroupNode;
Transform121: TTransformNode;
IS122: TIS;
connect123: Tconnect;
Transform124: TTransformNode;
IS125: TIS;
connect126: Tconnect;
PlaneSensor127: TPlaneSensorNode;
Transform128: TTransformNode;
TouchSensor129: TTouchSensorNode;
Transform130: TTransformNode;
Shape131: TShapeNode;
Text132: TTextNode;
IS133: TIS;
connect134: Tconnect;
FontStyle135: TFontStyleNode;
Appearance136: TAppearanceNode;
Material137: TMaterialNode;
Transform138: TTransformNode;
IS139: TIS;
connect140: Tconnect;
Shape141: TShapeNode;
Text142: TTextNode;
FontStyle143: TFontStyleNode;
Appearance144: TAppearanceNode;
Material145: TMaterialNode;
Script146: TScriptNode;
SFFloat147: TSFFloat;
SFNode148: TSFNode;
SFVec3f149: TSFVec3f;
SFFloat150: TSFFloat;
MFString151: TMFString;
SFString152: TSFString;
IS153: TIS;
connect154: Tconnect;
connect155: Tconnect;
connect156: Tconnect;
X3DPrototype160: TX3DPrototypeNode;
SFVec3f161: TSFVec3f;
SFVec3f162: TSFVec3f;
SFVec3f163: TSFVec3f;
SFVec3f164: TSFVec3f;
MFString165: TMFString;
SFString166: TSFString;
SFFloat167: TSFFloat;
SFNode168: TSFNode;
ComposedShader169: TComposedShaderNode;
X3DPrototype170: TX3DPrototypeNode;
SFVec3f171: TSFVec3f;
SFVec3f172: TSFVec3f;
SFVec3f173: TSFVec3f;
SFVec3f174: TSFVec3f;
MFString175: TMFString;
SFString176: TSFString;
SFFloat177: TSFFloat;
SFNode178: TSFNode;
ComposedShader179: TComposedShaderNode;
X3DPrototype180: TX3DPrototypeNode;
SFVec3f181: TSFVec3f;
SFVec3f182: TSFVec3f;
SFVec3f183: TSFVec3f;
SFVec3f184: TSFVec3f;
MFString185: TMFString;
SFString186: TSFString;
SFFloat187: TSFFloat;
SFNode188: TSFNode;
ComposedShader189: TComposedShaderNode;
X3DPrototype190: TX3DPrototypeNode;
SFVec3f191: TSFVec3f;
SFVec3f192: TSFVec3f;
SFVec3f193: TSFVec3f;
SFVec3f194: TSFVec3f;
MFString195: TMFString;
SFString196: TSFString;
SFFloat197: TSFFloat;
SFNode198: TSFNode;
ComposedShader199: TComposedShaderNode;
X3DPrototype200: TX3DPrototypeNode;
SFVec3f201: TSFVec3f;
SFVec3f202: TSFVec3f;
SFVec3f203: TSFVec3f;
SFVec3f204: TSFVec3f;
MFString205: TMFString;
SFString206: TSFString;
SFFloat207: TSFFloat;
SFNode208: TSFNode;
ComposedShader209: TComposedShaderNode;
X3DPrototype210: TX3DPrototypeNode;
SFVec3f211: TSFVec3f;
SFVec3f212: TSFVec3f;
SFVec3f213: TSFVec3f;
SFVec3f214: TSFVec3f;
MFString215: TMFString;
SFString216: TSFString;
SFFloat217: TSFFloat;
SFNode218: TSFNode;
ComposedShader219: TComposedShaderNode;
Layout220: TLayoutNode;
Viewport221: TViewportNode;

procedure InitbumpyfreewrlslidersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
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
X3D0.Components['Shape'] := 4;
{ METHOD .Component }
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Components['DIS'] := 2;
{ METHOD .Component }
X3D0.Meta['title'] := 'bumpyfreewrlsliders.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Bumpy Orbitals with Sliders for FreeWRL';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := 'license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group17 := TGroupNode.Create;
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet18 := TLayerSetNode.Create;
LayerSet18.ActiveLayer := 1;
LayerSet18.SetOrder([1,2]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
{ the second layer contains the sliders that are moved with the user's display }
{ like a HUD (heads up display) }
Layer19 := TLayerNode.Create;
Layer19.Pickable := True;
Layer19.SetObjectType(['ALL']);
{ basic nodes, which might be present in any scene }
NavigationInfo20 := TNavigationInfoNode.Create;
NavigationInfo20.SetType(['EXAMINE','FLY','LOOKAT','ANY']);
NavigationInfo20.SetAvatarSize([0.25,1.75,0.75]);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(NavigationInfo20);
DirectionalLight21 := TDirectionalLightNode.Create;
DirectionalLight21.AmbientIntensity := 0.2;
DirectionalLight21.Direction := Vector3(0,-1,0);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(DirectionalLight21);
DirectionalLight22 := TDirectionalLightNode.Create;
DirectionalLight22.AmbientIntensity := 0.2;
DirectionalLight22.Direction := Vector3(-1,-0.1,-1);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(DirectionalLight22);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.Description := 'My Overview';
end;

procedure InitbumpyfreewrlslidersPart1;
begin

Viewpoint23.FieldOfView := 1.570796;
Viewpoint23.Position := Vector3(0,1.75,60);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(Viewpoint23);
{ this group contains the red/green/blue 3D crosshair }
Group24 := TGroupNode.Create;
{ Arrow X }
Transform25 := TTransformNode.Create;
Transform25.Translation := Vector3(25,0,0);
Transform25.Rotation := Vector4(0,0,-1,1.57);
Shape26 := TShapeNode.Create;
Cylinder27 := TCylinderNode.Create;
Cylinder27.Radius := 0.35;
Cylinder27.Height := 50;
{ METHOD .Geometry }
Shape26.Geometry := Cylinder27;
Appearance28 := TAppearanceNode.Create;
Material29 := TMaterialNode.Create;
Material29.DiffuseColor := Vector3(1,0,0);
Material29.EmissiveColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance28.Material := Material29;
{ METHOD .Appearance }
Shape26.Appearance := Appearance28;
{ METHOD .FdChildren.Add }
Transform25.FdChildren.Add(Shape26);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform25);
Transform30 := TTransformNode.Create;
Transform30.Translation := Vector3(50,0,0);
Transform30.Rotation := Vector4(0,0,-1,1.57);
Shape31 := TShapeNode.Create;
Cone32 := TConeNode.Create;
Cone32.BottomRadius := 0.8;
Cone32.Height := 3;
{ METHOD .Geometry }
Shape31.Geometry := Cone32;
Appearance33 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance33.Material := Material29;
{ METHOD .Appearance }
Shape31.Appearance := Appearance33;
{ METHOD .FdChildren.Add }
Transform30.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform30);
{ Arrow Y }
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(0,25,0);
Shape36 := TShapeNode.Create;
{ METHOD .Geometry }
Shape36.Geometry := Cylinder27;
Appearance38 := TAppearanceNode.Create;
Material39 := TMaterialNode.Create;
Material39.DiffuseColor := Vector3(0,1,0);
end;

procedure InitbumpyfreewrlslidersPart2;
begin

Material39.EmissiveColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance38.Material := Material39;
{ METHOD .Appearance }
Shape36.Appearance := Appearance38;
{ METHOD .FdChildren.Add }
Transform35.FdChildren.Add(Shape36);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform35);
Transform40 := TTransformNode.Create;
Transform40.Translation := Vector3(0,50,0);
Shape41 := TShapeNode.Create;
{ METHOD .Geometry }
Shape41.Geometry := Cone32;
Appearance43 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance43.Material := Material39;
{ METHOD .Appearance }
Shape41.Appearance := Appearance43;
{ METHOD .FdChildren.Add }
Transform40.FdChildren.Add(Shape41);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform40);
{ Arrow Z }
Transform45 := TTransformNode.Create;
Transform45.Translation := Vector3(0,0,25);
Transform45.Rotation := Vector4(1,0,0,1.57);
Shape46 := TShapeNode.Create;
{ METHOD .Geometry }
Shape46.Geometry := Cylinder27;
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.DiffuseColor := Vector3(0,0,1);
Material49.EmissiveColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance48.Material := Material49;
{ METHOD .Appearance }
Shape46.Appearance := Appearance48;
{ METHOD .FdChildren.Add }
Transform45.FdChildren.Add(Shape46);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform45);
Transform50 := TTransformNode.Create;
Transform50.Translation := Vector3(0,0,50);
Transform50.Rotation := Vector4(1,0,0,1.57);
Shape51 := TShapeNode.Create;
{ METHOD .Geometry }
Shape51.Geometry := Cone32;
Appearance53 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance53.Material := Material49;
{ METHOD .Appearance }
Shape51.Appearance := Appearance53;
{ METHOD .FdChildren.Add }
Transform50.FdChildren.Add(Shape51);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform50);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(Group24);
{ the model that is being reviewed by the users of this scene }
Transform55 := TTransformNode.Create;
{ <Inline DEF="Flower" url='"bumpyfreewrl.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background56 := TBackgroundNode.Create;
end;

procedure InitbumpyfreewrlslidersPart3;
begin

Background56.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background56.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background56.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background56.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background56.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background56.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Transform55.FdChildren.Add(Background56);
Transform57 := TTransformNode.Create;
Shape58 := TShapeNode.Create;
Sphere59 := TSphereNode.Create;
Sphere59.Radius := 5;
{ METHOD .Geometry }
Shape58.Geometry := Sphere59;
{ <IndexedFaceSet convex="false" DEF="Orbit" creaseAngle="0"> }
{ <Coordinate DEF="OrbitCoordinates"/> }
{ </IndexedFaceSet> }
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
SFInt3270 := TSFInt32.CreateUndefined(ComposedShader69, false, 'fw_textureCoordGenType');
end;

procedure InitbumpyfreewrlslidersPart4;
begin

SFInt3270.Value := '0';
{ METHOD .AddSFInt32 }
ComposedShader69.AddSFInt32([SFInt3270]);
SFVec3f71 := TSFVec3f.CreateUndefined(ComposedShader69, false, 'chromaticDispertion');
SFVec3f71.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader69.AddSFVec3f([SFVec3f71]);
SFFloat72 := TSFFloat.CreateUndefined(ComposedShader69, false, 'bias');
SFFloat72.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat72]);
SFFloat73 := TSFFloat.CreateUndefined(ComposedShader69, false, 'scale');
SFFloat73.Value := '0.5';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat73]);
SFFloat74 := TSFFloat.CreateUndefined(ComposedShader69, false, 'power');
SFFloat74.Value := '2';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat74]);
SFFloat75 := TSFFloat.CreateUndefined(ComposedShader69, false, 'a');
SFFloat75.Value := '15';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat75]);
SFFloat76 := TSFFloat.CreateUndefined(ComposedShader69, false, 'b');
SFFloat76.Value := '5';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat76]);
SFFloat77 := TSFFloat.CreateUndefined(ComposedShader69, false, 'c');
SFFloat77.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat77]);
SFFloat78 := TSFFloat.CreateUndefined(ComposedShader69, false, 'd');
SFFloat78.Value := '20';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat78]);
SFFloat79 := TSFFloat.CreateUndefined(ComposedShader69, false, 'tdelta');
SFFloat79.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat79]);
SFFloat80 := TSFFloat.CreateUndefined(ComposedShader69, false, 'pdelta');
SFFloat80.Value := '0';
{ METHOD .AddSFFloat }
ComposedShader69.AddSFFloat([SFFloat80]);
{ <field name='cube' type='SFNode' accessType="inputOutput"> }
{ <ComposedCubeMapTexture USE="texture"/> }
{ </field> }
ShaderPart81 := TShaderPartNode.Create;
ShaderPart81.FdType.Value := 'VERTEX';
IS82 := TIS.Create;
connect83 := Tconnect.Create;
connect83.NodeField := 'url';
connect83.ProtoField := 'vertex';
{ METHOD .Connect }
IS82.Connect := connect83;
{ METHOD .IS }
ShaderPart81.IS := IS82;
end;

procedure InitbumpyfreewrlslidersPart5;
begin

{ METHOD .Parts }
ComposedShader69.Parts := ShaderPart81;
ShaderPart84 := TShaderPartNode.Create;
ShaderPart84.FdType.Value := 'FRAGMENT';
IS85 := TIS.Create;
connect86 := Tconnect.Create;
connect86.NodeField := 'url';
connect86.ProtoField := 'fragment';
{ METHOD .Connect }
IS85.Connect := connect86;
{ METHOD .IS }
ShaderPart84.IS := IS85;
{ METHOD .Parts }
ComposedShader69.Parts := ShaderPart84;
{ METHOD .AddChildren }
Appearance60.AddChildren([ComposedShader69]);
{ <ComposedShader DEF="freewrlShader" language="GLSL"> }
{ <field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field> }
{ <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> }
{ <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> }
{ <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='a' type='SFFloat' accessType='inputOutput' value='15'></field> }
{ <field name='b' type='SFFloat' accessType='inputOutput' value='5'></field> }
{ <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> }
{ <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <ShaderPart type='VERTEX'> }
{ <IS> }
{ <connect nodeField="url" protoField="vertex"/> }
{ </IS> }
{ </ShaderPart> }
{ <ShaderPart type='FRAGMENT'> }
{ <IS> }
{ <connect nodeField="url" protoField="fragment"/> }
{ </IS> }
{ </ShaderPart> }
{ </ComposedShader> }
{ METHOD .Appearance }
Shape58.Appearance := Appearance60;
{ METHOD .FdChildren.Add }
Transform57.FdChildren.Add(Shape58);
{ METHOD .FdChildren.Add }
Transform55.FdChildren.Add(Transform57);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(Transform55);
{ <Script DEF="OrbitScript"> }
{ <field accessType="inputOutput" name="coordinates" type="MFVec3f"/> }
{ <field accessType="outputOnly" name="coordIndexes" type="MFInt32"/> }
{ <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> }
{ <field name='b' type='SFFloat' accessType='inputOutput' value='10'></field> }
{ <field name='c' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='d' type='SFFloat' accessType='inputOutput' value='2'></field> }
{ <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
{ <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> }
(* <![CDATA[ecmascript: function initialize() { var resolution = 300; var theta = 0.0; var phi = 0.0; var delta = (2 * 3.141592653) / (resolution-1); var crds = new MFVec3f(); for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; } coordinates = crds; var cis = new MFInt32(); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = cis; } ]]></Script> *)
{ <ROUTE fromField="coordIndexes" fromNode="OrbitScript" toField="set_coordIndex" toNode="Orbit"/> }
{ <ROUTE fromField="coordinates" fromNode="OrbitScript" toField="set_point" toNode="OrbitCoordinates"/> }
{ DIS multiuser facilities }
DISEntityManager87 := TDISEntityManagerNode.Create;
DISEntityTypeMapping88 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping88.Category := 77;
DISEntityTypeMapping88.Specific := 1;
DISEntityTypeMapping88.SetUrl(['../data/Leif8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager87.FdChildren.Add(DISEntityTypeMapping88);
DISEntityTypeMapping89 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping89.Category := 77;
DISEntityTypeMapping89.Specific := 2;
DISEntityTypeMapping89.SetUrl(['../data/Lily8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager87.FdChildren.Add(DISEntityTypeMapping89);
DISEntityTypeMapping90 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping90.Category := 77;
DISEntityTypeMapping90.Specific := 3;
DISEntityTypeMapping90.SetUrl(['../data/Tufani8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager87.FdChildren.Add(DISEntityTypeMapping90);
DISEntityTypeMapping91 := TDISEntityTypeMappingNode.Create;
DISEntityTypeMapping91.Category := 77;
DISEntityTypeMapping91.Specific := 4;
DISEntityTypeMapping91.SetUrl(['../data/Gramps8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager87.FdChildren.Add(DISEntityTypeMapping91);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(DISEntityManager87);
Collision92 := TCollisionNode.Create;
Group93 := TGroupNode.Create;
{ METHOD .Proxy }
Collision92.Proxy := Group93;
end;

procedure InitbumpyfreewrlslidersPart6;
begin

{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(Collision92);
{ Original "EntityManager.EventAddedEntities TO AvatarHolder.addChildren }
{ Sample EntityManager.EventAddedEntities TO AvatarHolder.addChildren}
Layer19.AddRoute(DISEntityManager87.EventAddedEntities, Group93.set_addChildren);
{ METHOD .AddX3DROUTE }
{ Original "EntityManager.EventRemovedEntities TO AvatarHolder.removeChildren }
{ Sample EntityManager.EventRemovedEntities TO AvatarHolder.removeChildren}
Layer19.AddRoute(DISEntityManager87.EventRemovedEntities, Group93.set_removeChildren);
{ METHOD .AddX3DROUTE }
{ METHOD .FdLayers.Add }
LayerSet18.FdLayers.Add(Layer19);
LayoutLayer96 := TLayoutLayerNode.Create;
LayoutLayer96.Pickable := True;
LayoutLayer96.SetObjectType(['ALL']);
{ positioning the LayoutLayer }
{ clipping the LayoutLayer }
{ the content (children) of the LayoutLayer }
{ first, the slider for scaling the model }
Transform97 := TTransformNode.Create;
Transform97.Translation := Vector3(0,0,-3);
Shape98 := TShapeNode.Create;
Appearance99 := TAppearanceNode.Create;
Material100 := TMaterialNode.Create;
Material100.DiffuseColor := Vector3(0.1,0.1,0.1);
Material100.Transparency := 1;
{ METHOD .SetMaterial }
Appearance99.Material := Material100;
{ METHOD .Appearance }
Shape98.Appearance := Appearance99;
Box101 := TBoxNode.Create;
Box101.Size := Vector3(100,100,0.02);
{ METHOD .Geometry }
Shape98.Geometry := Box101;
{ METHOD .FdChildren.Add }
Transform97.FdChildren.Add(Shape98);
{ METHOD .FdChildren.Add }
LayoutLayer96.FdChildren.Add(Transform97);
Transform102 := TTransformNode.Create;
Transform103 := TTransformNode.Create;
Transform103.Translation := Vector3(0,0,-20);
Shape104 := TShapeNode.Create;
Text105 := TTextNode.Create;
Text105.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle106 := TFontStyleNode.Create;
FontStyle106.Size := 0.09;
{ METHOD .FontStyle }
Text105.FontStyle := FontStyle106;
{ METHOD .Geometry }
Shape104.Geometry := Text105;
Appearance107 := TAppearanceNode.Create;
Material108 := TMaterialNode.Create;
Material108.DiffuseColor := Vector3(0,1,1);
{ METHOD .SetMaterial }
Appearance107.Material := Material108;
{ METHOD .Appearance }
Shape104.Appearance := Appearance107;
{ METHOD .FdChildren.Add }
Transform103.FdChildren.Add(Shape104);
{ METHOD .FdChildren.Add }
Transform102.FdChildren.Add(Transform103);
{ METHOD .FdChildren.Add }
LayoutLayer96.FdChildren.Add(Transform102);
X3DPrototype109 := TX3DPrototype.Create;
end;

procedure InitbumpyfreewrlslidersPart7;
begin

X3DInterfaceDeclaration110 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f111 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration110, false, 'sliderTranslation');
SFVec3f111.Value := '0 0.7 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration110.AddSFVec3f([SFVec3f111]);
SFVec3f112 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration110, false, 'transformTranslation');
SFVec3f112.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration110.AddSFVec3f([SFVec3f112]);
SFVec3f113 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration110, false, 'sensorTranslation');
SFVec3f113.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration110.AddSFVec3f([SFVec3f113]);
SFVec3f114 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration110, false, 'numberTranslation');
SFVec3f114.Value := '0.2 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration110.AddSFVec3f([SFVec3f114]);
MFString115 := TMFString.CreateUndefined(X3DInterfaceDeclaration110, false, 'textString');
MFString115.Value := '\"a=\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration110.AddMFString([MFString115]);
SFString116 := TSFString.CreateUndefined(X3DInterfaceDeclaration110, false, 'parameterName');
SFString116.Value := 'a';
{ METHOD .AddSFString }
X3DInterfaceDeclaration110.AddSFString([SFString116]);
SFFloat117 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration110, false, 'parameterScale');
SFFloat117.Value := '30';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration110.AddSFFloat([SFFloat117]);
SFNode118 := TSFNode.CreateUndefined(X3DInterfaceDeclaration110, false, 'shaderNode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration110.AddSFNode([SFNode118]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype109.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration110]);
X3DPrototype119 := TX3DPrototype.Create;
Group120 := TGroupNode.Create;
Transform121 := TTransformNode.Create;
Transform121.Translation := Vector3(0,0.7,0);
IS122 := TIS.Create;
connect123 := Tconnect.Create;
connect123.NodeField := 'translation';
connect123.ProtoField := 'sliderTranslation';
{ METHOD .Connect }
IS122.Connect := connect123;
{ METHOD .IS }
Transform121.IS := IS122;
Transform124 := TTransformNode.Create;
Transform124.Translation := Vector3(0,0,0.1);
IS125 := TIS.Create;
connect126 := Tconnect.Create;
connect126.NodeField := 'translation';
end;

procedure InitbumpyfreewrlslidersPart8;
begin

connect126.ProtoField := 'sensorTranslation';
{ METHOD .Connect }
IS125.Connect := connect126;
{ METHOD .IS }
Transform124.IS := IS125;
PlaneSensor127 := TPlaneSensorNode.Create;
PlaneSensor127.MaxPosition := Vector2(2,0);
{ METHOD .FdChildren.Add }
Transform124.FdChildren.Add(PlaneSensor127);
Transform128 := TTransformNode.Create;
Transform128.Translation := Vector3(0,0,0);
TouchSensor129 := TTouchSensorNode.Create;
{ METHOD .FdChildren.Add }
Transform128.FdChildren.Add(TouchSensor129);
{ METHOD .FdChildren.Add }
Transform124.FdChildren.Add(Transform128);
Transform130 := TTransformNode.Create;
Shape131 := TShapeNode.Create;
Text132 := TTextNode.Create;
Text132.SetText(['a=']);
IS133 := TIS.Create;
connect134 := Tconnect.Create;
connect134.NodeField := 'string';
connect134.ProtoField := 'textString';
{ METHOD .Connect }
IS133.Connect := connect134;
{ METHOD .IS }
Text132.IS := IS133;
FontStyle135 := TFontStyleNode.Create;
FontStyle135.Size := 0.2;
{ METHOD .FontStyle }
Text132.FontStyle := FontStyle135;
{ METHOD .Geometry }
Shape131.Geometry := Text132;
Appearance136 := TAppearanceNode.Create;
Material137 := TMaterialNode.Create;
Material137.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance136.Material := Material137;
{ METHOD .Appearance }
Shape131.Appearance := Appearance136;
{ METHOD .FdChildren.Add }
Transform130.FdChildren.Add(Shape131);
Transform138 := TTransformNode.Create;
IS139 := TIS.Create;
connect140 := Tconnect.Create;
connect140.NodeField := 'translation';
connect140.ProtoField := 'numberTranslation';
{ METHOD .Connect }
IS139.Connect := connect140;
{ METHOD .IS }
Transform138.IS := IS139;
Shape141 := TShapeNode.Create;
Text142 := TTextNode.Create;
end;

procedure InitbumpyfreewrlslidersPart9;
begin

Text142.SetText(['0']);
FontStyle143 := TFontStyleNode.Create;
FontStyle143.Size := 0.2;
{ METHOD .FontStyle }
Text142.FontStyle := FontStyle143;
{ METHOD .Geometry }
Shape141.Geometry := Text142;
Appearance144 := TAppearanceNode.Create;
Material145 := TMaterialNode.Create;
Material145.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance144.Material := Material145;
{ METHOD .Appearance }
Shape141.Appearance := Appearance144;
{ METHOD .FdChildren.Add }
Transform138.FdChildren.Add(Shape141);
{ METHOD .FdChildren.Add }
Transform130.FdChildren.Add(Transform138);
{ METHOD .FdChildren.Add }
Transform124.FdChildren.Add(Transform130);
{ METHOD .FdChildren.Add }
Transform121.FdChildren.Add(Transform124);
{ METHOD .FdChildren.Add }
Group120.FdChildren.Add(Transform121);
Script146 := TScriptNode.Create;
Script146.DirectOutput := True;
Script146.MustEvaluate := True;
SFFloat147 := TSFFloat.CreateUndefined(Script146, false, 'protoScale');
SFFloat147.Value := '30';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFFloat147);
SFNode148 := TSFNode.CreateUndefined(Script146, false, 'shader');
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFNode148);
SFVec3f149 := TSFVec3f.CreateUndefined(Script146, false, 'newTranslation');
SFVec3f149.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFVec3f149);
SFFloat150 := TSFFloat.CreateUndefined(Script146, false, 'protoValue_changed');
SFFloat150.Value := '1';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFFloat150);
MFString151 := TMFString.CreateUndefined(Script146, false, 'protoNumber_changed');
MFString151.Value := '\"0.0\"';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(MFString151);
SFString152 := TSFString.CreateUndefined(Script146, false, 'protoParameterName');
SFString152.Value := 'a';
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(SFString152);
IS153 := TIS.Create;
connect154 := Tconnect.Create;
connect154.NodeField := 'protoScale';
connect154.ProtoField := 'parameterScale';
{ METHOD .Connect }
IS153.Connect := connect154;
end;

procedure InitbumpyfreewrlslidersPart10;
begin

connect155 := Tconnect.Create;
connect155.NodeField := 'protoParameterName';
connect155.ProtoField := 'parameterName';
{ METHOD .Connect }
IS153.Connect := connect155;
connect156 := Tconnect.Create;
connect156.NodeField := 'shader';
connect156.ProtoField := 'shaderNode';
{ METHOD .Connect }
IS153.Connect := connect156;
{ METHOD .Fd.AddCustomField }
Script146.AddCustomField(IS153);

Script146.SetSourceCode('''ecmascript:\n"+
"	const newTranslation = function(Value) {\n"+
"	    protoValue_changed = Value[0] * protoScale;\n"+
"	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());\n"+
"	    Browser.println(\"In newTranslation:\");\n"+
"	    Browser.println(shader);\n"+
"	    Browser.println(Value[0]);\n"+
"	    Browser.println(Value.x);\n"+
"	    Browser.println(protoScale);\n"+
"	    Browser.println(Value[0] * protoScale);\n"+
"	    Browser.println(protoParameterName);\n"+
"					// shader[protoParameterName] = Value[0] * protoScale;\n"+
"	};''');
{ METHOD .FdChildren.Add }
Group120.FdChildren.Add(Script146);
{ Original "protoSensor.EventTranslation_changed TO protoTransform.EventSet_translation }
{ Sample protoSensor.EventTranslation_changed TO protoTransform.EventSet_translation}
Group120.AddRoute(PlaneSensor127.EventTranslation_changed, Transform124.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation }
{ Sample protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation}
Group120.AddRoute(PlaneSensor127.EventTranslation_changed, SFVec3f149);
{ METHOD .AddX3DROUTE }
{ Original "protoValueTransformerScript.EventProtoNumber_changed TO protoNumber.string }
{ Sample protoValueTransformerScript.EventProtoNumber_changed TO protoNumber.string}
Group120.AddRoute(Script146.EventProtoNumber_changed, Text142.set_string);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype119.AddChildren([Group120]);
{ METHOD .AddX3DPrototype }
X3DPrototype109.AddX3DPrototype([X3DPrototype119]);
{ METHOD .AddX3DPrototype }
LayoutLayer96.AddX3DPrototype([X3DPrototype109]);
X3DPrototype160 := TX3DPrototypeNode.Create;
SFVec3f161 := TSFVec3f.CreateUndefined(X3DPrototype160, false, 'sliderTranslation');
SFVec3f161.Value := '0 0.7 0';
{ METHOD .AddSFVec3f }
X3DPrototype160.AddSFVec3f([SFVec3f161]);
SFVec3f162 := TSFVec3f.CreateUndefined(X3DPrototype160, false, 'transformTranslation');
SFVec3f162.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype160.AddSFVec3f([SFVec3f162]);
SFVec3f163 := TSFVec3f.CreateUndefined(X3DPrototype160, false, 'sensorTranslation');
SFVec3f163.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype160.AddSFVec3f([SFVec3f163]);
SFVec3f164 := TSFVec3f.CreateUndefined(X3DPrototype160, false, 'numberTranslation');
SFVec3f164.Value := '0.3 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype160.AddSFVec3f([SFVec3f164]);
MFString165 := TMFString.CreateUndefined(X3DPrototype160, false, 'textString');
MFString165.Value := '\"a=\"';
{ METHOD .AddMFString }
X3DPrototype160.AddMFString([MFString165]);
SFString166 := TSFString.CreateUndefined(X3DPrototype160, false, 'parameterName');
SFString166.Value := 'a';
{ METHOD .AddSFString }
X3DPrototype160.AddSFString([SFString166]);
SFFloat167 := TSFFloat.CreateUndefined(X3DPrototype160, false, 'parameterScale');
SFFloat167.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype160.AddSFFloat([SFFloat167]);
SFNode168 := TSFNode.CreateUndefined(X3DPrototype160, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode168.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype160.AddSFNode([SFNode168]);
{ METHOD .AddX3DPrototype }
LayoutLayer96.AddX3DPrototype([X3DPrototype160]);
X3DPrototype170 := TX3DPrototypeNode.Create;
SFVec3f171 := TSFVec3f.CreateUndefined(X3DPrototype170, false, 'sliderTranslation');
SFVec3f171.Value := '0 0.4 0';
{ METHOD .AddSFVec3f }
X3DPrototype170.AddSFVec3f([SFVec3f171]);
SFVec3f172 := TSFVec3f.CreateUndefined(X3DPrototype170, false, 'transformTranslation');
SFVec3f172.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype170.AddSFVec3f([SFVec3f172]);
SFVec3f173 := TSFVec3f.CreateUndefined(X3DPrototype170, false, 'sensorTranslation');
SFVec3f173.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype170.AddSFVec3f([SFVec3f173]);
SFVec3f174 := TSFVec3f.CreateUndefined(X3DPrototype170, false, 'numberTranslation');
SFVec3f174.Value := '0.3 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype170.AddSFVec3f([SFVec3f174]);
MFString175 := TMFString.CreateUndefined(X3DPrototype170, false, 'textString');
MFString175.Value := '\"b=\"';
{ METHOD .AddMFString }
X3DPrototype170.AddMFString([MFString175]);
SFString176 := TSFString.CreateUndefined(X3DPrototype170, false, 'parameterName');
SFString176.Value := 'b';
{ METHOD .AddSFString }
X3DPrototype170.AddSFString([SFString176]);
SFFloat177 := TSFFloat.CreateUndefined(X3DPrototype170, false, 'parameterScale');
SFFloat177.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype170.AddSFFloat([SFFloat177]);
SFNode178 := TSFNode.CreateUndefined(X3DPrototype170, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode178.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype170.AddSFNode([SFNode178]);
{ METHOD .AddX3DPrototype }
LayoutLayer96.AddX3DPrototype([X3DPrototype170]);
X3DPrototype180 := TX3DPrototypeNode.Create;
SFVec3f181 := TSFVec3f.CreateUndefined(X3DPrototype180, false, 'sliderTranslation');
SFVec3f181.Value := '0 0.1 0';
{ METHOD .AddSFVec3f }
X3DPrototype180.AddSFVec3f([SFVec3f181]);
SFVec3f182 := TSFVec3f.CreateUndefined(X3DPrototype180, false, 'transformTranslation');
SFVec3f182.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype180.AddSFVec3f([SFVec3f182]);
SFVec3f183 := TSFVec3f.CreateUndefined(X3DPrototype180, false, 'sensorTranslation');
SFVec3f183.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype180.AddSFVec3f([SFVec3f183]);
SFVec3f184 := TSFVec3f.CreateUndefined(X3DPrototype180, false, 'numberTranslation');
SFVec3f184.Value := '0.3 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype180.AddSFVec3f([SFVec3f184]);
MFString185 := TMFString.CreateUndefined(X3DPrototype180, false, 'textString');
MFString185.Value := '\"c=\"';
{ METHOD .AddMFString }
X3DPrototype180.AddMFString([MFString185]);
SFString186 := TSFString.CreateUndefined(X3DPrototype180, false, 'parameterName');
SFString186.Value := 'c';
{ METHOD .AddSFString }
X3DPrototype180.AddSFString([SFString186]);
SFFloat187 := TSFFloat.CreateUndefined(X3DPrototype180, false, 'parameterScale');
SFFloat187.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype180.AddSFFloat([SFFloat187]);
SFNode188 := TSFNode.CreateUndefined(X3DPrototype180, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode188.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype180.AddSFNode([SFNode188]);
{ METHOD .AddX3DPrototype }
LayoutLayer96.AddX3DPrototype([X3DPrototype180]);
X3DPrototype190 := TX3DPrototypeNode.Create;
SFVec3f191 := TSFVec3f.CreateUndefined(X3DPrototype190, false, 'sliderTranslation');
SFVec3f191.Value := '0 -0.2 0';
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
SFVec3f194 := TSFVec3f.CreateUndefined(X3DPrototype190, false, 'numberTranslation');
SFVec3f194.Value := '0.3 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype190.AddSFVec3f([SFVec3f194]);
MFString195 := TMFString.CreateUndefined(X3DPrototype190, false, 'textString');
MFString195.Value := '\"d=\"';
{ METHOD .AddMFString }
X3DPrototype190.AddMFString([MFString195]);
SFString196 := TSFString.CreateUndefined(X3DPrototype190, false, 'parameterName');
SFString196.Value := 'd';
{ METHOD .AddSFString }
X3DPrototype190.AddSFString([SFString196]);
SFFloat197 := TSFFloat.CreateUndefined(X3DPrototype190, false, 'parameterScale');
SFFloat197.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype190.AddSFFloat([SFFloat197]);
SFNode198 := TSFNode.CreateUndefined(X3DPrototype190, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode198.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype190.AddSFNode([SFNode198]);
{ METHOD .AddX3DPrototype }
LayoutLayer96.AddX3DPrototype([X3DPrototype190]);
X3DPrototype200 := TX3DPrototypeNode.Create;
SFVec3f201 := TSFVec3f.CreateUndefined(X3DPrototype200, false, 'sliderTranslation');
SFVec3f201.Value := '0 -0.5 0';
{ METHOD .AddSFVec3f }
X3DPrototype200.AddSFVec3f([SFVec3f201]);
SFVec3f202 := TSFVec3f.CreateUndefined(X3DPrototype200, false, 'transformTranslation');
SFVec3f202.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype200.AddSFVec3f([SFVec3f202]);
SFVec3f203 := TSFVec3f.CreateUndefined(X3DPrototype200, false, 'sensorTranslation');
SFVec3f203.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype200.AddSFVec3f([SFVec3f203]);
SFVec3f204 := TSFVec3f.CreateUndefined(X3DPrototype200, false, 'numberTranslation');
SFVec3f204.Value := '0.8 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype200.AddSFVec3f([SFVec3f204]);
MFString205 := TMFString.CreateUndefined(X3DPrototype200, false, 'textString');
MFString205.Value := '\"tdelta=\"';
{ METHOD .AddMFString }
X3DPrototype200.AddMFString([MFString205]);
SFString206 := TSFString.CreateUndefined(X3DPrototype200, false, 'parameterName');
SFString206.Value := 'tdelta';
{ METHOD .AddSFString }
X3DPrototype200.AddSFString([SFString206]);
SFFloat207 := TSFFloat.CreateUndefined(X3DPrototype200, false, 'parameterScale');
SFFloat207.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype200.AddSFFloat([SFFloat207]);
SFNode208 := TSFNode.CreateUndefined(X3DPrototype200, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode208.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype200.AddSFNode([SFNode208]);
{ METHOD .AddX3DPrototype }
LayoutLayer96.AddX3DPrototype([X3DPrototype200]);
X3DPrototype210 := TX3DPrototypeNode.Create;
SFVec3f211 := TSFVec3f.CreateUndefined(X3DPrototype210, false, 'sliderTranslation');
SFVec3f211.Value := '0 -0.8 0';
{ METHOD .AddSFVec3f }
X3DPrototype210.AddSFVec3f([SFVec3f211]);
SFVec3f212 := TSFVec3f.CreateUndefined(X3DPrototype210, false, 'transformTranslation');
SFVec3f212.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype210.AddSFVec3f([SFVec3f212]);
SFVec3f213 := TSFVec3f.CreateUndefined(X3DPrototype210, false, 'sensorTranslation');
SFVec3f213.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype210.AddSFVec3f([SFVec3f213]);
SFVec3f214 := TSFVec3f.CreateUndefined(X3DPrototype210, false, 'numberTranslation');
SFVec3f214.Value := '0.8 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype210.AddSFVec3f([SFVec3f214]);
MFString215 := TMFString.CreateUndefined(X3DPrototype210, false, 'textString');
MFString215.Value := '\"pdelta=\"';
{ METHOD .AddMFString }
X3DPrototype210.AddMFString([MFString215]);
SFString216 := TSFString.CreateUndefined(X3DPrototype210, false, 'parameterName');
SFString216.Value := 'pdelta';
{ METHOD .AddSFString }
X3DPrototype210.AddSFString([SFString216]);
SFFloat217 := TSFFloat.CreateUndefined(X3DPrototype210, false, 'parameterScale');
SFFloat217.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype210.AddSFFloat([SFFloat217]);
SFNode218 := TSFNode.CreateUndefined(X3DPrototype210, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode218.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype210.AddSFNode([SFNode218]);
{ METHOD .AddX3DPrototype }
LayoutLayer96.AddX3DPrototype([X3DPrototype210]);
Layout220 := TLayoutNode.Create;
Layout220.SetAlign(['LEFT','BOTTOM']);
Layout220.SetOffset([-0.5,0]);
{ METHOD .SetLayout }
LayoutLayer96.Layout := Layout220;
Viewport221 := TViewportNode.Create;
{ METHOD .Viewport }
LayoutLayer96.Viewport := Viewport221;
{ METHOD .FdLayers.Add }
LayerSet18.FdLayers.Add(LayoutLayer96);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(LayerSet18);
{ METHOD .AddGroup }
X3D0.AddChildren([Group17]);
end;

function Createbumpyfreewrlsliders: TX3DRootNode;
begin
InitbumpyfreewrlslidersPart0;
InitbumpyfreewrlslidersPart1;
InitbumpyfreewrlslidersPart2;
InitbumpyfreewrlslidersPart3;
InitbumpyfreewrlslidersPart4;
InitbumpyfreewrlslidersPart5;
InitbumpyfreewrlslidersPart6;
InitbumpyfreewrlslidersPart7;
InitbumpyfreewrlslidersPart8;
InitbumpyfreewrlslidersPart9;
InitbumpyfreewrlslidersPart10;
Result := X3D0;
end;

begin
end.
