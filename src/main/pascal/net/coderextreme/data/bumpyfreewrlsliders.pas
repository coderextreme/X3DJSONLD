unit bumpyfreewrlsliders;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
ShaderPart83: TShaderPartNode;
DISEntityManager85: TDISEntityManagerNode;
DISEntityTypeMapping86: TDISEntityTypeMappingNode;
DISEntityTypeMapping87: TDISEntityTypeMappingNode;
DISEntityTypeMapping88: TDISEntityTypeMappingNode;
DISEntityTypeMapping89: TDISEntityTypeMappingNode;
Collision90: TCollisionNode;
Group91: TGroupNode;
LayoutLayer94: TLayoutLayerNode;
Transform95: TTransformNode;
Shape96: TShapeNode;
Appearance97: TAppearanceNode;
Material98: TMaterialNode;
Box99: TBoxNode;
Transform100: TTransformNode;
Transform101: TTransformNode;
Shape102: TShapeNode;
Text103: TTextNode;
FontStyle104: TFontStyleNode;
Appearance105: TAppearanceNode;
Material106: TMaterialNode;
X3DPrototype107: TX3DPrototype;
X3DInterfaceDeclaration108: TX3DInterfaceDeclaration;
SFVec3f109: TSFVec3f;
SFVec3f110: TSFVec3f;
SFVec3f111: TSFVec3f;
SFVec3f112: TSFVec3f;
MFString113: TMFString;
SFString114: TSFString;
SFFloat115: TSFFloat;
SFNode116: TSFNode;
X3DPrototype117: TX3DPrototype;
Group118: TGroupNode;
Transform119: TTransformNode;
Transform121: TTransformNode;
PlaneSensor123: TPlaneSensorNode;
Transform124: TTransformNode;
TouchSensor125: TTouchSensorNode;
Transform126: TTransformNode;
Shape127: TShapeNode;
Text128: TTextNode;
FontStyle130: TFontStyleNode;
Appearance131: TAppearanceNode;
Material132: TMaterialNode;
Transform133: TTransformNode;
Shape135: TShapeNode;
Text136: TTextNode;
FontStyle137: TFontStyleNode;
Appearance138: TAppearanceNode;
Material139: TMaterialNode;
Script140: TScriptNode;
SFFloat141: TSFFloat;
SFNode142: TSFNode;
SFVec3f143: TSFVec3f;
SFFloat144: TSFFloat;
MFString145: TMFString;
SFString146: TSFString;
X3DPrototype151: TX3DPrototypeNode;
SFVec3f152: TSFVec3f;
SFVec3f153: TSFVec3f;
SFVec3f154: TSFVec3f;
SFVec3f155: TSFVec3f;
MFString156: TMFString;
SFString157: TSFString;
SFFloat158: TSFFloat;
SFNode159: TSFNode;
ComposedShader160: TComposedShaderNode;
X3DPrototype161: TX3DPrototypeNode;
SFVec3f162: TSFVec3f;
SFVec3f163: TSFVec3f;
SFVec3f164: TSFVec3f;
SFVec3f165: TSFVec3f;
MFString166: TMFString;
SFString167: TSFString;
SFFloat168: TSFFloat;
SFNode169: TSFNode;
ComposedShader170: TComposedShaderNode;
X3DPrototype171: TX3DPrototypeNode;
SFVec3f172: TSFVec3f;
SFVec3f173: TSFVec3f;
SFVec3f174: TSFVec3f;
SFVec3f175: TSFVec3f;
MFString176: TMFString;
SFString177: TSFString;
SFFloat178: TSFFloat;
SFNode179: TSFNode;
ComposedShader180: TComposedShaderNode;
X3DPrototype181: TX3DPrototypeNode;
SFVec3f182: TSFVec3f;
SFVec3f183: TSFVec3f;
SFVec3f184: TSFVec3f;
SFVec3f185: TSFVec3f;
MFString186: TMFString;
SFString187: TSFString;
SFFloat188: TSFFloat;
SFNode189: TSFNode;
ComposedShader190: TComposedShaderNode;
X3DPrototype191: TX3DPrototypeNode;
SFVec3f192: TSFVec3f;
SFVec3f193: TSFVec3f;
SFVec3f194: TSFVec3f;
SFVec3f195: TSFVec3f;
MFString196: TMFString;
SFString197: TSFString;
SFFloat198: TSFFloat;
SFNode199: TSFNode;
ComposedShader200: TComposedShaderNode;
X3DPrototype201: TX3DPrototypeNode;
SFVec3f202: TSFVec3f;
SFVec3f203: TSFVec3f;
SFVec3f204: TSFVec3f;
SFVec3f205: TSFVec3f;
MFString206: TMFString;
SFString207: TSFString;
SFFloat208: TSFFloat;
SFNode209: TSFNode;
ComposedShader210: TComposedShaderNode;
Layout211: TLayoutNode;
Viewport212: TViewportNode;

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
Group17 := TGroupNode.Create;;
{ LayerSet with two layers, navigation happens in layer 1 }
LayerSet18 := TLayerSetNode.Create;;
LayerSet18.ActiveLayer := 1;
LayerSet18.SetOrder([1,2]);
{ the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)" }
{ the second layer contains the sliders that are moved with the user's display }
{ like a HUD (heads up display) }
Layer19 := TLayerNode.Create;;
Layer19.Pickable := True;
Layer19.SetObjectType(['ALL']);
{ basic nodes, which might be present in any scene }
NavigationInfo20 := TNavigationInfoNode.Create;;
NavigationInfo20.SetType(['EXAMINE','FLY','LOOKAT','ANY']);
NavigationInfo20.SetAvatarSize([0.25,1.75,0.75]);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(NavigationInfo20);
DirectionalLight21 := TDirectionalLightNode.Create;;
DirectionalLight21.AmbientIntensity := 0.2;
DirectionalLight21.Direction := Vector3(0,-1,0);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(DirectionalLight21);
DirectionalLight22 := TDirectionalLightNode.Create;
end;

procedure InitbumpyfreewrlslidersPart1;
begin
;
DirectionalLight22.AmbientIntensity := 0.2;
DirectionalLight22.Direction := Vector3(-1,-0.1,-1);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(DirectionalLight22);
Viewpoint23 := TViewpointNode.Create;;
Viewpoint23.Description := 'My Overview';
Viewpoint23.FieldOfView := 1.570796;
Viewpoint23.Position := Vector3(0,1.75,60);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(Viewpoint23);
{ this group contains the red/green/blue 3D crosshair }
Group24 := TGroupNode.Create;;
{ Arrow X }
Transform25 := TTransformNode.Create;;
Transform25.Translation := Vector3(25,0,0);
Transform25.Rotation := Vector4(0,0,-1,1.57);
Shape26 := TShapeNode.Create;;
Cylinder27 := TCylinderNode.Create;;
Cylinder27.Radius := 0.35;
Cylinder27.Height := 50;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape26.Geometry := Cylinder27;
Appearance28 := TAppearanceNode.Create;;
Material29 := TMaterialNode.Create;;
Material29.DiffuseColor := Vector3(1,0,0);
Material29.EmissiveColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance28.Material := Material29;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape26.Appearance := Appearance28;
{ METHOD .FdChildren.Add }
Transform25.FdChildren.Add(Shape26);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform25);
Transform30 := TTransformNode.Create;;
Transform30.Translation := Vector3(50,0,0);
Transform30.Rotation := Vector4(0,0,-1,1.57);
Shape31 := TShapeNode.Create;;
Cone32 := TConeNode.Create;
end;

procedure InitbumpyfreewrlslidersPart2;
begin
;
Cone32.BottomRadius := 0.8;
Cone32.Height := 3;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape31.Geometry := Cone32;
Appearance33 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance33.Material := Material29;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape31.Appearance := Appearance33;
{ METHOD .FdChildren.Add }
Transform30.FdChildren.Add(Shape31);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform30);
{ Arrow Y }
Transform35 := TTransformNode.Create;;
Transform35.Translation := Vector3(0,25,0);
Shape36 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape36.Geometry := Cylinder27;
Appearance38 := TAppearanceNode.Create;;
Material39 := TMaterialNode.Create;;
Material39.DiffuseColor := Vector3(0,1,0);
Material39.EmissiveColor := Vector3(0,1,0);
{ METHOD .SetMaterial }
Appearance38.Material := Material39;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape36.Appearance := Appearance38;
{ METHOD .FdChildren.Add }
Transform35.FdChildren.Add(Shape36);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform35);
Transform40 := TTransformNode.Create;;
Transform40.Translation := Vector3(0,50,0);
Shape41 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape41.Geometry := Cone32;
Appearance43 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance43.Material := Material39;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape41.Appearance := Appearance43;
{ METHOD .FdChildren.Add }
Transform40.FdChildren.Add(Shape41);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform40);
{ Arrow Z }
Transform45 := TTransformNode.Create;;
end;

procedure InitbumpyfreewrlslidersPart3;
begin

Transform45.Translation := Vector3(0,0,25);
Transform45.Rotation := Vector4(1,0,0,1.57);
Shape46 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape46.Geometry := Cylinder27;
Appearance48 := TAppearanceNode.Create;;
Material49 := TMaterialNode.Create;;
Material49.DiffuseColor := Vector3(0,0,1);
Material49.EmissiveColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance48.Material := Material49;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape46.Appearance := Appearance48;
{ METHOD .FdChildren.Add }
Transform45.FdChildren.Add(Shape46);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform45);
Transform50 := TTransformNode.Create;;
Transform50.Translation := Vector3(0,0,50);
Transform50.Rotation := Vector4(1,0,0,1.57);
Shape51 := TShapeNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape51.Geometry := Cone32;
Appearance53 := TAppearanceNode.Create;;
{ METHOD .SetMaterial }
Appearance53.Material := Material49;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape51.Appearance := Appearance53;
{ METHOD .FdChildren.Add }
Transform50.FdChildren.Add(Shape51);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Transform50);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(Group24);
{ the model that is being reviewed by the users of this scene }
Transform55 := TTransformNode.Create;;
{ <Inline DEF="Flower" url='"bumpyfreewrl.x3d"' /> }
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background56 := TBackgroundNode.Create;;
Background56.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background56.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background56.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background56.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background56.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background56.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Transform55.FdChildren.Add(Background56);
end;

procedure InitbumpyfreewrlslidersPart4;
begin

Transform57 := TTransformNode.Create;;
Shape58 := TShapeNode.Create;;
Sphere59 := TSphereNode.Create;;
Sphere59.Radius := 5;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape58.Geometry := Sphere59;
{ <IndexedFaceSet convex="false" DEF="Orbit" creaseAngle="0"> }
{ <Coordinate DEF="OrbitCoordinates"/> }
{ </IndexedFaceSet> }
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
ImageTexture68 := TImageTextureNode.Create;;
ImageTexture68.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
end;

procedure InitbumpyfreewrlslidersPart5;
begin

{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture62.FdTopTexture.Set(ImageTexture68);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance60.Texture := ComposedCubeMapTexture62;
ComposedShader69 := TComposedShaderNode.Create;;
ComposedShader69.Language := 'GLSL';
SFInt3270 := TSFInt32.CreateUndefined(ComposedShader69, false, 'fw_textureCoordGenType');
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
ShaderPart81 := TShaderPartNode.Create;;
end;

procedure InitbumpyfreewrlslidersPart6;
begin

ShaderPart81.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader69.Parts := ShaderPart81;
ShaderPart83 := TShaderPartNode.Create;;
ShaderPart83.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader69.Parts := ShaderPart83;
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
{ METHOD.SET .Appearance }
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
DISEntityManager85 := TDISEntityManagerNode.Create;;
DISEntityTypeMapping86 := TDISEntityTypeMappingNode.Create;;
DISEntityTypeMapping86.Category := 77;
DISEntityTypeMapping86.Specific := 1;
DISEntityTypeMapping86.SetUrl(['../data/Leif8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager85.FdChildren.Add(DISEntityTypeMapping86);
DISEntityTypeMapping87 := TDISEntityTypeMappingNode.Create;;
DISEntityTypeMapping87.Category := 77;
DISEntityTypeMapping87.Specific := 2;
DISEntityTypeMapping87.SetUrl(['../data/Lily8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager85.FdChildren.Add(DISEntityTypeMapping87);
DISEntityTypeMapping88 := TDISEntityTypeMappingNode.Create;;
DISEntityTypeMapping88.Category := 77;
DISEntityTypeMapping88.Specific := 3;
DISEntityTypeMapping88.SetUrl(['../data/Tufani8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager85.FdChildren.Add(DISEntityTypeMapping88);
DISEntityTypeMapping89 := TDISEntityTypeMappingNode.Create;;
DISEntityTypeMapping89.Category := 77;
DISEntityTypeMapping89.Specific := 4;
DISEntityTypeMapping89.SetUrl(['../data/Gramps8Final.x3d','https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d']);
{ METHOD .FdChildren.Add }
DISEntityManager85.FdChildren.Add(DISEntityTypeMapping89);
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(DISEntityManager85);
Collision90 := TCollisionNode.Create;;
end;

procedure InitbumpyfreewrlslidersPart7;
begin

Group91 := TGroupNode.Create;;
{ METHOD .Proxy }
{ METHOD.SET .Proxy }
Collision90.Proxy := Group91;
{ METHOD .FdChildren.Add }
Layer19.FdChildren.Add(Collision90);
{ Original "EntityManager.EventAddedEntities TO AvatarHolder.addChildren }
{ Sample EntityManager.EventAddedEntities TO AvatarHolder.addChildren}
Layer19.AddRoute(DISEntityManager85.EventAddedEntities, Group91.addChildren);
{ METHOD .AddX3DROUTE }
{ Original "EntityManager.EventRemovedEntities TO AvatarHolder.removeChildren }
{ Sample EntityManager.EventRemovedEntities TO AvatarHolder.removeChildren}
Layer19.AddRoute(DISEntityManager85.EventRemovedEntities, Group91.removeChildren);
{ METHOD .AddX3DROUTE }
{ METHOD .FdLayers.Add }
LayerSet18.FdLayers.Add(Layer19);
LayoutLayer94 := TLayoutLayerNode.Create;;
LayoutLayer94.Pickable := True;
LayoutLayer94.SetObjectType(['ALL']);
{ positioning the LayoutLayer }
{ clipping the LayoutLayer }
{ the content (children) of the LayoutLayer }
{ first, the slider for scaling the model }
Transform95 := TTransformNode.Create;;
Transform95.Translation := Vector3(0,0,-3);
Shape96 := TShapeNode.Create;;
Appearance97 := TAppearanceNode.Create;;
Material98 := TMaterialNode.Create;;
Material98.DiffuseColor := Vector3(0.1,0.1,0.1);
Material98.Transparency := 1;
{ METHOD .SetMaterial }
Appearance97.Material := Material98;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape96.Appearance := Appearance97;
Box99 := TBoxNode.Create;;
Box99.Size := Vector3(100,100,0.02);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape96.Geometry := Box99;
{ METHOD .FdChildren.Add }
Transform95.FdChildren.Add(Shape96);
{ METHOD .FdChildren.Add }
LayoutLayer94.FdChildren.Add(Transform95);
Transform100 := TTransformNode.Create;;
Transform101 := TTransformNode.Create;;
Transform101.Translation := Vector3(0,0,-20);
Shape102 := TShapeNode.Create;;
Text103 := TTextNode.Create;;
Text103.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
end;

procedure InitbumpyfreewrlslidersPart8;
begin

FontStyle104 := TFontStyleNode.Create;;
FontStyle104.Size := 0.09;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text103.FontStyle := FontStyle104;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape102.Geometry := Text103;
Appearance105 := TAppearanceNode.Create;;
Material106 := TMaterialNode.Create;;
Material106.DiffuseColor := Vector3(0,1,1);
{ METHOD .SetMaterial }
Appearance105.Material := Material106;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape102.Appearance := Appearance105;
{ METHOD .FdChildren.Add }
Transform101.FdChildren.Add(Shape102);
{ METHOD .FdChildren.Add }
Transform100.FdChildren.Add(Transform101);
{ METHOD .FdChildren.Add }
LayoutLayer94.FdChildren.Add(Transform100);
X3DPrototype107 := TX3DPrototype.Create;;
X3DInterfaceDeclaration108 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f109 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration108, false, 'sliderTranslation');
SFVec3f109.Value := '0 0.7 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration108.AddSFVec3f([SFVec3f109]);
SFVec3f110 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration108, false, 'transformTranslation');
SFVec3f110.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration108.AddSFVec3f([SFVec3f110]);
SFVec3f111 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration108, false, 'sensorTranslation');
SFVec3f111.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration108.AddSFVec3f([SFVec3f111]);
SFVec3f112 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration108, false, 'numberTranslation');
SFVec3f112.Value := '0.2 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration108.AddSFVec3f([SFVec3f112]);
MFString113 := TMFString.CreateUndefined(X3DInterfaceDeclaration108, false, 'textString');
MFString113.Value := '\"a=\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration108.AddMFString([MFString113]);
SFString114 := TSFString.CreateUndefined(X3DInterfaceDeclaration108, false, 'parameterName');
SFString114.Value := 'a';
{ METHOD .AddSFString }
X3DInterfaceDeclaration108.AddSFString([SFString114]);
SFFloat115 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration108, false, 'parameterScale');
SFFloat115.Value := '30';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration108.AddSFFloat([SFFloat115]);
end;

procedure InitbumpyfreewrlslidersPart9;
begin

SFNode116 := TSFNode.CreateUndefined(X3DInterfaceDeclaration108, false, 'shaderNode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration108.AddSFNode([SFNode116]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype107.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration108]);
X3DPrototype117 := TX3DPrototype.Create;;
Group118 := TGroupNode.Create;;
Transform119 := TTransformNode.Create;;
Transform119.Translation := Vector3(0,0.7,0);
Transform121 := TTransformNode.Create;;
Transform121.Translation := Vector3(0,0,0.1);
PlaneSensor123 := TPlaneSensorNode.Create;;
PlaneSensor123.MaxPosition := Vector2(2,0);
{ METHOD .FdChildren.Add }
Transform121.FdChildren.Add(PlaneSensor123);
Transform124 := TTransformNode.Create;;
Transform124.Translation := Vector3(0,0,0);
TouchSensor125 := TTouchSensorNode.Create;;
{ METHOD .FdChildren.Add }
Transform124.FdChildren.Add(TouchSensor125);
{ METHOD .FdChildren.Add }
Transform121.FdChildren.Add(Transform124);
Transform126 := TTransformNode.Create;;
Shape127 := TShapeNode.Create;;
Text128 := TTextNode.Create;;
Text128.SetText(['a=']);
FontStyle130 := TFontStyleNode.Create;;
FontStyle130.Size := 0.2;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text128.FontStyle := FontStyle130;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape127.Geometry := Text128;
Appearance131 := TAppearanceNode.Create;;
Material132 := TMaterialNode.Create;;
end;

procedure InitbumpyfreewrlslidersPart10;
begin

Material132.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance131.Material := Material132;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape127.Appearance := Appearance131;
{ METHOD .FdChildren.Add }
Transform126.FdChildren.Add(Shape127);
Transform133 := TTransformNode.Create;;
Shape135 := TShapeNode.Create;;
Text136 := TTextNode.Create;;
Text136.SetText(['0']);
FontStyle137 := TFontStyleNode.Create;;
FontStyle137.Size := 0.2;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text136.FontStyle := FontStyle137;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape135.Geometry := Text136;
Appearance138 := TAppearanceNode.Create;;
Material139 := TMaterialNode.Create;;
Material139.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance138.Material := Material139;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape135.Appearance := Appearance138;
{ METHOD .FdChildren.Add }
Transform133.FdChildren.Add(Shape135);
{ METHOD .FdChildren.Add }
Transform126.FdChildren.Add(Transform133);
{ METHOD .FdChildren.Add }
Transform121.FdChildren.Add(Transform126);
{ METHOD .FdChildren.Add }
Transform119.FdChildren.Add(Transform121);
{ METHOD .FdChildren.Add }
Group118.FdChildren.Add(Transform119);
Script140 := TScriptNode.Create;;
Script140.DirectOutput := True;
Script140.MustEvaluate := True;
SFFloat141 := TSFFloat.CreateUndefined(Script140, false, 'protoScale');
SFFloat141.Value := '30';
{ METHOD .Fd.AddCustomField }
Script140.AddCustomField(SFFloat141);
SFNode142 := TSFNode.CreateUndefined(Script140, false, 'shader');
{ METHOD .Fd.AddCustomField }
Script140.AddCustomField(SFNode142);
SFVec3f143 := TSFVec3f.CreateUndefined(Script140, false, 'newTranslation');
SFVec3f143.Value := '1 1 1';
{ METHOD .Fd.AddCustomField }
Script140.AddCustomField(SFVec3f143);
end;

procedure InitbumpyfreewrlslidersPart11;
begin

SFFloat144 := TSFFloat.CreateUndefined(Script140, false, 'protoValue_changed');
SFFloat144.Value := '1';
{ METHOD .Fd.AddCustomField }
Script140.AddCustomField(SFFloat144);
MFString145 := TMFString.CreateUndefined(Script140, false, 'protoNumber_changed');
MFString145.Value := '\"0.0\"';
{ METHOD .Fd.AddCustomField }
Script140.AddCustomField(MFString145);
SFString146 := TSFString.CreateUndefined(Script140, false, 'protoParameterName');
SFString146.Value := 'a';
{ METHOD .Fd.AddCustomField }
Script140.AddCustomField(SFString146);

Script140.SetSourceCode('''ecmascript:\n"+
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
Group118.FdChildren.Add(Script140);
{ Original "protoSensor.EventTranslation_changed TO protoTransform.FdTranslation.EventIn }
{ Sample protoSensor.EventTranslation_changed TO protoTransform.FdTranslation.EventIn}
Group118.AddRoute(PlaneSensor123.EventTranslation_changed, Transform121.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation }
{ Sample protoSensor.EventTranslation_changed TO protoValueTransformerScript.newTranslation}
Group118.AddRoute(PlaneSensor123.EventTranslation_changed, SFVec3f143);
{ METHOD .AddX3DROUTE }
{ Original "protoValueTransformerScript.EventProtoNumber_changed TO protoNumber.string }
{ Sample protoValueTransformerScript.EventProtoNumber_changed TO protoNumber.string}
Group118.AddRoute(Script140.EventProtoNumber_changed, Text136.string);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype117.AddChildren([Group118]);
{ METHOD .AddX3DPrototype }
X3DPrototype107.AddX3DPrototype([X3DPrototype117]);
{ METHOD .AddX3DPrototype }
LayoutLayer94.AddX3DPrototype([X3DPrototype107]);
X3DPrototype151 := TX3DPrototypeNode;
SFVec3f152 := TSFVec3f.CreateUndefined(X3DPrototype151, false, 'sliderTranslation');
SFVec3f152.Value := '0 0.7 0';
{ METHOD .AddSFVec3f }
X3DPrototype151.AddSFVec3f([SFVec3f152]);
SFVec3f153 := TSFVec3f.CreateUndefined(X3DPrototype151, false, 'transformTranslation');
SFVec3f153.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype151.AddSFVec3f([SFVec3f153]);
SFVec3f154 := TSFVec3f.CreateUndefined(X3DPrototype151, false, 'sensorTranslation');
SFVec3f154.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype151.AddSFVec3f([SFVec3f154]);
SFVec3f155 := TSFVec3f.CreateUndefined(X3DPrototype151, false, 'numberTranslation');
SFVec3f155.Value := '0.3 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype151.AddSFVec3f([SFVec3f155]);
MFString156 := TMFString.CreateUndefined(X3DPrototype151, false, 'textString');
MFString156.Value := '\"a=\"';
{ METHOD .AddMFString }
X3DPrototype151.AddMFString([MFString156]);
SFString157 := TSFString.CreateUndefined(X3DPrototype151, false, 'parameterName');
SFString157.Value := 'a';
{ METHOD .AddSFString }
X3DPrototype151.AddSFString([SFString157]);
SFFloat158 := TSFFloat.CreateUndefined(X3DPrototype151, false, 'parameterScale');
SFFloat158.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype151.AddSFFloat([SFFloat158]);
SFNode159 := TSFNode.CreateUndefined(X3DPrototype151, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode159.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype151.AddSFNode([SFNode159]);
{ METHOD .AddX3DPrototype }
LayoutLayer94.AddX3DPrototype([X3DPrototype151]);
X3DPrototype161 := TX3DPrototypeNode;
SFVec3f162 := TSFVec3f.CreateUndefined(X3DPrototype161, false, 'sliderTranslation');
SFVec3f162.Value := '0 0.4 0';
{ METHOD .AddSFVec3f }
X3DPrototype161.AddSFVec3f([SFVec3f162]);
SFVec3f163 := TSFVec3f.CreateUndefined(X3DPrototype161, false, 'transformTranslation');
SFVec3f163.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype161.AddSFVec3f([SFVec3f163]);
SFVec3f164 := TSFVec3f.CreateUndefined(X3DPrototype161, false, 'sensorTranslation');
SFVec3f164.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype161.AddSFVec3f([SFVec3f164]);
SFVec3f165 := TSFVec3f.CreateUndefined(X3DPrototype161, false, 'numberTranslation');
SFVec3f165.Value := '0.3 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype161.AddSFVec3f([SFVec3f165]);
MFString166 := TMFString.CreateUndefined(X3DPrototype161, false, 'textString');
MFString166.Value := '\"b=\"';
{ METHOD .AddMFString }
X3DPrototype161.AddMFString([MFString166]);
SFString167 := TSFString.CreateUndefined(X3DPrototype161, false, 'parameterName');
SFString167.Value := 'b';
{ METHOD .AddSFString }
X3DPrototype161.AddSFString([SFString167]);
SFFloat168 := TSFFloat.CreateUndefined(X3DPrototype161, false, 'parameterScale');
SFFloat168.Value := '30';
{ METHOD .AddSFFloat }
X3DPrototype161.AddSFFloat([SFFloat168]);
SFNode169 := TSFNode.CreateUndefined(X3DPrototype161, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode169.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype161.AddSFNode([SFNode169]);
{ METHOD .AddX3DPrototype }
LayoutLayer94.AddX3DPrototype([X3DPrototype161]);
X3DPrototype171 := TX3DPrototypeNode;
SFVec3f172 := TSFVec3f.CreateUndefined(X3DPrototype171, false, 'sliderTranslation');
SFVec3f172.Value := '0 0.1 0';
{ METHOD .AddSFVec3f }
X3DPrototype171.AddSFVec3f([SFVec3f172]);
SFVec3f173 := TSFVec3f.CreateUndefined(X3DPrototype171, false, 'transformTranslation');
SFVec3f173.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype171.AddSFVec3f([SFVec3f173]);
SFVec3f174 := TSFVec3f.CreateUndefined(X3DPrototype171, false, 'sensorTranslation');
SFVec3f174.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype171.AddSFVec3f([SFVec3f174]);
SFVec3f175 := TSFVec3f.CreateUndefined(X3DPrototype171, false, 'numberTranslation');
SFVec3f175.Value := '0.3 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype171.AddSFVec3f([SFVec3f175]);
MFString176 := TMFString.CreateUndefined(X3DPrototype171, false, 'textString');
MFString176.Value := '\"c=\"';
{ METHOD .AddMFString }
X3DPrototype171.AddMFString([MFString176]);
SFString177 := TSFString.CreateUndefined(X3DPrototype171, false, 'parameterName');
SFString177.Value := 'c';
{ METHOD .AddSFString }
X3DPrototype171.AddSFString([SFString177]);
SFFloat178 := TSFFloat.CreateUndefined(X3DPrototype171, false, 'parameterScale');
SFFloat178.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype171.AddSFFloat([SFFloat178]);
SFNode179 := TSFNode.CreateUndefined(X3DPrototype171, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode179.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype171.AddSFNode([SFNode179]);
{ METHOD .AddX3DPrototype }
LayoutLayer94.AddX3DPrototype([X3DPrototype171]);
X3DPrototype181 := TX3DPrototypeNode;
SFVec3f182 := TSFVec3f.CreateUndefined(X3DPrototype181, false, 'sliderTranslation');
SFVec3f182.Value := '0 -0.2 0';
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
SFVec3f185 := TSFVec3f.CreateUndefined(X3DPrototype181, false, 'numberTranslation');
SFVec3f185.Value := '0.3 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype181.AddSFVec3f([SFVec3f185]);
MFString186 := TMFString.CreateUndefined(X3DPrototype181, false, 'textString');
MFString186.Value := '\"d=\"';
{ METHOD .AddMFString }
X3DPrototype181.AddMFString([MFString186]);
SFString187 := TSFString.CreateUndefined(X3DPrototype181, false, 'parameterName');
SFString187.Value := 'd';
{ METHOD .AddSFString }
X3DPrototype181.AddSFString([SFString187]);
SFFloat188 := TSFFloat.CreateUndefined(X3DPrototype181, false, 'parameterScale');
SFFloat188.Value := '20';
{ METHOD .AddSFFloat }
X3DPrototype181.AddSFFloat([SFFloat188]);
SFNode189 := TSFNode.CreateUndefined(X3DPrototype181, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode189.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype181.AddSFNode([SFNode189]);
{ METHOD .AddX3DPrototype }
LayoutLayer94.AddX3DPrototype([X3DPrototype181]);
X3DPrototype191 := TX3DPrototypeNode;
SFVec3f192 := TSFVec3f.CreateUndefined(X3DPrototype191, false, 'sliderTranslation');
SFVec3f192.Value := '0 -0.5 0';
{ METHOD .AddSFVec3f }
X3DPrototype191.AddSFVec3f([SFVec3f192]);
SFVec3f193 := TSFVec3f.CreateUndefined(X3DPrototype191, false, 'transformTranslation');
SFVec3f193.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype191.AddSFVec3f([SFVec3f193]);
SFVec3f194 := TSFVec3f.CreateUndefined(X3DPrototype191, false, 'sensorTranslation');
SFVec3f194.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype191.AddSFVec3f([SFVec3f194]);
SFVec3f195 := TSFVec3f.CreateUndefined(X3DPrototype191, false, 'numberTranslation');
SFVec3f195.Value := '0.8 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype191.AddSFVec3f([SFVec3f195]);
MFString196 := TMFString.CreateUndefined(X3DPrototype191, false, 'textString');
MFString196.Value := '\"tdelta=\"';
{ METHOD .AddMFString }
X3DPrototype191.AddMFString([MFString196]);
SFString197 := TSFString.CreateUndefined(X3DPrototype191, false, 'parameterName');
SFString197.Value := 'tdelta';
{ METHOD .AddSFString }
X3DPrototype191.AddSFString([SFString197]);
SFFloat198 := TSFFloat.CreateUndefined(X3DPrototype191, false, 'parameterScale');
SFFloat198.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype191.AddSFFloat([SFFloat198]);
SFNode199 := TSFNode.CreateUndefined(X3DPrototype191, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode199.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype191.AddSFNode([SFNode199]);
{ METHOD .AddX3DPrototype }
LayoutLayer94.AddX3DPrototype([X3DPrototype191]);
X3DPrototype201 := TX3DPrototypeNode;
SFVec3f202 := TSFVec3f.CreateUndefined(X3DPrototype201, false, 'sliderTranslation');
SFVec3f202.Value := '0 -0.8 0';
{ METHOD .AddSFVec3f }
X3DPrototype201.AddSFVec3f([SFVec3f202]);
SFVec3f203 := TSFVec3f.CreateUndefined(X3DPrototype201, false, 'transformTranslation');
SFVec3f203.Value := '0 0 0.1';
{ METHOD .AddSFVec3f }
X3DPrototype201.AddSFVec3f([SFVec3f203]);
SFVec3f204 := TSFVec3f.CreateUndefined(X3DPrototype201, false, 'sensorTranslation');
SFVec3f204.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype201.AddSFVec3f([SFVec3f204]);
SFVec3f205 := TSFVec3f.CreateUndefined(X3DPrototype201, false, 'numberTranslation');
SFVec3f205.Value := '0.8 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype201.AddSFVec3f([SFVec3f205]);
MFString206 := TMFString.CreateUndefined(X3DPrototype201, false, 'textString');
MFString206.Value := '\"pdelta=\"';
{ METHOD .AddMFString }
X3DPrototype201.AddMFString([MFString206]);
SFString207 := TSFString.CreateUndefined(X3DPrototype201, false, 'parameterName');
SFString207.Value := 'pdelta';
{ METHOD .AddSFString }
X3DPrototype201.AddSFString([SFString207]);
SFFloat208 := TSFFloat.CreateUndefined(X3DPrototype201, false, 'parameterScale');
SFFloat208.Value := '6.28';
{ METHOD .AddSFFloat }
X3DPrototype201.AddSFFloat([SFFloat208]);
SFNode209 := TSFNode.CreateUndefined(X3DPrototype201, false, 'shaderNode');
{ METHOD .AddComposedShader }
SFNode209.AddComposedShader([ComposedShader69]);
{ METHOD .AddSFNode }
X3DPrototype201.AddSFNode([SFNode209]);
{ METHOD .AddX3DPrototype }
LayoutLayer94.AddX3DPrototype([X3DPrototype201]);
Layout211 := TLayoutNode.Create;;
Layout211.SetAlign(['LEFT','BOTTOM']);
Layout211.SetOffset([-0.5,0]);
{ METHOD .SetLayout }
LayoutLayer94.Layout := Layout211;
Viewport212 := TViewportNode.Create;;
{ METHOD .Viewport }
{ METHOD.SET .Viewport }
LayoutLayer94.Viewport := Viewport212;
{ METHOD .FdLayers.Add }
LayerSet18.FdLayers.Add(LayoutLayer94);
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
InitbumpyfreewrlslidersPart11;
Result := X3D0;
end;

begin
end.
